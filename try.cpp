#include <iostream>
#include <vector>
using namespace std;
int hcf(int a, int b)
{
    if(a==0||b==0)
     return 0;
    if(a==b)
     return a;
    if(a>b)
     return hcf(a-b, b);

     hcf(a,b-a);
}
int gcd(vector<int> v)
{
    int result=v[0];
    for(int i=1;i<v.size();i++)
    {
        result=hcf(result,v[i]);
    }
    return result;
}
int main()
{
    vector<int> v={16,48,56};
    int ans=gcd(v);
    
    cout<<ans;
}