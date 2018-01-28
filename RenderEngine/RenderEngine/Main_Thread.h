#pragma once
#include "ImportUtility.h"

using namespace std;

class Main_Thread
{
private:
	bool Run;
	View *MainView;

public:
	Main_Thread(bool, int, int);
	~Main_Thread();
};

