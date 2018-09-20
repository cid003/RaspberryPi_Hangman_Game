#include "hangman.h"
//c-version of fout in c++ kinda?

void fetch_words(char filename[100], char key[100]) {

        FILE *fp;
        int num_words, storeWord;
        srand((unsigned int)time(0)); //c-specific version of srand(), compile with -s

        fp = fopen(filename, "r");
        fscanf(fp, "%d", &num_words);
        storeWord = rand() % num_words;

        for(int i = 0; i <= storeWord; i++)
           fscanf(fp, "%s", key); //order is as follows: "array, array size, file" or write fscanf(fp, "%s", key)
        fclose(fp);
}; 
