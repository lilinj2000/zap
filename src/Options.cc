// Copyright (c) 2010
// All rights reserved.

#include "Options.hh"

namespace zap {

using soil::json::get_item_value;

Options::Options(
    const rapidjson::Document& doc) {
  get_item_value(&type, doc, "/zap/type");
  get_item_value(&frontend, doc, "/zap/frontend");
  get_item_value(&backend, doc, "/zap/backend");
}

};  // namespace zap
