#include "Fleet.h"



Fleet::Fleet()
{
	this->Name = "";
	this->Text = "";
}

Fleet::Fleet(String ^ name)
{
	this->Name = name;
	this->Text = name;
}
