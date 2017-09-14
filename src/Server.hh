// Copyright (c) 2010
// All rights reserved.

#ifndef ZAP_SERVER_HH
#define ZAP_SERVER_HH

#include <czmq.h>
#include <memory>
#include "soil/json.hh"

namespace zap {

class Options;
class Server {
 public:
  explicit Server(
      const rapidjson::Document& doc);

  virtual ~Server();

 protected:
  void forwarderProxy();

  void streamerProxy();

  void sharedQueueProxy();

 private:
  std::unique_ptr<Options> options_;
  zactor_t* proxy_;
};

};  // namespace zap

#endif
