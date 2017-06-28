#include <iostream>
#include "Sales_item.h"

int practice1()
{
	std::cout << "Enter two numbers: " << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The sum of " << v1 << " and " << v2
		<< " is " << v1 + v2 << std::endl;
	return 0;
}
int practice2()
{
	std::cout << "Enter two numbers: " << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The multiple of " << v1 << " and " << v2
		<< " is " << v1 * v2 << std::endl;
	return 0;
}
int practice3()
{
	std::cout << "Enter two numbers: " << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1;
	std::cin >> v2;
	std::cout << "The sum of ";
	std::cout << v1;
	std::cout << " and ";
	std::cout << v2;
	std::cout << " is ";
	std::cout << v1 + v2;
	std::cout << std::endl;
	return 0;
}
int practice4()
{
	int sum = 0, val = 1;
	while (val <= 10) {
		sum += val;
		++val;
	}
	std::cout << "Sum of 1 to 10 includesive is " << sum << std::endl;

	return 0;
}
int practice5()
{
	int sum = 0, val = 50;
	while (val <= 100) {
		sum += val;
		++val;
	}
	std::cout << "Sum of 50 to 100 includesive is " << sum << std::endl;

	return 0;
}
int practice6()
{
	int val = 10;
	while (val >= 0) {
		std::cout << val << std::endl;
		--val;
	}
	return 0;
}

int practice7()
{
	int sum = 0, val1, val2, val3;
	std::cin >> val1 >> val2;
	val3 = val1;
	while (val3 <= val2) {
		sum += val3;
		++val3;
	}
	std::cout << "Sum of "<< val1 << " to "<< val2 <<" includesive is " << sum << std::endl;

	return 0;
}
int practice8()
{
	int sum = 0;
	for (int i = -100; i <= 100; ++i)
		sum += i;
	std::cout << sum << std::endl;
	return 0;
}
int practice9()
{
	int sum = 0, value = 0;
	while (std::cin >> value)
		sum += value;
	std::cout << "Sum is : " << sum << std::endl;
	return 0;
}
int practice10()
{
	int currVal = 0, val = 0;
	if (std::cin >> currVal) {
		int cnt = 1;
		while (std::cin >> val) {
			if (val == currVal)
				++cnt;
			else {
				std::cout << currVal << " occurs " << cnt << " times" << std::endl;
				currVal = val;
				cnt = 1;
			}
		}
		std::cout << currVal << " occurs " << cnt << " times" << std::endl;
	}
	return 0;
}
int practice11()
{
	Sales_item book;
	std::cin >> book;
	std::cout << book << std::endl;
	return 0;
}
int practice12()
{
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	std::cout << item1 + item2 << std::endl;
	return 0;
}
int practice13()
{
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	if (item1.isbn() == item2.isbn()) {
		std::cout << item1 + item2 << std::endl;
		return 0;
	}
	else {
		std::cerr << "Data must refer to same ISBN" << std::endl;
		return -1;
	}
}
int practice14()
{
	Sales_item total;
	if (std::cin >> total) {
		Sales_item trans;
		while (std::cin >> trans) {
			if (total.isbn() == trans.isbn())
				total += trans;
			else {
				std::cout << total << std::endl;
				total = trans;
			}
		}
		std::cout << total << std::endl;
	}
	else {
		std::cerr << "No data?!" << std::endl;
		return -1;
	}
}
int main()
{
	practice14();
	return 0;
}