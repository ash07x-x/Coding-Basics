#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int arr[10];
    for(int i = 0; i < 10; i++) {
        arr[i] = rand() % 100 + 1;
    }
    cout << "Array: ";
    for(int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    int max = arr[0];
    for(int i = 1; i < 10; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "\nMaximum = " << max;
    return 0;
}
