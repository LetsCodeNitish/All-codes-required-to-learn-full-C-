
#include<iostream>
using namespace std;

int main() 
{
    int x, n; 
    int mul=1, i=1;
    cin >> x>> n;
    while(i<=n)
    {
        mul = mul*x;
        i = i+1;
    }
    cout<<mul<<endl;
    
    
}