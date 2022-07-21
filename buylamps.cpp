// THIS FIRST CODE IS NOT WORKED IN CONTEST DUE TO TIME LIMITE ERROR

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,k,x,y;
	   // cin>>n>>k>>x>>y;
	   scanf("%d",&n);
	   scanf("%d",&k);
	   scanf("%d",&x);
	   scanf("%d",&y);
	    
	    int res =0 , min=999;
	    int temp = n;
	    while((n-k)>=0){
	        
	    
	        res = (k*x)+((n-k)*y);
	        
	        k++;
	        temp--;
	        if(min>res)
	        {
	            min = res;
	        }
	        
	    }
	    
	   // cout<<min<<endl;
	   printf("%d\n",min);
	}
	return 0;
}


//SECOND CODE WILL WORK AS PER SOLUTION...

#include <iostream>
#include <cmath>
using namespace std;
	void solve(){
	    int n,k,x,y;
	    cin>>n>>k>>x>>y;
	    int cost = k*x;
	    
	    cost += min(x,y)*(n-k);
	    
	    cout<<cost<<endl;
	}

int main() {
	// your code goes here
	
	
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
	return 0;
}

