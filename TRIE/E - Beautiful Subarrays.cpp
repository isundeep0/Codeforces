#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pr(a) cout << a << endl;


class Node{
public:
  Node* children[2];
  int cnt[2];
  Node(){
    memset(children, 0, sizeof(children));
    cnt[0] = 0;
    cnt[1] = 0;
  }
};

class TrieNode{
public:

  Node* root;

  TrieNode(){
    root = new Node();
  }

  void insert(int x){
    Node* node = root;
    for (int i = 31; i>=0; i--){
      int bit = ((x>>i)&1);
      if (!node->children[bit]){
        node->children[bit] = new Node();
      }
      node->cnt[bit]++;
      node = node->children[bit];
    }
  }

  int subArrayCount(int x, int k){
    Node* node = root;
    int big = 0, equal = 0;
    for (int i = 31; i>=0; i--){
      int xbit = ((x>>i)&1);
      int kbit = ((k>>i)&1);

      int bit = xbit^kbit;

      if (!kbit){
        big += node->cnt[xbit^1];
      }

      if (node->children[bit]){
        equal = node->cnt[bit];
        node = node->children[bit];
      }
      else{
        equal = 0;
        break;
      }

    }
    return (equal + big);
  }

  

};


int main()
{
  int n, k;
  cin>>n>>k;

  TrieNode* root = new TrieNode();

  root->insert(0);

  ll ansCnt = 0;

  int prefSum = 0;

  for (int i = 0; i<n; i++){
    int a;
    cin>>a;
    prefSum = prefSum ^ a;
    
    ll m = 1LL*root->subArrayCount(prefSum, k);

    ansCnt += m;
    root->insert(prefSum);

  }

  pr(ansCnt);



  return 0;
}