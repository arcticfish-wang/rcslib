/* 
The NIST RCS (Real-time Control Systems) 
 library is public domain software, however it is preferred
 that the following disclaimers be attached.

Software Copywrite/Warranty Disclaimer

   This software was developed at the National Institute of Standards and
Technology by employees of the Federal Government in the course of their
official duties. Pursuant to title 17 Section 105 of the United States
Code this software is not subject to copyright protection and is in the
public domain. NIST Real-Time Control System software is an experimental
system. NIST assumes no responsibility whatsoever for its use by other
parties, and makes no guarantees, expressed or implied, about its
quality, reliability, or any other characteristic. We would appreciate
acknowledgement if the software is used. This software can be
redistributed and/or modified freely provided that any derivative works
bear some notice that they are derived from it, and any modified
versions bear some notice that they have been modified.



*/ 

/*
prim.cc

This C++ file defines member functions for the class PRIM_MODULE
It was generated with rcsdesign
with template version 1.1

MODIFICATIONS:
Sun Mar 06 10:46:51 EST 2005	Modified with RCS-Design tool.
Sun Mar 06 10:07:20 EST 2005	Modified with RCS-Design tool.
Sun Mar 06 10:07:07 EST 2005	Created with RCS-Design tool.

*/

// Include Files
#include "rcs.hh" 	// Common RCS definitions
#include "nml_mod.hh" 	// NML_MODULE definitions
#include "prim.hh" 	// PRIM_MODULE definitions
// RCS-Design-MERGE-DISABLE Edits to the following area will NOT be preserved by the RCS-Design tool.


#include "primn.hh" 	// NML Commands and Status definitions for prim
#include "servon.hh" 	// NML Commands and Status definitions for servo

// auxiliary Input NML Message Files
#include "pose_datan.hh"	// NML Messages for pose_data
// RCS-Design-MERGE-ENABLE Edits after this line will be preserved by the RCS-Design tool.


// Constructor
PRIM_MODULE::PRIM_MODULE(int _is_base_class)
{

	// Initialize the NML channels if this module is not being used as the base class for another module.
	if(!_is_base_class)
	{
		INITIALIZE_NML();
	}
	// Add additional code to initialize the module here.

}

// Overloaded Virtual Functions

/*
INITIALIZE_NML

The INITIALIZE_NML function is ussually called only once from within the
constructor. It should not be called if a derived class will also call it.

*/
void PRIM_MODULE::INITIALIZE_NML()
{
	// RCS-Design-MERGE-DISABLE Edits to the following area will NOT be preserved by the RCS-Design tool.

	setErrorLogChannel(new NML(nmlErrorFormat, "errlog", "prim", "rcs_single_dir.nml"));
	setCmdChannel(new RCS_CMD_CHANNEL(primFormat, "prim_cmd", "prim", "rcs_single_dir.nml"));
	prim_status = new PRIM_STATUS();
	setStatChannel(new RCS_STAT_CHANNEL(primFormat, "prim_sts", "prim", "rcs_single_dir.nml"), prim_status);

	servo_sub_num = 
	addSubordinate(
		new RCS_CMD_CHANNEL(servoFormat, "servo_cmd", "prim", "rcs_single_dir.nml"),
		new  RCS_STAT_CHANNEL(servoFormat, "servo_sts", "prim", "rcs_single_dir.nml"));
	servo_status = (SERVO_STATUS *)  statusInData[servo_sub_num];

	// auxiliary Input NML Channels
	//pose_data
	POSE_DATA_CHANNEL = new NML(pose_dataFormat, "pose_data", "prim", "rcs_single_dir.nml");
	pose_data_data = (POSE_DATA_MSG *) POSE_DATA_CHANNEL->get_address();
	// RCS-Design-MERGE-ENABLE Edits after this line will be preserved by the RCS-Design tool.

}

/*
PRE_PROCESS

The PRE_PROCESS function is called every cycle after the command and
subordinates status have been read but before DECISION_PROCESS is called.
It is intended to be used for tasks such as sensory processing that should
be performed every cycle regardless of the current command or state.

*/
void PRIM_MODULE::PRE_PROCESS()
{
	// auxiliary Input NML Channels
	// Read new data from pose_data
	POSE_DATA_CHANNEL->read();
	// Pre-Processing Code
}

/*
DECISION_PROCESS

The DECISION_PROCESS function is called every cycle as long as there is a non-zero command.
It is expected to call a command function based on commandInData->type.

*/
void PRIM_MODULE::DECISION_PROCESS()
{
	switch(commandInData->type)
	{
		// RCS-Design-MERGE-DISABLE Edits to the following area will NOT be preserved by the RCS-Design tool.

	case PRIM_INIT_TYPE:
		INIT((PRIM_INIT *)commandInData);
		break;

	case PRIM_HALT_TYPE:
		HALT((PRIM_HALT *)commandInData);
		break;

	case PRIM_CONFIG_TYPE:
		CONFIG((PRIM_CONFIG *)commandInData);
		break;

	case PRIM_FOLLOW_WAYPOINTS_TYPE:
		FOLLOW_WAYPOINTS((PRIM_FOLLOW_WAYPOINTS *)commandInData);
		break;
		// RCS-Design-MERGE-ENABLE Edits after this line will be preserved by the RCS-Design tool.


	default:
		logError("The command %d is not recognized.",commandInData->type);
		break;
	}
}

