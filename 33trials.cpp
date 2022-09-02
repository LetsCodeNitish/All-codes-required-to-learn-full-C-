#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int center=(n+1)/2;
    int i=1;
    while(i<=n){
        int dist;
        if(i<center)
            dist=center-i;
        else
            dist = i-center;
        
        int space=0;
        while(space<dist){
            cout<<" ";
            space++;
        }
        int k=center-dist;
        int star=0;
        while(star<(2*k)-1){
            cout<<"*";
            star++;
        }
        cout<<endl;
        i++;
    }
}