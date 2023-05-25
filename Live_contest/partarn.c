#include <stdio.h>
#include<limits.h>
int main()
{
   int n;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
        for(int j=0;j<n;j++)
        {
            if (n==1)
            {
                printf("#");
            }

            else if (i==(n-1)/2)
            {
                printf("#");
            }
            else if (j==(n-1)/2)
            {
                printf("#");
            }
            else
            {
                printf("*");
            }
            
            
            
        }
        printf("\n");
   }
     
    return 0;
}