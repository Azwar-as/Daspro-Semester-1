#include <iostream>
using namespace std;

int main()
{
    // ====> Kasus 1 <====
    for (int idx = 0; idx < 5; idx++)
        cout << "hello world " << endl;

    // ====> Kasus 2 <====
    for (int i = 0; i < 10; i++)
    {
        cout << i << " = for loop" << endl;
    }

    // ====> Kasus 3 <====
    int i = 0;
    while (i < 10)
    {
        cout << i << " = while loop" << endl;
        i++;
    }
    {
        // ====> Kasus 4 <====
        int a, N;
        cout << "input a : ";
        cin >> a;
        cout << "Input N : ";
        cin >> N;
        for (i = a; i < N; i++)
        {
            cout << i << " ";
        }
    }

    // ====> Kasus 5 <====

    for (int i = 10; i >= 0; i--)
    {
        cout << endl
             << i << " ";
    }

    // Kasus 6
    // {}

    int a, b, c;
    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    cout << "input c: ";
    cin >> c;

    for (int i = a; i <= b; i += c)
    {
        cout << i << " ";
    }

    return 0;
}