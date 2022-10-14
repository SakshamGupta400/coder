#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    long long int N,S;
	    cin>>N;
	    long long int A[N];
	    vector <int> V,D;
	    for (int i = 0; i < N; i++) {
	        cin>>A[i];}
	    for (int i = 0; i < N/2; i++) {
	            long long int C= A[N-1-i]-A[i];
	           V.push_back(C);
	           D.push_back(C);}     
	      sort(D.begin(), D.end(), greater<int>());
	          S=*min_element(V.begin(), V.end());
	       if(V==D) { if (S>=0) {cout<<D[0]<<endl;}
	                 else {cout<<"-1"<<endl;}
	       }
	        else {cout<<"-1"<<endl;}
	    }
	
	return 0;
}
