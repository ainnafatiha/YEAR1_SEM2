#include <iostream>
using namespace std;

class Rectangle {
	protected : 
		double width;
		double length;
		double calculateArea ();
	public :
		Rectangle (double, double);
		void display ();
};

Rectangle :: Rectangle (double width, double length)
{
	this -> width = width;
	this -> length = length;
}

void Rectangle :: display ()
{
	cout<<width<<endl;
	cout<<length<<endl;
}

double Rectangle :: calculateArea ()
{
	return width*length;
}

class Square : public Rectangle {
	private :
		double height;
	public :
		Square (double width, double length, double height);
		double calculateVolume ();
		void display ();
};

Square :: square (double height, double length, double width) : Rectangle (length, width)
{
	this -> height = height;
	this -> width = width;
	this -> length = length;
}

double Square :: calculateVolume ()
{
	return height*length*width;
}

void Square::display () 
{
	cout<<Rectangle.display();
	cout<<height;
	cout<<calculateVolume ();
}

int main ()
{
	Square squareBox;
	squareBox.square (15, 10, 10);
	squareBox.calculateVolume ();
	squareBox.display ();
}
	

