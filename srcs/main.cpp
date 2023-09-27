#include "main.hpp"
#include "Class.hpp"

int	main()
{
	Users	User;
	std::string first_answer;

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