#include<iostream>
using namespace std;

int main() {
	char c;
    cin >> c;
    int f =c;
    if(f>=65 && f<=90){
        cout<< 1;
    } else if(f>= 97 and f<= 122) {
        cout << 0;
    } else {
        cout<< -1;
    }
    
	
}
