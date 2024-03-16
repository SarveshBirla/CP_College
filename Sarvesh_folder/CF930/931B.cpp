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
       ll n;
       cin>>n;
       vector<ll> prev(15,INT_MAX);
       vector<ll> curr(31,INT_MAX);
       curr[0]=0;
       ll c[]={1,3,6,10,15};
       for(ll i=1;i<=30;i++){
         ll temp=INT_MAX;
          for(ll j=0;j<5;j++){
            
            if(i-c[j]>=0){
                
                temp=min(temp,curr[(i-c[j])]+1);
            }
           
          }
          curr[i]=temp;
       }
        for(auto it:curr){
            cout<<it<<" ";
        }
        cout<<endl;
        if(n>30)
        cout<<(((n-30)/30)*2)+curr[(n%30)]+curr[n-30]<<endl;
        else{
            cout<<curr[n%30]<<endl;
        }
        
    }

    exit(0);
}