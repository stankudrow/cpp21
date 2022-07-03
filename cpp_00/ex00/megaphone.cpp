#include <iostream>

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		for (int ac = 1; ac < argc; ++ac)
		{
			for (char *arg = argv[ac]; *arg; ++arg)
			{
				if (std::isalpha(*arg) && std::islower(*arg))
					std::cout << (char)std::toupper(*arg);
				else
					std::cout << *arg;
			}
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << "\n";
	return (0);
}
