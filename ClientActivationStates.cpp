#include "ClientActivationStates.h"


private bool moveToAllowedState (std::string next, std::vector<std::string> allowedstates) {

	bool status = false;

	if (next in allowedstates) {
		setClientNextState(next);
		status = true;
	}
	else {
		raiseStateChangeError(prev, next);
		status = false;
	}

	return status;

}


public bool moveClientState (std::string prev, std::string next) {

	vector<std::string> allowedStates = new vector<std::string>();
	bool status = false;

	switch (clientCurrentState) {

		case (clientInitState):

			allowedStates = [clientStartState, clientStoppedState, clientShutdownState];

			status = this.moveToAllowedState(next, allowedStates);
			break;

		case (clientStartState):

			allowedStates = [clientRunningState, clientShutdownState];

			status = this.moveToAllowedState(next, allowedStates);

			break;

		case (clientRunningState):

			allowedStates = [clientPausedState, clientStoppedState];

			status = this.moveToAllowedState(next, allowedStates);

			break;

		case (clientPausedState):

			allowedStates = [clientRunningState, clientResumedState, clientStoppedState]

			status = this.moveToAllowedState(next, allowedStates);

			break;


		case (clientResumedState):

			allowedStates = [clientPausedState, clientRunningState, clientStoppedState];

			status = this.moveToAllowedState(next, allowedStates);

			break;

		case (clientStoppedState):

			allowedStates = [clientStartState, clientRunningState, clientShutdownState];

			status = this.moveToAllowedState(next, allowedStates);

			break;

		case (clientShutdownState):

			allowedStates = [clientInitState];

			status = this.moveToAllowedState(next, allowedStates);

			break;

		default:

			break;

	}

	if (status) {
		setClientCurrentState(next);
		setClientPrevState(prev);
	}


	return status;

};

