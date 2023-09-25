#include "main.hpp"

int	main()
{
	std::string first_answer;

	while (1)
	{
		system("clear");
		aff();
		std::cout << "You want to log in or subscribe ? (login/subscribe)";
		std::cin >> first_answer;
		if (first_answer == "login")
			login_fct();
		else if (first_answer == "subscribe")
			subscribe_fct();
		else
		 	std::cout << "I didn't understand what you said" << std::endl;
		sleep(1);
	}
	return 0;
}