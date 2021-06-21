#include<iostream>
using namespace std;


int main(){
    float s;
    int e;
    int w;
    
    cin>> s;
    cin>>e;
    cin>>w;
    
    while (s<=e){
        cout<<s<<"\t"<<int((s-32)/1.8)<<endl;
        s = s + w;
    }

  
}
