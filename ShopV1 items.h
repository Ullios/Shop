#pragma once
#include <string>
class items
{
public:
	items(const std::string name,const int price,const int quantity);
	~items();

	
	std::string name;
	int price = 0;
	int quantity = 0;


};

