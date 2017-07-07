#pragma once

using namespace System;

ref class Fleet :
	public System::Windows::Forms::TreeNode
{
public:
	Fleet();
	Fleet(String^ name);
};

