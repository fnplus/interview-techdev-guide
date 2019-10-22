#include <bits/stdc++.h>
using namespace std;
typedef long long int LL;
#define MAX(a, b) (a > b) ? a : b;
#define MIN(a, b) (a < b) ? a : b;
#define IsInteger(a) (fabs(a - round(a)) < 0.00001)
#define swap(a, b) \
    {              \
        a = a + b; \
        b = a - b; \
        a = a - b; \
    }

int main()
{

    int n;
    cin>>n;
    vector<char> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++)
    {
        if (is_prime[i] && (long long)i * i <= n)
        {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }

    for(LL i=0;i<=n;i++)
    {
        if(is_prime[i]==true)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}