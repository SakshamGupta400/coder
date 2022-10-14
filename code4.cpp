#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int A[N],B[11];
	    for (int i = 0; i < 11; i++) { B[i]=0;}
	    
	    for (int i = 0; i < N; i++) {
	        cin>>A[i];
	        B[A[i]]++;}
	        sort(B, B + 11, greater<int>());
	        int C=B[0];
	         N=N-C;
	        cout<<N<<endl;
	}
	return 0;
}
