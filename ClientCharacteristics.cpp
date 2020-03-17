#include "ClientCharacteristics.h"


public bool addClientCharacteristic(string characteristic_name, string characteristic_val) {
	try {

		if (characteristic_name not in characteristics.keys() &&
				characteristic_name not in immutable_characteristics) {

			return (characteristics.add(characteristic_name, characteristic_val));
		}
		// Assignment in map.
	}
	catch {
		cerr << "Client Characteristic attribute error for key: " << characteristic_name;
		return false;
	};
}


public bool removeClientCharacteristic(string characteristic_name) {
	try {

		if (characteristic_name not in characteristics.keys() &&
				characteristic_name not in immutable_characteristics) {

			return (characteristics.delete(characteristic_name));
		}
		// Assignment in map.
	}
	catch {
		cerr << "Client Characteristic attribute error for key: " << characteristic_name;
		return false;
	}
}


public bool isImmutableCharacteristic(string characteristic_name) {
	return
		(std::find(immutable_characteristics.begin(), immutable_characteristics.end(), characteristic_name) !=
				immutable_characteristics.end());
}






