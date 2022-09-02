

      #include<iostream>
using namespace std;


int main()
{
    int N, i=1, a=1;
    cin>>N;
    while(i<=N)
    
    {   a=i;
        int k = 1;
        while(k<=N-i)
        {
            cout<<" ";
        k = k+1;
        }
        int j = 1;
        while(j<=i)
        {
            cout<<a;
            a=a+1;
            j=j+1;
        }
     cout<<endl;
            i = i+1;
    }
    

      
  
}



  



