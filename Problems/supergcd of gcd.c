#include <stdio.h>

// Function to calculate GCD
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n, i;
    long long sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        long long power = 1; // to store 2^i
        int j;

        // Calculate 2^i manually
        for (j = 1; j <= i; j++) {
            power = power * 2;
        }

        // Calculate gcd(i, n)
        int g = gcd(i, n);

        // Add to sum
        sum += power * g;
    }

    printf("Result: %lld\n", sum);
    return 0;
}
