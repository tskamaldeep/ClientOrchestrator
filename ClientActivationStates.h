#ifndef __ClientActivationStates__h_
#define __ClientActivationStates__h_


#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <ctime>


class ClientActivationStates : public Object {

	private std::string clientInitState = "CLIENT_INIT_STATE";
	private std::string clientStartState = "CLIENT_START_STATE";
	private std::string clientRunningState = "CLIENT_RUNNING_STATE";
	private std::string clientPausedState = "CLIENT_PAUSED_STATE";
	private std::string clientResumedState = "CLIENT_RESUMED_STATE";
	private std::string clientStoppedState = "CLIENT_STOPPED_STATE";
	private std::string clientShutdownState = "CLIENT_SHUTDOWN_STATE";

	//Consider having a different initializer.
	private auto clientInitStateDuration = std::null;
	private auto clientStartStateDuration = std::null;

	private auto clientRunningStateDuration = std::null;
	private auto clientPausedStateDuration = std::null;

	private auto clientResumedStateDuration = std::null;
	private auto clientStoppedStateDuration = std::null;

	private auto clientShutdownStateDuration = std::null;

	private vector<std::string> clientStates = new vector<std::string> (clientInitState, clientStartState, clientRunningState, \
												clientPausedState, clientResumedState, clientStoppedState, \
												clientShutdownState);

	private std::string clientCurrentState = clientStates.begin();
	private std::string clientPrevState = std::null;
	private std::string clientNextState = std::null;

	private bool moveToAllowedState (std::string, std::vector<std::string>);

	public bool moveClientState (std::string, std::string);

	public std::string getClientCurrentState() const {
		return clientCurrentState;
	}

	public void setClientCurrentState(std::string val) {
		clientCurrentState = val;
	}

	public std::string getClientPrevState() const {
		return clientPrevState;
	}

	public void setClientPrevState(std::string val) {
		clientPrevState = val;
	}

	public std::string getClientNextState() const {
		return clientNextState;
	}

	public void setClientNextState(std::string val) {
		clientNextState = val;
	}


#endif
