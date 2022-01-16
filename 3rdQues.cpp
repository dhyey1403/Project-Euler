#include <iostream>


using namespace std;
 long long int N=600851475143;

int prime(int a)
{
  if (a<=1)
    return 0;
  else if(a<=3)
    return 1;
  if(a%2==0||a%3==0)
      return 0;
  for(int i=5;i*i<a;i+=6)
     { if(a%i==0||a%(i+2)==0)
            return 0;
    }
    return 1;
}
int main()
{
    for(int i{1};i<N;++i)
       {if(N%i==0) 
       {
        int x=prime(i);
        if(x==1)
            cout<<i<<endl;
        else continue;
       }
    
     
}}
