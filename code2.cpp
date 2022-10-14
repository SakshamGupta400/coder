#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    long long int N,A=0,B=0;
	    cin>>N;
	    string S;
	    cin>>S;
	    for (int i = 0; i < N; i++) { 
	        if(S[i]-'0'==1) {B++;}
	        else  {A++;}
	    }
	    if(N%2==0) {
	        if (A%2==0) {cout<<"YES"<<endl;}
	        else  {cout<<"NO"<<endl;}
	    }
	    else { cout<<"YES"<<endl;}
	}
	return 0;
}
