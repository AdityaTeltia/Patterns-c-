#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nst=1;
    for(int row=1;row<=2*n-1;row++){
        for(int cst=1;cst<=nst;cst++){
                cout<<"*";
        }
        if(row<n){
            nst++;
        }else{
            nst--;
        }
        cout<<endl;
    }
}
