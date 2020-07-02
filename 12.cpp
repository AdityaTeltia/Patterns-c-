
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nsp = n-1;
    int nst =1;
    for(int row=1;row<=n;row++){
        for(int csp=1;csp<=nsp;csp++){
            cout<<" ";
        }
        for(int cst =1;cst<=nst;cst++){
            if(cst%2 ==0 ){
                cout<<"!";
            }else{
            cout<<"*";
            }
        }

        cout<<endl;
        nst=nst+2;
        nsp--;
    }
    return 0;





}
