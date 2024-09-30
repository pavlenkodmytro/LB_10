#include <iostream>
#include <limits> // Для std::numeric_limits
using namespace std;

template <size_t n>
void printArray(int arr[][n], int m) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // 1. Задаємо двомірний масив 4x3
    const int m1 = 4, n1 = 3;
    int array1[m1][n1] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };
    cout << "Масив 4x3:" << endl;
    printArray(array1, m1);
    
    // Визначаємо кількість парних чисел у кожному рядку
    cout << "Кількість парних чисел у кожному рядку:" << endl;
    for (int i = 0; i < m1; ++i) {
        int evenCount = 0;
        for (int j = 0; j < n1; ++j) {
            if (array1[i][j] % 2 == 0) {
                evenCount++;
            }
        }
        cout << "Рядок " << i + 1 << ": " << evenCount << " парних чисел" << endl;
    }

    // 2. Задаємо двомірний масив 6x4
    const int m2 = 6, n2 = 4;
    int array2[m2][n2] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20},
        {21, 22, 23, 24}
    };
    cout << "Масив 6x4:" << endl;
    printArray(array2, m2);
    
    // Визначаємо кількість парних чисел у кожному стовпчику
    cout << "Кількість парних чисел у кожному стовпчику:" << endl;
    for (int j = 0; j < n2; ++j) {
        int evenCount = 0;
        for (int i = 0; i < m2; ++i) {
            if (array2[i][j] % 2 == 0) {
                evenCount++;
            }
        }
        cout << "Стовпчик " << j + 1 << ": " << evenCount << " парних чисел" << endl;
    }

    // 3. Задаємо двомірний масив 5x7
    const int m3 = 5, n3 = 7;
    int array3[m3][n3] = {
        {1, 2, 3, 4, 5, 6, 7},
        {8, 9, 10, 11, 12, 13, 14},
        {15, 16, 17, 18, 19, 20, 21},
        {22, 23, 24, 25, 26, 27, 28},
        {29, 30, 31, 32, 33, 34, 35}
    };
    cout << "Масив 5x7:" << endl;
    printArray(array3, m3);
    
    // Обчислюємо суму елементів кожного рядка
    cout << "Сума елементів кожного рядка:" << endl;
    for (int i = 0; i < m3; ++i) {
        int sum = 0;
        for (int j = 0; j < n3; ++j) {
            sum += array3[i][j];
        }
        cout << "Рядок " << i + 1 << ": " << sum << endl;
    }

    // 4. Задаємо двомірний масив 4x6
    const int m4 = 4, n4 = 6;
    int array4[m4][n4] = {
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 10, 11, 12},
        {13, 14, 15, 16, 17, 18},
        {19, 20, 21, 22, 23, 24}
    };
    cout << "Масив 4x6:" << endl;
    printArray(array4, m4);
    
    // Обчислюємо суму елементів кожного стовпчика
    cout << "Сума елементів кожного стовпчика:" << endl;
    for (int j = 0; j < n4; ++j) {
        int sum = 0;
        for (int i = 0; i < m4; ++i) {
            sum += array4[i][j];
        }
        cout << "Стовпчик " << j + 1 << ": " << sum << endl;
    }

    // 5. Задаємо двомірний масив 3x4
    const int m5 = 3, n5 = 4;
    int array5[m5][n5] = {
        {1, 5, 3, 7},
        {8, 2, 9, 4},
        {6, 11, 12, 10}
    };
    cout << "Масив 3x4:" << endl;
    printArray(array5, m5);
    
    // Знаходимо максимальний елемент у масиві
    int maxElement = numeric_limits<int>::min();
    int maxRow = 0, maxCol = 0;
    for (int i = 0; i < m5; ++i) {
        for (int j = 0; j < n5; ++j) {
            if (array5[i][j] > maxElement) {
                maxElement = array5[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }
    cout << "Максимальний елемент: " << maxElement << " на позиції (" << maxRow + 1 << ", " << maxCol + 1 << ")" << endl;

    // 6. Задаємо двомірний масив 4x7
    const int m6 = 4, n6 = 7;
    int array6[m6][n6] = {
        {5, 6, 7, 8, 9, 10, 11},
        {12, 13, 14, 15, 16, 17, 18},
        {19, 20, 21, 22, 23, 24, 25},
        {26, 27, 28, 29, 30, 31, 32}
    };
    cout << "Масив 4x7:" << endl;
    printArray(array6, m6);
    
    // Знаходимо мінімальний елемент у масиві
    int minElement = numeric_limits<int>::max();
    int minRow = 0, minCol = 0;
    for (int i = 0; i < m6; ++i) {
        for (int j = 0; j < n6; ++j) {
            if (array6[i][j] < minElement) {
                minElement = array6[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }
    cout << "Мінімальний елемент: " << minElement << " на позиції (" << minRow + 1 << ", " << minCol + 1 << ")" << endl;

    return 0;
}
