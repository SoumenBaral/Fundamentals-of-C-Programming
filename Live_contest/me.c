#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int ar[t][1000];
    int target[t];
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d",&n);
        ar[i][0]=n;
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&ar[i][j+1]);
        }
        scanf("%d", &target[i]);

    }
     for (int i= 0; i < t; i++) {
        int N = ar[i][0];  // Size of the list
        int* numbers = ar[i] + 1;  // Values of the list
        int S = target[i];  // Number to find

        int found = 0;
        int position = -1;
        for (int i = 0; i < N; i++) {
            if (numbers[i] == S) {
                position = i + 1;  // Position is 1-based index
                found = 1;
                break;
            }
        }

        printf("Case %d: ", i+ 1);
        if (found) {
            printf("%d\n", position);
        } else {
            printf("Not Found\n");
        }
    }

    return 0;
}