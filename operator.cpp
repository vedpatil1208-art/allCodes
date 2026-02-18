#include <iostream>
using namespace std;
class N{
    public:
    int v;
    N (int x) {
        v = x;
    }
    bool operator < (const N& x) {
        return v < x.v;
    }
    bool operator > (const N& x) {
        return v > x.v;
    }
    void show() {
        cout << "N = " << v << endl;
    }
};

int main() {
    N x(10);
    N y(20);
    x.show();
    y.show();
    if (x < y) {
        cout << "x < y" << endl;
    } else {
        cout << "x not < y" << endl;
    }
    return 0;
}