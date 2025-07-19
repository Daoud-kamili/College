#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    sum += 1.0;  // Start with 1

    for(i = 2; i <= n; i += 2) {
        sum += 1.0 / i;
    }

    printf("Sum of the series is: %.4f\n", sum);

    return 0;
}
