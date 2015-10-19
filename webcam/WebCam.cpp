/*----- PROTECTED REGION ID(WebCam.cpp) ENABLED START -----*/
static const char *RcsId = "$Id:  $";
//=============================================================================
//
// file :        WebCam.cpp
//
// description : C++ source for the WebCam class and its commands.
//               The class is derived from Device. It represents the
//               CORBA servant object which will be accessed from the
//               network. All commands which can be executed on the
//               WebCam are implemented in this file.
//
// project :     usb webcam device server
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


#include <WebCam.h>
#include <WebCamClass.h>

/*----- PROTECTED REGION END -----*/	//	WebCam.cpp

/**
 *  WebCam class description:
 *    
 */

//================================================================
//  The following table gives the correspondence
//  between command and method names.
//
//  Command name  |  Method name
//================================================================
//  State         |  Inherited (no method)
//  Status        |  Inherited (no method)
//  GetFrame      |  get_frame
//================================================================

//================================================================
//  Attributes managed is:
//================================================================
//  Img  |  Tango::DevDouble	Image  ( max = 640 x 480)
//================================================================

namespace WebCam_ns
{
/*----- PROTECTED REGION ID(WebCam::namespace_starting) ENABLED START -----*/

//	static initializations

/*----- PROTECTED REGION END -----*/	//	WebCam::namespace_starting

//--------------------------------------------------------
/**
 *	Method      : WebCam::WebCam()
 *	Description : Constructors for a Tango device
 *                implementing the classWebCam
 */
//--------------------------------------------------------
WebCam::WebCam(Tango::DeviceClass *cl, string &s)
 : TANGO_BASE_CLASS(cl, s.c_str())
{
	/*----- PROTECTED REGION ID(WebCam::constructor_1) ENABLED START -----*/
	init_device();
	
	/*----- PROTECTED REGION END -----*/	//	WebCam::constructor_1
}
//--------------------------------------------------------
WebCam::WebCam(Tango::DeviceClass *cl, const char *s)
 : TANGO_BASE_CLASS(cl, s)
{
	/*----- PROTECTED REGION ID(WebCam::constructor_2) ENABLED START -----*/
	init_device();
	
	/*----- PROTECTED REGION END -----*/	//	WebCam::constructor_2
}
//--------------------------------------------------------
WebCam::WebCam(Tango::DeviceClass *cl, const char *s, const char *d)
 : TANGO_BASE_CLASS(cl, s, d)
{
	/*----- PROTECTED REGION ID(WebCam::constructor_3) ENABLED START -----*/
	init_device();
	
	/*----- PROTECTED REGION END -----*/	//	WebCam::constructor_3
}

//--------------------------------------------------------
/**
 *	Method      : WebCam::delete_device()
 *	Description : will be called at device destruction or at init command
 */
//--------------------------------------------------------
void WebCam::delete_device()
{
	DEBUG_STREAM << "WebCam::delete_device() " << device_name << endl;
	/*----- PROTECTED REGION ID(WebCam::delete_device) ENABLED START -----*/
	
	//	Delete device allocated objects
	
	cap->release();

	/*----- PROTECTED REGION END -----*/	//	WebCam::delete_device
	delete[] attr_Img_read;
}

//--------------------------------------------------------
/**
 *	Method      : WebCam::init_device()
 *	Description : will be called at device initialization.
 */
//--------------------------------------------------------
void WebCam::init_device()
{
	DEBUG_STREAM << "WebCam::init_device() create device " << device_name << endl;
	/*----- PROTECTED REGION ID(WebCam::init_device_before) ENABLED START -----*/
	
	//	Initialization before get_device_property() call
	
	/*----- PROTECTED REGION END -----*/	//	WebCam::init_device_before
	
	//	No device property to be read from database
	
	attr_Img_read = new Tango::DevDouble[640*480];
	/*----- PROTECTED REGION ID(WebCam::init_device) ENABLED START -----*/

	//	Initialize device
	//sudo modprobe bcm2835-v4l2
	Tango::DbData	dev_prop;
	dev_prop.push_back(Tango::DbDatum("video"));
	get_db_device()->get_property(dev_prop);
	DEBUG_STREAM << "PROPERTY " << dev_prop[0].name << dev_prop[0].value_string[0] << endl;


	int cam = atoi(dev_prop[0].value_string[0].c_str());
	cap=new cv::VideoCapture (cam); // open the default camera
	if(!(cap->isOpened()))  // check if we succeeded
	    cout << "ERROR OPENING WEBCAM"<< cam <<  endl;
	
	/*----- PROTECTED REGION END -----*/	//	WebCam::init_device
}


//--------------------------------------------------------
/**
 *	Method      : WebCam::always_executed_hook()
 *	Description : method always executed before any command is executed
 */
//--------------------------------------------------------
void WebCam::always_executed_hook()
{
	DEBUG_STREAM << "WebCam::always_executed_hook()  " << device_name << endl;
	/*----- PROTECTED REGION ID(WebCam::always_executed_hook) ENABLED START -----*/
	
	//	code always executed before all requests
	
	/*----- PROTECTED REGION END -----*/	//	WebCam::always_executed_hook
}

//--------------------------------------------------------
/**
 *	Method      : WebCam::read_attr_hardware()
 *	Description : Hardware acquisition for attributes
 */
//--------------------------------------------------------
void WebCam::read_attr_hardware(TANGO_UNUSED(vector<long> &attr_list))
{
	DEBUG_STREAM << "WebCam::read_attr_hardware(vector<long> &attr_list) entering... " << endl;
	/*----- PROTECTED REGION ID(WebCam::read_attr_hardware) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	WebCam::read_attr_hardware
}

//--------------------------------------------------------
/**
 *	Read attribute Img related method
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Image max = 640 x 480
 */
//--------------------------------------------------------
void WebCam::read_Img(Tango::Attribute &attr)
{
	DEBUG_STREAM << "WebCam::read_Img(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(WebCam::read_Img) ENABLED START -----*/
	//	Set the attribute value
	struct timeval tv;
	gettimeofday(&tv,NULL);
	DEBUG_STREAM << "T0 " << tv.tv_sec<< " " <<tv.tv_usec << endl;
	(*cap) >> frame; // get a new frame from camera
	// TODO : bypass cv::Frame DevImage conversion

	gettimeofday(&tv,NULL);
	DEBUG_STREAM << "T1 " << tv.tv_sec<< " " <<tv.tv_usec << endl;
	int h=frame.cols ;
	int w=frame.rows ;
	for(int i=0; i < w; i++) {
	  const cv::Vec3b* Mi = frame.ptr<cv::Vec3b>(i);
	  for(int j=0; j < h; j++) {
		  attr_Img_read[j+h*i] = Mi[j][0]+Mi[j][1]+Mi[j][2];
	  }
	}
	gettimeofday(&tv,NULL);
	DEBUG_STREAM << "T2 " << tv.tv_sec<< " " <<tv.tv_usec << endl;

	attr.set_value(attr_Img_read, 640, 480);
	
	/*----- PROTECTED REGION END -----*/	//	WebCam::read_Img
}

//--------------------------------------------------------
/**
 *	Method      : WebCam::add_dynamic_attributes()
 *	Description : Create the dynamic attributes if any
 *                for specified device.
 */
//--------------------------------------------------------
void WebCam::add_dynamic_attributes()
{
	/*----- PROTECTED REGION ID(WebCam::add_dynamic_attributes) ENABLED START -----*/
	
	//	Add your own code to create and add dynamic attributes if any
	
	/*----- PROTECTED REGION END -----*/	//	WebCam::add_dynamic_attributes
}

//--------------------------------------------------------
/**
 *	Command GetFrame related method
 *	Description: 
 *
 */
//--------------------------------------------------------
void WebCam::get_frame()
{
	DEBUG_STREAM << "WebCam::GetFrame()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(WebCam::get_frame) ENABLED START -----*/
	
	//	Add your own code

	/*----- PROTECTED REGION END -----*/	//	WebCam::get_frame
}

/*----- PROTECTED REGION ID(WebCam::namespace_ending) ENABLED START -----*/

//	Additional Methods

/*----- PROTECTED REGION END -----*/	//	WebCam::namespace_ending
} //	namespace