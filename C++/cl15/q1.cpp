#include <iostream>
using namespace std;

template <class T>
T Sum(T a, T b) {
    T c = a + b;
    return c;
}

int main(void) {
    cout << Sum(1, 2) << endl;
    cout << Sum(1.1, 2.2) << endl;
    cout << Sum('1', '2') << endl;
}