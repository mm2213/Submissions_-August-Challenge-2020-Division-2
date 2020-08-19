#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int pc,pr;
	    cin>>pc>>pr;
	    int t1=(pc/9);
	    int t2=(pr/9);
	    if(pc%9!=0)   t1++;
	    if(pr%9!=0)   t2++;
	    if(t1==t2){
	        cout<<"1 "<<t2<<endl;
	    }
	    else{
	        if(t1<t2){
	            cout<<"0 "<<t1<<endl;
	        }
	        else{
	            cout<<"1 "<<t2<<endl;
	        }
	    }
	}
	return 0;
}
