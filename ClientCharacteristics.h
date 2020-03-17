#ifndef __ClientCharacteristics__h_
#define __ClientCharacteristics__h_


#include <iostream>
#include <string>
#include <map.h>
#include <vector>
#include "ClientIdentifier.h"


class ClientCharacteristics : public Object {

	private std::map <string, string> characteristics = new std::map<string, string>();
	private std::vector <string> immutable_characteristics = new std::vector<string>(_client_id, _client_name, _client_group);


	public void ClientCharacteristics(string client_id, string client_name, string client_group) {

		// Add all the key values to the map.
		characteristics.add(_client_id, client_id);
		characteristics.add(_client_id, client_name);
		characteristics.add(_client_id, client_group);
	};

	public bool addClientCharacteristic(string, string);

	public bool isImmutableCharacteristic(string);





};



#endif
