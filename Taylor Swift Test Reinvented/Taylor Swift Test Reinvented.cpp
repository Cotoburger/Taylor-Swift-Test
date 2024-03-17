#include <iostream>
#include <windows.h>
#include <cstdlib> // Для использования функции system()
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Ukrainian");
	cout << "Welcome to the quiz about Taylor Swift!" << endl;
	Sleep(500);
	cout << "Today we'll test how well you know Taylor Swift!" << endl;
	Sleep(2500);
	cout << "\n---------------------------------------------------------------------------------" << endl;
	cout << "Quiz Loading... ";
	Sleep(500);
	cout << "|||";
	Sleep(250);
	cout << "|||";
	Sleep(200);
	cout << "|||";
	Sleep(300);
	cout << "|||";
	Sleep(100);
	cout << "|||";
	Sleep(100);
	cout << "|||";
	Sleep(500);
	cout << "|||";
	Sleep(400);
	cout << "|||";
	Sleep(111);
	cout << "|||";
	Sleep(222);
	cout << "|||";
	Sleep(333);
	system("cls"); // Очистить экран
	int result = 1;
	cout << "0. " << endl;
	cout << "What country does Taylor Swift live in ? " << endl;
	cout << "0 - Russia, 1 - Finland, 2 - USA, 3 - Greenland" << endl;
	string zero;
	cout << "0/1/2/3" << endl;
	cin >> zero;
	system("cls"); // Очистить экран
	if (zero == "3") {
		result = result - 1;
	}
	if (zero == "2") {
		result = result + 2;
	}
	if (zero == "1") {
		result = result - 1;
	}
	if (zero == "0") {
		result = result - 2;
	}

	cout << "1. " << endl;
	cout << "Are you on r/TaylorSwift?" << endl;
	string first;
	cout << "0/1" << endl;
	cin >> first;
	system("cls"); // Очистить экран
	if (first == "1") {
		result = result + 2;
	}
	if (first == "0") {
		result = result - 1;
	}

	cout << "2. " << endl;
	cout << "Are you Taylor Swift fan?" << endl;
	string second;
	cout << "0/1" << endl;
	cin >> second;
	system("cls"); // Очистить экран
	if (second == "1") {
		result = result + 2;
	}
	if (second == "0") {
		result = result - 2;
	}

	cout << "3. " << endl;
	cout << "Motherland(0) or Taylor Swift(1)?" << endl;
	string third;
	cout << "0/1" << endl;
	cin >> third;
	system("cls"); // Очистить экран
	if (third == "1") {
		result = result + 2;
	}
	if (third == "0") {
		result = result + 1;
	}

	cout << "4. " << endl;
	cout << "What is Taylor Swift's favorite cat breed?" << endl;
	cout << "0 - Scottish Fold, 1 - Russian Blue, 2 - Maine Coon" << endl;
	string four;
	cout << "0/1/2" << endl;
	cin >> four;
	system("cls"); // Очистить экран
	if (four == "2") {
		result = result - 0;
	}
	if (four == "1") {
		result = result - 1;
	}
	if (four == "0") {
		result = result + 1;
	}

	cout << "5. " << endl;
	cout << "What year was Taylor Swift born ? " << endl;
	string five;
	cout << "For example: 2024" << endl;
	cin >> five;
	system("cls"); // Очистить экран
	if (five == "1989") {
		result = result + 2;
	}
	else if (five != "1989") {
		result = result - 2;
	}

	cout << "6. " << endl;
	cout << "Which album is Taylor Swift's best-selling album in its first week of release in the USA?" << endl;
	cout << "0 - 1989, 1 - Reputation, 2 - Fearless (Taylor's Version)? 3 - Lover" << endl;
	string six;
	cout << "0/1/2/3" << endl;
	cin >> six;
	system("cls"); // Очистить экран
	if (six == "3") {
		result = result - 1;
	}
	if (six == "2") {
		result = result - 0;
	}
	if (six == "1") {
		result = result - 1;
	}
	if (six == "0") {
		result = result + 2;
	}

	cout << "7. " << endl;
	cout << "Taylor Swift is..." << endl;
	cout << "0 - Man, 1 - Woman, 2 - Girl" << endl;
	string seven;
	cout << "0/1/2" << endl;
	cin >> seven;
	system("cls"); // Очистить экран
	if (seven == "2") {
		result = result + 2;
	}
	if (seven == "1") {
		result = result + 0;
	}
	if (seven == "0") {
		result = result - 1;
	}

	cout << "8. " << endl;
	cout << "Do You support war in Ukraine" << endl;
	string eight;
	cout << "0/1" << endl;
	cin >> eight;
	system("cls"); // Очистить экран
	if (eight == "1") {
		result = result - 1;
	}
	if (eight == "0") {
		result = result + 2;
	}

	cout << "Almost done!" << endl;
	int rate;
	system("cls"); // Очистить экран
	if (result < -4) {
		rate = 0;
	}
	else if (result >= -4 && result < 0) {
		rate = 1;
	}
	else if (result >= 0 && result < 6) {
		rate = 2;
	}
	else if (result >= 6 && result < 10) {
		rate = 3;
	}
	else if (result >= 10 && result < 13) {
		rate = 4;
	}
	else if (result >= 13) {
		rate = 5;
	}

	cout << "---------------------------------------------------------------------------------" << endl;
	cout << "Let's count the points...  ";
	Sleep(500);

	cout << "|||";
	Sleep(250);
	cout << "|||";
	Sleep(200);
	cout << "|||";
	Sleep(300);
	cout << "|||";
	Sleep(100);
	cout << "|||";
	Sleep(100);
	cout << "|||";
	Sleep(500);
	cout << "|||";
	Sleep(400);
	cout << "|||";
	Sleep(111);
	cout << "|||";
	Sleep(222);
	cout << "|||";
	Sleep(333);
	system("cls"); // Очистить экран
	string end;
	cout << "---------------------------------------------------------------------------------" << endl;
	cout << "Your result: " << result << endl;
	cout << "---------------------------------------------------------------------------------" << endl;
	if (rate == 0) {
		end = "Kill yourself";
	}
	if (rate == 1) {
		end = "You know Taylor Swift very poorly, like REALLY BADLY. \nNothing can help you anymore.";
	}
	if (rate == 2) {
		end = "You know Taylor Swift very poorly. \nI recommend you to re-listen to all of her tracks and watch at least 100 TikToks in SwiftTok.";
	}
	if (rate == 3) {
		end = "You know Taylor Swift at the level of an ordinary garbage dude. \nI recommend watching a couple of biographies and top interesting facts about Taylor Swift on YouTube.";
	}
	if (rate == 4) {
		end = "You know Taylor Swift quite well. But still, not perfect. \nOrder a mug with Taylor Swift.";
	}
	if (rate == 5) {
		end = "You know Taylor Swift excellently! A true Swiftie!";
	}
	cout << end << endl;

	if (rate > 2) {
		Sleep(1000);
		cout << "\n\n" << endl;
		cout << "---------------------------------------------------------------------------------" << endl;
		cout << "Certificate loading...  ";
		Sleep(500);
		cout << "|||";
		Sleep(250);
		cout << "|||";
		Sleep(200);
		cout << "|||";
		Sleep(300);
		cout << "|||";
		Sleep(100);
		cout << "|||";
		Sleep(100);
		cout << "|||";
		Sleep(500);     
		cout << "|||";
		Sleep(400);
		cout << "|||";
		Sleep(111);
		cout << "|||";
		Sleep(222);
		cout << "|||" << endl;
		Sleep(333);
		cout << "\n" << endl;
		cout << "___________________________________________" << endl;
		cout << "|               Certificate               |" << endl;
		cout << "|              ==============             |" << endl;
		cout << "|                                         |" << endl;
		if (rate == 3) {
			cout << "|   For a decent completion of the quiz   |" << endl;
			cout << "|       On knowledge of Taylor Swift      |" << endl;
		}
		if (rate == 4) {
			cout << "|    For a good completion of the quiz    |" << endl;
			cout << "|       On knowledge of Taylor Swift      |" << endl;
		}
		if (rate == 5) {
			cout << "|  For an AMAZING completion of the quiz  |" << endl;
			cout << "|       On knowledge of Taylor Swift      |" << endl;
		}
		cout << "|                                         |" << endl;
		cout << "-------------------------------------------" << endl;
		cout << "\n" << endl;
	}

}
