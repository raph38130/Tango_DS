/*----- PROTECTED REGION ID(Serial.h) ENABLED START -----*/
//=============================================================================
//
// file :        Serial.h
//
// description : Include for the Serial class.
//
// project :     TANGO Device Server.
//
// $Author: xavela $
//
// $Revision: 1.12 $
// $Date: 2012-01-12 12:41:09 $
//
// SVN only:
// $HeadURL:  $
//
// CVS only:
// $Source: /users/chaize/newsvn/cvsroot/Communication/SerialLine/src/Serial.h,v $
// $Log: not supported by cvs2svn $
// Revision 1.11  2011/09/22 06:11:43  pascal_verdier
// Problem in DevSerSetBaudrate and DevSerSetParameter fixed.
//
// Revision 1.10  2010/12/07 09:08:49  pascal_verdier
// Moved to Pogo-7 code generator.
//
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================


#ifndef SERIAL_H
#define SERIAL_H


#include <tango.h>


#ifdef __linux
#include <termios.h>
#endif

/**
 * maximum string length supported to date
 */
#define SL_MAXSTRING 80000      // MP 22/02/99 : 1K -> 10K


/**
 * Specific data structure
 */
typedef struct _SerialLinePart
{
	const char *serialline; /* serial line device descriptor */
#ifdef __linux
	int        serialin;    /* serial line file descriptor used for input */
	int        serialout;   /* serial line file descriptor for output */
#endif
	
#ifdef WIN32 
	HANDLE         hfile;       /* handle on the serial line device */
#endif
	
	short      timeout;     /* timeout in milliseconds */
	short      parity;      /* parity */
	short      charlength;  /* character size */
	short      stopbits;    /* number of stop bits */
unsigned long  baudrate;    /* baud rate */
	short      newline;     /* new line character */

	//Note : Following values are not managed under WIN32

	short      xon;         /* output resume character */
	short      xoff;        /* output suspend character */
	short      upper;       /* upper case only flag */
	short      erase;       /* erase on backspace flag */
	short      echo;        /* input characters echoed flag */
	short      linefeed;    /* automatic linefeed flag */
	short      null;        /* set null character count */
	short      backspace;   /* backspace character */
	short      del;         /* delete character */
	char       buffer[SL_MAXSTRING];
	int        ncharread;

} SerialLinePart;



/**
 * symbolic defines - used by server and client alike
 */
#define SL_RAW        0     /* raw read/write mode */
#define SL_NCHAR      1     /* character read/write mode */
#define SL_LINE       2     /* line read mode */
#define SL_RETRY      3     /* retry read mode */

#define SL_NONE       0
#define SL_ODD        1
#define SL_EVEN       3

#define SL_DATA8      0
#define SL_DATA7      1
#define SL_DATA6      2
#define SL_DATA5      3

#define SL_STOP1      0
#define SL_STOP15     1
#define SL_STOP2      2

#define SL_TIMEOUT    3 /* timeout parameter */
#define SL_PARITY     4 /* number of parity bits parameter */
#define SL_CHARLENGTH 5 /* number of data bits parameter */
#define SL_STOPBITS   6 /* number of stop bits parameter */
#define SL_BAUDRATE   7 /* baud rate parameter */
#define SL_NEWLINE    8 /* new line character parameter */



/*----- PROTECTED REGION END -----*/	//	Serial.h

/**
 *  Serial class description:
 *    C++ source for the SerialClass
 */

namespace Serial_ns
{
/*----- PROTECTED REGION ID(Serial::Additional Class Declarations) ENABLED START -----*/

		//		Additional Class Declarations

	/*----- PROTECTED REGION END -----*/	//	Serial::Additional Class Declarations

class Serial : public TANGO_BASE_CLASS
{

/*----- PROTECTED REGION ID(Serial::Data Members) ENABLED START -----*/

public:



