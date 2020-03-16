#include <iostream>
using namespace std;

class Shape 
{
	public :
		Shape ()
		{
			
		}
		
		virtual double getArea () = 0;
		virtual void read () = 0;
		virtual void print () = 0;
		
};

class Point 
{
	private :
		double x;
		double y;
		
	public :
		Point (double xX = 0, double yY = 0)
		{
			set (xX, yY);
		}
		
		void set (double xX, double yY)
		{
			x = xX;
			y = yY;
		}
		
		double getX ()
		{
			return x;
		}
		
		double getY ()
		{
			return y;
		}		
};

class Circle : public Shape
{
	private :
		
		double radius;
		Point center;
		
	public :
	
		Circle ():center(0,0)
		{
			radius = 0;
		}
		
		double getArea ()
		{
			return (3.1415*radius*radius);
		}
		
		void read ()
		{
			double cx, cy;
			cout<<"Please enter the coordinate of the circle (x, y) : ";
			cin>>cx>>cy;
			center.set(cx, cy);
			cout<<"Please enter the circle radius : ";
			cin>>radius;
		}
		
		void print ()
		{
			cout<<"Circle's center X = "<<center.getX()<<" and center Y = "<<center.getY()<<endl;
			cout<<"Circle's radius = "<<radius<<endl;
			cout<<"Circle's area = "<<center.getArea()<<endl;
		}
		
};

class Rectangle : public Shape
{
	private :
		Point topLeft;
		Point bottomRight;
		double getWidth ()
		{
			return (bottomRight.getX()-topLeft.getX());
		}
		
		double getHeight ()
		{
			return (bottomRight.getY()-topLeft.getY());
		}
		
	public :
		Rectangle : topLeft(0, 0), bottomRight(0, 0)
		{
			
		}
		
		double getArea ()
		{
			return ( getWidth() * getHeight() );
		}
		
		void read ()
		{
			double x1, x2, y1, y2;
			cout<<"Please enter the coordinate of the bottom right (x, y) : "<<endl;
			cin>>x2>>y2;
			cout<<"Please enter the coordinate of the top left (x, y) : "<<endl;
			cin>>x1>>y1;
			
			topLeft.set(x1, y1);
			bottomRight.set(x2, y2);
		}
		
		void print ()
		{
			cout<<"Rectangle's top left corner : X = "<<topLeft.getX()<<" Y = "<<topLeft.getY()<<endl;
			cout<<"Rectangle's bottom right corner : X = "<<bottomRight.getX()<< " Y = "<<bottomRight.getY()<<endl;
			cout<<"Rectangle's width = "<<getWidth()<<endl;
			cout<<"Rectangle's height = "<<getHeight()<<endl;
			cout<<"Rectangle's area = "<<getArea()<<endl;
		}
};

int menu ()
{
	int choice;
	
	cout<<endl<<endl;
	cout<<"==========[MENU]=========="<<endl<<endl;
	cout<<"1. Add a shape"<<endl;
	cout<<"2. Print all shapes"<<endl;
	cout<<"3. Calculate total area"<<endl;
	cout<<"4. Exit"<<endl;
	
	cout<<"Enter your choice : ";
	cin>>choice;
	cout<<endl;
	
	return choice;	
}

int main ()
{
	int shapeCount = 0;
	Shape *shapes [20];
	int command = menu (); //cara nak guna menu
	int shapeType;
	Shape *newShape;
	
	while (command != 4) //using menu
	
		switch (command)
		{
			case 1:
			cout<<"What type of shape you want to enter ?"<<endl;
			cout<<"			1. Cirlce"<<endl;
			cout<<"			2. Rectangle"<<endl<<endl;
			
			cout<<"Your choice is : ";
			cin>>shapeType;
			cout<<endl;
			
			if (shapeType==1)
				newShape = new Circle;
			else
				newShape = new Rectangle;
		}
}
