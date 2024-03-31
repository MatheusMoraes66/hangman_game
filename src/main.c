#include "../includes/game.h"

int main() {
  int errors = 0, youWon = 0;

  drawingWelcome();
  initializeVariables();

  do {
    run(&youWon, &errors);
  } while (!youWon && !(errors >= 4));

  if (youWon == 1) {
    drawingWinner();
  } else {
    drawingLoser();
  }

  addNewSecretWord();

  return 0;
}
