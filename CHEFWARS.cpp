// edited
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int h,p;
	    cin>>h>>p;
	    if(h==1 && p==1){
	        cout<<"1"<<endl;
	    }
	    else{
	    if(h%2==1)  h++;
	    int temp=h/2;
	    if(temp==p){
	        cout<<"1"<<endl;
	    }
	    else{
	    if(p>temp)  cout<<"1"<<endl;
	    else    cout<<"0"<<endl;
	    }
	}
	}
	return 0;
}
