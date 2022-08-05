//salary calculator with respect to hourly rate.
#include<iostream>
int main()
{
  unsigned int salary;
  int st_rate; //straight time rate 

  std::cout<<"Enter hours worked OR -1 to exit: ";
  int hours;
  std::cin>>hours;

  while (hours!=-1)
  {
      std::cout<<"Enter hourly rate in dollars: "<<std::endl;
      std::cin>>st_rate;

      salary=st_rate*hours;
      std::cout<<"Salary is "<<salary<<"$"<<std::endl;

      std::cout<<"Enter hours worked OR -1 to exit: ";
      int hours;
      std::cin>>hours;

      
      

  } // end while

  if (hours>40)
      {
          int et_rate{5}; //over time rate/

          salary=(st_rate+et_rate)*hours;

          std::cout<<"Salary is "<<salary<<"$"<<std::endl;

          if (hours>40)
      {
          int et_rate{5}; //over time rate/

          salary=(st_rate+et_rate)*hours;

          std::cout<<"Salary is "<<salary<<"$"<<std::endl;
      } //end if
      } //end if

  system("pause");
  std::cin.get();

}// end main