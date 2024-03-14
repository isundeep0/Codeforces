//
// Created by isund on 14-03-2024.
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
#define ps(a) cout << a<<" ";
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
        int n, m;
        string s;
        cin>>n>>m;

        ll arr[n];

        FOR(i, 0, n){
            cin>>arr[i];
        }
        cin>>s;



        int l = 0, r = n-1;

        int i = 0;

        while (l<=r && i < s.size()){
            if (l == r){
                i = l;
                break;
            }
            if (s[i] == 'L'){
                ++l;
            }
            else{
                --r;
            }
            ++i;
        }

        int j = n-2;
        l = i, r = i;
        ll prod = arr[i];
        vector<int> v;
        while (j>=0){
            v.pb(prod%m);
            if (s[j] == 'L'){
                --l;
                prod = (prod%m*arr[l]%m)%m;
            }
            else{
                ++r;
                prod = ((prod%m)*(arr[r]%m))%m;
            }
            --j;
        }
        v.pb(prod%m);

        FORR(i, v.size()-1){
            ps(v[i]);
        }

        cout<<"\n";


    }

    return 0;
}

