#include"Chapter13.h"
class Employee{
public:
	Employee(){ myId = ++id; }
	Employee(string name) :name(name){ myId = ++id; }
	Employee(const Employee& em){
		name = em.name;
		myId = ++id;
	}
	static int id;
private:
	int myId;
	string name;
};

int Employee::id;

int main()
{
	Employee e1;
	Employee e2 = e1;
	cout << e1.id << e2.id;
	getchar();
}