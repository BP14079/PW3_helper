#pragma once
#include "FleetBase.h"

using namespace System;

ref class Fleet :
	public FleetBase
{
public:
	Fleet();
	Fleet(String^ name);
	Fleet(String^ name, String^ location);
	Fleet(String ^ name, String ^ location, String ^ notes);
};

