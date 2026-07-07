#include <iostream>
#include <vector>
#include <fstream>
#include "Contact.h"

using namespace std;

vector<Contact> contacts;

// Add Contact
void addContact()
{
    Contact c;

    cout << "Enter Name : ";
    cin >> c.name;

    cout << "Enter Phone : ";
    cin >> c.phone;

    cout << "Enter Email : ";
    cin >> c.email;

    cout << "Enter Address : ";
    cin >> c.address;

    contacts.push_back(c);

    cout << "\nContact Added Successfully!\n";
}

// Display Contacts
void displayContacts()
{
    if (contacts.empty())
    {
        cout << "\nNo Contacts Found!\n";
        return;
    }

    for (int i = 0; i < contacts.size(); i++)
    {
        cout << "\nContact " << i + 1 << endl;
        cout << "Name : " << contacts[i].name << endl;
        cout << "Phone : " << contacts[i].phone << endl;
        cout << "Email : " << contacts[i].email << endl;
        cout << "Address : " << contacts[i].address << endl;
    }
}

// Search Contact
void searchContact()
{
    string name;
    cout << "Enter Name to Search : ";
    cin >> name;

    for (int i = 0; i < contacts.size(); i++)
    {
        if (contacts[i].name == name)
        {
            cout << "\nContact Found\n";
            cout << "Name : " << contacts[i].name << endl;
            cout << "Phone : " << contacts[i].phone << endl;
            cout << "Email : " << contacts[i].email << endl;
            cout << "Address : " << contacts[i].address << endl;
            return;
        }
    }

    cout << "\nContact Not Found!\n";
}

// Update Contact
void updateContact()
{
    string name;
    cout << "Enter Name to Update : ";
    cin >> name;

    for (int i = 0; i < contacts.size(); i++)
    {
        if (contacts[i].name == name)
        {
            cout << "Enter New Name : ";
            cin >> contacts[i].name;

            cout << "Enter New Phone : ";
            cin >> contacts[i].phone;

            cout << "Enter New Email : ";
            cin >> contacts[i].email;

            cout << "Enter New Address : ";
            cin >> contacts[i].address;

            cout << "\nContact Updated Successfully!\n";
            return;
        }
    }

    cout << "\nContact Not Found!\n";
}

// Delete Contact
void deleteContact()
{
    string name;
    cout << "Enter Name to Delete : ";
    cin >> name;

    for (int i = 0; i < contacts.size(); i++)
    {
        if (contacts[i].name == name)
        {
            contacts.erase(contacts.begin() + i);

            cout << "\nContact Deleted Successfully!\n";
            return;
        }
    }

    cout << "\nContact Not Found!\n";
}

// Save Contacts
void saveContacts()
{
    ofstream file("contacts.txt");

    for (int i = 0; i < contacts.size(); i++)
    {
        file << contacts[i].name << " "
             << contacts[i].phone << " "
             << contacts[i].email << " "
             << contacts[i].address << endl;
    }

    file.close();
}

// Load Contacts
void loadContacts()
{
    ifstream file("contacts.txt");

    Contact c;

    while (file >> c.name >> c.phone >> c.email >> c.address)
    {
        contacts.push_back(c);
    }

    file.close();
}
