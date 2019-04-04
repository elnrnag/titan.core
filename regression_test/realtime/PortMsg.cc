// This Test Port skeleton source file was generated by the
// TTCN-3 Compiler of the TTCN-3 Test Executor version CRL 113 200/6 R5A
// for ebotbar (ebotbar@ebotbarVB) on Fri Oct 26 17:43:41 2018

// Copyright (c) 2000-2019 Ericsson Telecom AB

// You may modify this file. Complete the body of empty functions and
// add your member functions here.

#include "PortMsg.hh"

namespace realtimeTimestamp {

void ef__incoming__message(PortMsg& p__pt, const INTEGER& p__msg, const BOOLEAN& p__set__timestamp)
{
  if (p__set__timestamp) {
    p__pt.incoming_message(p__msg, TTCN_Runtime::now());
  }
  else {
    p__pt.incoming_message(p__msg);
  }
}

void ef__test__send(const INTEGER& p__msg)
{
  // test, whether 'send' can be called with one parameter
  CT_component_ptMsg.send(p__msg);
}

PortMsg::PortMsg(const char *par_port_name)
	: PortMsg_BASE(par_port_name)
{

}

PortMsg::~PortMsg()
{

}

void PortMsg::set_parameter(const char * /*parameter_name*/,
	const char * /*parameter_value*/)
{

}

/*void PortMsg::Handle_Fd_Event(int fd, boolean is_readable,
	boolean is_writable, boolean is_error) {}*/

void PortMsg::Handle_Fd_Event_Error(int /*fd*/)
{

}

void PortMsg::Handle_Fd_Event_Writable(int /*fd*/)
{

}

void PortMsg::Handle_Fd_Event_Readable(int /*fd*/)
{

}

/*void PortMsg::Handle_Timeout(double time_since_last_call) {}*/

void PortMsg::user_map(const char * /*system_port*/)
{

}

void PortMsg::user_unmap(const char * /*system_port*/)
{

}

void PortMsg::user_start()
{

}

void PortMsg::user_stop()
{

}

void PortMsg::outgoing_send(const INTEGER& /*send_par*/, FLOAT* timestamp_redirect)
{
  if (CT_component_set__timestamp && timestamp_redirect != NULL) {
    *timestamp_redirect = TTCN_Runtime::now();
  }
}

} /* end of namespace */

