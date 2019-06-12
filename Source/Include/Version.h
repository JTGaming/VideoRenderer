#pragma once

//TODO
//#if __has_include("../../revision.h")
//    #include "../../revision.h"
//#endif

#ifndef MPCVR_REV_NUM
#define MPCVR_REV_NUM       0
#endif

#define DO_MAKE_STR(x)      #x
#define MAKE_STR(x)         DO_MAKE_STR(x)

#define MPCVR_VERSION_MAJOR 0
#define MPCVR_VERSION_MINOR 1
#define MPCVR_VERSION_BUILD 1

#define MPCVR_VERSION_NUM   MPCVR_VERSION_MAJOR,MPCVR_VERSION_MINOR,MPCVR_VERSION_BUILD,MPCVR_REV_NUM
#define MPCVR_VERSION_STR   MAKE_STR(MPCVR_VERSION_MAJOR) "." MAKE_STR(MPCVR_VERSION_MINOR) "." MAKE_STR(MPCVR_VERSION_BUILD) "." MAKE_STR(MPCVR_REV_NUM)
