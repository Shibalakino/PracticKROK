#include <iostream>
#include <string>
#include <utility>
struct STUDENTS                                           // структура
{
	std::string name;
	int mark_Math = 0;
	int mark_History = 0;
	int mark_Prog = 0;
	float order;
	void Set()
	{
		std::cout << "Введите имя студента : "; std::cin >> name;
		std::cout << "Введите оценку с мат. Анализа : "; std::cin >> mark_Math;
		std::cout << "Введите оценку с истории : "; std::cin >> mark_History;
		std::cout << "Введите оценку с программирования : "; std::cin >> mark_Prog;
	}
	void Get()                                 //методы доступа гет и сет
	{
		std::cout << "Имя студент : " << name << std::endl;
		std::cout << "Оценка с мат. анализа : " << mark_Math << std::endl;
		std::cout << "Оценка с истории  : " << mark_History << std::endl;
		std::cout << "Оценка с программирования" << mark_Prog << std::endl;
	}
};
void Average(STUDENTS* s, int n)        // функция сортировки студентов за оцениванием 
{
	int avg;
	for (int i = 0; i < n ; i++)
	{
		avg = s[i].mark_Prog += s[i].mark_Prog;
		avg = avg / n;
	}
	std::cout << "Средний бал с программирования " << avg << std::endl;
	for(int i = 0; i < n; i++ )
	{
		if (avg > s[i].mark_Prog) 
		{
			std::cout << "имена студентов, что имеют бал ниже среднего " << s[i].name << std::endl;
	    }
	}
}

int main()
{
	int n;
	int avg = 0;
	setlocale(NULL, "rus");
	std::cout << "Введите кол-во студентов: "; std::cin >> n;
	STUDENTS* s = new STUDENTS[n];
	for (int i = 0; i < n; i++)
		s[i].Set();
	std::cout << std::endl;
	//for (int i = 0; i < n; i++)
		//s[i].Get();
	Average(s, n); // вызов функции
	system("pause");
	return 0;
}
