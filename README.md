# Contact Management System

A modular C++ console application that allows users to manage a contact database. This project demonstrates object-oriented structure principles by cleanly separating data logic, file I/O operations, and user interface routines across 5 source files.

---

## 🧑‍💻 Developer Information
- **Developer Name:** Rajat Pandey
- **Intern ID:** [CITS6569]
- **Role:** C++ Developer Intern

---

## 🚀 Features
- **Add Contact:** Add new entries with name, phone, email, and address.
- **Display Contacts:** View all currently stored contacts.
- **Search Contact:** Look up specific contacts by name.
- **Update Contact:** Modify details of existing entries.
- **Delete Contact:** Remove contacts from the system.
- **Persistent Storage:** Automatically loads from and saves to a flat-file database (`contacts.txt`).

## 📁 File Structure
- `main.cpp` - Application driver loop and menu UI.
- `Contact.h` / `Contact.cpp` - Structure blueprint and core CRUD array logic.
- `FileManager.h` / `FileManager.cpp` - File stream handlers for data persistence.
- `contacts.txt` - Text-based application database.

## 🛠️ How to Compile and Run

To compile the project from your terminal using `g++`, navigate to your repository folder and execute:

```bash
g++ main.cpp Contact.cpp FileManager.cpp -o ContactSystem
