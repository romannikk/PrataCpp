// chapter4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
#include <string>
#include <array>
#include <algorithm>
#include <stdio.h>
#include <string.h>

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

int main()
{
	int cont = 1;
	while (cont == 1) {
		std::cout << "Enter the exercise number: ";
		int num = 0;
		(std::cin >> num).get();

		switch (num)
		{
		case 1:
		{
			task1();
			std::cout << std::endl;
			break;
		}
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
			std::cout <<"END" << std::endl;
			break;
		}
	}
}

void task1(void)
{
	std::string fName;
	std::cout << "What is your first name ? ";
	getline(std::cin, fName);
	std::string lName;
	std::cout << "What is your last name ? ";
	getline(std::cin, lName);
	std::cout << "What letter grade do you deserve ? ";
	char grade = ' ';
	std::cin >> grade;
	std::cout << "What is your age ? ";
	int age = 0;
	std::cin >> age;
	std::cout << "Name: " << lName << " " << fName << "\n" << "Grade: " << char(grade + 1) << "\n" << "Age: " << age << std::endl;;
	
}

void task2(void)
{
	std::string name;
	std::string dessert;
	std::cout << "Enter your name :\n";
	getline(std::cin, name);
	std::cout << "Enter your favorite dessert :\n";
	getline(std::cin, dessert);
	std::cout << "I have some delicious " << dessert;
	std::cout << " for you, " << name << " .\n ";
}

void task3(void)
{
	const int Size = 20;
	char fName[Size];
	std::cout << "Enter your first name: ";
	std::cin.getline(fName, Size);
	char lName[Size];
	std::cout << "Enter your last name: ";
	std::cin.getline(lName, Size);
	char new_str[2 * Size + 2];
	strcpy(new_str, fName);
	strcat(new_str, ", ");
	strcat(new_str, lName);
	std::cout << "Here's the information in а single string: " << new_str;
}

void task4(void)
{
	std::string fName;
	std::cout << "Enter your first name: ";
	getline(std::cin, fName);
	std::string lName;
	std::cout << "Enter your last name: ";
	getline(std::cin, lName);
	std::string new_str;
	new_str = fName + ", " + lName;
	std::cout << "Here's the information in a single string: " << new_str;
}

void task5(void)
{
	struct CandyBar 
	{
		std::string nameCB;
		float weightCB;
		int calories;
	};
	CandyBar snack{ "Mocha Munch", 1.8, 225 };
	std::cout << "Candy: " << snack.nameCB << "\nWeight: " << snack.weightCB << "\nKkal: " << snack.calories << std::endl;
}

void task6(void)
{
	struct CandyBar
	{
		std::string nameCB;
		float weightCB;
		int calories;
	};

	CandyBar candy[3] =
	{
		"Mocha Munch", 1.8, 225,
		"Snikers", 0.99, 600,
		"Mars", 1.1, 450
	};

	for(int i = 0; i < sizeof(candy)/sizeof(candy[0]); i++)
		std::cout << "Candy: " << candy[i].nameCB << "\nWeight: " << candy[i].weightCB << "\nKkal: " << candy[i].calories << "\n\n";
}

void task7(void)
{
	struct Pizza
	{
		std::string companyName;
		int diameter = 0;
		float weight = 0;
	} example;

	std::cout << "Enter information about pizza:\n" << "Company name: ";
	getline(std::cin, example.companyName);
	std::cout << "Pizza diameter: ";
	std::cin >> example.diameter;
	std::cout << "Pizza weight: ";
	std::cin >> example.weight;

	std::cout << "Total:\n" << "Pizza from the company: " << example.companyName 
							<< "\nDiameter: " << example.diameter 
							<< "\nWeight: " << example.weight << "\n";

}

void task8(void)
{
	struct Pizza
	{
		std::string companyName;
		int diameter = 0;
		float weight = 0;
	};

	Pizza* example = new Pizza;
	std::cout << "Enter information about pizza:\n" << "Pizza diameter: ";
	(std::cin >> example->diameter).get();
	std::cout << "Company name: ";
	getline(std::cin, example->companyName);
	std::cout << "Pizza weight: ";
	std::cin >> example->weight;

	std::cout << "Total:\n" << "Pizza from the company: " << example->companyName
							<< "\nDiameter: " << example->diameter
							<< "\nWeight: " << example->weight << "\n";

	delete example;
}

void task9(void)
{
	struct CandyBar
	{
		std::string nameCB;
		float weightCB;
		int calories;
	};

	CandyBar* candy = new CandyBar[3];
	candy[0] = {"Mocha Munch", 1.8, 225};
	candy[1] = {"Snikers", 0.99, 600};
	candy[2] = {"Mars", 1.1, 450};
		
	
	for (int i = 0; i < 3; i++)
		std::cout << "Candy: " << candy[i].nameCB << "\nWeight: " << candy[i].weightCB << "\nKkal: " << candy[i].calories << "\n\n";

	delete[] candy;
}

void task10(void)
{
	std::array<float, 3> raceResult{};
	float sum = 0, average = 0;
	for (int i = 0; i < raceResult.size(); i++)
	{
		std::cout << "Enter the race result: ";
		std::cin >> raceResult[i];
		sum += raceResult[i];
	}
	average = sum / raceResult.size();
	std::cout << "Average: " << average << std::endl;
}
	
