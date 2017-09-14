// Copyright (c) 2010
// All rights reserved.

#ifndef ZAP_OPTIONS_HH
#define ZAP_OPTIONS_HH

#include <string>
#include "soil/json.hh"

namespace zap {
class Options {
 public:
  explicit Options(
      const rapidjson::Document& doc);

  virtual ~Options() {
  }

  std::string type;
  std::string frontend;
  std::string backend;
};

}    // namespace zap
#endif
