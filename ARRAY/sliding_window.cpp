#include<iostream>
using namespace std;
int main(){
    int arr []={1,2,3,4,5,7,16};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    int sum =0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    int max=sum;
    for(int i=k;i<n;i++){
      sum+=arr[i];
      sum-=arr[i-k];
      if(sum>max)max=sum;
    }

    cout<<"maximum is:"<<max;
}