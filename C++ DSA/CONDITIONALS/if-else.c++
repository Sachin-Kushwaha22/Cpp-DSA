#include<iostream>
using namespace std;

int main(){

    int a=1;
    int sum=0;
    cout<<"PRINTING EVEN NUMBER AND THEIR SUM BETWEEN 01-30\n";
    while(a<=30){
        if(a%2==0){
            cout<<a<<" ";
            sum=sum+a;
        }
        a=a+1;
    }
    cout<<"SUM IS :"<<sum<<endl;

 