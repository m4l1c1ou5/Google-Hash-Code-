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
void solve(){
    ll n,d,temp;
    cin>>n>>d;
    vl bus;
    for(ll i=0;i<n;i++){
        cin>>temp;
        bus.push_back(temp);
    }
    ll num=d;
    for(ll i=n-1;i>=0;i--){
        ll temp=bus[i]*(d/bus[i]);
        if(temp<=num)
            num=temp;
        else{
            while(temp>num)
                temp=temp-bus[i];
            num=temp;
        }
    }
    cout<<num;
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
    return 0; 
}
