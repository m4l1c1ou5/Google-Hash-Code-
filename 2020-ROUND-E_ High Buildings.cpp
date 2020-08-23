#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#define ll long long
#define vc vector<char>
#define vs vector<string> 
#define vl vector<ll> 
using namespace std;
bool check(ll n,ll a,ll b,ll c){
    if(a==1 && b==1 && c==1){
        if(n==1)
            return 1;
        else
        {
            return 0;
        }
        
    }
    if(a+b-n<=c && c<=a && c<=b)
        return 1;
    else
        return 0;
    
}
void solve(){
    ll n,a,b,c;
    cin>>n>>a>>b>>c;
    if(!check(n,a,b,c))
        cout<<"IMPOSSIBLE";
    else{
        if(a>b){
            for(ll i=0;i<n;i++){
                if(i<a-c){
                    cout<<n-b+c-1;
                }
                else if(i>=n-b){
                    if(!(i<n-b+c)){
                        cout<<n-b+c-1;
                    }
                    else
                    {
                        cout<<n;
                    }
                }
                else{
                    cout<<i;
                }
                cout<<" ";
            }
        }
        else if(a==b && b==c){
            for(ll i=0;i<n;i++){
                if(i<a-1)
                    cout<<n;
                else if(i==n-1)
                    cout<<n;
                else
                {
                    cout<<i;
                }
                cout<<" ";
            }
        }
        else{
            for(ll i=0;i<n;i++){
                if(i<a){
                    if(i<a-c){
                        cout<<n-1;
                    }
                    else{
                        cout<<n;
                    }
                }
                else if(i>=n-b+c){
                    cout<<n-1;
                }
                else{
                    cout<<i;
                }
                cout<<" ";
            }
        }
    }
    return;
} 
int main(){ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int t = 1; cin >> t; 
    for(ll cas=1;cas<=t;cas++) { 
        cout<<"Case #"<<cas<<": ";
        solve(); 
        cout << "\n"; 
    } 
    //cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0; 
}
