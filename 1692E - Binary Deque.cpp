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
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        if(sum==k) cout<<0<<endl;
        else if(sum<k) cout<<-1<<endl;
        else{
            ll l=0,r=0,ans=INT_MAX;
            sum=0;
            while(r<n){
                sum+=v[r];
                if(sum==k){
                    ans=min(ans,n-(r-l+1));
                }
                if(sum>k){
                    sum-=v[l];
                    l++;
                }
                r++;
            }
            cout<<ans<<endl;
        }
      }
    return 0;
}
