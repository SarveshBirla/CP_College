#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
     #endif

  
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<int> v(n);
      for(int i=0;i<n;i++)cin>>v[i];

      sort(v.begin(),v.end());

      int a= abs(v[0]-v[n-1])+abs(v[n-1]-v[1])+abs(v[1]-v[n-2])+abs(v[n-2]-v[0]);
      int b= abs(v[n-1]-v[0])+abs(v[0]-v[n-2])+abs(v[n-2]-v[1])+abs(v[1]-v[n-1]);

      cout<<max(a,b)<<endl;
    }

    exit(0);
}