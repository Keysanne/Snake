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
			int			score;
	public:
			Info();
			~Info();
			std::string	getUsername() const;
			std::string	getPassword() const;
			int			getScore() const;
			void		setUsername(std::string newUsername);
			void		setPassword(std::string newPassword);
			void		setScore(int newScore);

};

class	Users
{
	public:
			Users();
			~Users();
			std::list<Info> list;
};


#endif