#include "Fleet.h"



Fleet::Fleet() : FleetBase()
{
}

Fleet::Fleet(String ^ name) : FleetBase(name)
{
}

Fleet::Fleet(String ^ name, String ^ location) : FleetBase(name, location)
{
}

Fleet::Fleet(String ^ name, String ^ location, String^ notes) : FleetBase(name, location, notes)
{
}