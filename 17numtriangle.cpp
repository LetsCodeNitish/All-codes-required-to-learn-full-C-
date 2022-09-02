#include<iostream>
using namespace std;


int main()
{

    int N, i=1;
    cin>>N;
    while(i<=N)
    { 
        int j=1, k=i;
        
        while(j<=i)
        {
            cout<<k-j+1;
            j=j+1;
            
        }
        i =i+1;
        cout<<endl;
        
        
    }
    
    
  
}


