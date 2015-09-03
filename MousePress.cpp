#include "MousePress.h"

MousePress::MousePress():
HasTrigger
	(this){
	pressed = false;
};
MousePress::~MousePress(){}

void MousePress::onInternalInputChange(BaseInput &internalInput){
	if(&internalInput == &trigger){

		if(!pressed && isTriggerActive()){
			pressed = true;
     Mouse.press();
		}
		else if(pressed && !isTriggerActive()){
			pressed = false;
			Mouse.release();
		}

	}
};
