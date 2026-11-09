#include <stdio.h>

int main(void) {
    int x;

    if (scanf("%d", &x) != 1) {
        return 1;
    }

    // 先に x を double 型にしてから 100 を足すことでオーバーフローを防ぐ
    double result = 1.0 / ((double)x + 100.0);

    printf("%.15f\n", result);

    return 0;
}
