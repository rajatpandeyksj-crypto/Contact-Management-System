#include <iostream>
#include <vector>
#include <string>
#include "Contact.h"

using namespace std;

// This allocates the memory vector for storage
vector<Contact> contacts;

void addContact() {
    Contact c;
    cin.ignore(); 
    cout << "Enter Name : ";    getline(cin, c.name);
    cout << "Enter Phone : ";   getline(cin, c.phone);
    cout << "Enter Email : ";   getline(cin, c.email);
    cout << "Enter Address : "; getline(cin, c.address);
    contacts.push_back(c);
    cout << "\nContact Added Successfully!\n";
}

void displayContacts() {
    if (contacts.empty()) {
        cout << "\nNo Contacts Found!\n";
        return;
    }
    for (size_t i = 0; i < contacts.size(); i++) {
        cout << "\nContact " << i + 1 << "\n"
             << "Name    : " << contacts[i].name << "\n"
             << "Phone   : " << contacts[i].phone << "\n"
             << "Email   : " << contacts[i].email << "\n"
             << "Address : " << contacts[i].address << "\n";
    }
}

void searchContact() {
    string name;
    cin.ignore();
    cout << "Enter Name to Search : ";
    getline(cin, name);

    for (const auto& c : contacts) {
        if (c.name == name) {
            cout << "\nContact Found\nName    : " << c.name 
                 << "\nPhone   : " << c.phone << "\nEmail   : " << c.email 
                 << "\nAddress : " << c.address << "\n";
            return;
        }
    }
    cout << "\nContact Not Found!\n";
}

void updateContact() {
    string name;
    cin.ignore();
    cout << "Enter Name to Update : ";
    getline(cin, name);

    for (auto& c : contacts) {
        if (c.name == name) {
            cout << "Enter New Name : ";    getline(cin, c.name);
            cout << "Enter New Phone : ";   getline(cin, c.phone);
            cout << "Enter New Email : ";   getline(cin, c.email);
            cout << "Enter New Address : "; getline(cin, c.address);
            cout << "\nContact Updated Successfully!\n";
            return;
        }
    }
    cout << "\nContact Not Found!\n";
}

void deleteContact() {
    string name;
    cin.ignore();
    cout << "Enter Name to Delete : ";
    getline(cin, name);

    for (size_t i = 0; i < contacts.size(); i++) {
        if (contacts[i].name == name) {
            contacts.erase(contacts.begin() + i);
            cout << "\nContact Deleted Successfully!\n";
            return;
        }
    }
    cout << "\nContact Not Found!\n";
}
