#include <stdio.h>
#include <string.h>
#include "lib_mat3.h"

int main()
{
    char text[LINE];
    getLine(text);
    char str[WORD];
    int ind=0;
    while(text[ind]!=' ')
    {
        str[ind]=text[ind];
        ind++;

    }
    str[ind++]=0;
    char ans=text[ind];
    if(ans=='a')
    {
        print_lines(str);
    }
    if(ans=='b')
    {
        print_similiar_word(str);
    }






    return 0;
}