#include <iostream>

using namespace std;
int main()
{
    int N, i=1,k, j;
    cin>>N;
    while(i<=N)
    {   k=1;
        while(k<=N-i)
        {   
            cout<<" ";
            k++;
        }
        j=1;
        while(j<=i)
        {
            cout<<"* ";
            j++;
        }
        
        cout<<endl;
        i++;
    }
}