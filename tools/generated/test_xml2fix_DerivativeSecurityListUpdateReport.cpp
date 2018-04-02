#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/DerivativeSecurityListUpdateReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( DerivativeSecurityListUpdateReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"DerivSecListUpd" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> DerivativeSecurityListUpdateReport_message_t_0;
  elt.add_attribute("ReqID", "SecurityReqID_t_1313481919");
  elt.add_attribute("RspID", "SecurityResponseID_t_939396768");
  elt.add_attribute("ReqRslt", "1");
  elt.add_attribute("UpdActn", "D");
  elt.add_attribute("TxnTm", "TransactTime_t_72264865");
  elt.add_attribute("TotNoReltdSym", "345349414");
  elt.add_attribute("LastFragment", "N");
  all_values.push_back(DerivativeSecurityListUpdateReport_message_t_0);
  all_compo_names.insert("DerivativeSecurityListUpdateReport_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}