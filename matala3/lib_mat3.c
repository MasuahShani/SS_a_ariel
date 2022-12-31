#include <stdio.h>
#include <string.h>
#include "lib_mat3.h"

#define WORD 30
#define LINE 256

int getWord(char w[WORD])
{
    int i=0;
    char c;
    scanf("%c",&c);
    while (c!='\t'&& c!='\n'&& c!=' ' && c!='\r' && i<WORD)
    {
        w[i++]=c;
        scanf("%c",&c);
    }
    w[i++]=0;
    return i;
}

int getLine(char s[LINE])
{
    int i=0;
    char c;
    scanf("%c",&c);
    while (c!='\n' && c!='\r' && i<LINE)
    {
        s[i++]=c;
        scanf("%c",&c);
    }
    
    return i;
}

int similiar(  char * str2,char * str1, int n)
{
    if(strlen(str1)!=strlen(str2)-n)
    {
        return 0;
    }
    int j=0;
    int index=0;
    int same=0;
    for(int i=0; i<strlen(str1);i++)
    {
        
        while(*(str2+j)!=*(str1+i) && j<strlen(str2))
        {
            j++;
            n++;

        }
        if(*(str2+j)==*(str1+i))
        {
            same++;
        }
        
        
        j++;
    
    }
    if(index<=n &&same==strlen(str1))
    {
        return 1;
    }
    
    return 0;
       
}

int substring(char * str2, char * str1)
{
    
    int i2=0;
    int count=0;
    if(!strcmp(str1,str2))
    {
        return 1;

    }

    while (count<strlen(str1) && i2<strlen(str2))
    {
        count=0;
        if(*str1==*(str2+i2))
        {
            int j1=1;
            int j2=i2+1;
            count++;
            while(*(str1+j1)==*(str2+j2)&& j1<strlen(str1))
            {
                j1++;
                j2++;
                count++;
            }
        }
        if(count==strlen(str1))
        {
            return 1;
        }
        i2++;

        
    }
    return 0;
    
}


void print_lines(char * str)
{
    int indexLine=0;
    while(indexLine<=250)
    {
    char line[LINE];
    memset(line,0,LINE);
    int lenL=getLine(line);

    int indexWord=0;
    int i=0;
    while(indexWord<lenL)
    {
        char word[WORD];
        memset(word,0,WORD);
        int count=0;
        while (line[i]!=' '&& line[i]!='\t' && line[i]!='\n' && line[i]!='\r' &&line[i]!=0)// takes word from line
        {
            word[count++]=line[i++];
        }
        word[count++]=0;
        i++;

        if(substring(word,str)==1)
        {
            
            for(int k=0;k<lenL;k++)
            {
                printf("%c",line[k]);

            }
            printf("\n");
            indexWord=lenL;
        }
        indexWord+=count;
        

        
    }
    indexLine++;

    }
    

}





void print_similiar_word(char * str)
{
    int indexWord=0;
    while(indexWord<250*(LINE/WORD))
    {
        char word[WORD];
        int lenW=getWord(word);
        if(similiar(word,str,1)|| !strcmp(word,str))
        {
            for(int k=0;k<lenW;k++)
            {
                printf("%c",word[k]);
            }
            printf("\n");
        }

        indexWord++;
    }
}



