#include <iostream>
#include "FileManager.h"

using namespace std;

int main()
{
    int choice = 0;

    loadContacts();

    while (choice != 7)
    {
        cout << "\n=============================\n";
        cout << " CONTACT MANAGEMENT SYSTEM\n";
        cout << "=============================\n";

        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Update Contact\n";
        cout << "5. Delete Contact\n";
        cout << "6. Save Contacts\n";
        cout << "7. Exit\n";

        cout << "\nEnter Choice : ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                addContact();
                break;

            case 2:
                displayContacts();
                break;

            case 3:
                searchContact();
                break;

            case 4:
                updateContact();
                break;

            case 5:
                deleteContact();
                break;

            case 6:
                saveContacts();
                cout << "Contacts Saved Successfully!\n";
                break;

            case 7:
                saveContacts();
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }
    }

    return 0;
}
