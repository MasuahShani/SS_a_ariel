#include <stdio.h>
#include "NumClass.h"

int isPalindrom( int num)
{
    if(num<0)
    {
        return 0;
    }
    int temp=num;
    int count=0;
    while(temp > 0)
    {
        temp=temp/10;
        count++;
    }
    int arr[count];
    temp=num;
    for(int i=0; i<count; i++)
    {
        arr[i]=(temp%10);
        temp=temp/10;
    }
    int j=count-1;
    for(int i=0; i<(count/2); i++)
    {
        if(arr[i]!=arr[j--])
        {
            return 0;
        }
        
    }
    return 1;
    

}

int isArmstrong(int num)
{
    if(num<0)
    {
        return 0;
    }
    int temp=num;
    int count=0;
    while(temp > 0)
    {
        temp=temp/10;
        count++;
    }

    temp=num;
    int sum_ans=0;
    int sum_part=1;
    int count_temp=count;
    while (temp>0)
    {
        while(count_temp>0)
        {
            sum_part=sum_part*(temp%10);
            count_temp--;
        }
        count_temp=count;
        sum_ans+=sum_part;
        temp=temp/10;
        sum_part=1;
    }
    if(sum_ans==num)
    {
        return 1;
    }
    return 0;
    


}