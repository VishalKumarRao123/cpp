#include <bits/stdc++.h>
using namespace std;
//this Node will contain ,character ,character frequency , left link,right link
class Node
{
public:
   char ch;
   int freq;
   struct Node *left;
   struct Node *right;
   Node(char c, int f, Node *l, Node *r)
   {
      ch = c;
      freq = f;
      left = l;
      right = r;
   }
};
//for comparision object to be used to order the heap
struct comp
{
   bool operator()(Node *l, Node *r)
   {
      // highest priority item has lowest frequency
      return l->freq > r->freq;
   }
};
void decode(Node *mainroot, Node *root, string str, int i)
{

   if (i <= str.size())
   {
      // cout<<"I am here";
      if (!root->left && !root->right)
      {
         cout << root->ch;
         root = mainroot;
      }
      //is next character is '0' then pointer will move to left otherwise right
      if (str[i] == '0')
         decode(mainroot, root->left, str, i + 1);
      else
         decode(mainroot, root->right, str, i + 1);
   }
}
void encode(Node *root, unordered_map<char, string> &ucs, string str)
{
   if (!root)
   {
      return;
   }
   if (!root->left && !root->right)
   {
      ucs[root->ch] = str;
      return;
   }

   encode(root->left, ucs, str + '0');
   encode(root->right, ucs, str + '1');
   //str.pop_back();
}

void buildTree(string str)
{
   //unordered_map is used to store charater along with his frequency
   unordered_map<char, int> um;
   for (auto ch : str)
   {
      um[ch]++;
   }
   /*using this priority queue to store Node(node will contain 
    character frequency ,character ,left link,right link and will be pop in 
    increasing order accroging to character frequency)*/
   priority_queue<Node *, vector<Node *>, comp> pq;
   for (auto val : um)
   {
      //cout<<val.first<<" "<<val.second<<endl;
      pq.push(new Node(val.first, val.second, NULL, NULL));
   }

   priority_queue<Node *, vector<Node *>, comp> tpq = pq;
   cout << "\n\ncharacter With their Frequency\n\n";
   while (!tpq.empty())
   {
      cout << tpq.top()->ch << " " << tpq.top()->freq << endl;
      tpq.pop();
   }
   Node *root = NULL;
   cout << "\n\nTree record \n\n";
   while (pq.size() > 1)
   {
      Node *lnode = pq.top();
      cout << lnode->freq << " " << lnode->ch << " is popped " << endl;
      pq.pop();
      Node *rnode = pq.top();
      cout << rnode->freq << " " << rnode->ch << " is popped " << endl;
      pq.pop();
      Node *temp = new Node('~', lnode->freq + rnode->freq, lnode, rnode);
      root = temp;
      pq.push(temp);
   }
   cout << endl;
   //i m using this map for store bits corresponding to character that is created by Tree
   unordered_map<char, string> ucs;
   /*call "encode" function to encode characters in bits*/
   encode(root, ucs, "");
   cout << "\nAfter Encoding corresponding bits of characters\n\n";
   for (auto val : ucs)
   {
      cout << val.first << " " << val.second << endl;
   }
   //using this string s to store store bits accroding to sequenced character
   string s = "";
   for (auto val : str)
   {
      s += ucs[val];
   }
   cout << "\n\nEncoded String is :-\n\n"
        << s;
   Node *tr = root;
   /*call "decode" function to decode bits to string */
   cout << "\n\nDecoded String is :-\n\n";
   decode(tr, tr, s, 0);
}
void normalencoding(string str)
{
   cout << "\n\n\nWithout HUffMan Encoding : -\n\n";
   for (int i = 0; i < str.size(); i++)
   {
      //binary(str[i],s);
      int num = str[i];
      while (num)
      {
         cout << (num & 1);
         num >>= 1;
      }
   }
}
int main()
{
   string str = "I have done this tiny-mini project dated 03 sept 2021 time taken to complete this project is 12:44AM-----5:34AM";
   //this "builtTree" function will create a tree by using two way optimized merging (HUffman Concept)
   normalencoding(str);
   buildTree(str);
   cout << "\n\nGiven String is :--\n\n"
        << str << endl;
   return 0;
}

/*
Without HUffMan Encoding : -

100100100000100010111000011011011110100110111101101101101110010110
111011100101100000000111100110000011100111101001100001110010011011
101100000100101111111011000001110001100111111101101010111010011110
001100101110110101101011111001100101110000011011001

character With their Frequency

l 1
k 1
v 1
I 1
5 1
y 1
0 2
j 2
A 2
r 2
M 2
: 2
1 2
3 2
2 3
4 3
a 3
m 3
c 3
d 3
h 3
n 4
p 4
s 4
o 5
- 6
i 7
e 10
t 11
  17


Tree record

1 l is popped
1 k is popped
1 v is popped
1 I is popped
1 5 is popped
1 y is popped
2 0 is popped
2 ~ is popped
2 ~ is popped
2 j is popped
2 ~ is popped
2 A is popped
2 r is popped
2 M is popped
2 : is popped
2 1 is popped
2 3 is popped
3 2 is popped
3 a is popped
3 c is popped
3 m is popped
3 4 is popped
3 d is popped
3 h is popped
4 ~ is popped
4 p is popped
4 n is popped
4 ~ is popped
4 ~ is popped
4 s is popped
4 ~ is popped
4 ~ is popped
5 ~ is popped
5 o is popped
6 ~ is popped
6 - is popped
6 ~ is popped
6 ~ is popped
7 i is popped
8 ~ is popped
8 ~ is popped
8 ~ is popped
8 ~ is popped
10 ~ is popped
10 e is popped
11 t is popped
12 ~ is popped
12 ~ is popped
15 ~ is popped
16 ~ is popped
17   is popped
18 ~ is popped
21 ~ is popped
24 ~ is popped
31 ~ is popped
35 ~ is popped
45 ~ is popped
66 ~ is popped


After Encoding corresponding bits of chara

o 11111
3 111100
M 111011
r 111010
n 11100
  110
h 01101
- 0111
d 01100
5 1010100
2 111101
a 01010
e 000
: 100100
i 1000
t 001
m 01000
c 01011
4 01001
y 1010101
1 100101
v 1011000
s 10011
0 101000
l 1010010
k 1010011
p 10111
A 101011
I 1011001
j 101101


Encoded String is :-

10110011100110101010101100000011001100111100001011001110011000
10100010000110011010101100011111111001011111110100010111101001
00100101001101011111011011101110111011101111

Decoded String is :-

I have done this tiny-mini project dated 0ted 03 sept 2021 time taken to complete this project is 12:44AM-----5:34AM

Given String is :--

I have done this tiny-mini project dated 03 sept 2021 time taken to complete this project is 12:44AM-----5:34AM
*/