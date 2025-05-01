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
        string s="aeiou";
        string p ;
        if(n<5) p.insert(0,s,0,n);
        else{
            for(int i=0;i<n/5;i++){
                p+=s;
            }
            if(n%5 != 0){
                int pos=n%5;
                p.insert(0,s,0,pos);
            }
        }
        sort(p.begin(),p.end());
        cout<<p<<endl;
      }
    return 0;
}
