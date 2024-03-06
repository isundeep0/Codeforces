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
        set<int> s;
        int n;
        cin>>n;

        int arr[n];

        FOR(i, 0, n){
            cin>>arr[i];
        }

        int prefMex[n], suffMex[n];

        int val = 0;
        prefMex[0] = ((arr[0] == 0) ? (1, val = 1) : val);

        s.insert(arr[0]);


        FOR(i, 1, n){
            s.insert(arr[i]);
            if (prefMex[i-1] == arr[i]){
                while (s.find(val) != s.end()){
                    ++val;
                }
                prefMex[i] = val;
            }
            else{
                prefMex[i] = prefMex[i-1];
            }
        }

        s.clear();

        val = 0;
        suffMex[n-1] = ((arr[n-1] == 0) ? (1, val = 1) : val);


        s.insert(arr[n-1]);

        FORR(i, n-2){
            s.insert(arr[i]);
            if (suffMex[i+1] == arr[i]){
                while (s.find(val) != s.end()){
                    ++val;
                }
                suffMex[i] = val;
            }
            else{
                suffMex[i] = suffMex[i+1];
            }
        }

        bool ans = false;

        FOR(i, 0, n-1){
            if (prefMex[i] == suffMex[i+1]){
                pr(2);
                cout<<1<<" "<<i+1<<endl;
                cout<<i+2<<" "<<n<<endl;
                ans = true;
                break;
            }
        }

        if (!ans){
            pr(-1);
        }

    }

    return 0;
}

