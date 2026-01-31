#include<iostream>
using namespace std;
int main(){
    int a[2][3] , b[2][3], c[2][3];
    cout<<"enter elements of first matrix:"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    cout<<"enter elements of second matrix:"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    cout<<" matrix after addition:"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<c[i][j];
        }
        cout<<endl;
    }
    return 0;
}