//
// Created by isund on 17-04-2024.
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
#define ps(a) cout <<a<<" ";
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


int f(int i, int j, string s1, string s2){

    if (j<0) return 1;

    if (i<0) return 0;

    if (s1[i] == s2[j]){
        return f(i-1, j-1, s1, s2) + f(i-1, j, s1, s2);
    }

    return f(i-1, j, s1, s2);

}


int main() {

    init();

    string s1;

    cin>>s1;

    string s2 = "QAQ";

    int n = s1.size();

    int ans = f(n-1, 2, s1, s2);

//    QAQAQYSYIOIWIN    QAQ
//        i               j

    pr(ans);


    return 0;
}

