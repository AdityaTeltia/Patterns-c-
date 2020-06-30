#include <iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    int nst=1;
    int nsp=n-1;
    int row=1;
    for(row=1; row<=n;row++){
            for(int csp=1;csp<=nsp;csp++){
                cout<<" "<<"\t";
            }
            for(int cst=1;cst<=nst;cst++){
                cout<<"*"<<"\t";
            }
        nsp--;
        nst++;
        cout<<endl;
    }

}




