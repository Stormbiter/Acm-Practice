
#include <iostream>
#include <string>
using namespace std;

struct data
{
	int x;
	int y;
	data * next;
	data()
	{
		x = 0;
		y = 0;
		next = NULL;
	}
};

void process(int width, int length);
int main() {
	int width;
	int length;
	cin >> width;
	cin >> length;
	cin.ignore();


	process(width, length);

	return 0;
}

void process(const int width, const int length)
{
	char ar[width][length];
	string read;
	int x, y;
	for(int index =0; index < length; index++)
	{
		getline(cin, read);
		for(int count = 0; count < width; count++)
		{
			ar[count][index] = read[count];
		}
	}
	x = 0;
	y = 0;
	while(x < length && y < width)
	{
		if(ar[x][y] == '.' )
		{
			ar[x][y] = 'P';
		}
		x++;
		y++;
	}
	for(int index = 0; index < length; index ++)
	{
		for(int count = 0; count < width; count ++)
		{
			cout << ar[count][index] << " ";
		}

		cout << endl;
	}



}

