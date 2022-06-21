//
// Created by 大貫　弘貴 on 2022/06/21.
//

#ifndef HARL_H
#define HARL_H

#include <iostream>

class Harl {
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	void (Harl::*complains[4])(void);

public:
	Harl();
	void complain(std::string level);
};

#endif
