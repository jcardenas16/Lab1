#include "myheader.h"
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <algorithm>

/*
 */

vector<int> generateAndStore()
{
	vector <int> myVector;
	int randNum;


	srand (time(NULL));


	for(int index = 0; index < 20;  index++)
	{
		randNum = rand() % 899 + 100;
		myVector.push_back(randNum);
	}

	return myVector;

}

vector<string> reversedDigits(vector<int> sortedVector)
{
	vector <string> myVector;

	for(vector<int>::iterator it= sortedVector.begin(); it != sortedVector.end(); it++ )
	{
		int front = 0, mid = 0, end = 0, tempMid = 0;
		front = *it % 10;

		tempMid = *it / 10;
		mid = tempMid % 10;

		end = *it / 100;

		myVector.push_back(to_string(front)+to_string(mid)+to_string(end));


	}

	return myVector;
}

vector<int> digitsSummed(vector<int> sortedVector)
{
	vector <int> myVector;


	for(vector<int>::iterator it= sortedVector.begin(); it != sortedVector.end(); it++ )
	{
		int front = 0, mid = 0, end = 0, tempMid = 0, finalValue = 0;
		front = *it % 10;

		tempMid = *it / 10;
		mid = tempMid % 10;

		end = *it / 100;

		finalValue = front+mid+end;
		myVector.push_back(finalValue);


	}

	return myVector;
}


int main()
{

	vector <int> unSorted;
	vector <int> sorted;
	vector <string> revDigits;
	vector <int> sumOfDigits;

	//a & b
	unSorted = generateAndStore();

	cout << "These are the values inside the vector after being stored: " << endl;
	for(vector<int>::iterator it= unSorted.begin(); it != unSorted.end(); it++ )
		cout << *it << " ";


	sorted = unSorted;

	//c
	sort(sorted.begin(), sorted.end());

	cout << "\n\nThese are the values inside the vector after being SORTED: " << endl;
	for(vector<int>::iterator it= sorted.begin(); it != sorted.end(); it++ )
		cout << *it << " ";


	revDigits = reversedDigits(sorted);

	cout << "\n\nThese are the values inside the vector after being reversedDigits: " << endl;
	for(vector<string>::iterator it = revDigits.begin(); it != revDigits.end(); it++ )
		cout << *it << " ";


	sumOfDigits = digitsSummed(sorted);

	cout << "\n\nThese are the values inside the vector after being summed: " << endl;
		for(vector<int>::iterator it = sumOfDigits.begin(); it != sumOfDigits.end(); it++ )
			cout << *it << " ";







	return 0;

}
