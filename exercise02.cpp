#include <iostream>
	using namespace std;
	int volume(int height, int width, int length);
	int main() {
		int height, width, length;
		
		int totalVolume, totalSurface;

		cout << "Enter Box 1 Height : ";
		cin >> height;
		cout << "Enter Box 1 Width : ";
		cin >> width;
		cout << "Enter Box 1 Length : ";
		cin >> length;
    cout<<endl;
		cout << "Enter Box 2 Height : ";
		cin >> height;
		cout << "Enter Box 2 Width : ";
		cin >> width;
		cout << "Enter Box 2 Length : ";
		cin >> length;
     cout<<endl;
		totalVolume = volume(height, width, length)
			+ volume(height, width, length);

		cout << "Volume of Box is " << totalVolume << endl;

		return 0;
	}
	// Implement the Volume() function here
	int volume(int height, int width, int length)
	{
		int volume;
		volume = height * width * length;
		return volume;
	}