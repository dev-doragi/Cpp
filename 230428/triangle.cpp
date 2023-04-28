#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int height;
    cout << "Enter the height of the pyramid: ";
    cin >> height;

    for (int i = 0; i < height; i++) {
        // ¿ÞÂÊ »ï°¢Çü Ãâ·Â
        for (int j = 0; j <= height - i; j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}