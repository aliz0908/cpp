#include<iostream>
#include<iomanip>

using std::setprecision;

class Sales
{
private:
   double product1 = 0;
   double product2 = 0;
   double product3 = 0;
   double product4 = 0;
   double product5 = 0;

   int productID{1};
   int quantity;
public:
   void calculateSales();
};//end class defination

void Sales::calculateSales()
{
    std::cout<<std::fixed<<setprecision(2);

    while (productID!=-1)
    {
        //enter product ID
        std::cout<<"Enterproduct number(1-5) OR -1 to exit: ";
        std::cin>>productID;

        //verify product ID
        if (productID>=1 && productID<=5)
        {
            //Determine the qauntity of sold item
            std::cout<<"Enter Qauntity of product sold: ";
            std::cin>>quantity;

            switch (productID)
            {
            case 1:
                product1+=quantity*2.98;
                break;
            case 2:
                product2+=quantity*4.50;
                break;
            case 3:
                product3+=quantity*9.98;
                break;
            case 4:
                product4+=quantity*4.49;
                break;
            case 5:
                product5+=quantity*6.87;
                break;
            }//end switch
        }//end if
        
        
    }//end while

    //print summary
    std::cout<<std::endl;
    std::cout<<"Product 1: $ "<<product1<<std::endl;
    std::cout<<"Product 2: $ "<<product2<<std::endl;
    std::cout<<"Product 3: $ "<<product3<<std::endl;
    std::cout<<"Product 4: $ "<<product4<<std::endl;
    std::cout<<"Product 5: $ "<<product5<<std::endl;
    std::cout<<"Total: "
            <<product1+product2+product3+product4+product5<<"$"<<std::endl;
    
}// end function calculateSales

int main()
{
    Sales application;
    application.calculateSales();
    std::cin.get();
}
