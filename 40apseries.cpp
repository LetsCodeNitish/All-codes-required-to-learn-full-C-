#include<iostream>
using namespace std;

int main() {
	int i, x, a;
    cin>>x;
    
    for(i=1; i<=x; i++)
    {
        a = 3*i + 2;
        if(a%4==0)
        {
            continue;
        }
        cout<<a<<" ";
        
    }
    
	
}
