#ifndef GAME_H
#define GAME_H

#include "defines.h"
#include "display.h"
#include "read_write_files.h"

void run(int *youWon, int *errors);
void initializeVariables();
void receivesValue();
void addNewSecretWord();
int validateIfLetterExist(char secretLetter, char choiceLetter);
void checketGameStatus(int *errors, int *youWon);
int hitsExist();
int validWon();

#endif
