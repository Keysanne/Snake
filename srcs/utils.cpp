#include "main.hpp"

 void	aff()
 {
	std::cout << std::endl << \
				"       ▄▄▀█▄   ▄       ▄       ▄       ▄" << std::endl <<\
				"       ▀▀▀██  ███     ███     ███     ███" << std::endl <<\
				"        ▄██▀ █████   █████   █████   █████  " << std::endl <<\
				"       ███▀▄███ ███ ███ ███ ███ ███ ███ ███ ▄" << std::endl <<\
				"       ▀█████▀   ▀███▀   ▀███▀   ▀███▀   ▀██▀" << std::endl << std::endl <<\
				"                  Welcome to Snake           " << std::endl << std::endl;
 }

void	hide_password(std::string &password)
{
	termios	oldt;
	tcgetattr(STDIN_FILENO, &oldt);
	termios newt = oldt;
	newt.c_lflag &= ~ECHO;
	tcsetattr(STDIN_FILENO, TCSANOW, &newt); // Hides
	std::cin >> password;
	tcsetattr(STDIN_FILENO, TCSANOW, &oldt); // return to display
	std::cout << std::endl;
}

Users	get_users()
{
	Users			final;
	std::ifstream	stock(".stock.csv");
	std::string		recup;
	std::string		swp;
	int				i;
	Info	tmp;

	while(getline(stock, recup))
	{
		swp = "";
		for(i = 0;recup[i] != ' ';i++)
			swp += recup[i];
		tmp.setUsername(swp);
		swp = "";
		while (recup[++i])
			swp += recup[i];
		tmp.setPassword(swp);
		final.list.push_back(tmp);
	}
	return final;
}