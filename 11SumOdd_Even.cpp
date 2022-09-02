#include<iostream>
using namespace std;

int main() 
{
 int N, a, sumeven = 0, sumodd = 0;
    cin>> N;
    
    while(N>0)
    {
        a = N%10;
        if (a%2==0)
        {
            sumeven = sumeven + a;
            
        }
        else if(a%2 != 0)
        {
            sumodd = sumodd + a;
        }
        
        N = N/10;
        
    }
    cout<<sumodd<<sumeven;
	
}
