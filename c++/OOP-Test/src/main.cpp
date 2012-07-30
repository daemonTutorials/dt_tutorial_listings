#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include "StockItem.h"
#include "StockItemOC.h"

using namespace std;

// compare two stock prices
class CompareStockPrice {
	public: 
		int operator()( const StockItem* s1, const StockItem* s2)
		{ return s1-> getValue() < s2->getValue(); }
};

// operator<< for class StockItem
// write name and value to output stream ost
ostream& operator<<( ostream& ost, const StockItem* item) {
	ost << item->getName() << ": " << item->getValue() << endl;
	return ost;
}

int main( int argc, char** argv)
{
	StockItem a( "BAY", 34.9);
	StockItem b( "BAS" );
	StockItemOC c( "DTE", 57.0, 59.4);
	
	b.setValue(24.2);
	
	cout << a.getName() << ": " << a.getValue() << endl;
	cout << b.getName() << ": " << b.getValue() << endl;
	cout << c.getName() << ": " << c.getValue() << " ("
		<< c.getOpen() << " -> " << c.getClose() << ")\n";
		
	StockItem *astocks[3];
	astocks[0] = &a;
	astocks[1] = &b;
	astocks[2] = &c;	// cast from StockItemOC* to StockItem*
	
	for (int i = 0; i < 3; ++i) {
		cout << astocks[i]->getName() << ": " << astocks[i]->getValue() << endl;
	}
	
	// get the stock items ordered by price
	vector<StockItem*> stocks;
	
	stocks.push_back(&a);
	stocks.push_back(&b);
	stocks.push_back(&c); // cast from StockItemOC* to StockItem*
	
	sort(stocks.begin(), stocks.end(), CompareStockPrice());
	
	cout << endl << "stock items ordered by price\n";
	reverse_copy( stocks.begin(), stocks.end(), ostream_iterator<StockItem*>(cout));
}
