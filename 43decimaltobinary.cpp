#include<iostream>
using namespace std;

int main() 
{
	
	int n;
cin>>n;
long pv=1;
long ans=0;
while(n>0){
     int r=n%2;
    ans=ans+(pv*r);
    pv=pv*10;
    n=n/2;
}
cout<<ans;
}
