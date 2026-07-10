#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <vector>

// Structure mapping out a single contact's details
struct Contact {
    std::string name;
    std::string phone;
    std::string email;
    std::string address;
};

// Shares the database array dynamically across files
extern std::vector<Contact> contacts;

// Core logic function declarations
void addContact();
void displayContacts();
void searchContact();
void updateContact();
void deleteContact();

#endif