	/*----- PROTECTED REGION END -----*/	//	Serial::Data Members

//	Device property data members
public:
	//	Serialline:	The path and name of the serial line device to be used.
	string	serialline;
	//	Timeout:	The timout value im ms for for answers of requests send to the serial line.
	//  This value should be lower than the Tango client server timout value.
	Tango::DevShort	timeout;
	//	Parity:	The parity used with the serial line protocol.
	//  The possibilities are none, even or odd.
	string	parity;
	//	Charlength:	The character length used with the serial line protocol.
	//  The possibilities are 8, 7, 6 or 5 bits per character.
	Tango::DevShort	charlength;
	//	Stopbits:	The number of stop bits used with the serial line protocol.
	//  The possibilities are 1 or 2 stop bits
	Tango::DevShort	stopbits;
	//	Baudrate:	The communication speed in baud used with the serial line protocol.
	Tango::DevLong	baudrate;
	//	Newline:	End of message Character used in particular by the DevSerReadLine command
	//  Default = 13
	Tango::DevShort	newline;


//	Constructors and destructors
public:
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	Serial(Tango::DeviceClass *cl,string &s);
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	Serial(Tango::DeviceClass *cl,const char *s);
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device name
	 *	@param d	Device description.
	 */
	Serial(Tango::DeviceClass *cl,const char *s,const char *d);
	/**
	 * The device object destructor.
	 */	
	~Serial() {delete_device();};


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
	 *	Read the device properties from database
	 */
	void get_device_property();
	/*
	 *	Always executed method before execution command method.
	 */
	virtual void always_executed_hook();


//	Attribute methods
public:
	//--------------------------------------------------------
	/*
	 *	Method      : Serial::read_attr_hardware()
	 *	Description : Hardware acquisition for attributes.
	 */
	//--------------------------------------------------------
	virtual void read_attr_hardware(vector<long> &attr_list);


