// HammUEr
// Copyright 2015-2016 Turfster / NT Entertainment
// All Rights Reserved.


// This code is held together with kitten whiskers and toothpicks.
// There's nothing to see or learn here.
// Seriously.
// Turn back.

#pragma once
#include "VMFLogic.h"


class MAPFuncBrush: public VMFLogic
{
public:

	MapBrush* myBrush;

	int solidity;
	bool shadows;
	bool startsDisabled;
	std::string modelname;
	MAPFuncBrush();
};