#include <stdio.h>
#include "NumClass.h"

int isPrime (int num)
{
    if(num<1) //1 is prime 
    {
        return 0;
    }
    
    int x=2;
    while (x<num)
    {
        if((num%x)==0)
        {
            return 0;

        }
        x++;

    }
    return 1;
}

int isStrong(int num)
{
    if(num<=0)
    {
        return 0;
    }
    int temp=num;
    float sum=0;
    while(temp>0)
    {
       int f=temp%10;
       int ans=1;
        while(f>0)
        {
            ans*=f--;

        }
        sum+=ans;
        temp=temp/10;

    }
    if(sum==num)
    {
        return 1;
    }
    return 0;


}