#ifndef MousePress_h_
#define MousePress_h_

#include "CommonNodeIncludes.h"
#include "_libs_Mouse.h"

class MousePress :
public Node,
public HasTrigger
{
	public:
	
	MousePress();
	~MousePress();

	protected:

	void onInternalInputChange(BaseInput &internalInput);

	bool pressed;
};
#endif
