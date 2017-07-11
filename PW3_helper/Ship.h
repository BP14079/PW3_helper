#pragma once
#include "FleetBase.h"

using namespace System;

ref class Ship : 
	public FleetBase
{
public:
	Ship();
	Ship(String^ name);
	Ship(String ^ name, String ^ location);
	Ship(String ^ name, String ^ location, String ^ notes);
};

