#include <iostream>
using namespace std;

bool leap_year(int year){
    if(year%4==0 && year%100 !=0|| year%400==0){
        return true;
    }else{
        return false;
    }
}

int main(){
    cout<<"Enter the year: "<<endl;
    int year;
    cin>>year;
    cout<<"The year is a leap year?: "<< boolalpha<<leap_year(year)<<endl;


}