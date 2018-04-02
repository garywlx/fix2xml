#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MarketDefinitionRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MarketDefinitionRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"MktDefReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDefinitionRequest_message_t_0;
  elt.add_attribute("MktReqID", "MarketReqID_t_1423579382");
  elt.add_attribute("SubReqTyp", "1");
  elt.add_attribute("MktID", "MarketID_t_1025205296");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1322413443");
  elt.add_attribute("ParentMktSegmID", "ParentMktSegmID_t_1221958799");
  all_values.push_back(MarketDefinitionRequest_message_t_0);
  all_compo_names.insert("MarketDefinitionRequest_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
