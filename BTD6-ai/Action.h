#pragma once
class Action
{
public:
	bool isReady(double t_currentRound) { return t_currentRound >= round; }
protected:
	int round; // Round to do action on
};

