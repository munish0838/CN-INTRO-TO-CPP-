#include<iostream>
using namespace std;

int main() {
    float x;
	float hra,da,allow,total,pf,basic;
    char grade;
    cin>>basic>>grade;
    if(grade=='A')
        allow=1700;
    else if(grade=='B')
        allow=1500;
    else
        allow=1300;
    
    hra=0.2*basic;
    pf=0.11*basic;
    da=0.5*basic;
    
    total = basic+hra+da+allow-pf;

    x=(int) total;
    if(total-x>0.5)
        total=(x+1);
    else
        total=x;
    

	cout<<int(total);
        
	
}
