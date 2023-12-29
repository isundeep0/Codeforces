#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pr(a) cout<<a<<endl;


int main() {

  int t;

  cin>>t;

  while (t--){
    string ans = "";
    for (int j = 0; j<3; j++){
      string s;
      cin>>s;
      sort(s.begin(), s.end());
      if (s[0] == '?'){
        if (s[1] == 'A' && s[2] == 'B'){
          ans = "C";
        }
        else if (s[1] == 'B' && s[2] == 'C'){
          ans = "A";
        }
        else{
          ans = "B";
        }
      }
    }

    cout<<ans<<endl;

  }
 
  
  return 0; 

}
