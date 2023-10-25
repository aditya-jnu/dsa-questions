#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t; cin>>t;
	for(int i=1;i<=t;i++)
	{
	    int n, pNo, sc, sum=0; cin>>n; 
		vector<int> score(11,0); 
	    for(int i=0;i<n;i++)
	    {
	       cin>>pNo; cin>>sc;
	       score[pNo-1]=max(sc,score[pNo-1]);
	    }
	  /*Getting SUM*/

    for(int i=0;i<8;i++)
      sum+=score[i];  
    
    cout<<sum<<endl;
	}
	return 0;
}
