#include "Triangles.h"
#include<iostream>
using namespace std;
void Triangles::drawTriangles()
{
    //first triangle
    for (row = 1; row <= 10; row++)
    {
        
        cout<<"*";
        cout<<endl;
        
    }// end for
    
    //second triangle
    for (row = 10; row >= 1; row--)
    {
        
        cout<<"*";
        cout<<endl;
        
    }//end for
    
    //third triangle
    for ( row = 10; row >= 1; row--)
    {
        for (space = 10;  space > row; space--)
        
        cout<<" ";
        
        for ( coloumn = 0; coloumn <= row; coloumn++)
        cout<<"*";
        cout<<endl;
        
    } //end for
    
    //fourth triangle
    for ( row = 10; row >= 1; row--)
    {
        for (space = 1; space < row; space++)
        
        cout<<" ";
        
        for (coloumn  = 10; coloumn >= row; coloumn++)
        
        cout<<"*";
        cout<<"endl";
        
    }// end for
    
}

int main()
{
    Triangles application;
    application.drawTriangles();
    cin.get();
}
