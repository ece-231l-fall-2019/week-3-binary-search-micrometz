#include <iostream>
#include <fstream>
#include <vector>

#include "Timer.h"
#include "search.h"

int main()
{
	std::vector<int> numbers;
	std::vector<int> search;
	
	

		std::vector<int> numbers;
		std::fatstream("number:");
		numbers.reserve(100000);
		while(true)
		{
			int numbers;
			fin >> numbers; //fin should be changed
			if(fin.eof())
				Break;
			numbers.push_back(numbers);
		}
		while(true)
		{
			std::cout << "enter a value to find: ";
			std::cin >> valTofind;
			if(fin.eof())
				Break;
			bool finValues(numbers, valTofind);
			if (found)
				std::count << "the values is in the set" <<
		}

	readin(std::vector<int> numbers, std::vector<int> search);
	{
	Vals.reserve(1000000);
	while(true)
	{	
		int numbers;
		fin >> numbers;
		if(fin.oef())
			break;
		numbers.push_back(numbers)
	

	std ::vector<int> readFiles(const char* filename)
	{
		std::ifstream fin;
		fin.open(filename);
		while(!fin.eof())
		{
			fin>>number[i];
		}
		return numbers;
	}

	



	
	{
		Timer timer("Time to linear search all values: ");

		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (linearSearch(numbers, search[i]))
				found++;
		}

		std::cout << "Found "<< found << "/"
			<< search.size() << " values." << std::endl;
	}

	{
		Timer timer("Time to linear search all values (pointers): ");

		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (linearSearch(numbers.data(), numbers.data() + numbers.size(),
					search[i]))
				found++;
		}

		std::cout << "Found "<< found << "/"
			<< search.size() << " values." << std::endl;
	}

	Timer timer("time to binsearch search all values: ");
	{
	int found=0;
	for(size_t i = 0; < search.size(); i++)
	{
		if(binsearch(number, search[i]))
			found++;
	}
	std::cout << "Found " << found << "/"
		<< search.size() << " values." << std::endl;
	}
	Timer timer("time to binsearch allvalues ( pointers): ");
	{
	int found =0;
	for(size_t=0; i < search.size(); i++)
	{
		if(binsearch(numbers.data(), numbers.data() + numberseiz(),
					search[i]))
			found++;
	}
	std::count << "Found " << found << "/"
		<< search.size() << " values." << std::endl;
	}

	return 0;
}

