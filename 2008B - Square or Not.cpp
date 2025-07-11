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
        int sqr=ceil(sqrt(n));
        if(n==sqr*sqr){
            int zeros=0;
            for(int i=0;i<n;i++){
                if(s[i]=='0') zeros++;
            } 
            int noOFzero=(sqr-2)*(sqr-2);
            if(noOFzero==zeros) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else cout<<"No"<<endl;
      }
    return 0;
}
