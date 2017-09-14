// Copyright (c) 2010
// All rights reserved.

#include <memory>
#include "Server.hh"
#include "soil/Pause.hh"
#include "soil/json.hh"
#include "soil/Log.hh"

int main(int argc, char* argv[]) {
  rapidjson::Document doc;
  soil::json::load_from_file(&doc, "zap.json");
  soil::log::init(doc);

  std::unique_ptr<zap::Server> proxy
      (new zap::Server(doc));

  std::unique_ptr<soil::Pause> pause(soil::Pause::create());
}
