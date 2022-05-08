
#include<iostream>
#include <vector>
#include<cmath>
#include<bits/stdc++.h>
#include<numeric>
using namespace std;


namespace Statistics {
    //Stats ComputedStatistics(const std::vector<___>& );
    template <typename T=double>	//default
	class Stats
   	 {
	   public:
		T Average;
		T Max;
		T Min;
        Stats();//empty array
        Stats(T average,T Max,T Min);
	};
	template<typename T=double>
	Stats<T> ComputedStatistics(const std::vector<T>& );
	//Stats ComputedStatistics(const std::vector<float>&);
}

