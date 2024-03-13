//
// Created by isund on 13-03-2024.
//


//
// Created by isund on 06-03-2024.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define f first
#define s second
#define pb push_back
#define FOR(i, a, n) for (int i = a; i<n; i++)
#define FORR(i, n) for (int i = n; i>=0; i--)
#define pr(a) cout << a << endl;
#define in(a) cin>>a;
#define ps(a) cout << a;
#define all(v) v.begin(), v.end()
#define printVector(v) copy(all(v), ostream_iterator<int>(cout, " ")), cout<<"\n"
int mod = 1e9 + 7;

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
    cin>>t;

    while(t--){
        int n, k;
        string s;
        cin>>n>>k>>s;

        int ans = 0;

        FOR(i, 0, (k&1 ? (k/2 + 1) : k/2)){
            vector<int> cnt(26, 0);
            for (int st = 0; st+k-1<n; st += k){
                int i1 = st+i;
                int i2 = st+k-i-1;
                if (i1 == i2){
                    cnt[s[i1]-'a']++;
                }
                else{
                    cnt[s[i1]-'a']++;
                    cnt[s[i2]-'a']++;
                }
            }
            if (k&1 && (i == (k/2))){
                int req = (n/k);
                int mx = *max_element(all(cnt));
                ans += req-mx;
            }
            else{
                int req = 2*(n/k);
                int mx = *max_element(all(cnt));
                ans += req-mx;
            }
        }

        pr(ans);


    }

    return 0;
}

