#include <stdio.h>

int main(void) {
      int x;
    double result;

    scanf("%d", &x);
    result = 1.0 / (x + 100);

    printf("%.15f\n", result);
    return 0;
}
