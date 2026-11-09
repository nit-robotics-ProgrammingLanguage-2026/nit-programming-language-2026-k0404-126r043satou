#include <stdio.h>

int main(void) {
    int x;

    // 整数 x の入力
    if (scanf("%d", &x) != 1) {
        return 1;
    }

    // 1.0 を使うことで double 型として計算（x + 100 が 0 になる場合は注意）
    double result = 1.0 / (x + 100);

    // 小数点以下15桁で表示
    printf("%.15f\n", result);

    return 0;
}
