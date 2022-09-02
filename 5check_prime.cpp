#include <iostream>
using namespace std;
int main()
{
    int N; 
    int i = 2 ;
    cout << "Enter a number Dude\n";
    cin >> N;
    while(i<N)
    {
    if(N%i==0)
        {
            cout<<"The number is not prime\n";
            break;
        }
    else
        {
            cout<<"the number is prime\n";
            break;
        }
    i = i+1;
    }
    
    
}