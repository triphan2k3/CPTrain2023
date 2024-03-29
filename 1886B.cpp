#include <bits/stdc++.h>
#define TASK ""
#define pb push_back
#define F first
#define S second
#define FOR(i, a, b) for (int i=a; i<=b; i++)
#define FOr(i, a, b) for (int i=a; i<b ; i++)
#define FOD(i, a, b) for (int i=a; i>=b; i--)
#define FOd(i, a, b) for (int i=a; i>b ; i--)
#define all(a) a.begin(), a.end()
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
typedef vector<int> vi;

const int N=1e6+7;
const int MOD=1e9+7;
const ll INF=(ll)1e18+7;

double sqr(double x) {
    return x * x;
}

double dis(pair<double, double> A, pair<double, double> B) {
    return sqrt(sqr(A.F - B.F) + sqr(A.S - B.S));
}

int main() {
    #ifdef TriPhan
        freopen("TEST.INP","r",stdin);
        freopen("TEST.OUT","w",stdout);
    #else
        ios_base::sync_with_stdio(0);
        cin.tie(0);
    #endif
    int t; cin >> t; 
    while (t--) {
        pair<double, double> point[3];
        for (int i = 0; i < 3; i++) cin >> point[i].F >> point[i].S;
        pair<double, double> O = {0,0}, P = point[0], A = point[1], B = point[2];
        // OAP
        double ans1 = max(dis(O, A), dis(A, P));
        // OBP
        double ans2 = max(dis(O, B), dis(B, P));
        // OABP
        double ans3 = max({dis(A, B)/2, min(dis(O, A), dis(O, B)), min(dis(A, P), dis(B, P))});
        cout << setprecision(7) << fixed << min({ans1, ans2, ans3}) << "\n";

    }
}