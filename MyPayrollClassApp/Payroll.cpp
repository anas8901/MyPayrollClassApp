#include "Payroll.h" 



Payroll::Payroll(int id, string n, double h, double pr)

{

	this->EmpID = id;

	this->EmpFullName = n;

	this->HoursWorked = h;

	this->PayRate = pr;

}



void Payroll::CalcPay()

{

	this->Payment = this->HoursWorked * this->PayRate;

}



string Payroll::getFullName()

{

	return this->EmpFullName;

}



double Payroll::getPayment()

{

	return this->Payment;

}



int Payroll::getID()

{

	return this->EmpID;

}



double Payroll::getHours()

{

	return this->HoursWorked;

}



double Payroll::getPayRate()

{

	return this->PayRate;

}