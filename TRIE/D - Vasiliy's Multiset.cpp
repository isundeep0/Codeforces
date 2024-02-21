#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pr(a) cout << a << endl;


class Node{
public:
    Node* children[2];
    int zeroCnt;
    int oneCount;
    Node(){
      memset(children, 0, sizeof(children));
      zeroCnt = 0;
      oneCount = 0;
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
      if (bit){
        node->oneCount++;
      } 
      else{
        node->zeroCnt++;
      }
      node = node->children[bit];
    }
  }

  void remove(int x){
    Node* node = root;
    for (int i = 31; i>=0; i--){
      int bit = ((x>>i)&1);

      if (bit){
        node->oneCount--;
        if (!node->oneCount){
          node->children[bit] = nullptr;
          break;
        }
      }
      else{
        node->zeroCnt--;
        if (!node->zeroCnt){
          node->children[bit] = nullptr;
          break;
        }
      }
      node = node->children[bit];
    }
  }

  int maximumXOR(int x){
    Node* node = root;
    int ans = 0;
    for (int i = 31; i>=0; i--){
      int bit = ((x>>i)&1);
      if (node->children[1-bit]){
        ans |= (1<<i);
        node = node->children[1-bit];
      }
      else{
        node = node->children[bit];
      }
    }
    return ans;
  }

};

int main()
{

  TrieNode* root = new TrieNode();

  root->insert(0);

  int t;

  cin>>t;

  while (t--){
    char c;
    int x;

    cin>>c>>x;

    if (c == '+'){
      root->insert(x);
    }
    else if (c == '-'){
      root->remove(x);
    }
    else{
      int xxor = root->maximumXOR(x);
      pr(xxor);
    }

  }

  return 0;
}