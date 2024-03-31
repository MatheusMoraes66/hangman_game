#include "../includes/read_write_files.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void writeNewWord(char newWord[MAX_LENGTH]) {
  FILE *file;
  printf("1");
  file = fopen("./input/words.txt", "r+");
  printf("2");
  if (file == 0) {
    printf("\n");
    printf("Desculpe mais teve algum problema na leitura no arquivo de "
           "palavras.");
    exit(1);
  }

  int qtdWords;
  fscanf(file, "%d", &qtdWords);
  qtdWords++;

  fseek(file, 0, SEEK_SET);
  fprintf(file, "%d", qtdWords);

  fseek(file, 0, SEEK_END);
  fprintf(file, "%s", newWord);

  fclose(file);
  printf("Fim");
}

void readWordRandomic(char secretWord[MAX_LENGTH]) {
  FILE *file;

  file = fopen("./input/words.txt", "r");

  if (file == 0) {
    printf("O Arquivo de Palavras não está no diretorio.");
    exit(1);
  }

  int qtdWords;
  fscanf(file, "%d", &qtdWords);

  srand(time(0));
  int randon = rand() % qtdWords;

  for (int i = 0; i <= randon; i++) {
    fscanf(file, "%s", secretWord);
  }

  fclose(file);
}
