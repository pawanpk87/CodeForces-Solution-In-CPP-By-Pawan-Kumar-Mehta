#include <bits/stdc++.h>
using namespace std;

void solve(vector<long long int>& arr,vector<long long int>& brr){
	long long int sum=0;
	long long int minNum=INT_MIN;
	for(long long int a : arr) sum+=a;
	for(long long int b : brr)
	{
		sum+=b;
		minNum=max(minNum,b);
	}
	cout<<(sum - minNum)<<endl;
}


int32_t main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  clock_t z = clock();

  int t; cin>>t;
  
  while(t--)
  {
  	int n;cin>>n;
  	
  	vector<long long int> arr(n),brr(n);
  	
  	for(int i=0; i<n; i++) cin>>arr[i];
    for(int i=0; i<n; i++) cin>>brr[i];

    solve(arr,brr);
  }

  return 0;
}