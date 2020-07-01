#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nst = 2*n-1;
    int nsp = 0;
    for(int row = 1; row<=n ; row++){
        for(int csp=1;csp<=nsp; csp++){
            cout<<" "<<"\t";
        }
        for(int cst=1;cst<=nst; cst++){
            cout<<"*"<<"\t";
        }

    cout<<endl;
    nst=nst-2;
    nsp++;
    }
return 0;
}
