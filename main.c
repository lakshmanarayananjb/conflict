
//hai hello welcome to github

#include <stdio.h>

void checkNumber(int n) {
    int i, isPrime = 1;

    if (n <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a Prime number\n", n);
    else
        printf("%d is Not a Prime number\n", n);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    checkNumber(num);

    return 0;
}
