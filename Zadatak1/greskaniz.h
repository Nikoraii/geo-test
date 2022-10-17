#ifndef __greskaniz_h__
#define __greskaniz_h__
#include <iostream>
#include "greska.h"
using namespace std;
class GreskaNiz : public Greska {
public:
	void pisi(ostream& os) {
		os << "***GRESKA: Granice niza van opsega!";
	}
};
#endif