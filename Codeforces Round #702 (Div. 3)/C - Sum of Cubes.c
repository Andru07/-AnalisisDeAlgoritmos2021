
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    for (long long kkk = 0; kkk < t; kkk++)
    {
        long long x;
        cin >> x;
        for (long long i = 1; i < 100000; i++)
        {
            if (4 * x % i == 0 )
            {
                long long nu = (4 * x) / i - i * i;
                long long num = nu / 3;
                long long s = sqrt(num);
                if (s * s == num && (s+i)%2 == 0 && (s + i)/2>s && nu%3==0)
                {
                    cout << "YES" << "\n";
                    goto label;
                }
            }
            
        }
        cout << "NO" << "\n";
    label:;
    }
}