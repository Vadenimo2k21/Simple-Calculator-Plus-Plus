#include <iostream>

int getInputNumber(int number) {
	std::cout << "Bitte die " << number << ". Nummer eingeben: ";
	int input = 0;
	std::cin >> input;
	std::cout << "\n";
	return input;
}

bool menu();

void printResult(int result) {
	std::cout << "Das Ergebnis lautet: " << result << ".\n\n";
}

void addition() {
	int x = getInputNumber(1);
	int y = getInputNumber(2);
	int result = x + y;
	printResult(result);
}

void subtraction() {
	int x = getInputNumber(1);
	int y = getInputNumber(2);
	int result = x - y;
	printResult(result);
}

void multiplication() {
	int x = getInputNumber(1);
	int y = getInputNumber(2);
	int result = x * y;
	printResult(result);
}

void division() {
	int x = getInputNumber(1);
	int y = getInputNumber(2);
	int result = x / y;
	printResult(result);
}

bool menu() {

	std::cout << "Bitte einen Taschenrechnermodus auswählen:\n\n (1): Addition\n (2): Subtraktion\n (3): Multiplikation\n (4): Divison\n (q): Programm schließen\n\nInput: ";
	char input = ' ';
	std::cin >> input;
	std::cout << "\n";
	switch (input) {

	case('1'):
		addition();
		return true;
	case('2'):
		subtraction();
		return true;
	case('3'):
		multiplication();
		return true;
	case('4'):
		division();
		return true;
	case('q'):
		return false;

	default:
		std::cout << "Die Eingabe wurde nicht erkannt, bitte erneut eingeben.\n\n";
		menu();
		break;
	}

}

int main() {

	std::cout << "Willkommen beim Simple Calculator++, welcher von Vadenimo in C++ programmiert wurde.\nDieser Taschenrechner ist ziemlich simpel konstruiert und für einfache Rechnungen gedacht.\nMan kann nur zwei Zahlen als Rechnung hinzufügen und es werden nur Ganzzahlen ausgegeben.\nDas heißt, dass bei bestimmten Rundungsfällen diese Zahlen nicht beachtet werden.\nBesonderer Dank gehen an fruityloops und dem YouTuber Pilzschaf raus.\n\n";
	while (menu()) {}

	system("PAUSE");
	return 0;
}
