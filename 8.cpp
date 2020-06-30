#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nst=n;
    for(int row=1;row<=n;row++){
        for(int cst=1;cst<=nst;cst++){
            if(cst==row || cst+row==nst+1 || cst==1 || row==1){
            cout<<"*"<<"\t";
            }else{
            cout<<" "<<"\t";
            }
        }
    cout<<endl;
    }


}
