#include <cstdlib>
#include <cstdio>
#include <cstring>
#include "StockItem.h"
#include "StockItemOC.h"

StockItemOC::StockItemOC( const char* name, double open, double close) 
 : StockItem(name), m_open(open), m_close(close)
{ }

StockItemOC::StockItemOC( const StockItemOC &right)
 : StockItem(right), m_open(right.m_open), m_close(right.m_close)
{ }

StockItemOC::~StockItemOC()
{ }

const StockItemOC& StockItemOC::operator=(const StockItemOC &right)
{
	// handle self assignment
	if (this != &right)  {
		StockItem::operator=(right);
		m_open = right.m_open;
		m_close = right.m_close;
	}
	
	return *this;
}

void StockItemOC::setValue( double val )
{
	m_close = val;
}

double StockItemOC::getValue() const
{
	return m_close;
}

void StockItemOC::setOpen( double val )
{
	m_open = val;
}

double StockItemOC::getOpen() const
{
	return m_open;
}

void StockItemOC::setClose( double val )
{
	m_close = val;	
}

double StockItemOC::getClose() const
{
	return m_close;
}
