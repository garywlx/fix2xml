#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ListExecute.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ListExecute_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ListExct" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ListExecute_message_t_0;
  elt.add_attribute("ID", "ListID_t_766396255"); // 0
  ListExecute_message_t_0.insert("ListID_t_766396255");
  elt.add_attribute("ClBidID", "ClientBidID_t_400383307"); // 0
  ListExecute_message_t_0.insert("ClientBidID_t_400383307");
  elt.add_attribute("BidID", "BidID_t_319387433"); // 0
  ListExecute_message_t_0.insert("BidID_t_319387433");
  elt.add_attribute("TxnTm", "TransactTime_t_1472091944"); // 0
  ListExecute_message_t_0.insert("TransactTime_t_1472091944");
  elt.add_attribute("Txt", "Text_t_88923603"); // 0
  ListExecute_message_t_0.insert("Text_t_88923603");
  elt.add_attribute("EncTxtLen", "522107681"); // 0
  ListExecute_message_t_0.insert("522107681");
  elt.add_attribute("EncTxt", "EncodedText_t_1404354655"); // 0
  ListExecute_message_t_0.insert("EncodedText_t_1404354655");
  all_values.push_back(ListExecute_message_t_0);
  all_compo_names.insert("ListExecute_message_t");

  { // Hdr
    xml_element Hdr_35{"Hdr"};
    multiset<string> Hdr_35_set;
    Hdr_35.add_attribute("SeqNum", "1790487918"); // 1
    Hdr_35_set.insert("1790487918");
    Hdr_35.add_attribute("SID", "SenderCompID_t_1519420266"); // 1
    Hdr_35_set.insert("SenderCompID_t_1519420266");
    Hdr_35.add_attribute("TID", "TargetCompID_t_310919764"); // 1
    Hdr_35_set.insert("TargetCompID_t_310919764");
    Hdr_35.add_attribute("OBID", "OnBehalfOfCompID_t_1939739868"); // 1
    Hdr_35_set.insert("OnBehalfOfCompID_t_1939739868");
    Hdr_35.add_attribute("D2ID", "DeliverToCompID_t_1847537648"); // 1
    Hdr_35_set.insert("DeliverToCompID_t_1847537648");
    Hdr_35.add_attribute("SSub", "SenderSubID_t_1105830462"); // 1
    Hdr_35_set.insert("SenderSubID_t_1105830462");
    Hdr_35.add_attribute("SLoc", "SenderLocationID_t_265966916"); // 1
    Hdr_35_set.insert("SenderLocationID_t_265966916");
    Hdr_35.add_attribute("TSub", "TargetSubID_t_139629566"); // 1
    Hdr_35_set.insert("TargetSubID_t_139629566");
    Hdr_35.add_attribute("TLoc", "TargetLocationID_t_1740493178"); // 1
    Hdr_35_set.insert("TargetLocationID_t_1740493178");
    Hdr_35.add_attribute("OBSub", "OnBehalfOfSubID_t_1365795856"); // 1
    Hdr_35_set.insert("OnBehalfOfSubID_t_1365795856");
    Hdr_35.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1013938232"); // 1
    Hdr_35_set.insert("OnBehalfOfLocationID_t_1013938232");
    Hdr_35.add_attribute("D2Sub", "DeliverToSubID_t_1116691227"); // 1
    Hdr_35_set.insert("DeliverToSubID_t_1116691227");
    Hdr_35.add_attribute("D2Loc", "DeliverToLocationID_t_689899692"); // 1
    Hdr_35_set.insert("DeliverToLocationID_t_689899692");
    Hdr_35.add_attribute("PosDup", "Y"); // 1
    Hdr_35_set.insert("Y");
    Hdr_35.add_attribute("PosRsnd", "N"); // 1
    Hdr_35_set.insert("N");
    Hdr_35.add_attribute("Snt", "SendingTime_t_677147662"); // 1
    Hdr_35_set.insert("SendingTime_t_677147662");
    Hdr_35.add_attribute("OrigSnt", "OrigSendingTime_t_1764680504"); // 1
    Hdr_35_set.insert("OrigSendingTime_t_1764680504");
    Hdr_35.add_attribute("MsgEncd", "MessageEncoding_t_1560020263"); // 1
    Hdr_35_set.insert("MessageEncoding_t_1560020263");
    all_values.push_back(Hdr_35_set);
    all_compo_names.insert("Hdr_35_set");

    {
      xml_element Hop_35{"Hop"};
      multiset<string> Hop_35_set;
      Hop_35.add_attribute("ID", "HopCompID_t_1197918497"); // 2
      Hop_35_set.insert("HopCompID_t_1197918497");
      Hop_35.add_attribute("Ref", "230377143"); // 2
      Hop_35_set.insert("230377143");
      Hop_35.add_attribute("Snt", "HopSendingTime_t_1236494272"); // 2
      Hop_35_set.insert("HopSendingTime_t_1236494272");
      all_values.push_back(Hop_35_set);
      all_compo_names.insert("Hop_35_set");

      Hdr_35.add_element(Hop_35);
    }
    elt.add_element(Hdr_35);
  } // end Hdr
  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

  FIX::Message fix_msg;
  ASSERT_TRUE(converter.fixml2fix(elt, fix_msg));

  cout << endl << "////////////////////////////////////////////" << endl;
  cout << fix_msg.toXML() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

  cout << endl << "////////////////////////////////////////////" << endl;
  multiset<string> fix_s;
  list<multiset<string>> fix_ls;
  msg_to_list(fix_msg, quickfix_dico, fix_s, fix_ls);
  fix_ls.push_back(fix_s);

  BOOST_LOG_TRIVIAL(debug) << "All FIX components (" << fix_ls.size() << ")";
  for (const auto &l : fix_ls) {
    cout << "	[";
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << "]" << endl;
  }

  cout << endl << "////////////////////////////////////////////" << endl;
  multiset<string> xml_s;
  list<multiset<string>> xml_ls;
  elt_to_list(elt, fixml_dict, xml_s, xml_ls);
  xml_ls.push_back(xml_s);
  BOOST_LOG_TRIVIAL(debug) << "All XML components (" << xml_ls.size() << ")";
  for (const auto &l : xml_ls) {
    cout << "	[";
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << "]" << endl;
  }

  for (const auto &fix_l : fix_ls) {
    bool found = false;
    for (const auto &xml_l : xml_ls) {
      if (includes(xml_l.begin(), xml_l.end(), fix_l.begin(), fix_l.end())) {
        found = true;
        break;
      } // end if includes
    }   // end for all_values
    EXPECT_TRUE(found);
    if (!found) {
      BOOST_LOG_TRIVIAL(debug)
        << "[TO CHECK] This FIX component was not found in XML message";
      cout << "	 ---> [";
      copy(fix_l.begin(), fix_l.end(), ostream_iterator<string>(cout, " "));
      cout << "]" << endl << endl;
    } // end if ! found
  }   // end for elt_lists
}
