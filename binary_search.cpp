#include <iostream>
using namespace std;


int binary_search(int &arr[],int size,int x){
    int low = 0;
    int high = size -1;

    while(low<=high){
        int middle = low + (high-low)/2;
        cout<<middle<<endl;
        if(arr[middle] == x){
            return middle;
        }
        if(arr[middle]<x){
            low = middle+1;
        }else{
            high = middle -1;
    }

}
    return -1;
}

int main(){
    int arr1[] = {1,2,3,4,5};
    int size = sizeof(arr1)/sizeof(arr1[0]);
    int c = binary_search(arr1, size, 4);
    cout<<"The index is: "<<c<<endl;
}