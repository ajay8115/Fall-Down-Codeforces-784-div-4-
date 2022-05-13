#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define forn for (int i = 0; i < n; i++)
#define srt(v) sort(v.begin(), v.end());
#define rev(v) reverse(v.begin(), v.end());
#define kk '\n'
using namespace std;

void aj()
{
    int n, m;
    cin >> n >> m;

    char a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    // cout << kk;

    int i;
    for (int j = 0; j < m; j++)
    {
        int cnt = 0;
        int f = 0;
        for (i = 0; i < n; i++)
        {
            if (a[i][j] == '*')
            {
                a[i][j] = '.';
                cnt++;
            }
            else if (a[i][j] == 'o')
            {
                f = 1;
                int k = i - 1;
                while (cnt--)
                {
                    a[k][j] = '*';
                    k--;
                }

                cnt = 0;
            }
        }
        if (cnt != 0)
        {
            int k = n - 1;
            while (cnt--)
            {
                a[k][j] = '*';
                k--;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j];
        }
        cout << kk;
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
        aj();
    }
    return 0;
}
