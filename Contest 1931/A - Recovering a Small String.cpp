#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pr(a) cout << a << endl;

int main()
{

  int t;
  cin>>t;

  while (t--){

    int n;
    cin>>n;

    bool js = false;

    for (int i = 1; i<=26; i++){
      for (int j = 1; j<=26; j++){
        for (int k = 1; k<=26; k++){
          int sum = i + j + k;
          if (sum == n){
            string s = "";
            s.push_back(96+i);
            s.push_back(96+j);
            s.push_back(96+k);
            pr(s);
            js = true;
            break;
          }
        }
        if (js) break;
      }
      if (js) break;
    }

  
  }

  
  return 0;
}
