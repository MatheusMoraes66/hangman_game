#include "../includes/game.h"
#include <stdio.h>
#include <string.h>

char secretWord[30], letter, hangmanDisplay[MAX_LENGTH];
int indicator = 0;

void run(int *youWon, int *errors) {

  drawingGallows(*errors);
  drawingLetter(hangmanDisplay);
  receivesValue();
  checketGameStatus(errors, youWon);
}

void initializeVariables() {
  readWordRandomic(secretWord);

  for (int i = 0; i < strlen(secretWord); i++) {
    hangmanDisplay[i] = '-';
  }
}

void receivesValue() {
  printf("\n> ");
  scanf(" %c", &letter);

  indicator++;
}

void addNewSecretWord() {
  char choice;
  drawingInputQuestion("Você deseja adicionar uma nova palavra ao Jogo?");
  scanf(" %c", &choice);

  if (choice == 'S') {
    char newWord[MAX_LENGTH];

    drawingInputQuestion("Digite a nova palavra:");
    scanf(" %s", newWord);

    writeNewWord(newWord);
  }
}

int validateIfLetterExist(char secretLetter, char choiceLetter) {
  if (secretLetter == choiceLetter) {
    return 1;
  }
  return 0;
}

void checketGameStatus(int *errors, int *youWon) {
  int hits = hitsExist();
  if (hits == 0) {
    (*errors)++;
  }
  int won = validWon();
  if (won == 0) {
    (*youWon)++;
  }
}

int hitsExist() {
  int countHit = 0;
  for (int i = 0; i < strlen(secretWord); i++) {
    if (letter) {
      if (validateIfLetterExist(secretWord[i], letter)) {
        countHit++;
        hangmanDisplay[i] = secretWord[i];
      }
    }
  }
  return countHit;
}

int validWon() {
  int count = 0;
  for (int i = 0; i < strlen(hangmanDisplay); i++) {
    if (hangmanDisplay[i] == '-') {
      count++;
    }
  }
  return count;
}
