#include "hangman.h"

void check_guess(char user_guess, int *strike, char guess_word[100], char key[100]) {

        int found = 0; //local var, count for finding same char values

        for(int i = 0; i < strlen(key); i++) //key = "cat \0", returns 3 instread of key'$
        {
          if(user_guess == key[i])
            {
                guess_word[i] = user_guess; //flip something here?
                found = found + 1;
            }
        }

        if(found == 0) //if no similar values were found
        {
          (*strike)++; //increment strike count, different from *strike++
           led();
        }
};
