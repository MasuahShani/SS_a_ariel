#define WORD 30
#define LINE 256

#ifndef lib_mat3
    #define lib_mat3 

    int getWord(char w[WORD]);
    int getLine(char s[LINE]);
    int similiar(  char * str2,char * str1, int n);
    int substring(char * str2, char * str1);
    void print_lines(char * str);
    void print_similiar_word(char * str);


#endif