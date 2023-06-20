#ifndef _Natural_Number
#define _Natural_Number 
#pragma GCC system_header

#include <string>

//Namespace Natural contain Natural Number function for Nature Object
namespace Natural {

//function of Earth Mass    
template <typename _parame>
_parame massaBumi(_parame density, _parame volume ){
    return density * volume;
}

}

#endif
