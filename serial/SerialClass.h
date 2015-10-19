/*----- PROTECTED REGION ID(SerialClass.h) ENABLED START -----*/
//=============================================================================
//
// file :        SerialClass.h
//
// description : Include for the SerialClass root class.
//               This class is the singleton class for.
//               the Serial device class..
//               It contains all properties and methods which the .
//               Serial requires only once e.g. the commands.
//
// project :     TANGO Device Server.
//
// $Author: pascal_verdier $
//
// $Revision: 1.11 $
// $Date: 2011-09-22 06:11:43 $
//
// SVN only:
// $HeadURL:  $
//
// CVS only:
// $Source: /users/chaize/newsvn/cvsroot/Communication/SerialLine/src/SerialClass.h,v $
// $Log: not supported by cvs2svn $
// Revision 1.10  2010/12/07 09:08:49  pascal_verdier
// Moved to Pogo-7 code generator.
//
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================


#ifndef SERIALCLASS_H
#define SERIALCLASS_H

#include <tango.h>
#include <Serial.h>

/*----- PROTECTED REGION END -----*/	//	SerialClass.h


namespace Serial_ns
{
/*----- PROTECTED REGION ID(SerialClass::classes for dynamic creation) ENABLED START -----*/

	/*----- PROTECTED REGION END -----*/	//	SerialClass::classes for dynamic creation

//=========================================
//	Define classes for commands
//=========================================
//	Command DevSerWriteString class definition
class DevSerWriteStringClass : public Tango::Command
{
public:
	DevSerWriteStringClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	DevSerWriteStringClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~DevSerWriteStringClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Serial *>(dev))->is_DevSerWriteString_allowed(any);}
};

//	Command DevSerWriteChar class definition
class DevSerWriteCharClass : public Tango::Command
{
public:
	DevSerWriteCharClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	DevSerWriteCharClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~DevSerWriteCharClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Serial *>(dev))->is_DevSerWriteChar_allowed(any);}
};

//	Command DevSerReadString class definition
class DevSerReadStringClass : public Tango::Command
{
public:
	DevSerReadStringClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	DevSerReadStringClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~DevSerReadStringClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Serial *>(dev))->is_DevSerReadString_allowed(any);}
};

//	Command DevSerReadChar class definition
class DevSerReadCharClass : public Tango::Command
{
public:
	DevSerReadCharClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	DevSerReadCharClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~DevSerReadCharClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Serial *>(dev))->is_DevSerReadChar_allowed(any);}
};

//	Command WriteRead class definition
class WriteReadClass : public Tango::Command
{
public:
	WriteReadClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	WriteReadClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~WriteReadClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Serial *>(dev))->is_WriteRead_allowed(any);}
};

//	Command DevSerGetNChar class definition
class DevSerGetNCharClass : public Tango::Command
{
public:
	DevSerGetNCharClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	DevSerGetNCharClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~DevSerGetNCharClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Serial *>(dev))->is_DevSerGetNChar_allowed(any);}
};

//	Command DevSerReadNChar class definition
class DevSerReadNCharClass : public Tango::Command
{
public:
	DevSerReadNCharClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	DevSerReadNCharClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~DevSerReadNCharClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Serial *>(dev))->is_DevSerReadNChar_allowed(any);}
};

//	Command DevSerReadRaw class definition
class DevSerReadRawClass : public Tango::Command
{
public:
	DevSerReadRawClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	DevSerReadRawClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~DevSerReadRawClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Serial *>(dev))->is_DevSerReadRaw_allowed(any);}
};

//	Command DevSerReadLine class definition
class DevSerReadLineClass : public Tango::Command
{
public:
	DevSerReadLineClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	DevSerReadLineClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~DevSerReadLineClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Serial *>(dev))->is_DevSerReadLine_allowed(any);}
};

//	Command DevSerFlush class definition
class DevSerFlushClass : public Tango::Command
{
public:
	DevSerFlushClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	DevSerFlushClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~DevSerFlushClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Serial *>(dev))->is_DevSerFlush_allowed(any);}
};

//	Command DevSerSetParameter class definition
class DevSerSetParameterClass : public Tango::Command
{
public:
	DevSerSetParameterClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	DevSerSetParameterClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~DevSerSetParameterClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Serial *>(dev))->is_DevSerSetParameter_allowed(any);}
};

//	Command DevSerSetTimeout class definition
class DevSerSetTimeoutClass : public Tango::Command
{
public:
	DevSerSetTimeoutClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	DevSerSetTimeoutClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~DevSerSetTimeoutClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Serial *>(dev))->is_DevSerSetTimeout_allowed(any);}
};

//	Command DevSerSetParity class definition
class DevSerSetParityClass : public Tango::Command
{
public:
	DevSerSetParityClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	DevSerSetParityClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~DevSerSetParityClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Serial *>(dev))->is_DevSerSetParity_allowed(any);}
};

//	Command DevSerSetCharLength class definition
class DevSerSetCharLengthClass : public Tango::Command
{
public:
	DevSerSetCharLengthClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	DevSerSetCharLengthClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~DevSerSetCharLengthClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Serial *>(dev))->is_DevSerSetCharLength_allowed(any);}
};

//	Command DevSerSetStopbit class definition
class DevSerSetStopbitClass : public Tango::Command
{
public:
	DevSerSetStopbitClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	DevSerSetStopbitClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~DevSerSetStopbitClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Serial *>(dev))->is_DevSerSetStopbit_allowed(any);}
};

//	Command DevSerSetBaudrate class definition
class DevSerSetBaudrateClass : public Tango::Command
{
public:
	DevSerSetBaudrateClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	DevSerSetBaudrateClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~DevSerSetBaudrateClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Serial *>(dev))->is_DevSerSetBaudrate_allowed(any);}
};

//	Command DevSerSetNewline class definition
class DevSerSetNewlineClass : public Tango::Command
{
public:
	DevSerSetNewlineClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	DevSerSetNewlineClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~DevSerSetNewlineClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Serial *>(dev))->is_DevSerSetNewline_allowed(any);}
};

//	Command DevSerReadRetry class definition
class DevSerReadRetryClass : public Tango::Command
{
public:
	DevSerReadRetryClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	DevSerReadRetryClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~DevSerReadRetryClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Serial *>(dev))->is_DevSerReadRetry_allowed(any);}
};

//	Command DevSerReadNBinData class definition
class DevSerReadNBinDataClass : public Tango::Command
{
public:
	DevSerReadNBinDataClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	DevSerReadNBinDataClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~DevSerReadNBinDataClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Serial *>(dev))->is_DevSerReadNBinData_allowed(any);}
};


/**
 *	The SerialClass singleton definition
 */

#ifdef _TG_WINDOWS_
class __declspec(dllexport)  SerialClass : public Tango::DeviceClass
#else
class SerialClass : public Tango::DeviceClass
#endif
{
	/*----- PROTECTED REGION ID(SerialClass::Additionnal DServer data members) ENABLED START -----*/

public:
	

	/*----- PROTECTED REGION END -----*/	//	SerialClass::Additionnal DServer data members

	public:
		//	write class properties data members
		Tango::DbData	cl_prop;
		Tango::DbData	cl_def_prop;
		Tango::DbData	dev_def_prop;
	
		//	Method prototypes
		static SerialClass *init(const char *);
		static SerialClass *instance();
		~SerialClass();
		Tango::DbDatum	get_class_property(string &);
		Tango::DbDatum	get_default_device_property(string &);
		Tango::DbDatum	get_default_class_property(string &);
	
	protected:
		SerialClass(string &);
		static SerialClass *_instance;
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

#endif   //	Serial_H
