#include "main.hpp"
#include "Class.hpp"
#include <cwchar>
#include <string>

void	get_users(Users &User)
{
	std::ifstream	stock(".stock");
	std::string		recup;
	std::string		swp;
	int				i;
	Info	tmp;

	while(getline(stock, recup))
	{
		swp = "";
		for(i = 0;recup[i] != '|';i++)
			swp += recup[i];
		tmp.setUsername(swp);
		swp = "";
		while (recup[++i])
			swp += recup[i];
		tmp.setPassword(swp);
		User.list.push_back(tmp);
	}
}

int	main()
{
	Users	User;
	std::string first_answer;

	get_users(User);
	while (true)
	{
		system("clear");
		aff();
		std::cout << "You want to log in or subscribe ? (login/subscribe): ";
		std::cin >> first_answer;
		if (first_answer == "login")
			login_fct(User);
		else if (first_answer == "subscribe")
			subscribe_fct(User);
		else
		 	std::cout << "I didn't understand what you said" << std::endl;
		sleep(1);
	}
	return 0;
}