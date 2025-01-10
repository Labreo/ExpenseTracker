#include <iostream>
#include <string>
#include <vector>

int main()
{int choice;
    
do{std::cout<<"Welcome to Expense Tracker\n";
    std::cout<<"1.Add Expense\n";
    std::cout<<"2.Update Expense\n";
    std::cout<<"3.Delete Expense\n";
    std::cout<<"4.View Expense\n";
    std::cout<<"5.Total Expense\n";
    std::cout<<"6.Monthly Expense\n";
    std::cout<<"7.Exit Program\n";
   std::cin>>choice;
   switch (choice)
   {
   case 1:
    
    break;
   
   default:
    break;
   }
   }while(choice!=7);
   return 0;
}