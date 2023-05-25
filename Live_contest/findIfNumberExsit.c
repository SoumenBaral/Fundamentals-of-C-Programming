#include <stdio.h>

void find_number_position(int T, int numbers_list[][1000], int target[]) {
    for (int test_case = 0; test_case < T; test_case++) {
        int N = numbers_list[test_case][0];  // Size of the list
        int* numbers = numbers_list[test_case] + 1;  // Values of the list
        int S = target[test_case];  // Number to find

        int found = 0;
        int position = -1;
        for (int i = 0; i < N; i++) {
            if (numbers[i] == S) {
                position = i + 1;  // Position is 1-based index
                found = 1;
                break;
            }
        }

        printf("Case %d: ", test_case + 1);
        if (found) {
            printf("%d\n", position);
        } else {
            printf("Not Found\n");
        }
    }
}

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);

    int numbers_list[T][1000];
    int target[T];

    for (int test_case = 0; test_case < T; test_case++) {
        int N;  // Size of the list
        scanf("%d", &N);
        numbers_list[test_case][0] = N;

        for (int i = 0; i < N; i++) {
            scanf("%d", &numbers_list[test_case][i + 1]);
        }

        scanf("%d", &target[test_case]);
    }

    find_number_position(T, numbers_list, target);

    return 0;
}
