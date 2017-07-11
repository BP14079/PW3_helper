#include "Ship.h"



Ship::Ship() : FleetBase()
{
}

Ship::Ship(String ^ name): FleetBase(name)
{
}

Ship::Ship(String ^ name, String^ location) : FleetBase(name, location)
{
}

Ship::Ship(String ^ name, String^ location, String^ notes) : FleetBase(name, location, notes)
{
}