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
        string s;
        cin>>s;
        reverse(s.begin(),s.end());
        int r=0;
        string ans;
        while(r<n){
            if(s[r]=='0'){
                r++;
                string str;
                int q=2;
            while(q--){
                str+=s[r];
                r++;
            }
                reverse(str.begin(),str.end());
                int a=stoi(str) - 1;
                ans.push_back(char(a+'a'));
                str={};
            }
            else{
                int a=s[r]-'0' -1 ;
                ans.push_back(a+'a');
                r++;
            }
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
      }
    return 0;
}
