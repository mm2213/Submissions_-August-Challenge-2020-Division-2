#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    unordered_map<char,int> pattern;
	    string S,P;
	    cin>>S>>P;
	    for(int I=0;I<P.length();I++){
	        pattern[P[I]]++;
	    }
	   
	   /* for(auto i:pattern)
	    cout<<"first "<<i.first<<" second "<<i.second<<endl;*/
	    
	    string newString="";
	    for(int I=0;I<S.length();I++){
	        if(pattern.find(S[I]) != pattern.end()){
	            auto it=pattern.find(S[I]);
	            if(it->second == 0){
	                newString+=S[I];
	            }
	            else{
	                pattern[S[I]]--;
	            }
	        }
	        else{
	            newString+=S[I];
	        }
	    }
	    
	   // cout<<"fds ";
	    
	    sort(newString.begin(),newString.end());
	    //cout<<" new string "<<newString<<endl;
	    //cout<<newString;
	    
	    string res="";
	    int flag=0;
	    string temp="";
	    int needToBreakOutside=0;
	    int J=0;
	    for(int I=0;I<newString.length();I++){
	        if(newString[I]-'a' > P[0]-'a' && flag==0){
	            //cout<<" in if "<<endl;
	            res+=P;
	            flag=1;
	        }
	        else if(newString[I]-'a' == P[J]-'a' && flag==0){
	            int internalFlag=0;
	            for(int KK=J+1;KK<P.length();KK++){
	                if(P[KK]-'a' == P[0]-'a'){
	                    continue;
	                }else if(P[KK]-'a' < P[0]-'a'){
	                    internalFlag=1;
	                    break;
	                }else{
	                    internalFlag=0;
	                    break;
	                }
	            }
	            if(internalFlag){
	                    flag=1;
	                    res+=P;
	            }
	               
	            
	           // cout<<" in equal to condition "<<endl;
	           /* string a1=P;
	            string a2="";
	            for(int Z=I+1;Z<newString.length();Z++){
	                a2+=newString[Z];
	            }
	            string t1=a1+a2;
	            string t2=a2+a1;
	            if(t1<t2)   res+=t1;
	            else    res+=t2;
	            
	            flag=1;
	            break;*/
	        }
	        //cout<<" just adding the string character "<<endl;
	        res+=newString[I];
	    }
	   // cout<<" out of main loop and flag value is "<<flag<<endl;
	    if(flag == 0) res+=P;
	    //sort(s.begin(),s.end());
	    cout<<res<<endl;
	   // cout<<res<<endl;
	}
	return 0;
}