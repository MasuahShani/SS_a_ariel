#include <stdio.h>
#include "NumClass.h"

int isPalindromeInside(int num, int size)
{
    if(num==0 || size==1)
    {
        return 1;
    }

    if((num/size)==num%10)
    {
        int newNum=num-((num/size)*size)-(num%10);
        newNum=newNum/10;
        return isPalindromeInside(newNum,size/100);
    }
    return 0;
    

}
int isPalindrome(int num)
{
    if(num<0)
    {
        return 0;
    }
    int size=1;
    int temp=num;
    temp=temp/10;
    while(temp>0)
    {
        size*=10;
        temp=temp/10;

    }
    return isPalindromeInside(num,size);
    
}



int isArmstrongInside(int num, int size )
{
    if(num/10==0)
        {
            int temp_size=size;
            int ans_num=1;
            while (temp_size>0)
            {
                ans_num=ans_num*num;
                temp_size--;
            }
            return ans_num ;
        }
        int temp_size=size;
        int ans_num=1;
        while (temp_size>0)
        {
            ans_num=ans_num*(num%10);
            temp_size--;
        }

        return ans_num+isArmstrongInside(num/10,size);
    }

int isArmstrong(int num)
{
    if(num<0)
    {
        return 0;
    }
     if (num==0)
    {
        return 1;
    }
    int size=0;
    int temp=num;
    while(temp>0)
    {
        size++;
        temp=temp/10;

    }
    if(isArmstrongInside(num,size)==num)
    {
        return 1;
    }
    return 0;
    

}

