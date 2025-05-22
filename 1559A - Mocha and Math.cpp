#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    int mx_bit=0;
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	        mx_bit=max(mx_bit,__lg(v[i]));
	    }
	    int sz=mx_bit+1;
	    vector<int>bit(sz);
	    for(int i=0;i<n;i++){
	        for(int k=mx_bit;k>=0;k--){
	            if((v[i]>>k)&1) bit[k]++;
	        }
	    }
	    int ans=0;
	    for(int i=0;i<sz;i++){
	        if(bit[i]==n) ans+=(1<<i);
	    }
	    cout<<ans<<endl;
}
}
