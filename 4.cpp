#include <iostream>
#include <limits>

int main()
{
	int number, j = 0, flag = 1;

	do
	{
		std::cout << "Enter a number: ";
		std::cin >> number;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << std::endl << "That's not a number." << std::endl << std::endl;
		}
		else
		{
			flag = 0;
		}
	} while (flag == 1);
	
	std::cout << std::endl;
	
	for (int i = 0; i <= number; i++)
		{
			if (i < number)
			{
				std::cout << i << " + ";
			}
			else if (i == number)
			{
				std::cout << i << " = ";
			}
			j = j + i;
		}
	std::cout << j << std::endl;

	return 0;
}
