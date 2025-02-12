#pragma once 

#include <iostream> 

using namespace std;



class Payroll

{

private:

	int EmpID;

	string EmpFullName;

	double HoursWorked;

	double PayRate;

	double Payment;

public:

	Payroll(int, string, double, double);

	void CalcPay();

	string getFullName();

	double getPayment();

	int getID();

	double getHours();

	double getPayRate();

};