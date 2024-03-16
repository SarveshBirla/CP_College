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
        string s1,s2;
        cin>>s1;
        cin>>s2;
        vector<vector<int>> v(2,vector<int>(n));
        for(int i=0;i<n;i++){
            v[0][i]=(s1[i]-'0');
        }
         for(int i=0;i<n;i++){
            v[1][i]=(s2[i]-'0');
        }
    
        int i=0;
        int j=0;
        string ans="";
        bool isdt=false;
        while(1){
            //down i+1
            //right j+1
            if(j==n-1){
                ans.push_back(v[0][j]+'0');
                ans.push_back(v[1][j]+'0');
                break;
            }
            if(i==0 && v[i][j+1]==0){
                ans.push_back('0');
                j=j+1;
                continue;
            }
            else if(v[1][j]==0){
                
                ans.push_back('0');
                j=j+1;
                while(j!=n){
                    ans.push_back(v[1][j]+'0');
                    j=j+1;
                }
                break;
            }
            else{
                ans.push_back('1');
                j=j+1;
                continue;
            }
        }

        cout<<ans<<endl;

    
    }

    exit(0);
}