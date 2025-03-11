#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/time.h>
#include <string.h> // Include string.h for memset()

#define MAX 100

// Matrix size (can be changed for testing)
int M = 3; // Rows of matrix A and C
int N = 3; // Columns of matrix A and rows of matrix B
int P = 3; // Columns of matrix B and C

// Matrices A, B, and C
int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];

// Structure to pass data to threads
typedef struct {
    int row; // Row index to calculate in matrix C
} ThreadData;

// Function to multiply matrices (sequential)
void multiplySequential() {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            C[i][j] = 0;
            for (int k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Thread function to multiply a specific row
void* multiplyRow(void* arg) {
    ThreadData* data = (ThreadData*)arg;
    int row = data->row;

    for (int j = 0; j < P; j++) {
        C[row][j] = 0;
        for (int k = 0; k < N; k++) {
            C[row][j] += A[row][k] * B[k][j];
        }
    }

    return NULL;
}

// Function to multiply matrices (parallel)
void multiplyParallel() {
    pthread_t threads[M];
    ThreadData threadData[M];

    // Create threads for each row of matrix C
    for (int i = 0; i < M; i++) {
        threadData[i].row = i;
        pthread_create(&threads[i], NULL, multiplyRow, &threadData[i]);
    }

    // Wait for all threads to finish
    for (int i = 0; i < M; i++) {
        pthread_join(threads[i], NULL);
    }
}

// Function to print matrix
void printMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to generate random matrices A and B
void generateMatrices() {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = rand() % 10;  // Random values between 0 and 9
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            B[i][j] = rand() % 10;  // Random values between 0 and 9
        }
    }
}

// Function to get the time difference in microseconds
long getTimeDifference(struct timeval start, struct timeval end) {
    return (end.tv_sec - start.tv_sec) * 1000000 + (end.tv_usec - start.tv_usec);
}

int main() {
    struct timeval start, end;

    // Generate random matrices A and B
    generateMatrices();

    // Sequential Matrix Multiplication
    gettimeofday(&start, NULL);
    multiplySequential();
    gettimeofday(&end, NULL);
    long seqTime = getTimeDifference(start, end);
    printf("Sequential Matrix Multiplication took: %ld microseconds\n", seqTime);

    // Print the result of sequential multiplication
    printf("\nMatrix C (Sequential):\n");
    printMatrix(C, M, P);

    // Clear matrix C for parallel multiplication
    memset(C, 0, sizeof(C));

    // Parallel Matrix Multiplication
    gettimeofday(&start, NULL);
    multiplyParallel();
    gettimeofday(&end, NULL);
    long parTime = getTimeDifference(start, end);
    printf("\nParallel Matrix Multiplication took: %ld microseconds\n", parTime);

    // Print the result of parallel multiplication
    printf("\nMatrix C (Parallel):\n");
    printMatrix(C, M, P);

    // Compare the times
    if (parTime < seqTime) {
        printf("\nParallel execution was faster!\n");
    } else {
        printf("\nSequential execution was faster!\n");
    }

    return 0;
}

