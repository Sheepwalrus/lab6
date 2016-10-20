#include <iostream>

using namespace std;

enum class material{wood,steel,plastic};

class table
{
public: 
	string color;
	int numLegs;
	double length;
	double width;
 	material make;
	double area;	
	void calcArea()
	{
		area=length*width;
	};
	
table (string tempColor,int tempNumLegs,double tempLength,double tempWidth,material tempMake)
{
	color=tempColor;
	numLegs=tempNumLegs;
	length=tempLength;
	width=tempWidth;
	make=tempMake;
	calcArea();
}
~table() {};
};
class tissueBox
{
public:
	int totalNumTissues;
	int tissuesRemain=totalNumTissues; 
	double width;
	double length;
	double area;
	void calcArea()
	{
		area=length*width;
	};
	void useTissue()
	{
		tissuesRemain-=1;//No checking for negative tissues
	};

tissueBox (int tempTotalNumTissues, double tempWidth, double tempLength)
{
	totalNumTissues=tempTotalNumTissues;
	width=tempWidth;
	length=tempLength;
}
~tissueBox() {};
};
int main()
{	
	table Tablo=table("Blue",4,5.0,3.0,material::steel);
	tissueBox Tim_tBo(120,1.0,2.0);
	//book Melville=(bookStatus::open, 230, 0.5,1.0);
	//lamp lampy=("Mauve",2.0,3.0, lampStatus::off);
	//double stuffTotalArea=(Tim_tBo.area + Melville.area + lampy.area);
	//if (stuffTotalArea>Tablo.area)
	//{
	//	exit(1); //Table Collapsed :(
	//} 
	return 0;
}


