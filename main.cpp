#include <iostream>
#include "Contact.h"
#include "FileManager.h"

using namespace std;

int main() {
    int choice = 0;
    loadContacts(); // Automatically pull existing data on boot

    while (choice != 7) {
        cout << "\n=============================\n"
             << " CONTACT MANAGEMENT SYSTEM\n"
             << "=============================\n"
             << "1. Add Contact\n2. Display Contacts\n3. Search Contact\n"
             << "4. Update Contact\n5. Delete Contact\n6. Save Contacts\n7. Exit\n"
             << "\nEnter Choice : ";
        cin >> choice;

        switch (choice) {
            case 1: addContact(); break;
            case 2: displayContacts(); break;
            case 3: searchContact(); break;
            case 4: updateContact(); break;
            case 5: deleteContact(); break;
            case 6: 
                saveContacts(); 
                cout << "Contacts Saved Successfully!\n"; 
                break;
            case 7: 
                saveContacts(); 
                cout << "Thank You!\n"; 
                break;
            default: cout << "Invalid Choice!\n";
        }
    }
    return 0;
}
