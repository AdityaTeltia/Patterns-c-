#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nst = n;
    int nsp = 0;
    int row = 1;
    for(row=1;row<=n;row++){
        for(int csp = 1 ; csp<=nsp ; csp++){
            cout<<" "<<"\t";
        }
        for(int cst = 1 ; cst<=nst ; cst++ ){
            cout<<"*"<<"\t";
        }
        cout<<endl;
        nst--;
        nsp=nsp+2;

    }
    return 0;
}

