#include <iostream>
using namespace std;


inline int maximum(int a, int b) {
    return (a > b) ? a : b;
}


int main() {
    cout << "Max = " << maximum(10, 20) << endl;
    return 0;
}