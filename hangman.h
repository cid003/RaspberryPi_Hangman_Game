#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <signal.h>
#include <ctype.h>
#include <wiringPi.h>

void fetch_words(char*, char*);
int gameOver(int, char*, char*); 
void fetch_userGuess(char*);
void check_guess(char, int*, char*, char*);
void print_info(int, char*);
void led();

