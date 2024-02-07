//WAP to print even and odd number from given range by user using while loop
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the value of number:"<<endl;
    cin>>num;
    int i=1;
    while(i<=num)
    {
        if(i%2==0)
        {
           cout<<"Even no:"<<i<<endl;
        }else
        {
          cout<<"odd no:"<<i<<endl; 
        }
        i++; 
    }
    
}
