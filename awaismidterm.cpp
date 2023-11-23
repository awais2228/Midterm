#include<iostream>
using namespace std;
int main()
{
    int initialQuantity;
    int quantitySold;
    int restockInterval = 5;
    char restockQuantity;
    int threshold = 10;
    int newquantity;
    cout << "Enter the initial quantity of the product in stock: ";
    cin >> initialQuantity;
    while (true)
    {
        cout << "Enter the quantity sold: ";
        cin >> quantitySold;

        if (quantitySold < 0)
        {
            cout << "Quantity sold cannot be negative. Please enter a valid number." << endl;
            continue;
        }

        if (quantitySold > initialQuantity)
        {
            cout << "Not enough stock. No sale made." << endl;
            continue;
        }
        initialQuantity -= quantitySold;
        cout << "Remaining stock after sale: " << initialQuantity << endl;
        if (initialQuantity < threshold)
        {
            cout << "Warning: Stock has fallen below the threshold." << endl;
            cout << "Do You want to enter New stock?" << endl;
            cout << "Press Y to Add New Stock or any number to Quit" << endl;
            cin >> restockQuantity;
            if (restockQuantity == 'Y')
            {
                cout << "How much Stock you want to add?";
                cin >> newquantity;
                cout << "Stock has been added";
                break;
            }
            else
            {
                cout << "END";
                break;
            }
        }

    }
    return 0;
}