#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define int long long
#define pb push_back
#define endl '\n'
int mod = 1e9 + 7;
int md =  998244353;
const int N = 1e5 + 9;

void solve()
{
    int n, k;
    cin>>n>>k;
    int f[N+1];
    int p[N+1];
    for(int i=0; i<=N; i++)
    {
        f[i]=1;
        p[i]=0;
    }
    f[k]=2;
    for(int i=k+1; i<=N; i++)
    {
        f[i]=(f[i-1]+f[i-k])%mod;
    }
    for(int i=1; i<=N; i++)
    {
        p[i]=(p[i-1]+f[i])%mod;
    }
    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        int ans=(p[b]-p[a-1])%mod;
        if(ans<0)
        {
            ans+=mod;
        }
        cout<<ans<<endl;
    }


}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
}
