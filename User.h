#ifndef USER_H
#define USER_H

#include <string>
#include <vector>

class User
{
private:
    std::string userId;
    std::string username;
    std::string password;
    std::string name;
    std::string email;
    std::vector<std::string> borrowedBooks;
    int maxBooksAllowed;
    bool isAdmin;

public:
    User(std::string id, std::string username, std::string password,
         std::string name, std::string email, bool admin = false, int maxBooks = 5);

    std::string getUserId() const;
    std::string getUsername() const;
    std::string getPassword() const;
    std::string getName() const;
    std::string getEmail() const;
    bool getIsAdmin() const;
    std::vector<std::string> getBorrowedBooks() const;
    int getMaxBooksAllowed() const;
    int getBorrowedCount() const;

    void setPassword(const std::string &newPassword);

    bool borrowBook(std::string ISBN);
    bool returnBook(std::string ISBN);
    bool hasBook(std::string ISBN) const;

    void displayInfo() const;
};

#endif