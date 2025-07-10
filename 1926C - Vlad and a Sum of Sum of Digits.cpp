///In the name of ALLAH
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define mem(a,b) memset(a, b, sizeof(a))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const int mx = 2 * 10e5;
int dp[mx];
int main() {
    optimize();
    int t;
    cin >> t;
    int sum = 0;
    for (int i = 1; i <= mx; i++) {
        int dig = i;
        while (dig > 0) {
            sum += dig % 10;
            dig /= 10;
        }
        dp[i] = sum;
    }
    while (t--) {
        int q;
        cin >> q;
        cout << dp[q] << endl;
    }
    return 0;
}
