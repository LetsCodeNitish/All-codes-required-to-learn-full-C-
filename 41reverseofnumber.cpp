#include<iostream>
using namespace std;

int main() 
{
	int N;
    cin>>N;
    int rev = 0 ;
    for(;N>0;N = N/10)
    {   
        rev=rev*10 + N%10;
        // cout<<a;
            // N=N/10;      
        
    }
    // if(N<10)
    // {
        cout<<rev;
    // }
    

}
