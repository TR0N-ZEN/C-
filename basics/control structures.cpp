#include <iostream>

int main()
{
	int i = 0;
	/*comparison operators are
	==
	!=
	<
	>
	<=
	>=
	and boolean conjuctors are
	||
	&&
	*/
	if (i == 1) { std::cout << "i = 1 "; }
	else if (i == 2) { std::cout << "i = 2"; }
	else if (i != -1 && i != -2) { std::cout << "i is not 1 or 2 nor their negative counterpart"; }
	else { std::cout << "i am tired of writing"; }

	switch (i)
	{
		case 0:
			std::cout << "i = 0";
			break;
		case 1:
			std::cout << "i = 1";
			break;
		default:
			std::cout << "i is neither 1 nor 2";
	}

	//--------------------------------------------------------

	for (int x = 0; x < 10; x++) { std::cout << "codeblock in 'for' loop"; }
	while (i < 3)
	{
		std::cout << "codeblock in 'while' loop";
		++i;
	}
	do {
		std::cout << "codeblock in 'do while' loop";
		++i;
	} while (i < 3);
	//--------------------------------------------------------
}