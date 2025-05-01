///In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define mem(a,b) memset(a, b, sizeof(a))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();
      int t;
      cin>>t;
      while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        vector<ll>sum(n+1);
        for(ll i=0;i<n;i++) cin>>v[i];
        string s;
        cin>>s;
        for(ll i=1;i<=n;i++) sum[i]=sum[i-1]+v[i-1];
        ll l=0,r=n-1,ans=0;
        while(l<r){
            if(s[l]=='L' && s[r]=='R'){
                ans+=(sum[r+1]-sum[l]);
                l++,r--;
            }
            else{
            if(s[l]!='L') l++;
            if(s[r]!='R') r--;
            }
        }
        cout<<ans<<endl;
      }
    return 0;
}
