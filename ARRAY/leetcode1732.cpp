#include<iostream>
using namespace std;
int main(){
    int gain[]={-5,1,5,0,-7};
    int alt[5];
    for(int i=0; i<5;i++){
        alt[i]=gain[i]-gain[i+1];
        cout<<alt[i]<<endl;
    }
}