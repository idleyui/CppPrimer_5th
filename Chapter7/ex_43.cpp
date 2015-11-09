class NoDefault{
public:NoDefault(int){}
};

class C{
public:
	C(int i = 0):noDefault(i){};
	NoDefault noDefault;
};