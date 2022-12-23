#include <iostream>
using namespace std;

main()
{
string movieName;
int adulticketPrice;
int childTicketPrice;
int noOfAdultTicketsSold;
int noOfChildTicketsSold;
float percetageToDonate;
int amountCollectedByAdultTickets;
int amountCollectedByChildTickets;
int totalAmount;
int amountToDonate;
int amountAfterDonation;

cout << "Enter Movie Name: ";
cin >> movieName;
cout << "Enter Adult Ticket Price: ";
cin >> adulticketPrice;
cout << "Enter Child Ticket Price: ";
cin >> childTicketPrice;
cout << "Enter Number of Adult Tickets Sold: ";
cin >> noOfAdultTicketsSold;
cout << "Enter Number of Child Tickets Sold: ";
cin >> noOfChildTicketsSold;
cout << "Enter Percentage to Donate: ";
cin >> percetageToDonate;

amountCollectedByAdultTickets = adulticketPrice * noOfAdultTicketsSold;
amountCollectedByChildTickets = childTicketPrice * noOfChildTicketsSold;
totalAmount = amountCollectedByAdultTickets + amountCollectedByChildTickets;
amountToDonate = totalAmount * (percetageToDonate / 100);
amountAfterDonation = totalAmount - amountToDonate;

cout << "***************************************************" << endl; 
cout << "Total Amount Generated: " << totalAmount << endl;
cout << "Amount after donation: " << amountAfterDonation;
}