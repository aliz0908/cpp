// Summing intrgers with for statement
 #include<iostream>
 int main()
 {
     unsigned int total{0};

     for (unsigned int number{2}; number<=20; number+=2)
     {
         total+=number;
     }
     
     std::cout<<"sum is "<<total<<std::endl;

     std::cin.get();
 }