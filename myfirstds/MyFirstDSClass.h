/*----- PROTECTED REGION ID(MyFirstDSClass.h) ENABLED START -----*/
//=============================================================================
//
// file :        MyFirstDSClass.h
//
// description : Include for the MyFirstDS root class.
//               This class is the singleton class for
//                the MyFirstDS device class.
//               It contains all properties and methods which the 
//               MyFirstDS requires only once e.g. the commands.
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


#ifndef MyFirstDSClass_H
#define MyFirstDSClass_H

#include <tango.h>
#include <MyFirstDS.h>


/*----- PROTECTED REGION END -----*/	//	MyFirstDSClass.h


namespace MyFirstDS_ns
{
/*----- PROTECTED REGION ID(MyFirstDSClass::classes for dynamic creation) ENABLED START -----*/


/*----- PROTECTED REGION END -----*/	//	MyFirstDSClass::classes for dynamic creation

//=========================================
//	Define classes for attributes
//=========================================
//	Attribute MyAttr class definition
class MyAttrAttrib: public Tango::Attr
{
public:
	MyAttrAttrib():Attr("MyAttr",
			Tango::DEV_DOUBLE, Tango::READ) {};
	~MyAttrAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<MyFirstDS *>(dev))->read_MyAttr(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<MyFirstDS *>(dev))->is_MyAttr_allowed(ty);}
};


//=========================================
//	Define classes for commands
//=========================================
//	Command MyCmd class definition
class MyCmdClass : public Tango::Command
{
public:
	MyCmdClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	MyCmdClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~MyCmdClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<MyFirstDS *>(dev))->is_MyCmd_allowed(any);}
};


/**
 *	The MyFirstDSClass singleton definition
 */

#ifdef _TG_WINDOWS_
class __declspec(dllexport)  MyFirstDSClass : public Tango::DeviceClass
#else
class MyFirstDSClass : public Tango::DeviceClass
#endif
{
	/*----- PROTECTED REGION ID(MyFirstDSClass::Additionnal DServer data members) ENABLED START -----*/
	
	
	/*----- PROTECTED REGION END -----*/	//	MyFirstDSClass::Additionnal DServer data members

	public:
		//	write class properties data members
		Tango::DbData	cl_prop;
		Tango::DbData	cl_def_prop;
		Tango::DbData	dev_def_prop;
	
		//	Method prototypes
		static MyFirstDSClass *init(const char *);
		static MyFirstDSClass *instance();
		~MyFirstDSClass();
		Tango::DbDatum	get_class_property(string &);
		Tango::DbDatum	get_default_device_property(string &);
		Tango::DbDatum	get_default_class_property(string &);
	
	protected:
		MyFirstDSClass(string &);
		static MyFirstDSClass *_instance;
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

#endif   //	MyFirstDS_H
