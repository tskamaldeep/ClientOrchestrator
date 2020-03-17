
#include "ClientIdentifier.h"
#include <map.h>

class ClientIdentifier : public Object {

	public std::map<std::string, std::string> clientMap;

	public void ClientIdentifier(std::string cname, std::string cid, std::string cgroup) {
		clientMap.client_name = cname;
		clientMap.client_id = cid;
		clientMap.client_group = cgroup;
	}

	public std::map<std::string, std::string> getClientMap () {


	}

};




