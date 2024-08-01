/* 1 theke 20 porjonto,
=> shob gular sum
=> only even number er sum
=> only odd number er sum
for loop use kore */

#include <stdio.h>

int main () {
    int i, totalSum = 0, evenSum = 0, oddSum = 0;
    for (i=1; i<=20; i++) {
        totalSum = totalSum+i;
        if (i%2 == 0) {
            evenSum = evenSum+i;
        } else {
            oddSum = oddSum+i;
        }
    }
    printf("Total Sum: %d\n", totalSum);
    printf("Sum of Even Numbers: %d\n", evenSum);
    printf("Sum of Odd Numbers: %d\n", oddSum);

    return 0;

}
