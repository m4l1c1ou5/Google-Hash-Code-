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
    ll n,temp;
    cin>>n;
    vl chkpts;
    for(ll i=0;i<n;i++){
        cin>>temp;
        chkpts.push_back(temp);
    }
    ll count_peaks=0;
    for(ll i=1;i<n-1;i++){
        if(chkpts[i]>chkpts[i-1] && chkpts[i]>chkpts[i+1])
            count_peaks++;
    }
    cout<<count_peaks;
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
