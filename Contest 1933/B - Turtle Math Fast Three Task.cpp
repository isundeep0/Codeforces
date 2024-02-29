#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pr(a) cout << a << endl;
#define ps(a) cout << a << " ";
#define all(v) v.begin(), v.end()
#define printVector(v) copy(all(v), ostream_iterator<int>(cout, " "))

vector<int> a;
vector<int> b;


bool cmp(pair<int, int>& a, pair<int, int>& b){
  if (a.second < b.second){
    return true;
  }
  return false;
}

int main()
{

  int t;
  cin>>t;

  while (t--){
    int n;
    cin>>n;
    int sum = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i<n; i++){
      int a;
      cin>>a;
      if (a%3 == 1){
        mp[1] = 10;
      }
      sum += a;
    }

    if (sum%3==0){
      pr(0);
      continue;
    }

    if (sum%3 == 2){
      pr(1);
      continue;
    }

    if (mp.count(1)){
      pr(1);
    }
    else{
      pr(2);
    }





  }



  
  return 0;
}