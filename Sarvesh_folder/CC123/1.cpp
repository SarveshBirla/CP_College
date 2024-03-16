#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    freopen("err.txt", "w", stderr);
     #endif
  
  
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int ans=0;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        ans=ans+((temp+1)/2);
    }
    cout<<ans<<endl;
    }

    exit(0);
}