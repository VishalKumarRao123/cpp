#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b)
{
    return a <= b;
}
bool isTrue(int n)
{
    vector<int> arr(10);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = pow(5, i);
    }
    while (n > 0)
    {
        int lb = lower_bound(arr.begin(), arr.end(), n, cmp) - arr.begin() - 1;
        int m = arr[lb];
        n = n - m;
        arr.erase(arr.begin() + lb);
    }
    if (n == 0)
        return true;
    else
        return false;
}
int main()
{
    int n;
    cin >> n;
    bool res = isTrue(n);
    if (res == true)
        cout << "PASSED" << endl;
    else
        cout << "FAILED" << endl;
    return 0;
}