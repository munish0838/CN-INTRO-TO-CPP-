#include<iostream>
using namespace std;


int main(){

   int n;
	cin>>n;
    int i =1;
    int k =1;
    int m = 1;
    
    while(i<=n){
        k = 1;
        while(k<=n-i){
            cout<<" ";
            k = k +1;
        }
        m = i;
        while(m<2*i){
            cout<<m;
            m = m +1;
        }
        cout<<"\n";
       i = i + 1;
        }
    }	

