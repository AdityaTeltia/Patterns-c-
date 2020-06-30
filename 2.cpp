#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=1;
    for(int nst=n;nst <=1; nst-- ){
        cout<<k+1;
        int cst=1;
        while(cst<=nst){
            cout<<"*"<<"\t";
            cst++;
        }
        cout<<endl;
    }

    return 0;
}


