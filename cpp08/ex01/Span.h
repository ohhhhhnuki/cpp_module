//
// Created by 大貫　弘貴 on 2022/07/16.
//

#ifndef CPP_MODULE_SPAN_H
#define CPP_MODULE_SPAN_H

#include <iostream>
#include <vector>//vectorって使っちゃまずいっけ?

class Span {
private:
	std::vector<int> spanList;
public:
	Span();
	Span(int number);
	~Span();

	void addNumber(int number);
	int shortestSpan();
	int longestSpan();
};


#endif //CPP_MODULE_SPAN_H
