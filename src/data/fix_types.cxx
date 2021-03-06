// MIT License
//
// Copyright 2018 Abdelkader Amar
//
// Permission is hereby granted, free of charge, to any person obtaining
// a copy of this software and associated documentation files (the
// "Software"), to deal in the Software without restriction, including
// without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Software, and to
// permit persons to whom the Software is furnished to do so, subject to
// the following conditions:
//
// The above copyright notice and this permission notice shall be
// included in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
// LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
// OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
// WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#include "fix_types.hxx"

#include <sstream>

namespace fix2xml {
using namespace std;
//----------------------------------------------------------------------------

string fix_field_type::to_string() const {
  stringstream ss;
  // TODO
  return ss.str();
}

//----------------------------------------------------------------------------

string fix_component_type::to_string() const {
  stringstream ss;
  // TODO
  return ss.str();
}

//----------------------------------------------------------------------------

fix_message_type::fix_message_type() { _components.insert("header"); }
fix_message_type::fix_message_type(const std::string &name,
                                   const std::string &msgtype)
    : fix_base_type(name), _msgtype(msgtype) {
  _components.insert("header");
}

//----------------------------------------------------------------------------

string fix_message_type::to_string() const {
  stringstream ss;
  return ss.str();
}

//----------------------------------------------------------------------------
}
