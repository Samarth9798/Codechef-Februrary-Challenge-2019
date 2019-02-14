#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int T; cin >> T;
    while(T--)
    {
        string s; cin >> s;
        
        set<char> S; S.clear();
        
        ll a[27]; memset(a,0,sizeof(a));
        
        ll i,j,k;
        
        for(i = 0; i < s.length(); i++)
        {
            a[s[i] - 'A']++;
            S.insert(s[i]);
        }
        
        sort(a,a+27,greater<ll>());
        
        if(s.length() <= 18)
        {
            if(a[0] == s.length()) cout << '0' << endl;
            else if(a[0] == 1) cout << '0' << endl;
            else {
                
                int ans1 = s.length() - a[0];
                
                int ans = 0;
                
                for(i = 0; i <= 26; i++)
                {
                    if(a[i] >= 1)
                    ans = ans + a[i] - 1;
                }
                
                ll b[27]; memcpy(b,a,sizeof(b));
            
                int ans2 = INT_MAX;
                
                for(i = 1; i <= 26; i++)
                {
                    if(s.length()%i == 0)
                    {
                        ll temp = 0; 
                        ll val = s.length()/i;
                        memcpy(a,b,sizeof(b));
                        
                        for(j = 1; j <= i; j++)
                        {
                            if(a[j - 1] > val)
                            {
                                ll temp2 = a[j - 1] - val;
                                
                                for(k = j + 1; k <= i; k++)
                                {
                                    if(a[k - 1] < val and temp2 > 0)
                                    {
                                        ll temp3 = val - a[k - 1];
                                        if(temp3 > temp2)
                                        {
                                            a[k - 1] += temp2;
                                            temp2 = 0;
                                        }
                                        else
                                        {
                                            a[k - 1] += temp3;
                                            temp2 -= temp3;
                                        }
                                    }
                                    else if(temp2 == 0)
                                        break;
                                }
                            }
                            
                            temp = temp + abs(a[j - 1] - val);
                        }
                        
                        if(temp < ans2)
                            ans2 = temp;
                    }
                }
                
                ans = min(ans1,ans);
                ans = min(ans,ans2);
                cout << ans << endl;
                
            }
        }
        else
        {
            ll ans1 = 0;
            
            for(i = 0; i < S.size(); i++)
            {
                if(a[i] > 1)
                    ans1 = ans1 + a[i] - 1;
            }
            if(ans1 == 0 or S.size() + ans1 > 26)
                ans1 = LLONG_MAX;
                
            ll b[27]; memcpy(b,a,sizeof(b));
            
            ll ans = LLONG_MAX;
            
            for(i = 1; i <= S.size(); i++)
            {
                if(s.length()%i == 0)
                {
                    ll temp = 0; 
                    ll val = s.length()/i;
                    memcpy(a,b,sizeof(b));
                    
                    for(j = 1; j <= i; j++)
                    {
                        if(a[j - 1] > val)
                        {
                            ll temp2 = a[j - 1] - val;
                            
                            for(k = j + 1; k <= i; k++)
                            {
                                if(a[k - 1] < val and temp2 > 0)
                                {
                                    ll temp3 = val - a[k - 1];
                                    if(temp3 > temp2)
                                    {
                                        a[k - 1] += temp2;
                                        temp2 = 0;
                                    }
                                    else
                                    {
                                        a[k - 1] += temp3;
                                        temp2 -= temp3;
                                    }
                                }
                                else if(temp2 == 0)
                                    break;
                            }
                        }
                        
                        temp = temp + abs(a[j - 1] - val);
                    }
                    
                    if(temp < ans)
                        ans = temp;
                }
            }
            
            cout << min(ans1,ans) << endl;
            
        }
    }
}
