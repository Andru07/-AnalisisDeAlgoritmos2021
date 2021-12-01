#include <iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int kkk = 0; kkk < t; kkk++)
    {
        long long n;
        cin >> n;
        map<long long, long long> v;
        map<long long, long long> v1;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            v[x]++;
        }
        for (const auto& x : v)
        {
            v1[x.second]++;
        }
        long long le = 0,r = n,sum = v.size(),ans = n,prev = 0;
        for (const auto& x : v1)
        {
            r -= sum*(x.first-prev);
            sum -= x.second;
            prev = x.first;
            ans = min(ans, le + r);
            le += x.second*x.first;
        }
        cout << ans << "\n";
        v.clear();
        v1.clear();
    }
}