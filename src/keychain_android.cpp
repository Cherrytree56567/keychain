/*
 * Copyright (c) 2013 GitHub Inc.
 * Copyright (c) 2015-2019 Vaclav Slavik
 * Copyright (c) 2019 Hannes Rantzsch, René Meusel
 * Copyright (c) 2026 CT5
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */

#include "keychain.h"

#include <string>
#include <vector>

namespace keychain {

void setPassword(const std::string &package, const std::string &service,
                 const std::string &user, const std::string &password,
                 Error &err) {
    (void)package;
    (void)service;
    (void)user;
    (void)password;
    (void)err;
    /*
     * TODO: this
    */
}

std::string getPassword(const std::string &package, const std::string &service,
                        const std::string &user, Error &err) {
    (void)package;
    (void)service;
    (void)user;
    (void)err;
    /*
     * TODO: This
    */

    return "";
}

void deletePassword(const std::string &package, const std::string &service,
                    const std::string &user, Error &err) {
    (void)package;
    (void)service;
    (void)user;
    (void)err;
    /*
     * TODO: This
    */
}

bool isAvailable(Error &err) {
    (void)err;
    /*
     * TODO: This
    */
   
    return true;
}

} // namespace keychain
