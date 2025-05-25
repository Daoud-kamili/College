#include <stdio.h>

int main() {
    int n;
    int factorial = 1;

    
    printf("Enter the no. whose factorial you want to find: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial not defined\n");
    } else {
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d is: %llu\n", n, factorial);
    }

    return 0;
}
