// ConsoleApplication23.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
void snakeArray(int** A,int n) {

    int i = 1, j = -1, k = 1;

    while (i < n * n) {
        while (j < n - 1 && k > 0) {
            j += 1;
            k -= 1;
            A[j][k] = i;
            ++i;
        }
        if (j >= 0 && k < n - 1 && j != n - 1) {
            j += 1;
            A[j][k] = i;
            ++i;
        }
        else if (j == n - 1 && k >= 0) {
            k += 1;
            A[j][k] = i;
            ++i;
        }
        while (k < n - 1 && j > 0) {
            j -= 1;
            k += 1;
            A[j][k] = i;
            ++i;
        }
        if (k < n - 1 && j == 0) {
            k += 1;
            A[j][k] = i;
            ++i;
        }
        else if (k == n - 1 && j >= 0) {
            j += 1;
            A[j][k] = i;
            ++i;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int k = 0; k < n; ++k) {
            std::cout << A[i][k] << " ";
        }
        std::cout << std::endl;
    }
}
int main() {
    int n=5;
    int** A;
    A = new int* [n];
    for (int i = 0; i < n; ++i) {
        A[i] = new int[n];
    }
    snakeArray(A,n);// змейка
}



