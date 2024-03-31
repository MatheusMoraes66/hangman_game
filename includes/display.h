#ifndef DISPLAY_H
#define DISPLAY_H

#include "defines.h"

void drawingGallows(int errors);
void drawingWelcome();
void drawingWinner();
void drawingLoser();
void drawingInputQuestion(char question[MAX_LENGTH]);
void drawingLetter(char word[MIN_LENGTH]);

#endif
