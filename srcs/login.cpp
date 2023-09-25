#include "main.hpp"
#include <string>

int	verif(std::string login, std::string password)
{
	(void)login;
	(void)password;
	return 1;
}

void	login_fct()
{
	std::string login;
	std::string	password;

	std::cout << "Login: ";
	std::cin >> login;
	std::cout << "Password: ";
	std::cin >> password;
	if (verif(login, password) == 0)
	{
		std::cout << "Welcome " << login << ", have fun playing Snake." << std::endl;
		exit(0);
	}
	std::cout << "Unknown Username/Password" << std::endl;
	sleep(1);
	system("clear");
	aff();
	login_fct();
}