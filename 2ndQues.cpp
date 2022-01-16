#include <iostream>

using namespace std;

int main()
{
    long int num_minus_2{1};
    long int num_minus_1{2};
    long int sum{2};
    for(;;)
    
     {long int current_num=num_minus_1+num_minus_2;
     if(current_num%2==0)
      sum+=current_num;
    num_minus_2=num_minus_1;
    num_minus_1=current_num;
    
     if(current_num > 4000000&&current_num%2==0)
         {cout<<sum-current_num<<endl;
         break;}
     }
     return 0;
     
    
}