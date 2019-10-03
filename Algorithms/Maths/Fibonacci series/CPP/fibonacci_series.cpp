#include <bits/stdc++.h>
using namespace std;

vector<int> fibonacci(int n)
{
    vector<int> fib{0, 1};

    for (int i = 2; i < n; i++)
        fib.push_back(fib[i - 1] + fib[i - 2]);

    return fib;
}

int main()
{
    int n;
    cout << "Enter the number of terms in fibonacci series ";
    cin >> n;

    cout << "Fibonacci Series is ";

    if (n == 1)
        cout << n;
    else if (n == 2)
        cout << n - 2 << " " << n - 1;
    else
    {
        vector<int> fibo_series = fibonacci(n);

        for (auto i : fibo_series)
            cout << i << " ";
    }

    return 0;
}
