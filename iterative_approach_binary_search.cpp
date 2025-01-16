#include <iostream>
#include <vector>
using namespace std;


int binary_search(vector<int>& arr, int target){
    int size = arr.size();
    int low = 0;
    int high = size - 1; //due to 0 based indexing
    int middle;
    while(low <= high){
        middle = (high+low)/2;
        if(arr[middle] == target){
            return middle;
        }else if (arr[middle]>target){
            high = middle-1;
        }else{
            low = middle+1; 
        }
    }
    return -1;
}


int main(){
    vector<int> arr = {2,4,6,8,10};
    int target = 8;
    int result = binary_search(arr, target);
    cout<<"Target is at index position: "<<result<<endl;

}