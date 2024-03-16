#include <iostream>
#include <windows.h>
#include <cstdlib> // Для использования функции system()

using namespace std;

int main() {
	setlocale(LC_ALL, "Ukrainian");
	cout << "Привет, это опрос!" << endl;
	Sleep(500);
	cout << "Сегодня мы проверим, насколько хорошо ты знаешь Тейлор Свифт!" << endl;
	Sleep(2500);
	cout << "\n---------------------------------------------------------------------------------" << endl;
	cout << "Выполняется загрузка опроса...  ";
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
	cout << "1. " << endl;
	cout << "Есть ли вы на r/TaylorSwift?" << endl;
	int first;
	cout << "Варианты ответа: 0/1" << endl;
	cin >> first;
	system("cls"); // Очистить экран
	if (first == 1) {
		result = result + 2;
	}
	if (first == 0) {
		result = result - 1;
	}

	cout << "2. " << endl;
	cout << "Вы фанат Тейлор Свифт?" << endl;
	int second;
	cout << "Варианты ответа: 0/1" << endl;
	cin >> second;
	system("cls"); // Очистить экран
	if (second == 1) {
		result = result + 2;
	}
	if (second == 0) {
		result = result - 2;
	}

	cout << "3. " << endl;
	cout << "Родина(0) или Тейлор Свифт(1)?" << endl;
	int third;
	cout << "Варианты ответа: 0/1" << endl;
	cin >> third;
	system("cls"); // Очистить экран
	if (third == 1) {
		result = result + 2;
	}
	if (third == 0) {
		result = result + 1;
	}

	cout << "4. " << endl;
	cout << "Какая любимая порода котов у Тейлор Свифт?" << endl;
	cout << "0 - Шотландская Вислоухая, 1 - Русская голубая, 2 - Мейнкун" << endl;
	int four;
	cout << "Варианты ответа: 0/1/2" << endl;
	cin >> four;
	system("cls"); // Очистить экран
	if (four == 2) {
		result = result - 0;
	}
	if (four == 1) {
		result = result - 1;
	}
	if (four == 0) {
		result = result + 1;
	}

	cout << "5. " << endl;
	cout << "в каком году родилась Тейлор Свифт?" << endl;
	int five;
	cout << "Например: 2024" << endl;
	cin >> five;
	system("cls"); // Очистить экран
	if (five == 1989) {
		result = result + 2;
	}
	else if (five != 1989) {
		result = result - 2;
	}

	cout << "6. " << endl;
	cout << "в какой стране живёт Тейлор Свифт?" << endl;
	cout << "0 - Россия, 1 - Финляндия, 2 - США, 3 - Гренландия" << endl;
	int six;
	cout << "0/1/2/3" << endl;
	cin >> six;
	system("cls"); // Очистить экран
	if (six == 3) {
		result = result - 1;
	}
	if (six == 2) {
		result = result + 2;
	}
	if (six == 1) {
		result = result - 1;
	}
	if (six == 0) {
		result = result - 2;
	}

	cout << "7. " << endl;
	cout << "Тейлор Свифт это...  ?" << endl;
	cout << "0 - Мужчина, 1 - Женщина, 2 - Девушка" << endl;
	int seven;
	cout << "0/1/2" << endl;
	cin >> seven;
	system("cls"); // Очистить экран
	if (seven == 2) {
		result = result + 2;
	}
	if (seven == 1) {
		result = result + 0;
	}
	if (seven == 0) {
		result = result - 1;
	}

	cout << "8. " << endl;
	cout << "Вы поддерживаете Специальную Военную Операцию?" << endl;
	int eight;
	cout << "0/1" << endl;
	cin >> eight;
	system("cls"); // Очистить экран
	if (eight == 1) {
		result = result - 1;
	}
	if (eight == 0) {
		result = result + 2;
	}

	cout << "Почти готово!" << endl;
	int rate;
	system("cls"); // Очистить экран
	if (result < -4) {
		rate = 0;
	}
	if (0 > result > -4) {
		rate = 1;
	}
	if (6 > result > -1) {
		rate = 2;
	}
	if (10 > result > 5) {
		rate = 3;
	}
	if (13 > result > 9) {
		rate = 4;
	}
	if (result > 12) {
		rate = 5;
	}

	Sleep(1000);
	cout << "---------------------------------------------------------------------------------" << endl;
	cout << "Подсчитываем баллы...  ";

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
	cout << "Ваш результат: " << result << endl;
	cout << "---------------------------------------------------------------------------------" << endl;
	if (rate == 0) {
		end = "Убей себя";
	}
	if (rate == 1) {
		end = "Вы очень плохо знаете Тейлор Свифт, ну вот прям ОЧЕНЬ ПЛОХО. \nВам уже ничего не поможет";
	}
	if (rate == 2) {
		end = "Вы очень плохо знаете Тейлор Свифт. \nРекомендую вам переслушать все её треки и просмотреть минимум 100 тиктоков в свифт-токе.";
	}
	if (rate == 3) {
		end = "Вы знаете Тейлор Свифт на уровне обычного бича со свалки. \nРекомендую посмотреть в ютубе пару биографий и топов интересных фактов о Тейлор Свифт.";
	}
	if (rate == 4) {
		end = "Вы довольно таки неплохо знаете Тейлор Свифт. Но всё же, не идеально. \nЗакажите кружку с Тейлор Свифт.";
	}
	if (rate == 5) {
		end = "Вы отлично знаете Тейлор Свифт!. Настоящий Свифти!";
	}
	cout << end << endl;

	if (rate > 2) {
		Sleep(1000);
		cout << "\n\n" << endl;
		cout << "---------------------------------------------------------------------------------" << endl;
		cout << "Загрузка сертификата...  ";
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
		cout << "_______________________________________" << endl;
		cout << "|             Сертификат              |" << endl;
		cout << "|           ==============            |" << endl;
		if (rate == 3) {
			cout << "|   За неплохое прохождение опроса    |" << endl;
			cout << "|       На знание Тейлор Свифт        |" << endl;
		}
		if (rate == 4) {
			cout << "|    За хорошее прохождение опроса    |" << endl;
			cout << "|       На знание Тейлор Свифт        |" << endl;
		}
		if (rate == 5) {
			cout << "| За ИЗУМИТЕЛЬНОЕ прохождение опроса  |" << endl;
			cout << "|       На знание Тейлор Свифт        |" << endl;
		}
		cout << "---------------------------------------" << endl;
		cout << "\n" << endl;
		cout << "---------------------------------------------------------------------------------" << endl;
	}


}