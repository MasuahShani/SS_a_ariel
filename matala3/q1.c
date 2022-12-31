#include <stdio.h>

#define size 50

int shift_element(int* arr, int i)
{
    if(arr==NULL)
    {
        return 0;
    }
    for(int j=i; j>0; j--)
    {
       *(arr+j)=*(arr+j-1);
    }
    return 0;
}





void insert_sort(int * arr, int len)
{
     if(arr==NULL)
    {
        return;
    }
    for(int i=1;i<(len);i++)
    {
        int j=i-1;
        int count=0;
        int min=*(arr+j);
        int max= *(arr+i);
        while(min>max && count<=i && j>=0)
        {
            count++;
            j--;
            min=*(arr+j);
            max= *(arr+i);
        }
        
        int temp=*(arr+i);

        shift_element((arr+i-count),count);
        *(arr+i-count)=temp;

    }

}

int main()
{
    int len=size;
    int arr[len]=0;
    memset(arr,0,len);

    for(int i=0; i<(len);i++)
    {
        scanf("%d", (arr+i));
    }
    insert_sort(arr,len);
    
    int* index=arr;
    for(int i=0; i<(len)-1;i++)
    {
        printf("%d,",*(index++));
    }
    printf("%d",*(index++));


    return 0;
}