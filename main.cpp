#include <iostream>
using namespace std;

int main()
{
	int row, column;

	cout << "Enter Row and Column\n";
	
	cout << "Row: ";
	cin >> row;
	
	cout << "Column: ";
	cin >> column;

	int** map;

	// ¸Ê Å©±â ÇÒ´ç
	map = new int*[row];
	for (int r = 0; r < row; r++)
		map[r] = new int[column];

	for (int r = 0; r < row; r++)
	{
		for (int j = 0; j < column; j++)
			cout << "¡à";
		cout << '\n';
	}

	for (int r = 0; r < row; r++)
		delete[] map[r];
	delete[] map;
}