#ifndef StockItem_h
#define StockItem_h 1

class StockItem {
	public:
		// ctor
		StockItem( const char* name = "", double val = 0.0);
		
		// copy ctor
		StockItem( const StockItem &right);
		// dtor
		virtual ~StockItem();
		// assignment operator
		const StockItem& operator=(const StockItem &right);
		
		// public member function
		virtual const char* getName() const;
		virtual void setValue( double val );
		virtual void setValue( const char* val );
		virtual double getValue() const;
		
	private:
		// private member variables
		char *m_name;
		double m_value;
};

#endif
