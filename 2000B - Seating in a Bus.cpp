///In the name of ALLAH
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define mem(a, b) memset(a, b, sizeof(a))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        bool arr[n + 5];
        mem(arr, false);
        arr[v[0]] = true;
        bool check = true;
        for (int i = 1; i < n; i++) {
            if (v[i] == n) {
                if (arr[v[i] - 1] == true) arr[v[i]] = true;
                else {
                    check = false;
                    break;
                }
            }
            else if (v[i] == 1) {
                if (arr[v[i] + 1] == true) arr[v[i]] = true;
                else {
                    check = false;
                    break;
                }
            }
            else {
                if (arr[v[i] + 1] == true || arr[v[i] - 1] == true) arr[v[i]] = true;
                else {
                    check = false;
                    break;
                }
            }
        }
        if (check) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
