#include <stdio.h>

int main() {
    
    int A, B, C, D, E, F;

   
    printf("Enter six numbers (A, B, C, D, E, F):\n");
    scanf("%d %d %d %d %d %d", &A, &B, &C, &D, &E, &F);

    
    int numbers[6] = {A, B, C, D, E, F};
    char labels[6] = {'A', 'B', 'C', 'D', 'E', 'F'};

    printf("Fair pairs where the sum is between 3 and 6 are:\n");

   
    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 6; j++) {
            int sum = numbers[i] + numbers[j];
            
            if (sum >= 3 && sum <= 6) {
                printf("%c%c\n", labels[i], labels[j]);
            }
        }
    }

    return 0;
}
