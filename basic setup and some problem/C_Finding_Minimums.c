#include<stdio.h>
#include<limits.h>
int main()
{
    int n, k;
    scanf("%d %d",&n,&k);
    int ar[n];
    int min=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for (int i = 0; i < n; i++)
    {

        if (min>ar[i])
        {      min= ar[i];       
            
        }
        
    }
    
    
    printf("%d ",min);
    
    return 0;
}