/*
POST_PROCESS

The POST_PROCESS function is called every cycle after DECISION_PROCESS is called
but before the status and the subordinates commands  have been written.
It is intended to be used for tasks such as output filters that should
be performed every cycle regardless of the current command or state.

*/
void PRIM_MODULE::POST_PROCESS()
{
	// Post-Processing Code
}

// Command Functions

/*
INIT

Parameter(s):
PRIM_INIT *cmd_in -- NML Message sent from superior.

Most Modules will have an INIT command.
The INIT function is expected to initialize any variables that may be
in an uninitialized or unknown state, send INIT commands to its subordinates,
wait for the subordinates to be DONE and then inform its superior that it is done.
The state tables should use the STATE_MATCH macro so the diagnostics tool can 
highlight the current line in the state table.

*/
void PRIM_MODULE::INIT(PRIM_INIT *cmd_in)
{
	// RCS-Design-MERGE-DISABLE Edits to the following area will NOT be preserved by the RCS-Design tool.

	SERVO_INIT servoInitMsg;
	// RCS-Design-MERGE-ENABLE Edits after this line will be preserved by the RCS-Design tool.


	if(STATE_MATCH(NEW_COMMAND))
	{
		// Send an INIT command to all subordinates.
		// RCS-Design-MERGE-DISABLE Edits to the following area will NOT be preserved by the RCS-Design tool.

		sendCommand(&servoInitMsg, servo_sub_num);
		// RCS-Design-MERGE-ENABLE Edits after this line will be preserved by the RCS-Design tool.


		stateNext(S1);
		// Reinitialize variables here.

	}
	// Wait for all subordinates to report done.
	// RCS-Design-MERGE-DISABLE Edits to the following area will NOT be preserved by the RCS-Design tool.

	else if(STATE_MATCH(S1,
		servo_status->status == RCS_DONE &&
		1))
	// RCS-Design-MERGE-ENABLE Edits after this line will be preserved by the RCS-Design tool.

	{
		status = RCS_DONE;
		stateNext(S2);
	}
	else if(STATE_MATCH(S2))
	{
		// Idle State
	}
}

/*
HALT

Parameter(s):
PRIM_HALT *cmd_in -- NML Message sent from superior.

Most Modules will have an HALT command.
The HALT function is expected to stop any motion or command execution,
send HALT commands to its subordinates,
wait for the subordinates to be DONE and then inform its superior that it is done.
The state tables should use the STATE_MATCH macro so the diagnostics tool can 
highlight the current line in the state table.

*/
void PRIM_MODULE::HALT(PRIM_HALT *cmd_in)
{
	// RCS-Design-MERGE-DISABLE Edits to the following area will NOT be preserved by the RCS-Design tool.

	SERVO_HALT servoHaltMsg;
	// RCS-Design-MERGE-ENABLE Edits after this line will be preserved by the RCS-Design tool.


	if(STATE_MATCH(NEW_COMMAND))
	{
		//Send a HALT command to all subordinates.
		// RCS-Design-MERGE-DISABLE Edits to the following area will NOT be preserved by the RCS-Design tool.

		sendCommand(&servoHaltMsg, servo_sub_num);
		// RCS-Design-MERGE-ENABLE Edits after this line will be preserved by the RCS-Design tool.

		stateNext(S1);
	}
	// Wait for all subordinates to report done.
	// RCS-Design-MERGE-DISABLE Edits to the following area will NOT be preserved by the RCS-Design tool.

	else if(STATE_MATCH(S1,
		servo_status->status == RCS_DONE &&
		1))
	// RCS-Design-MERGE-ENABLE Edits after this line will be preserved by the RCS-Design tool.

	{
		status = RCS_DONE;
		stateNext(S2);
	}
	else if(STATE_MATCH(S2))
	{
		// Idle State
	}
}



/*
CONFIG

Parameter(s):
PRIM_CONFIG *cmd_in -- NML Message sent from superior.

*/
void PRIM_MODULE::CONFIG(PRIM_CONFIG *cmd_in)
{
	// Put state table for PRIM_CONFIG here.
}

/*
FOLLOW_WAYPOINTS

Parameter(s):
PRIM_FOLLOW_WAYPOINTS *cmd_in -- NML Message sent from superior.

*/
void PRIM_MODULE::FOLLOW_WAYPOINTS(PRIM_FOLLOW_WAYPOINTS *cmd_in)
{
	// Put state table for PRIM_FOLLOW_WAYPOINTS here.
  if(STATE_MATCH(NEW_COMMAND))
    {
      prim_status->waypointsOut_length =
	cmd_in->waypoints_length;
      for(int i = 0 ; i < prim_status->waypointsOut_length; i++)
	{
	  prim_status->waypointsOut[i] =
	    cmd_in->waypoints[i];
	}
      prim_status->current_waypoint=0;
      stateNext(S1);
    }
  else if(STATE_MATCH(S1))
    {
      SERVO_GOTO_POINT sgpMsg;
      PM_CARTESIAN diff = servo_status->position -
	prim_status->waypointsOut[prim_status->current_waypoint+1];
      double diffMag = mag(diff);
      if(diffMag < 0.01)
	{
	  prim_status->current_waypoint++;
	  if(prim_status->current_waypoint >= prim_status->waypointsOut_length)
	    {
	      status=RCS_DONE;
	      stateNext(S2);
	    }
	  sgpMsg.point = prim_status->waypointsOut[prim_status->current_waypoint];
	}
      else
	{
	  sgpMsg.point = servo_status->position +
	    diff*(0.01/diffMag);
	}
      sendCommand(&sgpMsg,servo_sub_num);
    }
}

