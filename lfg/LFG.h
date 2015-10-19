/*----- PROTECTED REGION ID(LFG.h) ENABLED START -----*/
//=============================================================================
//
// file :        LFG.h
//
// description : Include file for the LFG class
//
// project :     
//
// This file is part of Tango device class.
// 
// Tango is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Tango is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Tango.  If not, see <http://www.gnu.org/licenses/>.
// 
// $Author:  $
//
// $Revision:  $
// $Date:  $
//
// $HeadURL:  $
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================


#ifndef LFG_H
#define LFG_H

#include <tango.h>


/*----- PROTECTED REGION END -----*/	//	LFG.h

/**
 *  LFG class description:
 *    
 */

namespace LFG_ns
{
/*----- PROTECTED REGION ID(LFG::Additional Class Declarations) ENABLED START -----*/

//	Additional Class Declarations

/*----- PROTECTED REGION END -----*/	//	LFG::Additional Class Declarations

class LFG : public TANGO_BASE_CLASS
{

/*----- PROTECTED REGION ID(LFG::Data Members) ENABLED START -----*/

//	Add your own data members

/*----- PROTECTED REGION END -----*/	//	LFG::Data Members



//	Constructors and destructors
public:
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	LFG(Tango::DeviceClass *cl,string &s);
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	LFG(Tango::DeviceClass *cl,const char *s);
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device name
	 *	@param d	Device description.
	 */
	LFG(Tango::DeviceClass *cl,const char *s,const char *d);
	/**
	 * The device object destructor.
	 */	
	~LFG() {delete_device();};


//	Miscellaneous methods
public:
	/*
	 *	will be called at device destruction or at init command.
	 */
	void delete_device();
	/*
	 *	Initialize the device
	 */
	virtual void init_device();
	/*
	 *	Always executed method before execution command method.
	 */
	virtual void always_executed_hook();


//	Attribute methods
public:
	//--------------------------------------------------------
	/*
	 *	Method      : LFG::read_attr_hardware()
	 *	Description : Hardware acquisition for attributes.
	 */
	//--------------------------------------------------------
	virtual void read_attr_hardware(vector<long> &attr_list);


	//--------------------------------------------------------
	/**
	 *	Method      : LFG::add_dynamic_attributes()
	 *	Description : Add dynamic attributes if any.
	 */
	//--------------------------------------------------------
	void add_dynamic_attributes();



//	Command related methods
public:
	/**
	 *	Command GetDate related method
	 *	Description: 
	 *
	 *	@param argin 
	 *	@returns 
	 */
	virtual Tango::DevString get_date(Tango::DevLong argin);
	virtual bool is_GetDate_allowed(const CORBA::Any &any);
	/**
	 *	Command Multiply related method
	 *	Description: 
	 *
	 *	@param argin 
	 *	@returns 
	 */
	virtual Tango::DevLong multiply(const Tango::DevVarStringArray *argin);
	virtual bool is_Multiply_allowed(const CORBA::Any &any);


	//--------------------------------------------------------
	/**
	 *	Method      : LFG::add_dynamic_commands()
	 *	Description : Add dynamic commands if any.
	 */
	//--------------------------------------------------------
	void add_dynamic_commands();

/*----- PROTECTED REGION ID(LFG::Additional Method prototypes) ENABLED START -----*/

//	Additional Method prototypes

/*----- PROTECTED REGION END -----*/	//	LFG::Additional Method prototypes
};

/*----- PROTECTED REGION ID(LFG::Additional Classes Definitions) ENABLED START -----*/

//	Additional Classes Definitions

/*----- PROTECTED REGION END -----*/	//	LFG::Additional Classes Definitions

}	//	End of namespace

#endif   //	LFG_H
