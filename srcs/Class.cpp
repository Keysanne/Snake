#include "Class.hpp"
/*----------------------USERS--------------------*/
Users::Users() {}
Users::~Users() {}

/*----------------------INFO--------------------*/
Info::Info() {}
Info::~Info() {}
std::string	Info::getUsername() const {return username;}
std::string	Info::getPassword() const {return password;}
int			Info::getScore() const {return score;}
void		Info::setUsername(std::string newUsername) {this->username = newUsername;}
void		Info::setPassword(std::string newPassword) {this->password = newPassword;}
void		Info::setScore(int newScore) {this->score = newScore;}