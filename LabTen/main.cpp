#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    char text[1024] = { 0 };
    char find[1024] = { 0 };
    char* sub = NULL;
    cout << "Enter text less than 1024 chars\n";
    cin.getline(text, 1023);
    int len = strlen(text);
    for (j = i = 0; text[i] != '\0'; i++)
    {
        if (!strchr(find, text[i]))
        {
            find[j] = text[i];
            j = j + 1;
        }
    }
    cout << "Frequency of chars in text\n";
    for (n = j = 0; find[j] != '\0'; j++)
    {
        if (sub = strchr(text, find[j]))
        {
            cout << "char : " << find[j] << " ";
            for (n = 1; sub != NULL; n++)
            {
                if (sub + 1)
                    sub = strchr(sub + 1, find[j]);
            }
            cout << "count : " << n << " "
                << "freq  : " << (1.0 * n) / len << endl;
        }
    }
    system("pause");
    return 0;
}
