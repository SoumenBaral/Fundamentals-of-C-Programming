#include<stdio.h>
int main()
{
    int n,a=0;
    scanf("%d",&n);
    int m=n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j< n; j++)
        {
            if (i==(n-1)/2 && j==(n-1)/2)
            {
               printf("X");
               a++;
                m--;
            }
            else if(i==a && j==m-1)
            {
                printf("/");
                m--;
                a++;

            }
            else if (i==j)
            {
                printf("\\");
            }
            
            else{

                    printf("*");

            }
        }
        printf("\n");
    }
    



    return 0;

}