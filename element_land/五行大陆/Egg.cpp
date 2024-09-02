#include "Egg.h"
#include "constTable.h"
void Egg::setKind(int x) {
	kind = x;
}

int Egg::getKind()const {
	return kind;
}

std::string Egg::getName() {
	return EGGNAME[kind - 1];
}
double Egg::getProbability()const {
	return EGGPROBABILITY[kind - 1];
}