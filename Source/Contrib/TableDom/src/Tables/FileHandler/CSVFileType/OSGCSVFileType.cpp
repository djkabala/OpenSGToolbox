/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com)                             *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#define OSG_COMPILETABLEDOMLIB

#include "OSGConfig.h"

#include "OSGCSVFileType.h"
#include "windows.h"
 

OSG_BEGIN_NAMESPACE


SYSTEMTIME now;

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::CSVFileType
A CSVFileType. 
*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

CSVFileType*  CSVFileType::_the(new CSVFileType());

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

CSVFileType *CSVFileType::the(void)
{
	return _the;
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

std::string CSVFileType::getName(void) const
{
	return std::string("CSVFileType");	// unnecessary function . Can be removed . There for convenience
}

/*
void CSVFileType::removeSlashRandSlashN(std::string &word)
{
	std::string Temp="";
	for(UInt32 i=0;i<word.length();i++)
	{
		if(word[i]!='\r' && word[i]!='\n' && word[i]!='\t')
		{
			Temp+=word[i];
		}
		else if(word[i]=='\t')
		{
			Temp+="    ";
		}
	}
	word = Temp;
}
*/

TableTransitPtr CSVFileType::read(std::istream &InputStream,
	                     const std::string& FileNameOrExtension)
{
	PlainTableRefPtr Result = PlainTable::create();

	std::string text;
	while(std::getline(InputStream,text))
	{
		std::cout<<text<<std::endl<<":";
   	   std::string token="";
	   int count = 0;
	   for(int i=0;i<text.size();i++)
	   {
		   if(text[i]==',')
		   {
			std::cout<<"token "<<count<<":"<<token<<"."<<std::endl;
			count++;
			token="";
		   }
		   else
		   {
			token+=text[i];
		   }
	   }
	   std::cout<<"token "<<count<<":"<<token<<"."<<std::endl;
	}

	/*TableElementAttribute Props;
	std::string Word;
	bool FirstTime = true;
	
	while(std::getline(InputStream,Word))
	{
		removeSlashRandSlashN(Word);
		Result->addTableAsNewElementToTable(Word+"\r\n",Props,FirstTime);
		if(FirstTime)FirstTime=!FirstTime;
	}*/

	return TableTransitPtr(Result);
}

bool CSVFileType::write(Table* const Doc, std::ostream &OutputStream,
                    const std::string& FileNameOrExtension)
{
	/*PlainTableRefPtr TheTable = dynamic_cast<PlainTable*>(Doc);
	std::vector<Element*> GenericRoots;
	GenericRoots = TheTable->getRootElements();
	for(UInt32 i=0;i<GenericRoots.size();i++)
	{
		PlainTableBranchElementRefPtr RootElement;
		RootElement = dynamic_cast<PlainTableBranchElement*>(GenericRoots[i]);	
		
		for(UInt32 j=0;j<RootElement->getElementCount()-1;j++)
		{	
			PlainTableLeafElementRefPtr LeafElement;
			LeafElement = dynamic_cast<PlainTableLeafElement*>(RootElement->getElement(j));
			OutputStream<<LeafElement->getTable();
		}
		PlainTableLeafElementRefPtr LeafElement;
		LeafElement = dynamic_cast<PlainTableLeafElement*>(RootElement->getElement(RootElement->getElementCount()-1));
		OutputStream<<LeafElement->getTable().substr(0,LeafElement->getTableLength()-2);

	}*/
	return false;
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

CSVFileType::CSVFileType(void) : Inherited(TableFileType::ExtensionVector(1, std::string("csv")),
        TableFileType::OSG_READ_SUPPORTED | TableFileType::OSG_WRITE_SUPPORTED)
{
}

CSVFileType::CSVFileType(const CSVFileType &obj) : Inherited(obj)
{
}

CSVFileType::~CSVFileType(void)
{
}

/*----------------------------- class specific ----------------------------*/

OSG_END_NAMESPACE

