#include "BuildAction.h"

BuildAction::BuildAction(BuildAction* buildAction)
{
	round = buildAction->getRound();
	towerName = buildAction->getTowerName();
	Position = buildAction->getPosition();
	type = ActionType::Build;
}

BuildAction::BuildAction(const int t_round, const TowerName t_towerName)
{
	round = t_round;
	towerName = t_towerName;
	type = ActionType::Build;
}

BuildAction::BuildAction(const int t_round, const TowerName t_towerName, const Vector2 t_position)
{
	round = t_round;
	towerName = t_towerName;
	Position = t_position;
	type = ActionType::Build;
}

json BuildAction::toJson()
{
	return json{ {"Type", 0}, {"Round", round}, {"TowerId", static_cast<int>(towerName)}, {"Position", Position.toJson()}};
}