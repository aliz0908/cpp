#include <iostream>
using namespace std;
int main()
    {
    	float radius, area;
        float PI=3.14159;
		cout<<" Input the radius(1/2 of diameter) of a circle : ";
    	cin>>radius;
	
		
		area = PI*(radius*radius);
        cout<<" The area of the circle is : "<< area << endl;
        
    }
