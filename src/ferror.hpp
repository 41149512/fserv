/*
 * Copyright (c) 2011-2013, "Kira"
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met: 
 * 
 * 1. Redistributions of source code must retain the above copyright notice, this
 *   list of conditions and the following disclaimer. 
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *   this list of conditions and the following disclaimer in the documentation
 *   and/or other materials provided with the distribution. 
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _FERROR_H_
#define _FERROR_H_

typedef int FReturnCode;

#define FE(x,y) static const FReturnCode FERR_##x = y

FE(OK, 0);
FE(BAD_SYNTAX, 1);
FE(SERVER_FULL, 2);
FE(REQUIRES_IDENT, 3);
FE(IDENT_FAILED, 4);
FE(THROTTLE_MESSAGE, 5);
FE(USER_NOT_FOUND, 6);
FE(THROTTLE_PROFILE, 7);
FE(UNKNOWN_COMMAND, 8);
FE(BANNED_FROM_SERVER, 9);
FE(NOT_ADMIN, 10);
FE(ALREADY_IDENT, 11);
// ---
FE(THROTTLE_KINKS, 13);
// ---
FE(MESSAGE_TOO_LONG, 15);
FE(ALREADY_OP, 16);
FE(NOT_AN_OP, 17);
FE(NO_SEARCH_RESULTS, 18);
FE(NOT_OP, 19);
FE(IGNORED, 20);
FE(DENIED_ON_OP, 21);
// ---
FE(CHANNEL_NOT_FOUND, 26);
// ---
FE(ALREADY_IN_CHANNEL, 28);
// ---
FE(TOO_MANY_FROM_IP, 30);
FE(LOGGED_IN_AGAIN, 31);
FE(ALREADY_BANNED, 32);
FE(UNKNOWN_AUTH_METHOD, 33);
// ---
FE(BAD_ROLL_FORMAT, 36);
// ---
FE(BAD_TIMEOUT_FORMAT, 38);
FE(TIMED_OUT, 39);
FE(KICKED, 40);
FE(ALREADY_CHANNEL_BANNED, 41);
FE(NOT_CHANNEL_BANNED, 42);
// ---
FE(NOT_INVITED, 44);
FE(NOT_IN_CHANNEL, 45);
// ---
FE(INVITE_TO_PUBLIC, 47);
FE(CHANNEL_BANNED, 48);
FE(USER_NOT_IN_CHANNEL, 49);
FE(THROTTLE_SEARCH, 50);
// ---
FE(THROTTLE_STAFF_CALL, 54);
// ---
FE(THROTTLE_AD, 56);
// ---
FE(CHAT_ONLY, 59);
FE(ADS_ONLY, 60);
// ---
FE(TOO_MANY_SEARCH_TERMS, 61);
FE(NO_LOGIN_SLOT, 62);
// ---
FE(TOO_MANY_SEARCH_RESULTS, 72);
// ---
FE(FATAL_INTERNAL, -1);
FE(LUA, -2);
FE(NOT_IMPLEMENTED, -3);
FE(LOGIN_TIMED_OUT, -4);
FE(UNKNOWN, -5);
FE(WRONG_TICKET_VERSION, -6);

#undef FE

#endif //_FERROR_H_