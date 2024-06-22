
#include <stdio.h>
#include <stdlib.h>

#include "utils/file.c"
#include "utils/freqTable.c"    


//* debug tools
// printf("\tdebug\t aux->let = %c == %c \n", aux->let, ch); //! DEBUG

int main(int argc, char **argv) {
    //* var delcarations
    FILE *read_f;
    FreqNode **root_freq;
    (*root_freq) = NULL;
    char ch;
    
    //* read files

    read_f = fopen(getReadName(argv), "r");
    //todo debug only
    // read_f = fopen("./files/testText", "r");


    if (NULL == read_f) {
        printf("ERROR\tfile couldnot opened!\naborting...");
        return EXIT_FAILURE;
    }


    //* frequency table
    for (ch = fgetc(read_f); EOF != ch; ch = fgetc(read_f)) {
        insertFreqNode(root_freq, ch);
    }
    balanceFreqTable(root_freq);

    //todo debug only
    printFreqTable(root_freq);
    // printf("\t\t chegou aqui \t\t");
    

    //* frequency tree


    //* write encrypted file

    //* decrypt encrypted file

    //* write decrypted file

    return EXIT_SUCCESS;
};