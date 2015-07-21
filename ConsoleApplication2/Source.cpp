//#include "GuessingGame.h"
#include <iostream>
#include <time.h>
#include <cstdlib>

//using namespace System;
//using namespace System::Windows::Forms;
using namespace std; //if problems occur, then remove using namespace std

void setGuess(int numguess, int guessed);
int num;
int guess[7];
int gguess;
/*[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	NumberGuessingGame::GuessingGame form;
	Application::Run(%form);
}*/
int main() {
	srand((unsigned int)time(0));
	num = rand() % 100;
	//cout << num << endl;
	for ( int i=0; i<8; i++ ) {
		int g;
		cout << "Guess> ";
		cin >> g;
		cout << endl;
		setGuess(i, g);
		if (guess[i] == num) {
			cout << "YOU GOT IT" << endl;
			gguess == guess[i];
			break;
		} else {
			cout << "Try again." << endl;
		}
	}
}
void setGuess(int numguess, int guessed) {
	guess[numguess] = guessed;
}