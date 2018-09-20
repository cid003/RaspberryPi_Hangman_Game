#include "hangman.h"

void print_info(int strike, char word[100]) {

        printf("%s\n", word);
        printf("You have: %d guesses left", 7-strike);
};
