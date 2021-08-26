 /*By Saksham Awasthi*/
               
#include<bits/stdc++.h>
// using namespace std;
               
               
#define ll 				long long int
#define ld				long double
#define mod             1000000007
#define inf             1e18
		

#define pb 				push_back
#define vi              vector<ll>
#define vs				vector<string>
#define pii             pair<ll,ll>
#define ump				unordered_map
#define mp 				make_pair
#define pq_max          priority_queue<ll>
#define pq_min          priority_queue<ll,vi,greater<ll> >
#define all(n) 			n.begin(),n.end()
#define ff 				first
#define ss 				second
#define mid(l,r)        (l+(r-l)/2)
#define bitc(n) 		__builtin_popcount(n)
#define loop(i,a,b) 	for(int i=(a);i<=(b);i++)
#define looprev(i,a,b) 	for(int i=(a);i>=(b);i--)
#define iter(container, it) for(__typeof(container.begin()) it = container.begin(); it != container.end(); it++);
#define logarr(arr,a,b)	for(int z=(a);z<=(b);z++) cout<<(arr[z]);
 
 
const int N=1e5+2 , MOD =1e9+7;
               
               
signed main()
{
 std::list<int> l1;////made a list
 std::cout<<l1.size()<<"\n";
 std::list<int> l2(4);//this would contain the size of four
 std::cout<<l2.size()<<"\n";
 std::list<int> l3(l2.begin(),l2.end());///this would make a size of 5 with each elemnt as -1
 std::cout<<l3.size()<<"\n";
 std::list<int> l4(l3);

 l4.push_back(10);
 l4.push_front(20);
 l4.push_front(30);
 l4.push_front(40);
 l4.pop_front();
 l4.pop_front();


  std::list<int> a,b;
  a.push_back(10);
  a.push_back(20);
  a.push_back(30);
  a.push_back(40);
  b.push_back(50);
  b.push_back(60);
  b.push_back(70);
  b.push_back(80);

  for (auto &it : a)
      std::cout << it << " ";

  std::cout<<"\n";

  for (auto &it : b)
      std::cout << it << " ";

a.merge(b);

for (auto &it : a)
    std::cout << it << " ";

return 0;
}
