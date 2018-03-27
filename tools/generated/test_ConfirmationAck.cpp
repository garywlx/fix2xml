#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/ConfirmationAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ConfirmationAck, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::ConfirmationAck msg;

  list<multiset<string>> all_values;
  multiset<string> ConfirmationAck_0;
  FIX::AffirmStatus AffirmStatus_0(1);
  msg.set(AffirmStatus_0);
  ConfirmationAck_0.insert(AffirmStatus_0.getString());
  FIX::ConfirmID ConfirmID_1("STRING_588737167");
  msg.set(ConfirmID_1);
  ConfirmationAck_0.insert(ConfirmID_1.getString());
  FIX::ConfirmRejReason ConfirmRejReason_0(99);
  msg.set(ConfirmRejReason_0);
  ConfirmationAck_0.insert(ConfirmRejReason_0.getString());
  FIX::EncodedText EncodedText_20("DATA_100687618");
  msg.set(EncodedText_20);
  ConfirmationAck_0.insert(EncodedText_20.getString());
  FIX::EncodedTextLen EncodedTextLen_20(915269054);
  msg.set(EncodedTextLen_20);
  ConfirmationAck_0.insert(EncodedTextLen_20.getString());
  FIX::MatchStatus MatchStatus_7('2');
  msg.set(MatchStatus_7);
  ConfirmationAck_0.insert(MatchStatus_7.getString());
  FIX::Text Text_20("STRING_1170860056");
  msg.set(Text_20);
  ConfirmationAck_0.insert(Text_20.getString());
  FIX::TradeDate TradeDate_8("LOCALMKTDATE_1402917959");
  msg.set(TradeDate_8);
  ConfirmationAck_0.insert(TradeDate_8.getString());
  FIX::TransactTime TransactTime_11(FIX::UTCTIMESTAMP(19, 18, 40, 7, 52016));
  msg.set(TransactTime_11);
  ConfirmationAck_0.insert(TransactTime_11.getString());
  all_values.push_back(ConfirmationAck_0);


  xml_element elt;
  converter.fix2fixml(msg, elt);
  cout << elt.to_string() << endl;
  list<multiset<string>> elt_lists;
  elt.to_list(elt_lists);
  EXPECT_EQ(elt_lists.size(), all_values.size());

  cout << "FIX components" << endl;
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
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
int main(int argc, char *argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  fix2xml::fix_env::init_xerces();
  return RUN_ALL_TESTS();
  fix2xml::fix_env::terminate_xerces();
}
