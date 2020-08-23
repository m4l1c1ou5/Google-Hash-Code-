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
    vl a;
    for(ll i=0;i<n;i++){
        cin>>temp;
        a.push_back(temp);
    }
    ll count=0;
    ll max_count=0;
    temp=a[1]-a[0];
    for(ll i=1;i<n;i++){
        
        if(a[i]-a[i-1]==temp){
            count++;
            if(max_count<count)
                max_count=count;
        }
        else{
            temp=a[i]-a[i-1];
            count=1;
        }
    }
    cout<<max_count+1;
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
