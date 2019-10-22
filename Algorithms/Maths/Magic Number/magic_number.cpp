#include<iostream>
using namespace std;

void is_magic_number(int n)
{
    int sum = 0;

    // The loop stops only when n becomes 0
    // and sum is a single digit number.
    while (n > 0 || sum > 9)
    {
        if (n == 0) {
            n = sum;
            sum = 0;
        }
        sum += n % 10;
        n /= 10;
    }

    if (sum == 1)
      cout << "Magic Number!" << endl;
    else
      cout << "Not a Magic Number!" << endl;
}

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;
    is_magic_number(n);
    return 0;
}
