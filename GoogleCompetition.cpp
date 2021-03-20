#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t, n, b;
  
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int counter = 0;
        cin >> n;
        cin >> b;

        int a[1000];
        
        for (int v = 0; v < n; v++)
        {
            cin>> a[v];
        }

        for (int x = 0; x < n; x++)
        {
            for (int y = 0; y < n - 1; y++)
            {
                if (a[y] > a[y + 1])
                {
                    int reverse = a[y];
                    a[y] = a[y + 1];
                    a[y + 1] = reverse;
                }
            }
        }

        for (int t = 0; t < n; t++)
        {
            if (b >= a[t])
            {
                b -= a[t];
                counter++;
            }
            else
                break;
        }
        cout << "Case #" << i + 1 << ": " << counter << endl;
    }
    return 0;
}
