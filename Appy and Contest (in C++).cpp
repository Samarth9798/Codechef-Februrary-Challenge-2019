#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main()
{
    int t;
    
    cin >> t;
    
    while(t--)
    {
        ll n,a,b,k,ans;
        
        cin >> n >> a >> b >> k;
        
        ll LCM = (a * b)/__gcd(a,b);
        
        ans = (n/a) + (n/b) - (2 * (n / LCM));
        
        if(ans >= k)
            cout << "Win" << endl;
        else
            cout << "Lose" << endl;
    }
}
