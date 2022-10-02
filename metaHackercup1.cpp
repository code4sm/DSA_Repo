#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int test;
    cin >> test;
    for(int t = 1; t <= test; t ++){
        int n, k, moreThanTwo = false;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i = 0; i < n; i ++){
            cin >> arr[i];
        }
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i ++){
            mp[arr[i]] ++;
        }
        for(auto it : mp){
            if(it.second > 2){
                moreThanTwo = true;
                break;
            }
        }
        cout << "Case #" << t << ": " << ((n <= k*2 and !moreThanTwo )? "YES" : "NO") << endl;
    }
    return 0;
}