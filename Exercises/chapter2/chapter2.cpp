// chapter2.cpp

#include <iostream>

void task1(void);
void task2(void);
void task3(void);
void task3GenStr1(void);
void task3GenStr2(void);
void task4(void);
float task5(float);
double task6(double);
void task7(float, float);

int main()
{
	std::cout << "Enter the exercise number: ";
	int num = 0;
	std::cin >> num;
	
	switch (num)
	{
		case 1:
			task1();
			break;
		case 2:
			task2();
			break;
		case 3:
			task3();
			break;
		case 4:
			task4();
			break;
		case 5:
		{
			float celsius = 0;
			std::cout << "Please enter a Celsius value: ";
			std::cin >> celsius;
			std::cout << celsius << " degrees Celsiusis " << task5(celsius) << " degrees Fahrenhe it." << std::endl;
			break;
		}
		case 6:
		{
			double lightYears = 0;
			std::cout << "Enter the numЬer of light years: ";
			std::cin >> lightYears;
			std::cout << lightYears << " light years = " << task6(lightYears) << " astronomical units." << std::endl;
			break;
		}
		case 7:
		{
			float hours = 0;
			float minutes = 0;
			std::cout << "Enter the numЬer of hours: ";
			std::cin >> hours;
			std::cout << "Enter the numЬer of minutes: ";
			std::cin >> minutes;
			task7(hours, minutes);
			break;
		}
		default:
			break;
	}
}

void task1(void) 
{
	std::cout << "My name is Roman" << std::endl;
	std::cout << "My address is street" << std::endl;
}

void task2(void)
{
	std::cout << "Distances in furlongs = ";
	int furlong = 0;
	std::cin >> furlong;
	int yard = furlong * 220;
	std::cout << "Distances in yards = " << yard << std::endl;
}

void task3(void)
{
	task3GenStr1();
	task3GenStr1();
	task3GenStr2();
	task3GenStr2();
}

void task3GenStr1(void)
{
	std::cout << "Three blind mice" << std::endl;
}

void task3GenStr2(void)
{
	std::cout << "See how they run" << std::endl;
}

void task4(void)
{
	std::cout << "Enter your age: ";
	int age = 0;
	std::cin >> age;
	int months = age * 12;
	std::cout << "You are in months is " << months << std::endl;

}

float task5(float celsius)
{	
	float fahrenhe = 1.8 * celsius + 32;
	return fahrenhe;
}

double task6(double lightYears)
{
	double astroUnits = lightYears * 63240;
	return astroUnits;
}

void task7(float hours, float minutes)
{
	std::cout << "Time: " << hours << " : " << minutes << std::endl;
}
