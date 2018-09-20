#include "hangman.h"
#include <wiringPi.h>

int main(int argc, char *argv[]) {

        char key[100], guess_word[100] = ""; //empty string
        int strike = 0; //if strike = 7, game over
        char user_guess;

        if(argc == 1)
        {
          fetch_words("dict.txt", key); //take in .txt file
        }
        else
           {
              fetch_words(argv[1], key);
           }

        strcpy(guess_word, key);
        for(int i = 0; i < strlen(key); i++)
            guess_word[i] = '_';

        printf("The word you're guessing has %d letters", strlen(key));

        while(!gameOver(strike, guess_word, key))
        {
           print_info(strike, guess_word);
           fetch_userGuess(&user_guess);
           check_guess(user_guess, &strike, guess_word, key);
        }

        if(gameOver(strike, guess_word, key))
          printf("\nThe correct word was %s\n", key);
}


