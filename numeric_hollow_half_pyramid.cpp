#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter N:";
    cin >> n;
    int count = 1;

    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == 1 || i == n - 1)
        {
            for (int j = 0; j < i + 1; j++)
                cout << j + 1<<" ";
        }
        else
        {   int j = 0;
            cout << j + 1<<" ";
            for (j = 0; j < i - 1; j++)
                cout << "  ";
            cout << i +1<<" ";
        }
        cout << endl;
    }

    return 0;
}