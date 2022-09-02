#include<iostream>
using namespace std;
int main()
{
    int N, j;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        for(int k =1;k<=N-i;k++)
        {
            cout<<" ";
        }
        for(j =1 ; j<=i;j++)
        {
            cout<<i-j+1;

        }
        
        for(j;j<=2*i-1;j++)
        {
            cout<<j-i+1;
        }cout<<endl;

    }
}