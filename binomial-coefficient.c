#include <stdio.h>

void calculatePascalCoefficients(int max_n, int max_k, double pascal[max_n+1][max_k+1]) {
    for (int n = 0; n <= max_n; n++) {
        for (int k = 0; k <= n && k <= max_k; k++) {
            if (k == 0 || k == n) {
                pascal[n][k] = 1.0;
            } else {
                pascal[n][k] = pascal[n-1][k-1] + pascal[n-1][k];
            }
        }
    }
}

int main() {
    int max_n = 1000;
    int max_k = 1000;
    double pascal[max_n+1][max_k+1];

    calculatePascalCoefficients(max_n, max_k, pascal);

    printf("%0.10g\n", pascal[100][50]);

    return 0;
}
