#include<iostream>
using namespace std;
int max(int*p, int n){
   int a=0,b=n-1;
   while (a!=b){
   if (p[a]<=p[b]){a=a+1;} 
   else {b=b-1;}
   }
   return p[a];
}
int main(){
    int arr[]={2,4,6,8,1};
    cout<<"max is:"<<max(arr,5);
}