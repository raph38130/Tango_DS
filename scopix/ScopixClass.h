/*----- PROTECTED REGION ID(ScopixClass.h) ENABLED START -----*/
//=============================================================================
//
// file :        ScopixClass.h
//
// description : Include for the Scopix root class.
//               This class is the singleton class for
//                the Scopix device class.
//               It contains all properties and methods which the 
//               Scopix requires only once e.g. the commands.
//
// project :     scopix handeld oscilloscope
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


#ifndef ScopixClass_H
#define ScopixClass_H

#include <tango.h>
#include <Scopix.h>


/*----- PROTECTED REGION END -----*/	//	ScopixClass.h


namespace Scopix_ns
{
/*----- PROTECTED REGION ID(ScopixClass::classes for dynamic creation) ENABLED START -----*/


/*----- PROTECTED REGION END -----*/	//	ScopixClass::classes for dynamic creation

//=========================================
//	Define classes for attributes
//=========================================
//	Attribute Input1 class definition
class Input1Attrib: public Tango::Attr
{
public:
	Input1Attrib():Attr("Input1",
			Tango::DEV_DOUBLE, Tango::READ) {};
	~Input1Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Scopix *>(dev))->read_Input1(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Scopix *>(dev))->is_Input1_allowed(ty);}
};

//	Attribute Spectrum1 class definition
class Spectrum1Attrib: public Tango::SpectrumAttr
{
public:
	Spectrum1Attrib():SpectrumAttr("Spectrum1",
			Tango::DEV_DOUBLE, Tango::READ, 2500) {};
	~Spectrum1Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Scopix *>(dev))->read_Spectrum1(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Scopix *>(dev))->is_Spectrum1_allowed(ty);}
};


//=========================================
//	Define classes for commands
//=========================================
//	Command Idn class definition
class IdnClass : public Tango::Command
{
public:
	IdnClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	IdnClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~IdnClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Scopix *>(dev))->is_Idn_allowed(any);}
};

//	Command Date class definition
class DateClass : public Tango::Command
{
public:
	DateClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	DateClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~DateClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Scopix *>(dev))->is_Date_allowed(any);}
};

//	Command Time class definition
class TimeClass : public Tango::Command
{
public:
	TimeClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	TimeClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~TimeClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Scopix *>(dev))->is_Time_allowed(any);}
};

//	Command GpibCmd class definition
class GpibCmdClass : public Tango::Command
{
public:
	GpibCmdClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	GpibCmdClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~GpibCmdClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Scopix *>(dev))->is_GpibCmd_allowed(any);}
};

//	Command Trace class definition
class TraceClass : public Tango::Command
{
public:
	TraceClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	TraceClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~TraceClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Scopix *>(dev))->is_Trace_allowed(any);}
};


/**
 *	The ScopixClass singleton definition
 */

#ifdef _TG_WINDOWS_
class __declspec(dllexport)  ScopixClass : public Tango::DeviceClass
#else
class ScopixClass : public Tango::DeviceClass
#endif
{
	/*----- PROTECTED REGION ID(ScopixClass::Additionnal DServer data members) ENABLED START -----*/
	
	
	/*----- PROTECTED REGION END -----*/	//	ScopixClass::Additionnal DServer data members

	public:
		//	write class properties data members
		Tango::DbData	cl_prop;
		Tango::DbData	cl_def_prop;
		Tango::DbData	dev_def_prop;
	
		//	Method prototypes
		static ScopixClass *init(const char *);
		static ScopixClass *instance();
		~ScopixClass();
		Tango::DbDatum	get_class_property(string &);
		Tango::DbDatum	get_default_device_property(string &);
		Tango::DbDatum	get_default_class_property(string &);
	
	protected:
		ScopixClass(string &);
		static ScopixClass *_instance;
		void command_factory();
		void attribute_factory(vector<Tango::Attr *> &);
		void write_class_property();
		void set_default_property();
		void get_class_property();
		string get_cvstag();
		string get_cvsroot();
	
	private:
		void device_factory(const Tango::DevVarStringArray *);
		void create_static_attribute_list(vector<Tango::Attr *> &);
		void erase_dynamic_attributes(const Tango::DevVarStringArray *,vector<Tango::Attr *> &);
		vector<string>	defaultAttList;
		Tango::Attr *get_attr_object_by_name(vector<Tango::Attr *> &att_list, string attname);
};

}	//	End of namespace

#endif   //	Scopix_H
