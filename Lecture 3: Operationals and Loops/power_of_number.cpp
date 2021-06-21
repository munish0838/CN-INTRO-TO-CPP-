#include<iostream>
using namespace std;

int main()
{
	int x;
    int n;
    cin>>x>>n;
    
    
    int ans =1;
    if (x==0)
    	ans=0;
    int i =1;
    while (i<=n){
        ans = ans*x;
        i = i + 1;        
    }
    if (x==0 && n ==0)
        cout<<1;
    else
    	cout<<ans;
	
}
