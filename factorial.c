#include <stdio.h>

int factorial(int);

int main(void) {
    int num = 0;
    printf("Enter nonnegative number:");
    scanf("%d", &num);
    if (num <= 0){
        puts("Number must be greater than 0...");
        return 0;
    }
    printf("Factorial of %d is %d", num, factorial(num));
}

int factorial(int num){
    int total = num;
    for (int i = num-1; i > 0; i--){
        total = total*i;
    }
    return total;
}
