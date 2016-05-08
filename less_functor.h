//
//  Created by Khoa Hoang on 5/7/16.
//

#ifndef UCD_CSCI2312_PA5_LESS_FUNCTOR_H
#define UCD_CSCI2312_PA5_LESS_FUNCTOR_H
#include <cstring>

namespace CS2312 {

    template <typename T>

    class less {
    public:
        bool operator()(T lhs,T rhs) {
            return (lhs < rhs);
        }
    };

    template <>
    class less<std::string> {
    public:
        bool operator()(std::string rhs, std::string lhs) {
            return (rhs < lhs);
        }

    };

    template <>
    class less<const char *> {
    public:
        bool operator()(const char *lhs, const char *rhs) {
            return (strcmp (lhs,rhs) < 0);
        }
    };
}

#endif //UCD_CSCI2312_PA5_LESS_FUNCTOR_H
