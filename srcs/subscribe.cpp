#include "Class.hpp"
#include "main.hpp"

void	already_used(std::string username, Users User)
{
	std::ifstream	stock(".stock.csv");
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
	std::ofstream	stock(".stock.csv",std::ios::app);
	stock << tmp.getUsername() << " " << crypt(tmp.getPassword().c_str(), "tb") << std::endl;
}

void	subscribe_fct(Users &User)
{
	std::string username;
	std::string	password;
	Info	tmp;

	std::cout << "What will be your username ?" << std::endl;
	std::cout << "Username: ";
	std::cin >> username;
	already_used(username, User);
	tmp.setUsername(username);
	std::cout << "What will be your password ?" << std::endl;
	std::cout << "Password: ";
	hide_password(password);
	tmp.setPassword(password);
	stock_user(tmp);
	system("clear");
	aff();
	login_fct(User);
}