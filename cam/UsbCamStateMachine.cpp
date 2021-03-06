/*----- PROTECTED REGION ID(UsbCamStateMachine.cpp) ENABLED START -----*/
static const char *RcsId = "$Id:  $";
//=============================================================================
//
// file :        UsbCamStateMachine.cpp
//
// description : State machine file for the UsbCam class
//
// project :     a Tango DS for usb webcam
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

#include <UsbCam.h>

/*----- PROTECTED REGION END -----*/	//	UsbCam::UsbCamStateMachine.cpp

//================================================================
//  States  |  Description
//================================================================


namespace UsbCam_ns
{
//=================================================
//		Attributes Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : UsbCam::is_random_allowed()
 *	Description : Execution allowed for random attribute
 */
//--------------------------------------------------------
bool UsbCam::is_random_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for random attribute in read access.
	/*----- PROTECTED REGION ID(UsbCam::randomStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	UsbCam::randomStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : UsbCam::is_myscalar_allowed()
 *	Description : Execution allowed for myscalar attribute
 */
//--------------------------------------------------------
bool UsbCam::is_myscalar_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for myscalar attribute in read access.
	/*----- PROTECTED REGION ID(UsbCam::myscalarStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	UsbCam::myscalarStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : UsbCam::is_img_allowed()
 *	Description : Execution allowed for img attribute
 */
//--------------------------------------------------------
bool UsbCam::is_img_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for img attribute in read access.
	/*----- PROTECTED REGION ID(UsbCam::imgStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	UsbCam::imgStateAllowed_READ
	return true;
}

//=================================================
//		Commands Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : UsbCam::is_TakePhoto_allowed()
 *	Description : Execution allowed for TakePhoto attribute
 */
//--------------------------------------------------------
bool UsbCam::is_TakePhoto_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for TakePhoto command.
	/*----- PROTECTED REGION ID(UsbCam::TakePhotoStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	UsbCam::TakePhotoStateAllowed
	return true;
}

}	//	End of namespace
