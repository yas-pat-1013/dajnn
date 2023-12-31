
#pragma once

namespace dajnn {

void gemm_bin(int M, int N, int K, float ALPHA, char* A, int lda, float* B, int ldb, float* C, int ldc);
void gemm(int TA, int TB, int M, int N, int K, float ALPHA, float* A, int lda, float* B, int ldb, float BETA, float* C, int ldc);
void gemm_cpu(int TA, int TB, int M, int N, int K, float ALPHA, float* A, int lda, float* B, int ldb, float BETA, float* C, int ldc);

}
