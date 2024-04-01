#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define f first
#define s second
#define pb push_back
#define FOR(i, a, n) for (int i = a; i<n; i++)
#define pr(a) cout << a << endl;
#define in(a) cin>>a;
#define ps(a) cout << a << " ";
#define all(v) v.begin(), v.end()
#define printVector(v) copy(all(v), ostream_iterator<int>(cout, " "))

void init() {
#ifndef ONLINE_JUDGE
    freopen("ShitP/input.txt", "r", stdin);
    freopen("ShitP/output.txt", "w", stdout);
#endif
}

ll exponent(ll base, ll power){
    ll ans = 1;
    FOR(i, 0, power){
        ans = ans*base;
    }
    return ans;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    init();

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int ans = log(n)/log(2);

        pr(exponent(2, ans));



    }

    return 0;
}

