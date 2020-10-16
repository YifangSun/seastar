#include "/home/work/feeds-seastar/seastar-20.05/seastar/build/apps/httpd/demo.json.hh"

namespace seastar {

namespace httpd {

namespace demo_json {

const path_description hello_world("/hello/world",GET,"hello_world",
{{"var1", path_description::url_component_type::PARAM}
,{"var2", path_description::url_component_type::PARAM_UNTIL_END_OF_PATH}},{"query_enum"});
namespace ns_hello_world {

query_enum str2query_enum(const sstring& str) {
  static const sstring arr[] = {"VAL1","VAL2","VAL3"};
  int i;
  for (i=0; i < 3; i++) {
    if (arr[i] == str) {return (query_enum)i;}
}
  return (query_enum)i;
}

}
}
}
}
