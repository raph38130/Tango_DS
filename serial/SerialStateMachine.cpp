/*----- PROTECTED REGION ID(SerialStateMachine.cpp) ENABLED START -----*/
static const char *RcsId = "$Id:  $";
//=============================================================================
//
// file :        SerialStateMachine.cpp
//
// description : State machine file for the Serial class
//
// project :     TANGO Device Server
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

#include <Serial.h>

/*----- PROTECTED REGION END -----*/	//	Serial::SerialStateMachine.cpp

//================================================================
//  States  |  Description
//================================================================


namespace Serial_ns
{
//=================================================
//		Attributes Allowed Methods
//=================================================

//=================================================
//		Commands Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : Serial::is_DevSerWriteString_allowed()
 *	Description : Execution allowed for DevSerWriteString attribute
 */
//--------------------------------------------------------
bool Serial::is_DevSerWriteString_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for DevSerWriteString command.
	/*----- PROTECTED REGION ID(Serial::DevSerWriteStringStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Serial::DevSerWriteStringStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Serial::is_DevSerWriteChar_allowed()
 *	Description : Execution allowed for DevSerWriteChar attribute
 */
//--------------------------------------------------------
bool Serial::is_DevSerWriteChar_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for DevSerWriteChar command.
	/*----- PROTECTED REGION ID(Serial::DevSerWriteCharStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Serial::DevSerWriteCharStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Serial::is_DevSerReadString_allowed()
 *	Description : Execution allowed for DevSerReadString attribute
 */
//--------------------------------------------------------
bool Serial::is_DevSerReadString_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for DevSerReadString command.
	/*----- PROTECTED REGION ID(Serial::DevSerReadStringStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Serial::DevSerReadStringStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Serial::is_DevSerReadChar_allowed()
 *	Description : Execution allowed for DevSerReadChar attribute
 */
//--------------------------------------------------------
bool Serial::is_DevSerReadChar_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for DevSerReadChar command.
	/*----- PROTECTED REGION ID(Serial::DevSerReadCharStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Serial::DevSerReadCharStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Serial::is_WriteRead_allowed()
 *	Description : Execution allowed for WriteRead attribute
 */
//--------------------------------------------------------
bool Serial::is_WriteRead_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for WriteRead command.
	/*----- PROTECTED REGION ID(Serial::WriteReadStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Serial::WriteReadStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Serial::is_DevSerGetNChar_allowed()
 *	Description : Execution allowed for DevSerGetNChar attribute
 */
//--------------------------------------------------------
bool Serial::is_DevSerGetNChar_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for DevSerGetNChar command.
	/*----- PROTECTED REGION ID(Serial::DevSerGetNCharStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Serial::DevSerGetNCharStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Serial::is_DevSerReadNChar_allowed()
 *	Description : Execution allowed for DevSerReadNChar attribute
 */
//--------------------------------------------------------
bool Serial::is_DevSerReadNChar_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for DevSerReadNChar command.
	/*----- PROTECTED REGION ID(Serial::DevSerReadNCharStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Serial::DevSerReadNCharStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Serial::is_DevSerReadRaw_allowed()
 *	Description : Execution allowed for DevSerReadRaw attribute
 */
//--------------------------------------------------------
bool Serial::is_DevSerReadRaw_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for DevSerReadRaw command.
	/*----- PROTECTED REGION ID(Serial::DevSerReadRawStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Serial::DevSerReadRawStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Serial::is_DevSerReadLine_allowed()
 *	Description : Execution allowed for DevSerReadLine attribute
 */
//--------------------------------------------------------
bool Serial::is_DevSerReadLine_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for DevSerReadLine command.
	/*----- PROTECTED REGION ID(Serial::DevSerReadLineStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Serial::DevSerReadLineStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Serial::is_DevSerFlush_allowed()
 *	Description : Execution allowed for DevSerFlush attribute
 */
//--------------------------------------------------------
bool Serial::is_DevSerFlush_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for DevSerFlush command.
	/*----- PROTECTED REGION ID(Serial::DevSerFlushStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Serial::DevSerFlushStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Serial::is_DevSerSetParameter_allowed()
 *	Description : Execution allowed for DevSerSetParameter attribute
 */
//--------------------------------------------------------
bool Serial::is_DevSerSetParameter_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for DevSerSetParameter command.
	/*----- PROTECTED REGION ID(Serial::DevSerSetParameterStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Serial::DevSerSetParameterStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Serial::is_DevSerSetTimeout_allowed()
 *	Description : Execution allowed for DevSerSetTimeout attribute
 */
//--------------------------------------------------------
bool Serial::is_DevSerSetTimeout_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for DevSerSetTimeout command.
	/*----- PROTECTED REGION ID(Serial::DevSerSetTimeoutStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Serial::DevSerSetTimeoutStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Serial::is_DevSerSetParity_allowed()
 *	Description : Execution allowed for DevSerSetParity attribute
 */
//--------------------------------------------------------
bool Serial::is_DevSerSetParity_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for DevSerSetParity command.
	/*----- PROTECTED REGION ID(Serial::DevSerSetParityStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Serial::DevSerSetParityStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Serial::is_DevSerSetCharLength_allowed()
 *	Description : Execution allowed for DevSerSetCharLength attribute
 */
//--------------------------------------------------------
bool Serial::is_DevSerSetCharLength_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for DevSerSetCharLength command.
	/*----- PROTECTED REGION ID(Serial::DevSerSetCharLengthStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Serial::DevSerSetCharLengthStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Serial::is_DevSerSetStopbit_allowed()
 *	Description : Execution allowed for DevSerSetStopbit attribute
 */
//--------------------------------------------------------
bool Serial::is_DevSerSetStopbit_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for DevSerSetStopbit command.
	/*----- PROTECTED REGION ID(Serial::DevSerSetStopbitStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Serial::DevSerSetStopbitStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Serial::is_DevSerSetBaudrate_allowed()
 *	Description : Execution allowed for DevSerSetBaudrate attribute
 */
//--------------------------------------------------------
bool Serial::is_DevSerSetBaudrate_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for DevSerSetBaudrate command.
	/*----- PROTECTED REGION ID(Serial::DevSerSetBaudrateStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Serial::DevSerSetBaudrateStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Serial::is_DevSerSetNewline_allowed()
 *	Description : Execution allowed for DevSerSetNewline attribute
 */
//--------------------------------------------------------
bool Serial::is_DevSerSetNewline_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for DevSerSetNewline command.
	/*----- PROTECTED REGION ID(Serial::DevSerSetNewlineStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Serial::DevSerSetNewlineStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Serial::is_DevSerReadRetry_allowed()
 *	Description : Execution allowed for DevSerReadRetry attribute
 */
//--------------------------------------------------------
bool Serial::is_DevSerReadRetry_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for DevSerReadRetry command.
	/*----- PROTECTED REGION ID(Serial::DevSerReadRetryStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Serial::DevSerReadRetryStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Serial::is_DevSerReadNBinData_allowed()
 *	Description : Execution allowed for DevSerReadNBinData attribute
 */
//--------------------------------------------------------
bool Serial::is_DevSerReadNBinData_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for DevSerReadNBinData command.
	/*----- PROTECTED REGION ID(Serial::DevSerReadNBinDataStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Serial::DevSerReadNBinDataStateAllowed
	return true;
}

}	//	End of namespace