#pragma once
#include <iostream>
#include <string>
#include<vector>
 
class Expense{
    public:
    int id;
    std::string description;
    int date;
    int quantity;
    double amount;
    Expense() {};
    Expense(int id,std::string description,int date,int quantity,double amount);
    static void ViewAllExpenses(const std::vector<Expense>& expenses);
};
class ExpenseManager:public Expense{
private:
int nextID=1;
std::vector<Expense> expenses;
public:
ExpenseManager() {};
bool AddExpense(std::string description,int date,int quantity,double amount);
bool EditExpense(int id,std::string description,int date,int quantity,double amount);
bool DeleteExpense(int id);

};