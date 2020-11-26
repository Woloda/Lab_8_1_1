#include <iostream>
#include <Windows.h>

using namespace std;

bool perevirka(const char* lit_r, const char* para, const char* para1);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char lit_r[20] = "SQsfQSSWfs";
	cout << "Сфомований літерний рядок: " << endl << endl << lit_r << endl << endl;
	char para[] = "SQ";
	char para1[] = "QS";

	if (perevirka(lit_r, para, para1))
		cout << "Так є серед цих символів пара сусідніх букв “SQ” або ”QS”." << endl;
	else
		cout << "Ні не має серед цих символів пара сусідніх букв “SQ” або ”QS”." << endl;

	return 0;
}

bool perevirka(const char* lit_r, const char* para, const char* para1)
{
	int j, k;
	for (int i = 0; lit_r[i] != '\0'; i++)
	{
		j = 0;
		k = i;
		while (para[j] != '\0')
		{
			if ((lit_r[k] == para[j]) || (lit_r[k] == para1[j]) && lit_r[k] != '\0')
			{
				j++;
				k++;
			}
			else
				break;
		}
		if (para[j] == '\0')
			return true;
	}
	return false;
}