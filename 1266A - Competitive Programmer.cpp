#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin>>n;

  while (n--){
    string s;
    cin>>s;

    int cntZ = 0;
    int cntE = 0;
    int div = 0;

    for (char c : s){
      if (c == '0'){
        ++cntZ;
      }
      else if ((c-'0')%2 == 0){
        ++cntE;
      }
      div += (c-'0');
    }

    if ((div%3 == 0 && cntZ >= 2) || (div%3 == 0 && cntZ == 1 && cntE >= 1) || (cntZ == s.size())){
      cout<<"red"<<endl;
    }
    else{
      cout<<"cyan"<<endl;
    }

  }
    
  return 0;
}

