//WAP to print sum of number using while loop
#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Enter the value of number:"<<endl;
    cin>>num;
    int i=1;
    while(i<=num)
    {
        sum=sum+i;
        i++;
    }cout<<"The sum is:"<<sum<<endl;
}
