// chapter5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
#include <array>
#include <cstring>

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

template <class T>
bool isInteger(T val)
{
    return typeid(val) == typeid(int);
}

int main()
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
			std::cout << "END" << std::endl;
			break;
		}
		std::cout << "***********************************" << std::endl;
	}
}

void task1(void)
{
	std::cout << "Enter the first value: ";
	int first = 0;
	(std::cin >> first).get();
	std::cout << "Enter the second value: ";
	int second = 0;
	(std::cin >> second).get();

	int sum = 0;
	for (int i = first; i <= second; ++i)
	{
		sum += i;
	}
	std::cout << "The sum of all integers from " << first << " to " << second << " is " << sum << std::endl;
}

void task2(void)
{
	const int arSize = 101;
	std::array<long double, arSize> factorials{};
	factorials[1] = factorials[0] = 1;

	for (int i = 2; i < arSize; ++i)
		factorials[i] = i * factorials[i - 1];

	for (int i = 0; i < arSize; ++i)
		std::cout << i << "! = " << factorials[i] << std::endl;
}

void task3(void)
{
	std::cout << "Enter a number: ";
	float number = 0, sum = 0;
	do
        {

            (std::cin >> number).get();
            sum += number;
            std::cout << "Current sum: " << sum << std::endl;

        } while (number != 0);
}

void task4(void)
{
	int balanceDafna = 100, balanceCleo = 100;
	float persentDafna = 0.1, persentCleo = 0.05;
	float profitCleo = 0, profitDafna = 0;
	int countYears = 1;
	std::cout << "Years have passed: " << countYears << std::endl;
	profitDafna = balanceDafna + (persentDafna * balanceDafna);
	std::cout << "Daphne's earnings: " << profitDafna << "$ " << std::endl;
	profitCleo = balanceDafna + (persentCleo * balanceCleo);
	std::cout << "Cleo's earnings: " << profitCleo << "$ " << std::endl;
	std::cout << std::endl;

	while (profitCleo < profitDafna)
	{
		countYears++;
		std::cout << "Years have passed: " << countYears << std::endl;
		profitDafna += (persentDafna * balanceDafna);
		std::cout << "Daphne's earnings: " << profitDafna << "$ " << std::endl;
		profitCleo += (persentCleo * profitCleo);
		std::cout << "Cleo's earnings: " << profitCleo << "$ " << std::endl;
		std::cout << std::endl;
	}

	std::cout << "In " << countYears << " years Cleo's earnings will exceed Daphne's earnings" << std::endl;
}

void task5(void)
{
	const int countMonth = 12;
	const char *month[countMonth] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	int countBook[countMonth] = {};
	int sumBooks = 0, i = 0;

	while (i < countMonth)
	{
		std::cout << "Books sold for " << month[i] << " = ";
		std::cin >> countBook[i];
		sumBooks += countBook[i];
		i++;
	}
	std::cout << "Sold in a year " << sumBooks << " books " << std::endl;
}

void task6(void)
{
	const int countMonth = 12;
	const int countYear = 3;
	int sumBooksYears = 0;
	const char *month[countMonth] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	int countBook[countYear][countMonth];
	int sumBooks[countYear] = {};
	int i = 0;

	for (int j = 0; j < countYear; j++)
	{
		while (i < countMonth)
		{
			std::cout << "Books sold for " << month[i] << " = ";
			std::cin >> countBook[j][i];
			sumBooks[j] += countBook[j][i];
			i++;
		}
		std::cout << "Sold in a year " << sumBooks[j] << " books " << std::endl;
		i = 0;
	}

	for (int m = 0; m < countYear; m++)
	{
		std::cout << "Books sold for " << m + 1 << " year = " << sumBooks[m] << std::endl;
		sumBooksYears += sumBooks[m];
	}
	std::cout << "Books sold for 3 years = " << sumBooksYears << std::endl;
}

void task7(void)
{
	struct car
	{
		std::string nameManufacturer = "";
		int yearRelease = 0;
	};

	std::cout << "How many cars should I put in the catalog? ";
	int countCars = 0;
	std::cin >> countCars;
	car *carArr = new car[countCars];

	for (int i = 0; i < countCars; i++)
	{
		std::cout << "Car #" << i + 1 << std::endl;
		std::cout << "Enter the manufacturer: ";
		std::cin >> carArr[i].nameManufacturer;
		std::cout << "Specify the year of release: ";
		std::cin >> carArr[i].yearRelease;
	}

	std::cout << "Here is your collection: " << std::endl;
	for (int i = 0; i < countCars; i++)
	{
		std::cout << carArr[i].yearRelease << " " << carArr[i].nameManufacturer << std::endl;
		;
	}

	delete[] carArr;
}

void task8(void)
{
    const int size = 20;
    char answer[size];
    int qty = 0;
    std::cout << "Вводите слова (для завершения введите слово done):\n";
    std::cin >> answer;
    while (strcmp(answer, "done"))
    {
        std::cin >> answer;
        ++qty;
    }
 
    std::cout << "Вы ввели " << qty << " слов." << std::endl;
    std::cin.get();
}

void task9(void)
{
    std::string answer;
    int qty = 0;
    std::cout << "Вводите слова (для завершения введите слово done):\n";
    std::cin >> answer;
    while (answer != "done")
    {
        std::cin >> answer;
        ++qty;
    }
 
    std::cout << "Вы ввели " << qty << " слов(а)." << std::endl;
    std::cin.get();
}

void task10(void)

{
int qty=0;
 
    while(true)
    {
        std::cout << "Введите количество строк: ";
        std::cin >> qty;
        if ((isInteger(qty)))
        {
            if (qty>0)
                break;
            else
                std::cout << "Вы должны ввести целое "
                "число больше нуля." << std::endl;
        }
        std::cin.clear();
    }
 
    for (int i=0; i<qty; ++i)
    {
 
        for (int j=0; j<qty; ++j)
        {
            std::cout << ".";
        }
 
        for (int j=0; j<i+1; ++j)
        {
            std::cout << "\b";
        }
        for (int j=0; j<i+1; ++j)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
   
}
 
