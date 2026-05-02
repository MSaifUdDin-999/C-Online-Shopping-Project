#include <iostream>
using namespace std;

int main()
{
    float billAmount = 0;
    char choice, item;
    int option;

    cout << "\n===== Daraz Online Shopping Store =====\n"
         << endl;

    cout << "Enter your name: ";
    string name;
    cin >> name;
    cout << "\tWelcome, " << name << "...!\n";

    while (true)
    {
        cout << "\nWelcome to Online Shopping Center!\n";
        cout << "Enter M For Mobiles or L For Laptops : ";
        cin >> choice;

        // Using switch only for section (Mobile or Laptop) selection (Only for Boundary)

        switch (choice)
        {
        //   MOBILE Section
        case 'M':
        case 'm':
            cout << "\nMobile Section\n";
            cout << "1) Apple\n2) Samsung\n"; // Brands
            cout << "Select brand: ";
            cin >> option;

            if (option == 1)
            { // Models with Prices
                cout << "\nAvailable Apple Mobiles:\n";
                cout << "1) Iphone X - 60000\n2) Iphone 13 - 150000\n";
                cout << "Select mobile: ";
                cin >> item;

                if (item == '1')
                {
                    billAmount += 60000;
                    cout << "You selected Iphone X\n";
                }
                else if (item == '2')
                {
                    billAmount += 150000;
                    cout << "You selected Iphone 13\n";
                }
            }
            else if (option == 2)
            { // Models with Prices
                cout << "\nAvailable Samsung Mobiles:\n";
                cout << "1) Note 10 - 60000\n2) S22 - 90000\n";
                cout << "Select mobile: ";
                cin >> item;

                if (item == '1')
                {
                    billAmount += 60000;
                    cout << "You selected Note 10\n";
                }
                else if (item == '2')
                {
                    billAmount += 90000;
                    cout << "You selected S22\n";
                }
            }
            break;

            //  LAPTOP Section
        case 'L':
        case 'l':
            cout << "\nLaptop Section\n";
            cout << "1) Apple\n2) HP\n3) DELL\n"; // Brands
            cout << "Select brand: ";
            cin >> option;

            if (option == 1)
            { // Models with Prices
                cout << "\nAvailable Apple Laptops:\n";
                cout << "1) Macbook Pro 17 - 150000\n2) Macbook M1Chip - 200000\n";
                cout << "Select laptop: ";
                cin >> item;

                if (item == '1')
                {
                    billAmount += 150000;
                    cout << "You selected Macbook Pro 17\n";
                }
                else if (item == '2')
                {
                    billAmount += 200000;
                    cout << "You selected Macbook M1Chip\n";
                }
            }
            else if (option == 2)
            { // Models with Prices
                cout << "\nAvailable HP Laptops:\n";
                cout << "1) HP 14 - 80000\n2) HP 5 - 70000\n";
                cout << "Select laptop: ";
                cin >> item;

                if (item == '1')
                {
                    billAmount += 80000;
                    cout << "You selected HP 14\n";
                }
                else if (item == '2')
                {
                    billAmount += 70000;
                    cout << "You selected HP 5\n";
                }
            }
            else if (option == 3)
            { // No Dell Laptop
                cout << "Sorry, no Dell laptops available.\n";
            }
            break;

        default: // Code to execute if no case matches
            cout << "Invalid option, please try again.\n";
            continue; // Again chance to start the loop
        } // Switch Closes

        // Ask if the user wants to buy another item
        cout << "\nYour total amount is: Rs." << billAmount << endl;

        cout << "Would you like to buy another item? (Y/N): ";

        char anotherItem;
        cin >> anotherItem;

        if (anotherItem == 'N' || anotherItem == 'n')
        { // condition to break the loop & exit
            break;
        }
    }
    cout << "\nThank you for shopping with us! Have a nice day!\n";
    return 0;
}