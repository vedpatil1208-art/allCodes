#include <iostream>
using namespace std;

int main() {
    char str [100];
    int v=0, c=0, s=0;
    cout << "Enter a string: ";
    cin.getline(str, 100);
    for (int i=0; str[i]; i++) {
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
            str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') {
            v++;
        }
        else if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')) {
            c++;
        }
        else if (str[i]==' ') {
            s++;
        }
        cout << "Vowels: " << v << endl;
        cout << "Consonants: " << c << endl;
        cout << "Digits: " << s << endl;
        cout << "Spaces: " << v+c+s << endl;
    }
}