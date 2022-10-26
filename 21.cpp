#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void solve(){
    int n; cin>>n;
    int k; cin>>k;
    vector<int> arr(k,0);
    for(int j=0;j<n;j++){
        int a; cin>>a;
        int i = j%k;
        arr[i] = max(arr[i],a);
    }
    int ans = 0;
    for(auto i:arr) ans+=i;
    cout<<ans<<endl;
}
 
int32_t main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }    
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
 
// int main(int argc, char const *argv[]) {
//     cout.sync_with_stdio(0);
//     cin.tie(0);
//     int tc; cin >> tc;
//     while (tc--) {
//         int n, k; cin >> n >> k;
//         int v[n];
//         for (int i = 0; i < n; i++) {
//             cin >> v[i];
//         }
//         long long res = 0;
//         for (int i = 0; i < k; i++) {
//             int aux = 0;
//             for (int j = i; j < n; j += k) {
//                 aux = max(aux, v[j]);
//             }
//             res += aux;
//         }
 
//         cout << res << endl;
//     }
//     return 0;
// }

