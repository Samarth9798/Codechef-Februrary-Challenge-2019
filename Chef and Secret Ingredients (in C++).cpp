#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n; string s;
        set<char> ss;
        int a[27]; memset(a,0,sizeof(a));
        int i,j;
        
        cin >> n;
        
        for(i = 0; i < n; i++)
        {
            cin >> s;
            for(j = 0; j < s.length(); j++)
                ss.insert(s[j]);
            for(auto it = ss.begin(); it != ss.end(); it++)
                a[*it - 'a']++;
            ss.clear();
        }
        
        int ans = 0;
        for(i = 0; i <= 26; i++)
        {
            if(a[i] == n)
                ans++;
        }
        cout << ans << endl;
    }
}
