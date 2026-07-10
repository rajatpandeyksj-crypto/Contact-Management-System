#include <fstream>
#include <vector>
#include <string>
#include "Contact.h"
#include "FileManager.h"

using namespace std;

void saveContacts() {
    ofstream file("contacts.txt");
    if (!file) return;

    for (const auto& contact : contacts) {
        file << contact.name << "\n"
             << contact.phone << "\n"
             << contact.email << "\n"
             << contact.address << "\n";
    }
    file.close();
}

void loadContacts() {
    ifstream file("contacts.txt");
    if (!file) return;

    Contact c;
    while (getline(file, c.name) && 
           getline(file, c.phone) && 
           getline(file, c.email) && 
           getline(file, c.address)) {
        contacts.push_back(c);
    }
    file.close();
}
