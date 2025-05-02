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
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        vector<int>ans(2*n);
        for(int i=2;i<=2*n;i++){
            int l=0,r=n-1,cnt=0;
            while(l<r){
                if(v[l]+v[r]==i){
                    cnt++;
                    l++,r--;
                }
                else if(v[l]+v[r]>i) r--;
                else l++;
            }
            ans.push_back(cnt);
        }
        cout<<*max_element(ans.begin(),ans.end())<<endl;
      }
    return 0;
}
