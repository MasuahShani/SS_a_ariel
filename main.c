#include <stdio.h>
#include "NumClass.h"


int main()
{
int x;
int y;
scanf("please give me 2 integers: %d %d",&x,&y);
if(x<y)
{
    int temp=x;
    x=y;
    y=temp;
}
int  arrAmstrong [y-x+1], countA=0;
int  arrPalindrom [y-x+1], countPa=0;
int  arrPrime [y-x+1], countPr=0;
int  arrStrong [y-x+1], countS=0;

for(int i=0; i<=(x-y);i++)
{
    if(isArmstrong(y+i)==1)
    {
       arrAmstrong[countA++]=(y+i);
    }
    if(isPalindrom(y+i)==1)
    {
        arrPalindrom[countPa++]=(y+i);
    }
    if(isPrime(y+i)==1)
    {
        arrPrime[countPr++]=(y+i);
    }
    if(isStrong(y+i)==1)
    {
        arrStrong[countS]=(y+i);
    }
    
}

printf("The Armstrong numbers are:");
for(int i=0; i<countA; i++)
{
    printf(" %d ",arrAmstrong[i] );
}
printf("/n");

printf("The Palindromers are:");
for(int i=0; i<countPa; i++)
{
    printf(" %d ",arrPalindrom[i] );
}
printf("/n");

printf("The Prime numbers are:");
for(int i=0; i<countPr; i++)
{
    printf(" %d ",arrPrime[i] );
}
printf("/n");

printf("The Strong numbers are:");
for(int i=0; i<countS; i++)
{
    printf(" %d ",arrStrong[i] );
}


return 0;

}
