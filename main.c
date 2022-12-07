#include <stdio.h>
#include <math.h>
#include "my_mat.h"

int main()
{
    float i,j;
    float arr [10][10]={};
    char ans='D';

    //printf("please enter a char (A-D)");
    scanf("%c", &ans);
    
    while(ans!='D')
    {
        if(ans=='A')
        {
        //printf("please enter the values of the matrix");
       
        matrix(&arr[0][0]);
            
        }

        if(ans=='B')
        {
        //printf("please enter i and j");
        scanf("%f %f", &i, &j);
       
        int response=is_exists(i,j,arr);
        if(response==1)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
        
           
        }
        
        if(ans=='C')
        {
            //printf("please enter i and j");
            scanf("%f %f", &i, &j);

        float response=short_path(i,j,arr);
        printf("%f", response);

        }

        //printf("please enter a char (A-D)");
        scanf("%c", &ans);
        

    }

  
    return 0;
}