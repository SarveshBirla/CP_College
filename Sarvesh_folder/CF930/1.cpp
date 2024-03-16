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
    int ans=(1<<(int)log2(n));
    cout<<ans<<endl;
    }

    exit(0);
}