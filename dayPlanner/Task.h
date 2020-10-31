#pragma once
#include <string>

class Task
{
private:
	std::string name;
	std::string description;
	//make these date types
	std::string deadline;
	std::string reminder;
public:
	Task getTask();
	bool setTask();
};

