//
//  ofxNonCopyable.h
//  ofxNonCopyable
//
//  Created by Onishi Yoshito on 2/5/13.
//
//

#ifndef ofxNonCopyable_ofxNonCopyable_h
#define ofxNonCopyable_ofxNonCopyable_h

template<class Derived>
class ofxNonCopyable {
protected:
    ofxNonCopyable() {}
    virtual ~ofxNonCopyable() {}
private:
    ofxNonCopyable(const ofxNonCopyable &);
    Derived &operator = (const Derived &);
};

#endif
