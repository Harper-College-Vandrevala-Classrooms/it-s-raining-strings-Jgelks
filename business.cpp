#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> businessNames;
    string name;
    bool stillGoing = true;
    string cont;

    cout << "Welcome to the Business Name Sorter!\n";
    while (stillGoing)
    {
        cout << "Please enter a business name: " << endl;
        getline(cin, name);
        businessNames.insert(businessNames.begin(), name);
        sort(businessNames.begin(), businessNames.end());
        cout << "Sorted list of business names: ";
        for (size_t i = 0; i < businessNames.size(); ++i)
        {
            cout << businessNames[i];
            if (i < businessNames.size() - 1)
            {
                cout << ", ";
            }
            else
            {
                cout << endl;
            }
        }

        cout << "Would you like to continue?\n";
        cout << "Type 'yes' to continue.\n";
        cin >> cont;
        if (cont == "y" || cont == "Yes" || cont == "yes" || cont == "Y")
        {
        }
        else
        {
            break;
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "Thanks for using the Business Name Sorter! Goodbye!\n";
    return 0;
}