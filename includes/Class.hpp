#ifndef CLASS_HPP
#define CLASS_HPP


#include <list>
#include <iostream>
#include <string>

class	Info
{
	private:
			std::string username;
			std::string	password;
	public:
			Info();
			~Info();
			std::string	getUsername() const;
			std::string	getPassword() const;
			void		setUsername(std::string newUsername);
			void		setPassword(std::string newPassword);

};

class	Users
{
	public:
			Users();
			~Users();
			std::list<Info> list;
};


#endif