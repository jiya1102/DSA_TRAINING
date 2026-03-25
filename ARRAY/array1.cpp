#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int sum[10];

    for(int i=0;i<5;i++){
        sum[i]=arr[i]+arr[i+1];
         cout<<sum[i]<<endl;
    }

    
}