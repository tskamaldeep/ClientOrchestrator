#ifndef __ClientMetrics__h_
#define __ClientMetrics__h_


#include <iostream>
#include "ClientActivationStates.h"
#include "ClientIdentifier.h"
#include <string>
#include <chrono>
#include <ctime>

// Correct logic in places where the syntax needs correction.
class ClientMetrics : public Object {

	// Consider an object as the value of the map.
	std::map<string, string> metrics = new std::map<string, string>();
	auto start_time; // = std::chrono::system_clock::now();
	auto end_time; //= std::chrono::system_clock::now();


	public void ClientMetrics(ClientIdentifier &ident) {

		start_time = std::chrono::system_clock::now();

		metrics.insert(std::pair<std::string, std::string> (client_id, ident->client_id));
		metrics.insert(std::pair<std::string, std::string> (client_name, ident->client_name));
		metrics.insert(std::pair<std::string, std::string> (client_group, ident->client_group));

	};

	// All the value opts of the key/value pair are currently string.
	// Consider a custom object : TODO
	public bool insertClientMetric(std::string ckey, std::string cvalue);

	public std::string valueForClientMetric(std::string ckey);

	public std::string toString();
};


#endif
