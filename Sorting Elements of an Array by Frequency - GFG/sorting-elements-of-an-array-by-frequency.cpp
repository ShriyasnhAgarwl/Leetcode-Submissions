#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> p1, pair<int,int> p2 )
{
   if(p1.second==p2.second)
   {
       return p1.first < p2.first;
   }
   
   return p1.second> p2.second;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   vector<int> v;
	   int n;
	   cin>>n;
	   for(int i=0;i<n;i++ )
	   {
	       int x;
	       cin>>x;
	       v.push_back(x);
	   }
	   
	   vector<int> freq(61,0);
	   for(int i=0;i<n;i++)
	   {
	       freq[v[i]]++;
	   }
	   
	   vector<pair<int,int>> ans(n);
	   
	   for(int i=0; i<n; i++)
	   {
	       ans[i]={v[i],freq[v[i]]};
	   }
	   
	   sort(ans.begin(), ans.end(), cmp);
	   
	   for(auto i : ans)
	   {
	       cout<<i.first<<" ";
	   }
	   cout<<endl;
	}
	return 0;
}