	//--------------------------------------------------------
	/**
	 *	Method      : Serial::add_dynamic_attributes()
	 *	Description : Add dynamic attributes if any.
	 */
	//--------------------------------------------------------
	void add_dynamic_attributes();



//	Command related methods
public:
	/**
	 *	Command DevSerWriteString related method
	 *	Description: Write a string of characters to a serial line and return
	 *               the number of characters written.
	 *
	 *	@param argin String to write
	 *	@returns Number of characters written
	 */
	virtual Tango::DevLong dev_ser_write_string(Tango::DevString argin);
	virtual bool is_DevSerWriteString_allowed(const CORBA::Any &any);
	/**
	 *	Command DevSerWriteChar related method
	 *	Description: Write N characters to a seria line and return the
	 *               number of characters written.
	 *
	 *	@param argin Characters to write
	 *	@returns Number of characters written
	 */
	virtual Tango::DevLong dev_ser_write_char(const Tango::DevVarCharArray *argin);
	virtual bool is_DevSerWriteChar_allowed(const CORBA::Any &any);
	/**
	 *	Command DevSerReadString related method
	 *	Description: Win32 method :
	 *               Read a string of characters, the type of read is specified in the
	 *               input parameter SL_RAW SL_NCHAR SL_LINE
	 *
	 *	@param argin type of read SL_RAW SL_NCHAR SL_LINE
	 *	@returns String read
	 */
	virtual Tango::DevString dev_ser_read_string(Tango::DevLong argin);
	virtual bool is_DevSerReadString_allowed(const CORBA::Any &any);
	/**
	 *	Command DevSerReadChar related method
	 *	Description: Win32 method :
	 *               Read an array of characters, the type of read is specified in the
	 *               input parameter, it can be SL_RAW SL_NCHAR SL_LINE
	 *
	 *	@param argin type of read SL_RAW SL_NCHAR SL_LINE
	 *	@returns Array of characters read
	 */
	virtual Tango::DevVarCharArray *dev_ser_read_char(Tango::DevLong argin);
	virtual bool is_DevSerReadChar_allowed(const CORBA::Any &any);
	/**
	 *	Command WriteRead related method
	 *	Description: This method permit to send a request to a device throw the serial line and returns the
	 *               response of the device.
	 *               The commands write and read don't return until they have not finished.
	 *
	 *	@param argin type of reading strategy(RAW,NCHAR..),command to write on the port com
	 *	@returns response of the device behind the serial line
	 */
	virtual Tango::DevString write_read(const Tango::DevVarLongStringArray *argin);
	virtual bool is_WriteRead_allowed(const CORBA::Any &any);
	/**
	 *	Command DevSerGetNChar related method
	 *	Description: Return the number of chars available in receiving buffer
	 *
	 *	@returns number of char available in receiving buffer
	 */
	virtual Tango::DevLong dev_ser_get_nchar();
	virtual bool is_DevSerGetNChar_allowed(const CORBA::Any &any);
	/**
	 *	Command DevSerReadNChar related method
	 *	Description: Read a string of N characters from the serial line
	 *               If there are no characters to be read returns an empty string.
	 *
	 *	@param argin number of the caracters to read on the serial line
	 *	@returns pointer to the string read updated
	 */
	virtual Tango::DevString dev_ser_read_nchar(Tango::DevLong argin);
	virtual bool is_DevSerReadNChar_allowed(const CORBA::Any &any);
	/**
	 *	Command DevSerReadRaw related method
	 *	Description: read a string from the serialline device in mode raw (no end
	 *               of string expected, just empty the entire serialline receiving buffer).
	 *
	 *	@returns pointer to the string read updated
	 */
	virtual Tango::DevString dev_ser_read_raw();
	virtual bool is_DevSerReadRaw_allowed(const CORBA::Any &any);
	/**
	 *	Command DevSerReadLine related method
	 *	Description: read a string from the serialline device in mode line (up to
	 *               and including the character specified by the NewLine property
	 *
	 *	@returns pointer to the string read updated
	 */
	virtual Tango::DevString dev_ser_read_line();
	virtual bool is_DevSerReadLine_allowed(const CORBA::Any &any);
	/**
	 *	Command DevSerFlush related method
	 *	Description: Win32 method :
	 *               Flush serial line port according to argin passed.
	 *
	 *	@param argin flush to do 0=input 1=output 2=both
	 */
	virtual void dev_ser_flush(Tango::DevLong argin);
	virtual bool is_DevSerFlush_allowed(const CORBA::Any &any);
	/**
	 *	Command DevSerSetParameter related method
	 *	Description: Set serial line parameters
	 *
	 *	@param argin device parameters in pair
	 */
	virtual void dev_ser_set_parameter(const Tango::DevVarLongArray *argin);
	virtual bool is_DevSerSetParameter_allowed(const CORBA::Any &any);
	/**
	 *	Command DevSerSetTimeout related method
	 *	Description: This command sets the new timeout (in ms).
	 *
	 *	@param argin Value of the timeout to set
	 */
	virtual void dev_ser_set_timeout(Tango::DevShort argin);
	virtual bool is_DevSerSetTimeout_allowed(const CORBA::Any &any);
	/**
	 *	Command DevSerSetParity related method
	 *	Description: Sets the new parity of the serial line.
	 *               NONE 0
	 *               ODD 1
	 *               EVEN 3
	 *
	 *	@param argin The new parity to set.
	 */
	virtual void dev_ser_set_parity(Tango::DevShort argin);
	virtual bool is_DevSerSetParity_allowed(const CORBA::Any &any);
	/**
	 *	Command DevSerSetCharLength related method
	 *	Description: Sets the new charlength.
	 *               0 = 8 bits
	 *               1 = 7 bits
	 *               2 = 6 bits
	 *               3 = 5 bits
	 *
	 *	@param argin The new charlength to set
	 */
	virtual void dev_ser_set_char_length(Tango::DevShort argin);
	virtual bool is_DevSerSetCharLength_allowed(const CORBA::Any &any);
	/**
	 *	Command DevSerSetStopbit related method
	 *	Description: Sets the new stop bit.
	 *               0 = none
	 *               1 = one stop
	 *               2 = 1.5 stop bit
	 *
	 *	@param argin The new stopbit to set
	 */
	virtual void dev_ser_set_stopbit(Tango::DevShort argin);
	virtual bool is_DevSerSetStopbit_allowed(const CORBA::Any &any);
	/**
	 *	Command DevSerSetBaudrate related method
	 *	Description: Sets the new baudrateof the serial line ( up to 4 Mega).
	 *               Default is 9600.
	 *
	 *	@param argin The new baudrate to set
	 */
	virtual void dev_ser_set_baudrate(Tango::DevULong argin);
	virtual bool is_DevSerSetBaudrate_allowed(const CORBA::Any &any);
	/**
	 *	Command DevSerSetNewline related method
	 *	Description: The new ending character in hexa.
	 *               Default is 0x13 (=CR
	 *
	 *	@param argin The new line character to set
	 */
	virtual void dev_ser_set_newline(Tango::DevShort argin);
	virtual bool is_DevSerSetNewline_allowed(const CORBA::Any &any);
	/**
	 *	Command DevSerReadRetry related method
	 *	Description: read a string from the serialline device in mode raw (no end
	 *               of string expected, just empty the entire serialline receiving buffer).
	 *               If read successfull, read again "nretry" times.
	 *
	 *	@param argin number of reading retries
	 *	@returns pointer to the string read updated
	 */
	virtual Tango::DevString dev_ser_read_retry(Tango::DevLong argin);
	virtual bool is_DevSerReadRetry_allowed(const CORBA::Any &any);
	/**
	 *	Command DevSerReadNBinData related method
	 *	Description: Read the specified number of char from the serial line.
	 *               If the number of caracters is greater than caracters avaiable, this command returns
	 *               all caracters avaiables.
	 *               If there are no characters to be read returns an empty array.
	 *
	 *	@param argin nb char to read
	 *	@returns array of data
	 */
	virtual Tango::DevVarCharArray *dev_ser_read_nbin_data(Tango::DevLong argin);
	virtual bool is_DevSerReadNBinData_allowed(const CORBA::Any &any);


