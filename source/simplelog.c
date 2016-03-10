/*
 * SPDX-License-Identifier: Apache-2.0
 * Copyright (c) 2015-2016 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

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
