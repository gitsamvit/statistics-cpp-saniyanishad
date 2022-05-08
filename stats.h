
#include<iostream>
#include <vector>
#include<math.h>
#include<bits/stdc++.h>
#include<numeric>
using namespace std;


namespace Statistics {
    //Stats ComputeStatistics(const std::vector<___>& );
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
	Stats<T> ComputeStatistics(const std::vector<T>& );
	//Stats ComputeStatistics(const std::vector<float>&);
}

