#include <stdio.h>
int main ()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if (a%2==0)
      {
       if (b==a+1||b==a-1)
       {
        printf("YES");
       }
       else if(a==0)
    {
        printf("NO");

    }
        else if(a==b)
    {
        printf("YES");

    }
     else
    {
        printf("NO");
    }
     }
   else if (a%2==1)
    {
       if (b==a+1||b==a-1)
       {
        printf("YES");
       }
    else if(a==b)
    {
        printf("YES");

    }
     else
    {
        printf("NO");
    }
    
    }
   
    
    return 0;
}