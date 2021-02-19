#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;

    bool len = false, small = false, large = false, digits = false, symbol = false;
    int n = s.size();

    if (n >= 10)
    {
        len = true;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            small = true;
        }
         if(i != 0 && i != n - 1)
        {
             if (s[i] >= 'A' && s[i] <= 'Z')
            {
                large = true;
            }
             if (s[i] >= '0' && s[i] <= '9')
            {
                digits = true;
            }
             if (s[i] == '@' || s[i] == '#' || s[i] == '%' || s[i] == '&' || s[i] == '?')
            {
                symbol = true;
            }
        }
    }

    if (len && small && large && digits && symbol)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
