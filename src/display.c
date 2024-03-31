#include "../includes/display.h"
#include <stdio.h>
#include <string.h>

void drawingGallows(int errors) {
  printf("   ________           \n");
  printf("  |/      |           \n");
  printf("  |      %s%s%s          \n", (errors >= 1 ? "(" : ""),
         (errors >= 1 ? "-" : ""), (errors >= 1 ? ")" : ""));
  printf("  |     %s %s %s         \n", (errors >= 3 ? "\\" : " "),
         (errors >= 2 ? "|" : ""), (errors >= 3 ? "/" : ""));
  printf("  |       %s           \n", (errors >= 2 ? "|" : ""));
  printf("  |      %s %s         \n", (errors >= 4 ? "/" : ""),
         (errors >= 4 ? "\\" : ""));
  printf("  |                   \n");
  printf(" _|___                \n");
}

void drawingWelcome() {
  printf("\n");
  printf("+--------------------------------------------------------------+ \n");
  printf("|    .------------.                                            | \n");
  printf("|    |.-----------.|                                           | \n");
  printf("|    ||>run#      ||                                           | \n");
  printf("|    ||           ||                 BEM VINDO                 | \n");
  printf("|    |\"-----------'|              [JOGO DA FORCA]              | "
         "\n");
  printf("|  .-^-------------^-.                                         | \n");
  printf("|  | ---~ KEYTECH ~--|                                         | \n");
  printf(
      "|  \"-----------------'                                         | \n");
  printf("+--------------------------------------------------------------+ \n");
  printf("\n");
}

void drawingWinner() {
  printf(
      "   _______                                                        \n");
  printf(
      "  |       |                                                       \n");
  printf(
      " (|  WIN  |)                     PARABENS                         \n");
  printf(
      "  |       |                     VOCE GANHOU                       \n");
  printf(
      "   \\     /                                                       \n");
  printf(
      "    `---'                                                         \n");
  printf(
      "    _|_|_                                                         \n");
}

void drawingLoser() {
  printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣫⡻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n");
  printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⣿⣿⣮⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n");
  printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣾⣿⣿⣿⣷⡿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n");
  printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢟⣽⣿⣿⣿⣿⣿⣿⡽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n");
  printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣵⣿⣿⣿⣿⣿⣿⣿⣿⣿⣮⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n");
  printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡿⣿⣿⣿⣿⣿⣿⣿⣿\n");
  printf("⣿⣿⣿⣿⣿⣿⣿⣿⡿⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡽⣿⣿⣿⣿⣿⣿⣿\n");
  printf("⣿⣿⣿⣿⣿⣿⣿⣿⣹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡽⣿⣿⣿⣿⣿⣿\n");
  printf("⣿⣿⣿⣿⣿⣿⣿⢧⣿⣿⣿⣿⠿⠿⣿⣿⣿⠿⠿⠿⠿⠿⠿⠿⠿⠛⠻⣿⣿⣿⣿⣿\n");
  printf("⣿⣿⣿⣿⣿⣿⠟⡅⠀⠀⠀⠀⣀⣀⣀⣀⣀⡈⠢⡀⠀⠀⠀⣀⣀⣀⣀⣈⡻⣿⣿⣿\n");
  printf("⣿⣿⣿⣿⡿⠁⠈⠀⠀⠀⠘⠻⣿⡿⠛⡍⠉⠙⣿⡆⣒⣈⣥⣤⣶⢖⠒⢲⣶⣽⣿⣿\n");
  printf("⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⠂⠀⠁⣨⠜⠿⠿⣿⣿⠁⠀⠰⠀⢋⣾⣿⣿\n");
  printf("⣿⣿⣿⡿⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⠉⠩⠝⠊⠀⢀⣀⣀⣀⣐⣒⣒⣁⣿⣿⣿⣿\n");
  printf("⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⢠⣾⣛⣓⠲⠖⠒⠋⢉⣉⠩⠥⢐⣶⣽⣷⣿⣿⣿⣿\n");
  printf("⣿⣿⣿⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠉⠁⠀⠀⠀⠀⠀⢀⣴⣿⣿⣿⣿⣿⣿⣿\n");
  printf("⣿⣿⣿⣿⣷⣔⠤⣤⣄⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⠤⣔⣴⣶⣝⢿⣿⣿⣿⣿⣿⣿⣿\n");
  printf("⣿⡿⣵⣿⣿⣿⣿⣶⣯⣭⣭⣽⣿⣿⣯⣭⣭⣽⣶⣿⣿⣿⣿⣿⣷⢻⣿⣿⣿⣿⣿⣿\n");
  printf("⡟⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⣿⣿⣿⣿⣿⣿\n");
  printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿VOCE PERDEU⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n");
}

void drawingInputQuestion(char question[MAX_LENGTH]) {
  int question_length = strlen(question);
  int padding_length = 50 - question_length;

  printf("+--------------------------------------------------------------+\n");
  printf("| %s", question);
  for (int i = 0; i < padding_length; i++) {
    printf(" ");
  }
  printf(" (S/N) |\n");
  printf("+--------------------------------------------------------------+\n");
  printf("> ");
}

void drawingLetter(char word[MIN_LENGTH]) {
  for (int index = 0; index < strlen(word); index++) {
    printf(" %c ", word[index]);
  }
}
