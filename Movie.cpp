#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
          string Mname;
          int no_ticketsold;
          float gross_amt, per_gross_amt, amt_donated, net_sale;

          cin.ignore(100,'\n');
          cout << "\n Enter movie Name : ";
          getline(cin,Mname);

          cout << "\n Enter Number of Ticket sold : ";
          cin >> no_ticketsold;

          cout << "\n Enter Gross Amount : ";
          cin >> gross_amt;

          cout << "\n Enter Percentage of gross amount : ";
          cin >> per_gross_amt;

          cout << "\n Enter Amount Donated : ";
          cin >> amt_donated;

          cout << "\n Enter Net Sale : ";
          cin >> net_sale;

          cout << "\n Movie Name : " << setw(37) << setfill('.') << right << Mname << endl;
          cout << "\n Number of Ticket Sold : " << setw(16) << setfill('.') << right << no_ticketsold << endl;
          cout << "\n Gross Amount : " << setw(23) << setfill('.') << right << "$ " << gross_amt << endl;
          cout << "\n Percentage of Gross Amount Donated : " << setw(1) << setfill('.') << right << per_gross_amt <<"%" << endl;
          cout << "\n Amount Donated : " << setw(20) << setfill('.') << right << "$ " << amt_donated << endl;
          cout << "\n Net Sale : " << setw(26) << setfill('.') << right << "$ " << net_sale << endl;
}
