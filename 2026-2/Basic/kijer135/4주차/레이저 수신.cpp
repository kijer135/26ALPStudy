#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int count = 0;

    cin >> count;

    vector<int> walls(count);
    vector<int> results(count, 0);

    for (int i = 0; i < count; i++)
    {
        cin >> walls[i];
    }

    for (int soon = 0; soon < count; soon++)
    {
        for (int i = 1; i <= soon; i++)
        {
            if (walls[soon] <= walls[soon - i])
            {
                results[soon] = soon - i + 1;
                break;
            }
        }
    }

    for (int x : results)
    {
        cout << x << " ";
    }
}
