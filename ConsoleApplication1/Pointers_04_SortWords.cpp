#include <iostream>
#include <cstring>

using namespace std;

int SortWords()
{
    int n;
    cout << "Total words:\n";
    cin >> n;
    string* str = new string[n];
    for (int i = 0; i < n; i++)
    {        
        cout << "Enter the " << i + 1 << " word:\n";
        cin >> str[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            if (str[j] < str[j - 1])
            {
                string temp = str[j - 1];
                str[j - 1] = str[j];
                str[j] = temp;
            }
        }
    }
    
    cout << "\nSorted:\n";
    for (int i = 0; i < n; i++)
    {
        cout << str[i] << endl;
    }

    return 1;
}
