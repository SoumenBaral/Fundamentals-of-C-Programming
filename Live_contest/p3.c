#include <stdio.h>
#include<limits.h>
int main()
{
   int n;
   scanf("%d",&n);
   int ar[n];
   for(int i=0;i<n;i++)
   {
    scanf("%d",&ar[i]);

   }
   int mx= INT_MIN;
   for (int i = 0; i < n; i++)
   {
    if (mx<ar[i])
    {
        mx=ar[i];
    }
   }
   for(int i=0;i<n;i++)
   {
    printf("%d ",mx-ar[i]);

   }
   
     
    return 0;
}