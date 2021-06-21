#include<iostream>
using namespace std;


int main(){

    int  n;
    cin>> n;
    
    int i = 1;
    int k = 1;
    
    while(i<=n){
        k =1;
        while (k<=n-i){
            cout<<" ";
            k += 1;
        }
        k = 1;
        while(k<=(2*i -1)){
            cout<<"*";
            k = k +1;
        }
        cout<<"\n";
        i = i +1;
    }
  
}

