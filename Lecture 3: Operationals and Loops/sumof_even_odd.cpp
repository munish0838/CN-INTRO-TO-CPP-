#include<iostream>
using namespace std;

int main() {
	int seven = 0;
    int sodd = 0;
    int n;
    cin>> n;
    
    while (n>0){
        int remain = n%10;
        if (remain%2 !=0)
            sodd = sodd + remain;
        else
            seven = seven + remain;
            
        n = n/10;   
    }
    cout<<seven<<" "<<sodd;
}
