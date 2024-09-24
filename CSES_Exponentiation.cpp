#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
// template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; // for set
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>; // for multiset
#define int long long
#define float double
#define endl '\n'
const int MOD = 1e9+7;

int power(int x,int n,int MOD) {
    if(n==0) {
        return 1;
    }
    int current = power(x,n/2,MOD);
    if(n%2) {
        return ((current*current)%MOD * x%MOD)%MOD;
    }
    return (current*current)%MOD;
}

int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int cs =1;
    int t_c;cin>>t_c;while(t_c--) 
    {
        int x,n;
        cin>>x>>n;
        cout<<power(x,n,MOD)%MOD<<endl;
    }
    return 0;
}

// problem link: https://cses.fi/problemset/task/1095/
