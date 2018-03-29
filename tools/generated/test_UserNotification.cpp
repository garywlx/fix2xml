#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/UserNotification.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( UserNotification, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::UserNotification msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> UserNotification_0;
  FIX::EncodedText EncodedText_113("DATA_1184396639");
  msg.set(EncodedText_113);
  UserNotification_0.insert(EncodedText_113.getString());
  FIX::EncodedTextLen EncodedTextLen_113(2069141328);
  msg.set(EncodedTextLen_113);
  UserNotification_0.insert(EncodedTextLen_113.getString());
  FIX::Text Text_113("STRING_1796197819");
  msg.set(Text_113);
  UserNotification_0.insert(Text_113.getString());
  FIX::UserStatus UserStatus_0(3);
  msg.set(UserStatus_0);
  UserNotification_0.insert(UserStatus_0.getString());
  all_values.push_back(UserNotification_0);

  all_compo_names.insert("UserNotification");

  // UsernameGrp
/*  
  multiset<string> UsernameGrp_0;
  FIX::Username Username_0("STRING_292138249");
  msg.set(Username_0);
  UsernameGrp_0.insert(Username_0.getString());
  all_values.push_back(UsernameGrp_0);
  all_compo_names.insert("UsernameGrp");
*/

  xml_element elt;
  converter.fix2fixml(msg, elt);
  cout << elt.to_string() << endl;
  list<multiset<string>> elt_lists;
  elt.to_list(elt_lists);
  EXPECT_EQ(elt_lists.size(), all_values.size());

  if (elt_lists.size() != all_values.size())  {
    cout << "########################" << endl;
    multiset<string> elt_compo_name;
    elt.all_components(elt_compo_name);
    copy(elt_compo_name.begin(), elt_compo_name.end(), ostream_iterator<string>(cout, "\n"));
    cout << "########################" << endl;
    copy(all_compo_names.begin(), all_compo_names.end(), ostream_iterator<string>(cout, "\n"));
  }  cout << "FIX components" << endl;
  for (const auto& l : all_values) {
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << endl;
  }
  cout << "XML components" << endl;
  for (const auto& l : elt_lists) {
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << endl;
  }

  for (const auto& xml_l : elt_lists) {
    bool found = false;
    for (const auto& l : all_values) {
      if (includes(l.begin(), l.end(), xml_l.begin(), xml_l.end())) {
        found = true;
        break;
      } // end if includes
    } // end for all_values
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
