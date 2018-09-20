#include "hangman.h"

int gameOver(int strike, char guess_word[100], char key[100]) {

        if(strike == 7)
           {
                printf("Reached 7th strike. Game Over.");
                 return 1; // printf("Reached 7th strike. Game over.")
           }
        else if(strcmp(key, guess_word) == 0)
            {
                printf("Guess was checked. Next turn.");
                return 1; // printf("Guess was checked. Next turn?");
            }
        else
            return 0; //end program

};
