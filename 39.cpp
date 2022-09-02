#include<iostream>
using namespace std;

int main() {
	int N, C, sum=0, product=1;
    cin>>N>>C;
    if(C==1)
    {
       for(int i = 1;i<=N;i++)
       {
           
           sum = sum + i;
       }
           cout<<sum;
    }
           
       
        
    
    else if(C==2)
    {
        for(int i = 1;i<=N;i++)
       {
          // product = 1;
           product= product*i;
        }
           cout<<product;
           
       }
    
    else
    {
        cout<<"-1";
    }
	
}