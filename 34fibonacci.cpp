#include<iostream>
using namespace std;
int main(){
	int i,n,a,b,c;
	a=-1;
	b=1;
	cin>>n;
	for(i=1;i<=n+1;i++){
		c=a+b;
		a=b;
		b=c;
	
	}
		cout<<c<<endl;
	
	return 0;
}