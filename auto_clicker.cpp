#include <unistd.h>
#include <iostream>
#include <stdio.h>
//#include <conio.h>
using namespace std;
int x;
int y;


	static void clicker(int click_num){
				usleep(20);
				cout << "Clicking...\n";
				int clicks = 0;
		while (clicks <= click_num){
			usleep(5);
			system("xdotool click 1");
			clicks++;

		}
		system("pkill -f xdotool");
	}


	void settings(){
		usleep(1000);
		//system("clear");
		cout << "SirMik3: Auto Cliker V1.0\n";
		cout << "=======================================================\n";
		cout << "Click to start auto clicker\n Right click to STOP\n";
		cout << "Please send support for pro version or auto clicker 2.0\n";
		cout << "=======================================================\n";
		cout << "\n\n\n\n Do you want to start the Auto Clicker? Y/n\n";
		string answer;
		cin >> answer;
		if (answer == "Y" || answer == "y"){
			int num = 0;
			cout << "How many clicks should we do before stopping? \n";
			cin >> num;
			//cout << "Press x + enter to stop \n";
			clicker(num);
		} else {
			cout << "abort. \n";
			//return 0;
		}

	}

int main() {
	cout << "Starting...\n";
	//clicker();
	settings();
}