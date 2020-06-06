#ifndef SALE_DATA_
#define SALE_DATA_

#include<iostream>
#include<string>

using namespace std;
class Sales_data
{
	friend std::istream& read(std::istream &is,Sales_data &item);
	friend std::ostream& print(std::ostream &os,Sales_data &item);
	friend Sales_data add(const Sales_data &lhs,const Sales_data &rhs);
	private:
		std::string bookNo;
		int units_sold=0;
		double revenue=0.0;
		double avg_price() const ;
	public:
		//constructors add
		Sales_data(const std::string &s,int n,double p):
			bookNo(s),units_sold(n),revenue(n*p){}
		Sales_data():Sales_data("",0,0){}
		Sales_data(const std::string &s):Sales_data(s,0,0){}
		explicit Sales_data(std::istream &);
		//others
		std::string isbn() const {return this->bookNo;}
		Sales_data& combine(const Sales_data &rhs);
		//


};

std::istream& read(std::istream &is,Sales_data &item);
std::ostream& print(std::ostream &os,Sales_data &item);
Sales_data add(const Sales_data &lhs,const Sales_data &rhs);

#endif
