#include<iostream>
using namespace std;


int main(){
    int n;
    int i = 1;
    int summ =0;
    cin>> n;
    while (i<=n) {
       if (i%2 == 0){
           summ = summ + i;
       }
       i = i + 1; 
    }

    cout <<summ;   	
  
}