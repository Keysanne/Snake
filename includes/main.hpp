#ifndef MAIN_HPP
# define MAIN_HPP

#include "Class.hpp"
#include <iostream>
#include <unistd.h>
#include <list>
#include <fstream>
#include <termios.h>
#include <string>
#include <functional>
#include <crypt.h>
#include <stdio.h>

void	aff();
void	subscribe_fct(Users &users);
void	login_fct(Users &users);
void	hide_password(std::string &password);
Users	get_users();

#endif