// include the libc header for printf
#include <stdio.h>

// include our own public header
#include "simplelog/log.h"

const char* prefixForLevel(enum SimpleLogLevel level){
    if(level <= Simple_Log_Critical){
        return "[critical]";
    }else if(level <= Simple_Log_Notice){
        return "[notice]";
    }else if(level <= Simple_Log_Error){
        return "[error]";
    }else if(level <= Simple_Log_Warning){
        return "[warning]";
    }else if(level <= Simple_Log_Info){
        return "[info]";
    }else{
        return "[debug]";
    }
}

// log the message at the given level
void simpleLog(enum SimpleLogLevel level, const char* msg){
    printf("%s %s\n", prefixForLevel(level), msg);
}

void simpleLogError(const char* msg){
    return simpleLog(Simple_Log_Error, msg);
}
void simpleLogWarning(const char* msg){
    return simpleLog(Simple_Log_Warning, msg);
}
void simpleLogInfo(const char* msg){
    return simpleLog(Simple_Log_Info, msg);
}
void simpleLogDebug(const char* msg){
    return simpleLog(Simple_Log_Debug, msg);
}
