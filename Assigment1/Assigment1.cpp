#pragma warning (disable:4996)
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	const int ARRAY_SIZE = 100000; // Array size
	float numbers[ARRAY_SIZE]; // Array with 10 elements
	int count = 0; // Loop counter variable
	ifstream inputFile; // Input file stream object


	// Open the file.
	inputFile.open("numbers.txt");
	
	// Read the numbers from the file into the array.
	while (count < ARRAY_SIZE && inputFile >> numbers[count])
	count++;
	
	// Close the file.
	inputFile.close();

	//Calculate Average & standard deviation
	float average=0;
	float sigma_av=0;
	float sigma_sq=0;
	float sigma = 0;
	float std_deviation=0;

	for (count = 0; count < ARRAY_SIZE; count++)
	{
		average = numbers[count] + average;
	}
	average = average / ARRAY_SIZE;
	cout << "The average : " << average;

	for (count = 0; count < ARRAY_SIZE; count++)
	{
		sigma_av = numbers[count] - average;
		sigma_sq = pow(sigma_av, 2);
		sigma = sigma + sigma_sq;
	}

	std_deviation = sqrt(sigma / ARRAY_SIZE);
	cout << "\nThe standard deviation : " << std_deviation;


	/*
	// Display the numbers read:
	 cout << "The numbers are: ";
	 for (count = 0; count < ARRAY_SIZE; count++)
		 cout << numbers[count] << " ";
		 cout << endl;
	*/
	

	/*
	FILE *f = fopen("numbers.txt", "w");
	srand(time(NULL));
	for (int i = 0; i < 100000; i++)
	{
		float x = (float)rand() / RAND_MAX;
		fprintf(f, "%f\n", x);
	}
	fclose(f);
	return 0;
	*/

	 cin.get();
	 cin.get();
	 cin.get();
	 cin.get();
	 return 0;
}

