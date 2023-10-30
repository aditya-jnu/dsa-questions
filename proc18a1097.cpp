#include <iostream>
#include <vector>
using namespace std;

int main() {
  // 	 INPUT FOR NO. OF TEST CASES
	int t; cin>>t;
	for(int i=1;i<=t;i++)
	{
	   // TAKING INPUT OF REQUIRED VARIABLES
	    int n, k; cin>>n; cin>>k;
	    vector<int> v; int a;
	    for(int x=1;x<=n;x++)
	    {
	     cin>>a;
	     v.push_back(a);
	    }
	    
	    // HERE BEGINS THE ALGORITHM
	    int ans=0;
    	for(int j=0;j<n;j++)
	    {
	        int p=j;   int tempSum=0, count=1;
	     while(count<=k)
	     {
	      if(p>=n)
	       break;//this line controls so that it doesn't go outside teh vector size
	      tempSum+=v[p];
	      p++;
	      count++;
         }
         // UPDATING FINAL ANSWER EVERYTIME IF REQUIRED
	     if(tempSum>ans)
	       ans=tempSum;
	     
	    } 
	cout<<ans<<endl;
	}
	
	
	return 0;
}
