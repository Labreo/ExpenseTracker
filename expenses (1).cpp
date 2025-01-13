#include <iostream>
#include <string>
#include <vector>

struct Expense{
    
    int id;
    char description[100];
    int quantity;
    double amount;
    int month;
};

int main()
{int choice;struct Expense e[100];int i;int edit;char wedit;int del;double sum;int m;int check;
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
    for(i=0;i<100;++i)
    {
    if(e[i].id==0)
    {
    e[i].id=i+1;
    std::cout<<"\nEnter the description:\n";
    std::cin>>e[i].description;
    std::cout<<"\nEnter the quantity:\n";
    std::cin>>e[i].quantity;
    std::cout<<"\nEnter the amount:\n";
    std::cin>>e[i].amount;
    std::cout<<"\nEnter the month:\n";
    std::cin>>e[i].month;
    
    break;
    }
    else continue;
    }
    break;
   case 2:
   std::cout<<"\nEnter the ID of the entry:\n";
   std::cin>>edit;
   edit=edit-1;
   if(e[edit].id==0)
   {std::cout<<"Please enter a valid ID and try again.\n";
   }
   else{
    do{
    std::cout<<"Which quantity would you like to edit.Press D for description,Q for quantity,A for amount,M for month,Press E to stop:\n" ;
    std::cin>>wedit;
    switch (wedit)
    {
    case 'D':
    case 'd':
    std::cin>>e[edit].description;
    break;
    case 'Q':
    case 'q':
    std::cin>>e[edit].quantity;
    break;
    case 'A':
    case 'a':
    std::cin>>e[edit].amount;
    break;
   case 'M':
    case 'm':
    std::cin>>e[edit].month;
    break;
    case 'E':
    case 'e':
    std::cout<<"Exiting program";
    break;
    default:
    std::cout<<"Invalid Command.\n";
    break;
    }
    }while(wedit!='E'&&wedit!='e');
   }
   break;
   case 3:
   std::cout<<"Enter which id you want to delete:";
   std::cin>>del;
   del=del-1;
   if(del<0||del>100)
  {std::cout<<"Invalid id";
  break;
  } 
   for(i=del;i<100;++i)
   {e[i]=e[i+1];
   }
   for(;del<100;++del)
   {if(e[del].id==0)
   break;
   e[del].id=del+1;
   }
   std::cout<<"\nProgram deleted successfully!\n" ;
   break;
   case 4:
   for(i=0;i<100;++i)
    {
    if(e[i].id==0)
    break;
    std::cout<<e[i].id<<".";
    std::cout<<e[i].description<<" " ;
    std::cout<<e[i].quantity<<" " ;
    std::cout<<e[i].amount<<" " ;
    std::cout<<e[i].month<<" " ;
    std::cout<<"\n";
    }
    break;
   case 5:
      for(i=0;i<100;++i)
    {
    if(e[i].id==0)
    break;
    sum=sum+e[i].amount*e[i].quantity;
    }
    std::cout<<"The total expenses are:"<<sum<<".\n";
    sum=0;
    break;
    case 6:
    std::cout<<"\nEnter the month you want the data for:";
    std::cin>>m;
    for(i=0;i<100;++i)
    {if(m==e[i].month)
    {sum=sum+e[i].amount*e[i].quantity;
    ++check;
    }
    else continue;
    }
    if(sum==0&&check==0)
    std::cout<<"The given month has not been found in database." ;
    else{std::cout<<"The sum for the month of "<<m<<" is " <<sum<<".\n" ;
    sum=0;
    }
    break;
    
   default:
   std::cout<<"\nInvalid command.\n" ;
    break;
   }
   
   }while(choice!=7);
   return 0;
}

 
    