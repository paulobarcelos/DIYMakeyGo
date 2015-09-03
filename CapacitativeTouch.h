#ifndef CapacitativeTouch_h_
#define CapacitativeTouch_h_

#include "CommonNodeIncludes.h"

class CapacitativeTouch :
public Node,
public HasInterval,
public HasOut
{
	public:
	
	CapacitativeTouch();
	~CapacitativeTouch();

	void onInterval();

	Input place;
	Input min;
	Input max;

	protected:

	void onInternalInputChange(BaseInput &internalInput);

	MedianFilter preMedianFilter;
  LowPassFilter average;
	MedianFilter postMedianFilter;

  uint8_t readCapacitivePin(int pinToMeasure);
};
#endif
