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
        int l,r;
        cin>>l>>r;
        int cnt=0;
        for(int i=l;i<=r;i+=cnt){
            cnt++;
        }
        cout<<cnt<<endl;
      }
    return 0;
}
