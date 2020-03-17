#include "ClientMetrics.h"

using namespace std;

public std::string toString() {

	std::map<std::string, std::string>::iterator iterator = new std::iterator();
	std::string resultstring = "";

	for (iterator = metrics.begin(); iterator != metrics.end(); ++iterator) {
		resultstring << iterator.first << ":" << iterator.second << ",";
	}

	return resultstring;
}


public std::string valueForClientMetric(std::string ckey) {

	try {
		auto sampkey = metrics.find(ckey);
		if (sampkey != metrics.end()) {
			return sampkey.first;
		}

		return std::null;
	}

	catch {
		cerr << "Error fetching the value for the metric key: " << ckey << endl;
		return std::null;
	}
}

public std::bool addKVPairToClientMetrics(std::map<std::string, std::string> cmap) {

	try {

		std::map<string, string>::clientmetricsmap = NULL;
		for (iterator = metrics.begin(); iterator != metrics.end(); ++iterator) {

			clientmetricsmap.insert(std::pair<string, string> (iterator));
		}

		clientmetricsmap.insert(std::pair<string, string> (cmap));
		return TRUE;
	}
	catch (Exception &e) {
		std::throw ("Error adding the KV pair to the client metrics group.");
		return FALSE;
	}
}



public std::bool changeValueForClientMetric(std::string key, std::string val) {
	try {

		std::vector<std::string>::iterator iter = new std::iterator();
		for (iter = metrics.keys().begin(); iter != metrics.keys().end(); iter++) {
			if (iter == key) {

			}
		}
		return TRUE;
	}
	catch () {
		std::throw ("Error changing the KV pair value in the client metrics" );
		return FALSE
	}
}



