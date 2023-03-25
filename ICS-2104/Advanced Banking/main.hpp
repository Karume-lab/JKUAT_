#ifndef _MAIN_HPP_
#define _MAIN_HPP_
using namespace std;

#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
#include <sstream>


#include "classes/account.hpp"
#include "classes/cur_acct.hpp"
#include "classes/sav_acct.hpp"


int getOption(void);
int getDetails_s(void);
int getDetails_c(void);
int getType(void);
int listCustomers(void);


#endif
