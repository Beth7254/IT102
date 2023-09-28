#include<stdio.h>
#include<conio.h>

int main()
{
    int ai=0, aj=0;
    int bi=0, bj=0 , bn=5;
    int i, j, rows=5, k;
    int di=0, dj=0,dn=0;

    printf("Pattern #1: \n");
    for(ai=1; ai<=5; ai++)
    {
        for(aj=1; aj<=5; aj++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("Pattern #2: \n");
    for(bi=1; bi<=bn; bi++)
    {
        for(bj=bn; bj>=1; bj--)
        {
            if (bi>=bj)
            {
                printf(" *");
                
            }
            else
                printf("  ");
        }
        printf("\n");
    }

    printf("Pattern #3: \n");

    for (i = 1; i <= rows; i++)   
    {  
        for (j = 1; j <= i; j++)   
        {  
            printf("  ");   
        }  
        for (k = i; k <= rows; k++)  
        {  
            printf(" *"); // print the Star  
        }  
        printf ("\n");   
    }
    
     printf("Pattern #4: \n");
    for(bi=1; bi<=bn; bi++)
    {
        for(bj=bn; bj>=1; bj--)
        {
            if (bi>=bj)
            {
                printf(" *");
                
            }
            else
                printf(" ");
        }
        printf("\n");
    }



  int getchar();
  return 0;
   
}