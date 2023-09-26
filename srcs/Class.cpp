#include "Class.hpp"
#include <new>
/*----------------------USERS--------------------*/
Users::Users() {}
Users::~Users() {}

/*----------------------INFO--------------------*/
Info::Info() {}
Info::~Info() {}
std::string	Info::getUsername() const {return username;}
std::string	Info::getPassword() const {return password;}
void	Info::setUsername(std::string newUsername) {this->username = newUsername;}
void	Info::setPassword(std::string newPassword) {this->password = newPassword;}