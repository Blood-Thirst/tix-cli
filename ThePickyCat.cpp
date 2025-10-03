#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    int cnt = 0;
	    int cnt1 = 0;
	    for(int i=1;i<n;i++){
	        if(abs(v[0])>abs(v[i])){
	            cnt++;
	        }
	        else{
	            cnt1++;
	        }
	    }
	    int left = (n-1)/2;
	    int right = (n-1)/2;
	    if(n%2==0)right++;
	    
	    if(cnt<=left || right == cnt ){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	}

}
