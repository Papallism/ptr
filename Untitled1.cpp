#include <iostream>
#include <cstring>
using namespace std;

void remove(char [], char);

int main()
{
	char sentence [50], c;
	
	cout << "Enter a sentence: ";
	cin.getline(sentence, 50);
	cout << "Enter a character: ";
	cin >> c;
	remove(sentence, c);
	
	return 0;
}

void remove(char str[], char c)
{
	int i = 0, j = 0;
	char *ptr = new char [50];
	while(str[i] != '\0')
	{
		if(str[i] != c)
		{
			ptr[j] = str[i];
			j++;
		}
		i++;
	}
	ptr[j] = '\0';
	cout << ptr;
}
