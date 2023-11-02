#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
vector<int> v={16,10,9,25,2,16,10,9};
  sort(v.begin(), v.end());
int count=0;
for(int i=0;i<v.size();i++)
{
    while(i<v.size()-1 && v[i]==v[i+1])
     i++;
    count++;
}
cout<<count<<endl;
}