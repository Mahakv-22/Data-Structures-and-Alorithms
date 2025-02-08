#include<iostream>
using namespace std;

void setZero(int arr[][3], int n, int m) {
    bool rows[n] = {false};
    bool cols[m] = {false};

    // Mark rows and cols that need to be zeroed out
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0) {
                rows[i] = true;
                cols[j] = true;
            }
        }
    }

    // Zero out marked rows and cols
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (rows[i] || cols[j]) {
                arr[i][j] = 0;
            }
        }
    }
}

void printArray(int arr[][3], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 0, 6}, {7, 8, 9}};

    printArray(arr, 3, 3);

    setZero(arr, 3, 3);

    cout << endl;

    printArray(arr, 3, 3);

    return 0;
}