#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int amount;
    cin >> amount;

    stack<int> cont;
    vector<char> result;

    int cur = 1;

    for (int i = 0; i < amount; ++i)
    {
        int x;
        cin >> x;

        while (cur <= x)
        {
            cont.push(cur++);
            result.push_back('+');
        }

        if (cont.empty() || cont.top() != x)
        {
            cout << "NO\n";
            return 0;
        }

        cont.pop();
        result.push_back('-');
    }

    for (char operation : result)
        cout << operation << '\n';
}
