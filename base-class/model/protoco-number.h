#ifndef PROTOCOLNUMBER_H
#define PROTOCOLNUMBER_H
#include "ns3/uinteger.h"
#include "ns3/ipv4-header.h"
#include "filter-element.h"

namespace ns3{

class ProtocolNumber: public FilterElement{
	protected:
		uint32_t value;
	
	public:
		ProtocolNumber(uint32_t num);
		bool match(Ptr<ns3::Packet> p);


};


}
	
#endif