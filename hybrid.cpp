#include<iostream>
using namespace std;

class Employee{
	int id;
	public:
		Employee(){
			cout<<"In default of employee"<<endl;
		}
		Employee(int i){
			id = i;
			cout<<"In param of employee"<<endl;
		}
		int findSalary(){
			return 0;
		}
		void display(){
			cout<<"Employeeid is: "<<id<<endl;
		}
};
class WageEmployee :virtual public Employee{
	
	int hrs,rate;
    public:
		WageEmployee(){
			cout<<"In default of wageemployee"<<endl;
		}
		WageEmployee(int hr,int r){
			hrs = hr;
			rate = r;
			cout<<"In param of we"<<endl;
		}
		int findSalary(){
			return hrs*rate;
		}
		void display(){
			cout<<"Wage Employee Salary is: "<<findSalary()<<endl;
			cout<<hrs<<" "<<rate<<endl;
		}
};

class SalesEmployee : virtual public Employee{
	int sales,commission,incentives;
	public:
		SalesEmployee(){
			cout<<"In default of Salesemployee"<<endl;
		}
		SalesEmployee(int sa,int com,int in){
			sales = sa;
			commission = com;
			incentives = in;
			cout<<"In param of Se"<<endl;
		}
	int findSalary(){
			return sales*commission+incentives;
		}
		void display(){
			cout<<"Sales Employee Salary is: "<<findSalary()<<endl;
			cout<<sales<<" "<<commission<<" "<<incentives<<endl;
		}
};
class SalesManager : public WageEmployee,public SalesEmployee{
	int baseSalary;
	public:
		SalesManager(){
			cout<<"In default of salesmanager"<<endl;
		}
		SalesManager(int i,int hr,int r,int sa,int com,int in,int bs):WageEmployee(hr,r),SalesEmployee(sa,com,in),Employee(i){
			baseSalary = bs;
			cout<<"In param of Sm"<<endl;
		}
	int findSalary(){
			return SalesEmployee::findSalary() + WageEmployee::findSalary() + baseSalary;
		}
		void display(){
			cout<<"SalesManager salary is: "<<findSalary()<<endl;
			cout<<baseSalary<<endl;
		}
	
};
int main(){
	SalesManager sm(101,8,500,23456,1,5000,10000);
	sm.display();
	Employee emp;
	WageEmployee we;
	SalesEmployee se;
	cout<<sizeof(emp)<<" "<<sizeof(we)<<" "<<sizeof(se)<<" "<<sizeof(sm)<<endl;
	cout<<sizeof(we.findSalary());
}
