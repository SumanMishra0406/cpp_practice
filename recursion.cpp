#include <iostream>
using namespace std;

/*void printNos(int n) {
    // Your code here
    //base case
    if(n==0){
        return;
    }
    printNos(n-1);
    cout<<n<<" ";
}*/

void printNos(int n) {
    // Your code here
    //base case
    if(n==0){
        return;
    }
    cout<<n<<" ";
    printNos(n-1);
}

int sumofcubes(int n){
    if(n==0){
        return 0;
    }
    return n*n*n + sumofcubes(n-1);

}

/*int fib(int n) {
        if(n==1 || n==0){
            return n;
        }
        return fib(n-1) + fib(n-2);
}*/

int arr[100];

int fibo(int n){
    if(n==1 || n==0){
        return n;
    }
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

/*
int fib(int n){
    int a = 0;
    int b = 1;
    cout<< a<<" "<< b<<" ";
    for(int i=0;i<n-2;i++){
    int c = a+b;
    cout<<c<<" ";
    a = b;
    b = c;
    }
    return 0;
}
*/


int main(){
    //printNos(10);
    //cout<<sumofcubes(3);
    for(int i = 0; i < 100; i++) {
        arr[i] = -1;
    }
    fibo(4);
    for(int i=0; i<5; i++){
        cout<<arr[i];
    }
}


