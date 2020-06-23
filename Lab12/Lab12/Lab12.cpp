#include <iostream>
#include <string>
#include <utility>
struct STUDENTS                                           // структура
{
	int number_Of_Group = 0;
	std::string name;
	int mark_Math = 0;
	int mark_History = 0;
	int mark_Prog = 0;
	float avg = 0;

	void Set()
	{
		std::cout << "Введите номер группы : "; std::cin >> number_Of_Group;
		std::cout << "Введите имя студента : "; std::cin >> name;
		std::cout << "Введите оценку с математики : "; std::cin >> mark_Math;
		std::cout << "Введите оценку с истории : "; std::cin >> mark_History;
		std::cout << "Введите оценку с программирования : "; std::cin >> mark_Prog;
	}
	void Get()                                 //методы доступа гет и сет
	{
		std::cout << "Номер группы : " << number_Of_Group << std::endl;
		std::cout << "Имя студент : " << name << std::endl;
		std::cout << "Оценка с математикиа : " << mark_Math << std::endl;
		std::cout << "Оценка с истории  : " << mark_History << std::endl;
		std::cout << "Оценка с программирования" << mark_Prog << std::endl;
	}
};
void Find_Groud(STUDENTS* s, int n)        // функция сортировки студентов за оцениванием 
{
	int flag_math = 0;
	int flag_history = 0;
	int flag_prog = 0;
	for (int i = 0; i < n ; i++)
	{
		if (s[i].mark_Math == 2) { flag_math++; }
		if (s[i].mark_History == 2) { flag_history++; }
		if (s[i].mark_Prog == 2) {  flag_prog++; }
	}
	if( flag_math > flag_history && flag_math > flag_prog)
	{
		std::cout << "Предмет с количесвом двоек : " << flag_math << " Математика "<< std::endl;
	}
	if (flag_history > flag_math && flag_history > flag_prog)
	{
		std::cout << "Предмет с  количесвом двоек : " << flag_history << " История " <<std::endl;
	}
	if (flag_prog > flag_history && flag_prog  > flag_math)
	{
		std::cout << "Предмет с  количесвом двоек : " << flag_prog << " Программирование " << std::endl;
	}
}

int main()
{
	int n;
	setlocale(NULL, "rus");
	std::cout << "Введите кол-во студентов: "; std::cin >> n;
	STUDENTS* s = new STUDENTS[n];
	for (int i = 0; i < n; i++)
		s[i].Set();
	std::cout << std::endl;
	//for (int i = 0; i < n; i++)
		//s[i].Get();
	Find_Groud(s, n); // вызов функции
	system("pause");
	return 0;
}
