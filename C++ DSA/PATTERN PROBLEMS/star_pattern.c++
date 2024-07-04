#include<iostream>
using namespace std;

int main(){
    cout<<"USING FOR LOOP"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<"\n";
    }

    cout<<"USING WHILE LOOP"<<endl;
    int a;
    cin>>a;
    int i=0;
    while(i<a){
        int j=0;
        while(j<a){
            cout<<i;
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }

    cout<<"PRINTING TRIANGULAR PATTERN"<<endl;
    int q;
    cin>>q;
    int w = 1;
    while(w<=q){
        int j=1;
        while(j<=w){
            cout<<"* ";
            j=j+1;
        }
        cout<<endl;
        w=w+1;
    }

    cout<<"NEW PATTERN"<<endl;

    int e;
    cin>>e;
    int o=1;
    while(o<=e){
        int j=1;
        while(j<=e){
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        o=o+1;
    }
    cout<<"\nREVERSE ORDER\n";
    int z=e;
    
    int x=1;
    while(x<=z){
        int j=1;
        while(j<=z){
            cout<<z-j+1;
            j=j+1;
        }
        cout<<endl;
        x=x+1;
    }

}