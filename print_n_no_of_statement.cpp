//WAP to print one statement for n time using while loop
#include<iostream>
using namespace std;
int main()
{
    string str;
    int n_time;
    cout<<"Enter the statement that you want to print:"<<endl;
    cin>>str;
    cout<<"Enter the no.of times you want print:"<<endl;
    cin>>n_time;
    int i=1;
    while(i<=n_time)
    {
        cout<<str<<endl;
        i++;
    }
}
