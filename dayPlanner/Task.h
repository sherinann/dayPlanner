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
	std::string getName() { return name;  };
	void setName(std::string taskName) { name = taskName; };

	std::string getDescription() { return description; };
	void setDescription(std::string taskDescription) { description = taskDescription; };

	std::string getDeadline() { return deadline; };
	void setDeadline(std::string taskDeadline) { deadline = taskDeadline; };

	std::string getReminder() { return  reminder; };
	void setReminder(std::string taskReminder) { reminder = taskReminder; };
};