	//--------------------------------------------------------
	/**
	 *	Method      : Serial::add_dynamic_commands()
	 *	Description : Add dynamic commands if any.
	 */
	//--------------------------------------------------------
	void add_dynamic_commands();

/*----- PROTECTED REGION ID(Serial::Additional Method prototypes) ENABLED START -----*/

bool _success;   //- check com port state (opened or not)


protected :	
/**
 *	Overwrite the Tango method.
 */
		virtual Tango::ConstDevString dev_status();
/**
 *      Open the device desciptors and update member variable
 *
 */
		void open_desc(void);
/**
*      Read a string of characters from the serial line.
*			 If string read retry to read "nretry" times.
*			 Specify number of retries.
*      The maximum number of characters that can be read is
*      SL_MAXSTRING, if there are more characters in the received
*      buffer, they are let there for the next read.
*
*	@param	argin: number N of retries
* @return String read
*/
        char *retry_read_string(long);
/**
 *      Read a string of characters from the serial line if
 *      there are no characters to be read return an empty string.
 *      The maximum number of characters that can be read is
 *      SL_MAXSTRING, if there are more characters in the received
 *      buffer, they are let there for the next read.
 *
 *      @return String read
 */
        char *raw_read_string(void);
/**
 *      Read a string of N characters from the serial line if
 *      there are no characters to be read return an empty string.
 *
 *      @param  argin   number N of characters to read
 *      @return String read
 */
        char *nchar_read_string(long);
/**
 *      Read a string of characters from the serial line
 *      up and including the next newline.
 *
 *      @return String read
 */
        char *line_read_string(void);
/**
 *      Return a string with the serial line configuration parameter
 *      decoded from the termio structure passed.
 *
 *	@param	term structure to decode
 *	@param	eol end of line character to use
 *      @return String with configuration decoded
 */
        char *decode_parameters(struct termios, char);

		// setup the serial line 
		void serial_setparameter( void );
		
		// Data members
        SerialLinePart serialdevice;

#ifdef __linux

		// Set serial line parameters for Linux plateform
		void dev_ser_set_parameter_linux(const Tango::DevVarLongArray *);
#endif


#ifdef WIN32
		// WIN32 function to write on a WIN32 COM descriptor 
		long write_win32(char *str);
		//close file descriptor
		void close_handle_win32();
				// Set serial line parameters for Win32 plateform
		void dev_ser_set_parameter_win32(const Tango::DevVarLongArray *);
		long write_win32_bin_char_array( const Tango::DevVarCharArray *);

#endif

	/*----- PROTECTED REGION END -----*/	//	Serial::Additional Method prototypes
};

/*----- PROTECTED REGION ID(Serial::Additional Classes Definitions) ENABLED START -----*/

	//	Additional Classes definitions

	/*----- PROTECTED REGION END -----*/	//	Serial::Additional Classes Definitions

}	//	End of namespace

#endif   //	Serial_H
