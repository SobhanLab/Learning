//Array Basic

#include <stdio.h>

int main () {
    int n = 15;

    int students[n];

    for (int i=0; i<=n; i++)
    {
        students[i] = (i+1)*10;
    }

    for (int i=0; i<=n-1; i++)
    {
        printf("%d\n", students[i]);
    }


  return 0;
}
