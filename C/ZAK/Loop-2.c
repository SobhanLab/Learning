/* 1 theke 20 porjonto,
=> shob gular sum
=> only even number er sum
=> only odd number er sum
for loop use kore */


#include <stdio.h>

int main() {
    int a, totalSum = 0, evenSum = 0, oddSum = 0;

    for (a=1; a<=20; a++) {
             totalSum += a;

        if (a%2 == 0) {
            evenSum += a;
        } else {
            oddSum += a;
        }
    }

    printf("Sum of Even Numbers: %d\n", evenSum);
    printf("Sum of Odd Numbers: %d\n", oddSum);
    printf("Total Sum: %d\n", totalSum);

    return 0;
}
