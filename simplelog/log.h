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

// header guard: C and C++ headers must guard themselves against multiple
// inclusion.
#ifndef SIMPLELOG_LOG_H
#define SIMPLELOG_LOG_H

#ifdef __cplusplus
extern "C" {
#endif // def __cplusplus

// Log levels: note that we prefix everything with the module name. It's OK to
// use various Casing and underscore separated conventions to denote different
// types of symbols, since module names are forced to be lower case, and cannot
// include underscores (only - characters).
enum SimpleLogLevel{
    Simple_Log_Critical = 0,
    Simple_Log_Notice   = 1,
    Simple_Log_Error    = 2,
    Simple_Log_Warning  = 3,
    Simple_Log_Info     = 4,
    Simple_Log_Debug    = 100
};

// log the message at the given level
void simpleLog(enum SimpleLogLevel level, const char* msg);

// shortcut functions, still prefixed
void simpleLogError(const char* msg);
void simpleLogWarning(const char* msg);
void simpleLogInfo(const char* msg);
void simpleLogDebug(const char* msg);

#ifdef __cplusplus
} // extern "C"
#endif // def __cplusplus

// end the header inclusion guard
#endif // ndef SIMPLELOG_LOG_H
