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
    for (int i = 0; i<n; i++){
      int a;
      cin>>a;
      if (a < 0){
        a = -a;
      }
      sum += a;
    }
    pr(sum);
  }



  
  return 0;
}