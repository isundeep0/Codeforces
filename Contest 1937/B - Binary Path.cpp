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
#ifndef ONLINE_JUDGE
    freopen("ShitP/input.txt", "r", stdin);
    freopen("ShitP/output.txt", "w", stdout);
#endif
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

        string one, two;
        cin>>one>>two;

        vector<string> v = {one, two};

        string tmp = string(1, v[0][0]);

        int counter = 1;

        FOR(i, 0, n){
            if (i+1 < n && v[0][i+1] == '0' && v[1][i] == '1'){
                tmp = tmp + string(1, '0');
                counter = 1;
            }
            else if ((i+1 < n && v[0][i+1] == '1' && v[1][i] == '0') || (i+1 == n)){
                string kk = tmp + two.substr(i, n-i);
                tmp = kk;
                break;
            }
            else if (i+1 < n && v[0][i+1] == '1' && v[1][i] == '1'){
                tmp = tmp + string(1, '1');
                ++counter;
            }
            else if (i+1 < n && v[0][i+1] == '0' && v[1][i] == '0') {
                tmp = tmp + string(1, '0');
                ++counter;
            }

        }



        pr(tmp);
        pr(counter);

    }

    return 0;
}

