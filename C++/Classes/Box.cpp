#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box {

private:
	int l;
	int b;
	int h;

public:
	Box() {
		l = 0;
		b = 0;
		h = 0;
	}

	Box(int l1, int b1, int h1) {
		l = l1;
		b = b1;
		h = h1;
	}

	Box(const Box &b1){
		l = b1.l;
		b = b1.b;
		h = b1.h

	}

	int getHeight() {
		return h;
	}

	int getBreadth() {
		return b;
	}

	int getLength() {
		return l;
	}

	long long CalculateVolume() {
		return (long long)(l) * b * h;
	}

	bool operator < (Box &b1) {
		bool val = false;
		if (l < b.l) {
			val = true;
		} else if (b < b1.b && l == b1.l) {
			val = true;
		} else if (h < b1.h && b == b1.b && l == b1.l) {
			val = true;
		} else {
			val = false;
		}
		return val;
	}
};

ostream& operator <<(ostream& out, Box &b1) {
    out << b1.getLength() << " " << b1.getBreadth() << " " << b1.getHeight();
    return out;
};

void check2() {
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}