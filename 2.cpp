#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int nst=n;nst >0; nst-- ){
        int cst=1;
        while(cst<=nst){
            cout<<"*"<<"\t";
            cst++;
        }
        cout<<endl;
    }

    return 0;
}


