#include <stdio.h>

// Function to calculate the nth Fibonacci number using dynamic programming
int fibonacci_dp(int n) {
    if (n <= 1) {
        return n;
    }

    // Create an array to store Fibonacci numbers (a "DP table")
    // Use an array of size n+1 to store values from 0 to n
    int fib[n + 1];

    // Initialize base cases
    fib[0] = 0;
    fib[1] = 1;

    // Calculate Fibonacci numbers from 2 up to n
    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Return the nth Fibonacci number
    return fib[n];
}

int main() {
    int n = 10;
    // The 10th Fibonacci number is 55 (0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55)
    printf("The %dth Fibonacci number is %d\n", n, fibonacci_dp(n));

    n = 5;
    // The 5th Fibonacci number is 5
    printf("The %dth Fibonacci number is %d\n", n, fibonacci_dp(n));

    return 0;
}
