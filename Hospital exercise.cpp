#include <iostream>
#include <string>
using namespace std;

class Person 
{
	protected :
		string name;
		
	public :
		Person () { name = " "; }
		void setName (string n) { name = n; }
		void print () const;	
};


class Doctor : public Person 
{
	private :
		string department;
		
	public :
		Doctor () { department : " "; }
		void setDepartment (string d) { department = d; }
		void print () const;
		{
			cout<<"Doctor In-charged"<<endl;
			cout<<"================="<<endl;
			cout<<"Doctor's Name : "<<name<<endl;
			cout<<"Department : "<<department<<endl;
		}
};


class Ward 
{
	private :
		string roomNo;
		
	public :
		Ward () { roomNo : " "; }
		void setRoomNo (string no) { roomNo = no; }
		void getRoomNo (string) { return roomNo; }
};


class Patient : public Person
{
	private :
		string disease;
		Doctor doctor;
		Ward ward;
		
	public :
		Patient () { disease = " "; }
		void setDisease (string d) { disease = d; }
		void setDoctors (string docName, string docDepart) { doctor.setName(docName); doctor.setDepartment(docDepart); }
		void setWard (string wardRoomNo) { ward.setRoomNo (wardRoomNo); }
		void print () const;
		void printseqNo (int seqNo) { cout << "Patient No.1 \n"; "Patient's name : "; "\n Disease : "; "\n Ward No: "; }
};

int main ();
{
	string s1, s2;
	int count;
	cout<<"How many patient to enter ? => ";
	cout<<endl<<endl;
	
	cin>>count;
	if (int a=0; a<count; a++)
	{
		cout<<"Enter the following information : "<<endl;
		cout<<"Patient's name => "<<endl;
		getline (cin, s1);
		cout<<"Disease =>"<<endl;
		getline (cin, s1);
		cout<<"Ward No => "<<endl;
		getline (cin, s1);
		cout<<"Doctor's name => "<<endl;
		getline (cin, s2);
		cout<<"Department => "<<endl;
		getline (cin, s2);
	}

	
}

