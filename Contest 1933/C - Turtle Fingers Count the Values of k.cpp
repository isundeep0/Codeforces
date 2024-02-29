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
    while (power--){
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
        int a, b, l;
        cin >> a >> b >> l;

        set<int> st;

        int x = log(l)/log(a) + 1;
        int y = log(l)/log(b) + 1;

        int ans = 0;

        for (int i = 0; i<=x; i++){
            for (int j = 0; j<=y; j++){
                ll val = exponent(a, i)* exponent(b, j);
                if ((val <= l) && (l%val == 0) && (st.find(l/val) == st.end())){
                    ++ans;
                    st.insert(l/val);
                }
            }
        }


        pr(ans);


    }


    return 0;
}

