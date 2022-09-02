#include<iostream>
using namespace std;


int main(){

    int i=1, j=1, a, N;
    cin>>N;
    while(i<=N){
        a=i;
        int k=i;
        while(k<N){
            cout<<" ";
            k++;
        }
        while(a<=j)
        {
            cout<<a;
            a++;
        }
        a=i;
        cout<<endl;
        j+=2;
        i++;
    }
    
  
}


