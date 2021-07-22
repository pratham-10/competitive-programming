#include <bits/stdc++.h>
using namespace std;

string isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "No";
            return "No";
        }
        cout << "Yes";
        return "Yes";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << isPrime(n) << endl;
    }
    return 0;
}