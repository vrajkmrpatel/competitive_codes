#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s[n];
	    int st_cn =0,lt_cn=0;
	    for(int i=0; i<n; i++)
	    {
	        cin>>s[i];
	        if(s[i] == "START38")
	        {
	            st_cn++;
	        }
	        else{
	            lt_cn++;
	        }
	    }
	    cout<<st_cn<<" "<<lt_cn<<endl;
	}
	return 0;
}
