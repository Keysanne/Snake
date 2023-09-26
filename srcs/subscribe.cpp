#include "Class.hpp"
#include "main.hpp"
#include <string>

void	already_used(std::string username, Users User)
{
	std::ifstream	stock(".stock");
	std::string		recup;

	while(getline(stock, recup))
	{
		int	i = 0;
		while (recup[i] != '|')
		{
			if (recup[i] != username[i])
				break ;
			i++;
		}
		if (recup[i] == '|')
		{
			std::cout << "username already used" << std::endl;
			subscribe_fct(User);
		}
	}
}

void	stock_user(Info tmp)
{
	std::ofstream	stock(".stock",std::ios::app);
	stock << tmp.getUsername() << "|" << tmp.getPassword() << std::endl;
}

void	subscribe_fct(Users &User)
{
	std::string username;
	std::string	password;
	Info	tmp;

	std::cout << "What will be your username ?" << std::endl;
	std::cout << "Username: ";
	std::cin >> username;
	already_used(username, User);   /*verif si le login n'est pas deja utilise*/
	tmp.setUsername(username);
	std::cout << "What will be your password ?" << std::endl;
	std::cout << "Password: ";
	std::cin >> password;
	tmp.setPassword(password);
	User.list.push_back(tmp);
	stock_user(tmp);
	system("clear");
	aff();
	login_fct(User);
}