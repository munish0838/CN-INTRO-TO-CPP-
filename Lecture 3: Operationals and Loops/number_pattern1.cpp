#include<iostream>
using namespace std;


int main(){

    int n;
    int i = 1;
    int k =1;
    
    cin>> n;
    while (i<=n) {
        k = i;
        
        while (k<(2*i)){
            cout<<k;
            k = k +1;
            
        }
        cout<<"\n";
        i= i +1;
    }
  
}

