#include<iostream>
using namespace std;


int main()
{
    int N, i = 1, sum = 0;
    cout<<"Enter a number\n";
    cin>>N;
    while(i<=N)
    { if(i%2==0)
        {
            sum = sum + i;
        }
         i = i+1;
    }
      
    cout<<sum;
       
  
}