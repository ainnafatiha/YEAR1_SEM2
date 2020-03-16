#include <string>
#include <iostream>
using namespace std;

class Name 
{
	private :
		string firstname, lastname;
		
	public :
		Name (string fname, string lname)
		{
			firstname = fname;
			lastname = lname;
		}
		
		string getFullName ()
		{
			return firstname + " " + lastname;
		}
};

class Lecturer 
{
	private : 
		Name name;
		string staffId;
		
	public : 
		Lecturer (string fname, string lname, string sId) : name (fname, lname)
		{
			staffId = sId;
		}
		
		string getLecturer ()
		{
			return name.getFullName () + "\nLecturer id :" + staffId;
		}
};

class Department 
{
	private :
		Lecturer *lecturerDepart;
		
	public : 
	Department (Lecturer *lectDepart)
	{
		lecturerDepart = lectDepart;
	}
	
	void printDepartment ()
	{
		cout << "Lecturer name : " << lecturerDepart -> getLecturer () << endl;
	}
};

int main ()
{
	Lecturer *lect = new Lecturer ("Abdullah", "Hamid", "124");
	Department department (lect);
	department.printDepartment ();
	
	return 0;
}
