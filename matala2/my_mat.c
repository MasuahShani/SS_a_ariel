#include <stdio.h>
#include <math.h>
#include "my_mat.h"

float matrix(float *addr)
{
    float *end=addr+100;
    float val;

     while(addr<end)
        {
            
            scanf("%f", & val);
            *addr=val;
            addr++;

        }
    
    return 0;

}
int is_exists(float i,float j, float arr [10][10] )
{
    if(short_path(i,j,arr)!=-1)
    {
        return 1;
    }
    return 0;

}

float min(float x, float y)
{
    if(x>y)
    {
        return y;
    }
    return x;
}

float d(float i, float j, float k, float arr[10][10] )
{
    if(k==i || k==j)
    {
        return min(arr[(int)i][(int)j], d(i,j,k-1,arr));
    }
    if(k<0)
    {
        return INFINITY;
    }
    
    
    return min(d(i,j,k-1,arr), (d(i,k,k,arr)+d(k,j,k,arr)));
}
    

float short_path(float i,float j, float arr [10][10])
{
     // For i=j=1 test 1 returned -1 therefore I understood that if there is no self arc then there is no path, (a path back and forth to another node is not considered a path).
    //therefore if there is a self arc we will return the value of the arc, otherwise we will return -1.
    if(i==j && arr[(int)i][(int)j]==0) 
    {
        return -1;
    }
   
    if(i==j && arr[(int)i][(int)j]!=0) 
    {
        return arr[(int)i][(int)j];
    }


    float new_arr[10][10] ={};
    for(int x=0; x<10; x++)
    {
        for(int y=0; y<10; y++)
        {
            if(arr[x][y]!=0)
            {
                new_arr[x][y]=arr[x][y];
            }
            else
            {
                new_arr[x][y]=INFINITY;

            }
            
        }
    }
     
    float shortest=INFINITY;
    for(float k=0; k<10; k++) // go to d func to get the min for k 
    {
        shortest= min(d(i,j,k,new_arr),shortest); // take the min of all k

    }

    if(shortest==INFINITY)
    return -1;
   
    return shortest;



}