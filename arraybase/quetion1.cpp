// add all number in the array in c++

#include <iostream>
using namespace std;

int main() {
    int array[] = {2, 3, 4, 5, 6, 7};
    int size = sizeof(array) / sizeof(array[0]);
    int sum = 0;

    for(int i = 0; i < size; i++) {
        sum += array[i];
    }

    cout << sum << endl;

    return 0;
}