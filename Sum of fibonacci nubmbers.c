#include <stdio.h>

// Function to calculate the sum of even Fibonacci numbers
void evenFibSum(int *limit) {
    // If limit is less than 2, result should be 0
    if (*limit < 2) {
        *limit = 0;
        return;
    }

    int fib1 = 0, fib2 = 1, fib3 = 1;
    int sum = 0;

    while (fib3 <= *limit) {
        // Add even Fibonacci numbers to the sum
        if (fib3 % 2 == 0) {
            sum += fib3;
        }

        // Generate the next Fibonacci number
        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
    }

    *limit = sum;
}

int main() {
    int N;

    // Input N
    scanf("%d", &N);

    // Calculate the sum of even Fibonacci numbers
    evenFibSum(&N);

    // Output the result
    printf("%d\n", N);

    return 0;
}
