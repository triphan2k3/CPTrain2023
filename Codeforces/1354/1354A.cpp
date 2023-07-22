#include <bits/stdc++.h>
#define TASK "1354A"
#define pb push_back
#define ii pair<int,int>
#define iii pair<ii,int>
#define ll long long
#define F first
#define S second
#define FOR(i, a, b) for (int i=a; i<=b; i++)
#define FOr(i, a, b) for (int i=a; i<b ; i++)
#define FOD(i, a, b) for (int i=a; i>=b; i--)
#define FOd(i, a, b) for (int i=a; i>b ; i--)
using namespace std;

const int N=(int)1e6+7;
const int MOD=(int)1e9+7;
const ll INF=(ll)1e18+7;
int main() {
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        long long a,b,c,d;
        cin >> a >> b >> c >> d;
        if (b>=a) {
            cout << b << "\n";
            continue;
        }
        if (c<=d) {
            cout << "-1\n";
            continue;
        }
        long long time = (a-b-1)/(c-d) + 1;
        long long ans = b + time*c;
        cout << ans << "\n";
    }
}
