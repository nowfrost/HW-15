#include<iostream>
#include<clocale>

int const N = 40;


void PrintOddEven(bool IsEven, int N)
{
	int Count;
		if(IsEven)
			{
				std::cout<<" ������ ����� �� 0 �� "<< N <<":\n";
				Count = 0;

			}
		else
		{
			std::cout << "�������� ����� �� 0 �� " << N << ":\n";
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
	std::cout << "������ ����� �� 0 �� " << N << ": ";
	for (int i = 0; i <= N; i += 2)
	{
		std::cout << i << " ";
	}
	std::cout << "\n";

	PrintOddEven(true, 40);
	PrintOddEven(false, 40);
}
