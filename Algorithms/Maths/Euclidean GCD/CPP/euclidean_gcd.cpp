#include <bits/stdc++.h>
using namespace std;

int gcd_util(int a, int b)
{
    while (b)
    {
        int c = a;
        a = b;
        b = c % a;
    }
    return a;
}

int gcd(vector<int> nos)
{
    int result = nos[0];
    for (auto i : nos)
        result = gcd_util(i, result);

    return result;
}

int main()
{
    int n;
    vector<int> nos;

    cout << "Enter number of inputs ";
    cin >> n;

    int i = 0;
    while (i++ < n)
    {
        int x;
        cout << "\nEnter " << i << " number ";
        cin >> x;
        nos.push_back(x);
    }

    cout << "GCD is " << gcd(nos);

    return 0;
}
