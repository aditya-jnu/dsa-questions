#include<iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    int rev_num=0, remainder;
    while(n!=0)
    {
        remainder=n%10;
        rev_num=rev_num*10+remainder;
        n/=10;
    }
    cout<<rev_num;
}