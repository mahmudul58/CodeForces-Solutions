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
        int mat[n+1][n+1];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>mat[i][j];
                if(mat[i][j]>=0) mat[i][j]=0;
                else mat[i][j]*=-1;
            }
        }

        int ans=0;

        for(int i=1;i<=n;i++){
            int k=1,l=i,val=INT_MIN;
            while(k<=n && l<=n){
                val=max(val,mat[k][l]);
                k++,l++;
                
            }
            ans+=val;
        }

        for(int i=2;i<=n;i++){
            int k=1,l=i,val=INT_MIN;
            while(k<=n && l<=n){
                val=max(val,mat[l][k]);
                k++,l++;
                
            }
            ans+=val;
        }
        cout<<ans<<endl;

      }
    return 0;
}
