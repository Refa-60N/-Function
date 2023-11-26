#include <stdio.h>

// Function for call by value
void callByValue(int x) {
    printf("Inside callByValue function before modification: %d\n", x);
    x = x * 2;
    printf("Inside callByValue function after modification: %d\n", x);
}

// Function for call by reference
void callByReference(int *x) {
    printf("Inside callByReference function before modification: %d\n", *x);
    *x = *x * 2;
    printf("Inside callByReference function after modification: %d\n", *x);
}

// Function for call by recursion
int callByRecursion(int x) {
    if (x <= 1) {
        return x;
    } else {
        return x + callByRecursion(x - 1);
    }
}

int main() {
    int val = 5;

    // Call by value
    printf("Before callByValue function: %d\n", val);
    callByValue(val);
    printf("After callByValue function: %d\n\n", val); // Value remains unchanged

    // Call by reference
    printf("Before callByReference function: %d\n", val);
    callByReference(&val);
    printf("After callByReference function: %d\n\n", val); // Value is modified

    // Call by recursion
    printf("Sum using recursion: %d\n", callByRecursion(val));

    return 0;
}
