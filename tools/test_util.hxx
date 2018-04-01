#ifndef TEST_UTIL_HXX
#define TEST_UTIL_HXX

#include <set>
#include <string>

template <typename FIELD_MAP, typename FIELD>
void set_field(FIELD_MAP &field_map, const FIELD& field, std::multiset<std::string> &s) {
    field_map.set(field);
    s.insert(field.getString());
}



#endif /* end of include guard: TEST_UTIL_HXX */
