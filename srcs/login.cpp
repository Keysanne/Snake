#include "main.hpp"
#include <string>

int	verif(std::string username, std::string password, Users &User)
{
	std::list<Info>::iterator	it,ite;
	ite = User.list.end();
	it = User.list.begin();
	for(it = User.list.begin(); it != ite; it++)
	{
		while (username != it->getUsername())
			it++;
		if (password == it->getPassword())
			return 0;
		else
		 	return 1;
	}
	return 1;
}

void	login_fct(Users &User)
{
	std::string username;
	std::string	password;

	std::cout << "Username: ";
	std::cin >> username;
	std::cout << "Password: ";
	std::cin >> password;
	if (verif(username, password, User) == 0)
	{
		std::cout << "Welcome " << username << ", have fun playing Snake." << std::endl;
		exit(0);
	}
	std::cout << "Unknown Username/Password" << std::endl;
	sleep(1);
	system("clear");
	aff();
	login_fct(User);
}