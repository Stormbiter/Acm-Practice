#include <iostream>
using namespace std;
int main()
{
	int apparements;
	int widthRoom;
	int roomLength;
	int heightRoom;
	int paintArea;
	int numDoors;
	int widthDoors;
	int HeightDoors;
	int roomArea;
	int areaDoors;
	int bucketsOfPaint;

	cin >>apparements;
	cin >>widthRoom;
	cin >>roomLength;
	cin >>heightRoom;
	cin >>paintArea;
	cin >>numDoors;
	while(apparements != 0 && widthRoom != 0 && roomLength != 0 && heightRoom !=0 && paintArea != 0 && numDoors != 0)
	{
		roomArea = 0;
		areaDoors = 0;
		for(int count = 0; count <numDoors; count++ )
		{
			cin >> widthDoors;
			cin >> HeightDoors;
			areaDoors += widthDoors * HeightDoors;
		}
		roomArea += heightRoom* roomLength;
		roomArea += heightRoom* widthRoom;
		roomArea *= 2;
		roomArea += roomLength * widthRoom;
		roomArea -= areaDoors;
		roomArea *= apparements;
		bucketsOfPaint =  roomArea / paintArea;
		cout << bucketsOfPaint << endl;


		cin >>apparements;
		cin >>widthRoom;
		cin >>roomLength;
		cin >>heightRoom;
		cin >>paintArea;
		cin >>numDoors;
	}
	return 0;
}
