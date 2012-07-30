#include "StockItem.h"

#include <cstdlib>
#include <cstring>
#include <cstdio>

StockItem::StockItem( const char* name /* = "" */, double val /* = 0.0 */)
{
	m_name = new char[strlen(name)+1];
	strcpy( m_name, name );
	m_value = val;
}

StockItem::StockItem( const StockItem &right)
{
	m_name = new char[strlen( right.m_name)+1];
	strcpy( m_name, right.m_name );
	m_value = right.m_value;
}

StockItem::~StockItem()
{
	delete[] m_name;
}

const StockItem& StockItem::operator=(const StockItem &right)
{
	// handle self assignment
	if (this != &right) {
		delete[] m_name;
		m_name = new char[strlen( right.m_name)+1];
		strcpy( m_name, right.m_name);
		m_value = right.m_value;
	}
	
	return *this;
}

const char* StockItem::getName() const
{
	return m_name;
}

void StockItem::setValue( double val )
{
	m_value = val;
}

void StockItem::setValue( const char* val )
{
	m_value = atof( val );
}

double StockItem::getValue() const
{
	return m_value;
}
