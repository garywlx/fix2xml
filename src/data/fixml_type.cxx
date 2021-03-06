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

#include "fixml_type.hxx"

namespace fix2xml {
//----------------------------------------------------------------------------

fixml_type::fixml_type(const std::string &ns, const std::string &name,
                       const std::string &base_type,
                       const fixml_type_category cat)
    : _ns(ns), _name(name), _base_type(base_type), _category(cat) {}

//----------------------------------------------------------------------------

bool fixml_type::get_componet(const std::string &compo_name,
                              fixml_component_data &compo_data) {
  for (const auto &compo : _components) {
    if (compo_name == compo._name) {
      compo_data = compo;
      return true;
    }
  }
  return false;
}

//----------------------------------------------------------------------------
}
