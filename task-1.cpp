// ConsoleApplication23.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>



void reversArray(int A[], int n) {
    for (int i = 0, j = n - 1; i < j; ++i, --j) {
        int tmp = A[i]; A[i] = A[j]; A[j] = tmp;
    }
}

void shiftArray(int A[], int n, int k) {
    while (k < 0) {
        k += n;
    }
    while (k >= n) {
        k -= n;
    }
    if (k > 0) {
        reversArray(A, k);
        reversArray(A + k, n - k);
        reversArray(A, n);
    }
}

void printArray(const int A[], int n) {
    for (int i = 0; i < n; ++i)
        std::cout << A[i] << ' ';
    std::cout << " ";
}

int main()
{
    int n = 10, m = 3;
    int* M = new int[n];
    for (int i = 0; i < n; ++i) {
        M[i] = i + 1;
    }
    shiftArray(M, n, m);
    printArray(M, n);
    delete[] M;
    return 0;   
}
