#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nst=n;
    for(int row=1;row<=n;row++){
            for(int cst=1;cst<=nst;cst++){
        cout<<"*"<<"\t";
            }
        cout<<endl;
    }
    return 0;
}

