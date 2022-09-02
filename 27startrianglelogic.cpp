#include <iostream>

using namespace std;
int main()
{
    int N, i=1,k, j;
    cin>>N;
   int N1 = N/2+1;
   int N2 = N - N1; 
    while(i<=N1)
    {   
        k=1;
        while(k<=N1-i)
        {
            cout<<" ";
            k++;
        } 
        j=1;
        while(j<=i)
        {
            cout<<"*";
            j++;
        }
        j=i-1;
        while(j>=1)
        {
            cout<<"*";
            j--;
        }
            cout<<endl;
            i++;
    }
    
    
    i = N2;
    
    while(i>=1){
        
        int space = 1;
        while(space <= N2 - i + 1){
            cout<<" ";
            space++;
        }
        
        int j = 1;
        int star = 2*i-1;
        while( j<= star){
            cout<<"*";
            j++;
        }
        
        i--;
        cout<<endl;
        
    }
    
    
    
}