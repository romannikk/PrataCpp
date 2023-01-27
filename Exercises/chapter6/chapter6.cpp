#include <iostream>
#include <cctype>

void task1(void);
void task2(void);
void task3(void);
void task4(void);
void task5(void);
void task6(void);
void task7(void);
void task8(void);
void task9(void);
void task10(void);

int main(int argc, char const *argv[])
{
    int cont = 1;
	while (cont == 1)
	{
		std::cout << "Enter the exercise number: ";
		int num = 0;
		(std::cin >> num).get();
		std::cout << std::endl;

		switch (num)
		{
		case 1:
			task1();
			std::cout << std::endl;
			break;
		case 2:
			task2();
			std::cout << std::endl;
			break;
		case 3:
			task3();
			std::cout << std::endl;
			break;
		case 4:
			task4();
			std::cout << std::endl;
			break;
		case 5:
			task5();
			std::cout << std::endl;
			break;
		case 6:
			task6();
			std::cout << std::endl;
			break;
		case 7:
			task7();
			std::cout << std::endl;
			break;
		case 8:
			task8();
			std::cout << std::endl;
			break;
		case 9:
			task9();
			std::cout << std::endl;
			break;
		case 10:
			task10();
			std::cout << std::endl;
			break;
		default:
			cont = 0;
			std::cout << "END" << std::endl;
			break;
		}
		std::cout << "***********************************" << std::endl;
	}   
}

void task1()
{
    std::cout << "Enter the characters (to complete, enter the characters @):\n";

    char character;
    std::cin >> character;
    
    while(character != '@')
    {      
        if(isalpha(character)) {
            if(islower(character)){
				character = toupper(character);
			} else {
				character = tolower(character);
			}
            std::cout << character << std::endl;
        } 
		std::cin >> character;
    }
}

void task2()
{
	std::cout << "Enter 10 donation values:" << std::endl;

	const size_t size = 10;
	double sum = 0;
	int i = 0, count = 0;
	double arr[size] {};

	while(i < size && std::cin >> arr[i]) {
		sum += arr[i];
		i++;
	}	

	std::cin.clear();
	std::cin.get();
	std::cout << "Data entered, all non-numeric values deleted" << std::endl;

	double average = 0;

	if(i != 0){
		average = sum / i;
		std::cout << "Average: " << average << std::endl;
	} else {
		std::cout << "No numbers were entered"  << std::endl;
	}

	for(int j = 0; j < i; j++) {
		if(arr[j] > average){
			count++;
		}
	}

	std::cout << "Values exceeding the average: " << count << std::endl;
}

void task3()
{
	const char arr[4] {'a', 'b', 'c', 'd'};
	
	std::cout << "Please enter one of the following choices:\n"
			<< arr[0] << ") carnivore \t" << arr[1] << ") pianist\n" 
			<< arr[2] << ") tree \t" << arr[3] << ") game\n" << std::endl;

	std::cout << "Please enter a, b, c, d: ";
	int character = 0;

	while(!(std::cin >> character)) {
		std::cout << "******" << std::endl;
		break;
	}
}

void task4()
{

}

void task5()
{

}

void task6()
{

}

void task7()
{

}

void task8()
{

}

void task9()
{

}

void task10()
{

}