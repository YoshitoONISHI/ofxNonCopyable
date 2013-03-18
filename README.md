ofxNonCopyable
==============

A non-copyable interface
 
	#include "ofxNonCopyable.h"

	/// this class is anything but copy
	class MyClass : public ofxNonCopyable<MyClass> {};
