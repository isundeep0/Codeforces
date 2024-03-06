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
#define printVector(v) copy(all(v), ostream_iterator<string>(cout, " "))

void init() {
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("ShitP/input.txt", "r", stdin);
    freopen("ShitP/output.txt", "w", stdout);
#endif
}


int main() {

    init();

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin>>n>>s;

        string rs = s;

        reverse(rs.begin(), rs.end());

        int sz = s.size()-1;

        if (s <= rs){
            pr(s);
        }
        else{
            pr(rs+s);
        }

    }

    return 0;
}

