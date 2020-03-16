#include <iostream>
using namespace std;

class Instructor
{
	private :
		string instructorName;
		string officeNum;
		
	public :
		Instructor (string n, string o)
		{
			set (n, o);
		}
		
		void set (string n, string o)
		{
			instructorName = n;
			officeNum = o;
		}
		
		void print () const
		{
			cout << "\n Instructor name : " << instructorName;
			cout << "\n Office number : " << officeNum << endl;
		}
};

class TextBook 
{
	private : 
		string title;
		string author;
		
	public :
		TextBook (string t, string a)
		{
			set (t, a);
		}
		
		void set (string t, string a)
		{
			title = t;
			author = a;
		}
		
		void print () const
		{
			cout << "\n Title: " << title << endl;
			cout << " Author : " << author << endl;
		}
};

class Exam 
{
	private : 
		string examName;
		string date;
		
	public :
		Exam ()
		{
			set ("", "");
		}
		
		Exam (string n, string d)
		{
			set (n, d);
		}
		
		void set (string n, string d)
		{
			examName = n;
			date = d;
		}
		
		void print () const
		{
			cout << "\n Exam name: " << examName  << endl;
			cout << "Date "<< date << endl;
		}			
};

class Course 
{
	private :
		string courseName;
		Instructor *instructor;
		TextBook *textbook;
		Exam exam;
		
	public :
		Course (string n, string d, string c, Instructor *I, TextBook *T) : exam (n, d)
		{
			courseName = c;
			instructor = I;
			textbook = T;
		}
		
		void print () const
		{
			cout << "Course name : " << courseName;
			instructor -> print ();
			textbook -> print ();
			exam.print() ;
		}
		
};

class Department 
{
	private :
		string depName;
		Instructor *instructor;
		
	public :
		Department (string n, Instructor *I)
		{
			depName = n;
			instructor = I;
		}
		
		void print () const
		{
			cout << "\n Department name : " << depName;
			instructor -> set ("Amir Hamzah", "N28-301");
			instructor -> print ();	
		}
};

int main ()
{
	Instructor *myInstructor = new Instructor ("Noraminah Hassan", "N28A-512");
	TextBook *myText = new TextBook ("Introduction to C++", "Danial Liang");
	Department *myDepart ("Software Engineering", myInstructor);
	Exam myExam ("Final Exam", "05 January 2018");
	Course myCourse ("Test 1", "7 November 2017", "Programming Technique II", myInstructor, myText);
	
	myCourse.print ();
	myDepart.print ();
	myText -> set("Starting Out with C++", "Gaddis");
	myInstructor -> print ();
	myText -> print ();
	myExam.print();
	
	return 0;
}
