#include "main.hpp"

std::string	clear(std::string brut_pass)
{
	std::string clear_pass;

	for(int i = 0; brut_pass[i]; i++)
		clear_pass += (brut_pass[i] - 8);
	return clear_pass; 
}

int	verif(std::string username, const char *password, Users &User)
{
	std::list<Info>::iterator	it,ite;
	ite = User.list.end();
	it = User.list.begin();
	for(it = User.list.begin(); it != ite; it++)
	{
		while (username != it->getUsername())
			it++;
		if (crypt(password, "tb") == it->getPassword())
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
	hide_password(password);
	User = get_users();
	if (verif(username, password.c_str(), User) == 0)
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