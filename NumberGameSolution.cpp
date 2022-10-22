#include <bits/stdc++.h>
using namespace std;

void solve(vector<long long int>& arr,int n)
{
	int ans=0;

	for(int k=1; k<=n; k++)
	{
		multiset<int> s(arr.begin(),arr.end());
		for(int i=0; i<k; i++)
		{			
			auto it=s.upper_bound(k-i);
			if(it == s.begin())
				break;
			s.erase(--it);
			if(s.size() > 0)
			{
				int x=*s.begin();
				s.erase(s.begin());
				s.insert(x+k-i);
			}
		}

		if(s.size() + k == n)
			ans=k;
	}

	cout<<ans<<endl;
}


int32_t main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  clock_t z = clock();

  int t; cin>>t;
  
  while(t--)
  {
  	int n; cin>>n;
  	vector<long long int> arr(n);
  	for(int i=0; i<n; i++)
  	{
  		cin>>arr[i];
  	}
  	solve(arr,n);
  }

  return 0;
}