#ifndef StockItemOC_h
#define StockItemOC_h 1

class StockItemOC : public StockItem {
	
	public:
		// ctor 
		StockItemOC( const char* name = "", double open = 0.0, double close = 0.0);
		
		// copy ctor
		StockItemOC( const StockItemOC &right);
		// dtor
		virtual ~StockItemOC();
		// assignment operator
		const StockItemOC& operator=(const StockItemOC &right);
		
		// public member functions
		virtual void setValue( double val );
		virtual double getValue() const;
		virtual void setOpen( double val );
		virtual double getOpen() const;
		virtual void setClose( double val );
		virtual double getClose() const;
		
	private:
		// private member functions
		double m_open;
		double m_close;
};

#endif
