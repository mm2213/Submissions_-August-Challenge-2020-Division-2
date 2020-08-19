#include <bits/stdc++.h>
#define LOL 1000000001
using namespace std;
int main() {
	long t;
	cin>>t;
	while(t--){
	    long n,p;
	    cin>>n>>p;
	    long res=LOL;
	    long a[n];
	    for(long i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(long i=0;i<n;i++){
	        if(a[i]<=p && p%a[i]==0){
	           if(p/a[i]<res)
	           res=a[i];
	        }
	    }
	    if(res==LOL)    cout<<"-1"<<endl;
	    else    cout<<res<<endl;
	    
	}
	return 0;
}
