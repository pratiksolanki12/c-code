// add all number 1 to 10 in c++ 

#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for(int i = 1; i <= 10; i++) {
        sum += i;
    }

    cout << sum << endl;
    cout << "this is the sum";
    return 0;
}
