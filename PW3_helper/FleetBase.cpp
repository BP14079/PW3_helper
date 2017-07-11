#include "FleetBase.h"

using namespace System;

FleetBase::FleetBase() : System::Windows::Forms::TreeNode()
{
	this->location = "";
}

FleetBase::FleetBase(String^ name) : System::Windows::Forms::TreeNode(name)
{
	this->location = "";
}

FleetBase::FleetBase(String ^ name, String ^ location) : System::Windows::Forms::TreeNode(name)
{
	this->location = location;
}

FleetBase::FleetBase(String ^ name, String ^ location, String^ notes) : System::Windows::Forms::TreeNode(name)
{
	this->location = location;
	this->notes = notes;
}
