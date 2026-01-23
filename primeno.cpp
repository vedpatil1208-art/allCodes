#include <iostream>
using namespace std;

int main () {
    int  n,i;
    for (i = 2 ; i < 100 ; i++){
        for (n = 2 ; n <= i ; n++){
            if (i % n == 0)
                break;
        }
        if (n == i)
            cout << i << endl;
}
    return 0;
}