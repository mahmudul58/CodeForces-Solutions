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
        string s,t;
        cin>>s;
        t=s;
        sort(t.begin(),t.end());
        int sz=unique(t.begin(),t.end())-t.begin();
        vector<int>ans;
        int cnt=0;
        for(int i=0;i<sz;i++){
            int l=0,r=n-1;
            bool check=true;
            while(l<r){
                if(s[l] == s[r]){
                    l++,r--;
                }
                else if(s[l] != s[r]){
                    if(s[l]==t[i]) {
                        l++;
                        cnt++;
                    }
                    else if(s[r]==t[i]){
                        r--;
                        cnt++;
                    }
                    else {
                        check=false;
                        break;
                    }
                }
            }
            if(check) ans.push_back(cnt);
            cnt=0;
        }
        if(ans.empty()) cout<<-1<<endl;
        else{
            sort(ans.begin(),ans.end());
            cout<<ans[0]<<endl;
        }
      }
    return 0;
}
