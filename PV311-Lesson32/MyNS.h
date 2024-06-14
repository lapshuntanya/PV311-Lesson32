#pragma once
#include <iostream>

namespace MyNS {
	class MyClass
	{
	public:
		void showInfo()const {
			using namespace std;
			cout << "namespace MyNS: class MyClass\n\n";
		}
	};
	 
}