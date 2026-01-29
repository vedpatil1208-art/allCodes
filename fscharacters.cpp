#include <iostream>
using namespace std;
class Print {
public:
    void print(char c) {
        cout << "Character: " << c << endl;
    }
    void print(string n) {
        cout << "String: " << n << endl;
    };
    int main() {
        Print p;
        p.print('A');
        p.print("Hello, World!");
        return 0;
    }