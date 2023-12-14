#include <bits/stdc++.h>
using namespace std;

int main() {

  string s1, s2;
  cin>>s1>>s2;

  int h1, m1, h2, m2;

  h1 = stoi(s1.substr(0, 2));
  m1 = stoi(s1.substr(3, 2));
  h2 = stoi(s2.substr(0, 2));
  m2 = stoi(s2.substr(3, 2));

  int minutes = 0;
  int i = h1, j = m1;

  while (i != h2 || j != m2){
    if (j == 59){
      j = 0;
      ++i;
    }
    else{
      ++j;
    }
    ++minutes;
  }

  minutes /= 2;

  int h3 = h1 + minutes/60;
  if (m1 + minutes%60 >= 60){
    ++h3;
  }
  int m3 = (m1 + minutes%60)%60;

  cout<<setw(2)<<setfill('0')<<h3<<":"<<setw(2)<<setfill('0')<<m3<<endl;

  return 0;
}
