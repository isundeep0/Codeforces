
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

bool primeFactorization(vector<int>& v, int n){
    int k = n;
    int j = 1;
    while (k != 1 && v[j] <= k){
        if (k%v[j] == 0){
            k /= v[j];
        }
        else{
            ++j;
        }
    }
    return (k == 1);
}


int main() {

    init();

    int t;
    cin>>t;

    vector<int> v = {1, 10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111, 10000, 10001, 10010, 10011, 10100, 10101, 10110, 10111, 11000, 11001, 11010, 11011, 11100, 11101, 11110, 11111, 100000};

    while(t--){
        int n;
        cin>>n;


        unordered_map<int, int> mp;

        for (int i : v){
            mp[i] = true;
        }

        bool ans = primeFactorization(v, n);
        if (mp[n]){
            ans = true;
        }

        if (ans){
            pr("YES");
        }
        else{
            pr("NO");
        }





    }

    return 0;
}

