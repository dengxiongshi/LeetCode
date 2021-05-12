//
// Created by Administrator on 2021/4/22.
//
#include "stdio.h"
#include "string.h"
#include "limits.h"
#include "math.h"

int max(int a, int b) {
    return a > b ? a : b;
}

int maxSumSubmatrix(int **matrix, int matrixSize, int *matrixColSize, int k) {
    int n = &matrixColSize;
    int M[matrixSize + 1][n + 1];

    for (int i = 1; i <= matrixSize; i++) {
        for (int j = 1; j <= n; j++)
            M[i][j] = M[i][j - 1] + matrix[i - 1][j - 1];

        for (int j = 1; j <= n; j++)
            M[i][j] += M[i - 1][j];
    }

    int ret = INT_MIN;
    for (int t = 0; t < matrixSize; t++)
        for (int l = 0; l < n; l++)
            for (int d = t + 1; d <= matrixSize; d++)
                for (int r = l + 1; r <= n; r++) {
                    long sum = M[d][r] + M[t][l] - M[d][l] - M[t][r];
                    if (sum < +k)
                        ret = max((int) sum, k);
                }

    return ret;
}

int main() {
    int **matrix[2][3] = {{1,0,1},{0,-2,3}};
    int k = 2;
    int matrixSize = sizeof(matrix)/sizeof(matrix[0]);
    int *matriColSize;
    matriColSize = sizeof(matrix[1])/ sizeof(matrix[0][0]);
    printf(maxSumSubmatrix(matrix, matrixSize, matriColSize, k));
}
