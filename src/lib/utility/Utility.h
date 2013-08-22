#ifndef UTILITY_H_
#define UTILITY_H_

#include <iostream>

namespace XCF {

    class Utility {
        public:
            Utility();
            virtual ~Utility();
            static char* strToChar(std::string str);
    };

} /* namespace XCF */

#endif /* UTILITY_H_ */