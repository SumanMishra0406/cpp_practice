#include <iostream>
using namespace std;

int arr[100];

int fibo(int n){
    if(n==1 || n==0){
        return n;
    }
    arr[0] = 0;
    arr[1] = 1;
    int a;
    int b;

   if(arr[n-1]!=-1){
    a = arr[n-1];
   }else{
    a=fibo(n-1);
   }
   if(arr[n-2]!=-1){
    b = arr[n-2];
   }else{
    b=fibo(n-2);
   }

   arr[n] = a+b;
   return arr[n];

}

int main(){
    for(int i = 0; i < 100; i++) {
        arr[i] = -1;
    }
    fibo(4);
    for(int i=0; i<5; i++){
        cout<<arr[i];
    }
}