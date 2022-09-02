#include <iostream>
using namespace std;
int main()
{
    int num,i;
    cin>>num;
    for(i=1;i<=num;i++)
    {
        int mul = i*i;
        
         if(mul>num)
        {
            cout<<i-1;
            break;
        }
        
    }
   
}