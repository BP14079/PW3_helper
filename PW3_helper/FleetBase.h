#pragma once

using namespace System;

ref class FleetBase :
	public System::Windows::Forms::TreeNode
{
public:
	property String^ location;
	property String^ notes;
public:
	FleetBase();
	FleetBase(String^ name);
	FleetBase(String^ name, String^ location);
	FleetBase(String^ name, String^ location, String^ notes);

};

