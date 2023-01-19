// сhapter3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// chapter3.cpp

#include <iostream>

void task1(void);
void task2(void);
void task3(void);
void task4(void);
void task5(void);
void task6(void);
void task7(void);

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
		task5();
		break;
	}
	case 6:
	{
		task6();
		break;
	}
	case 7:
	{
		task7();
		break;
	}
	default:
		break;
	}
}

void task1(void)
{
	std::cout << "Height in inches:_\b";
	int inches = 0;
	const int coeff = 12;
	std::cin >> inches;
	int feet = inches / coeff;
	int rem_inc = inches % coeff;
	std::cout << "Feet: " << feet << " Inches: " << rem_inc << std::endl;
}

void task2(void)
{
	int feet = 0, inches = 0, pounds = 0;
	const int coeff = 12, poundToKg = 2.2;
	const float	inchesToMetr = 0.0254;

	std::cout << "Enter the height data:" << std::endl;
	std::cout << "Feet:_\b";
	std::cin >> feet;
	std::cout << "Inches:_\b";
	std::cin >> inches;
	std::cout << "Enter the weight data:" << std::endl;
	std::cout << "Pounds:_\b";
	std::cin >> pounds;
	float heightInMetr = ((feet * coeff) + inches) * inchesToMetr;
	float weightInKg = pounds / poundToKg;
	float BMI = weightInKg / (heightInMetr * heightInMetr);
	std::cout << "BMI:" << BMI << std::endl;
}

void task3(void)
{
	const int minOfDeg = 60;
	const int secOfDeg = 3600;
	std::cout << "Enter а latitude in degrees, minutes, and seconds:" << std::endl;
	std::cout << "First, enter the degrees: _\b";
	float deg = 0;
	std::cin >> deg;
	std::cout << "Next, enter the minutes of arc: _\b";
	float min = 0;
	std::cin >> min;
	std::cout << "Finally, enter the seconds of arc: _\b";
	float sec = 0;
	std::cin >> sec;

	float degDec = deg + (min / minOfDeg) + (sec / secOfDeg);
	std::cout << deg << " degrees " << min << " minutes " << sec << " seconds = " << degDec << " degrees " << std::endl;
}

void task4(void)
{
	int secInDay = 86400;
	int secInHour = 3600;
	std::cout << "Enter the number of seconds:";
	long long sec = 0;
	std::cin >> sec;
	int days = sec / 86400;
	int rem_sec = sec % 86400;
	int hours = rem_sec / 3600;
	rem_sec = rem_sec % 3600;
	int minutes = rem_sec / 60;
	rem_sec = rem_sec % 60;
	std::cout << days << " days " << hours << " hours " << minutes << " minutes " << rem_sec << " seconds " << std::endl;
}

void task5(void)
{
	std::cout << "Enter the world's population: ";
	long long population = 0;
	std::cin >> population;
	std::cout << "Enter the population of the US: ";
	double popUSA = 0;
	std::cin >> popUSA;
	float percent = ((float)popUSA / (float)population) * 100;
	std::cout << "The population of the US is " << percent << "% of the world population" << std::endl;
}

void task6(void)
{
	std::cout << "Enter the number of miles traveled: ";
	long long miles = 0;
	std::cin >> miles;
	std::cout << "Enter the number of gallons of gasoline consumed: ";
	long long gallons = 0;
	std::cin >> gallons;
	float milesPerGall= (float)miles / (float)gallons * 100;
	std::cout << "Miles per gallon " << milesPerGall << std::endl;
}

void task7(void)
{	
	const float litPerGal = 3.785;
	const float kmPerMile = 1.609;

	std::cout << "European style gasoline consumption (number of liters per 100 km): ";
	float litPer100Km = 0;
	std::cin >> litPer100Km;
	
	float milesPerGall = (100 * litPerGal)  / (kmPerMile * litPer100Km);

	std::cout << "The number of miles per gallon " << milesPerGall << std::endl;
}
