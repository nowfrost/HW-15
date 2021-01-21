#include<iostream>
#include<clocale>

int const N = 40;


void PrintOddEven(bool IsEven, int N)
{
	int Count;
		if(IsEven)
			{
				std::cout<<" четные числа от 0 до "<< N <<":\n";
				Count = 0;

			}
		else
		{
			std::cout << "Нечетные числа от 0 до " << N << ":\n";
			Count = 1;

		}
		
		while (Count <= N)
		{
			std::cout << Count << "";
			Count += 2;
		}
			
		std::cout << "n\n";
			
}

int main()
{
	setlocale(LC_CTYPE, "rus");
	std::cout << "Четные числа от 0 до " << N << ": ";
	for (int i = 0; i <= N; i += 2)
	{
		std::cout << i << " ";
	}
	std::cout << "\n";

	PrintOddEven(true, 40);
	PrintOddEven(false, 40);
}
