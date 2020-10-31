# include "Task.h"
#include <iostream>

bool setPlanner() 
{
	std::cout << "Welcome, add your tasks for today!";

	bool addTask = true;

	try 
	{
		while (addTask)
		{
			Task task;
			std::string name;
			std::string description;
			std::string deadline;
			std::string reminder;

			std::cout << "\n Enter name of task: ";
			std::cin >> name;
			task.setName(name);

			std::cout << "\n Enter description: ";
			std::cin >> description;
			task.setName(description);

			std::cout << "\n Enter deadline: ";
			std::cin >> deadline;
			task.setName(deadline);

			std::cout << "\n Enter reminder: ";
			std::cin >> reminder;
			task.setName(reminder);

			//add to db

			std::cout << "\n Do you want to add more ?";

			std::cin >> addTask;

		}
	}
	
	catch (...) 
	{
		std::cout << "\n Failed to add task";
		return false;
	}

	return true;
}