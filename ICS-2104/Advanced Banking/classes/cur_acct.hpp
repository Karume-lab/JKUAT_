#ifndef _CUR_ACCT_HPP_
#define _CUR_ACCT_HPP_
#include "../main.hpp"

class Cur_acct:private Account
{
	public:
		double getBalance_c(void);
		void new_c (void);
		
};

#endif
