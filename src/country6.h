/*
 * GeoIP C library binding for nodejs
 *
 * Licensed under the GNU LGPL 2.1 license
 */

#ifndef NODE_GEOIP_COUNTRY6_H
#define NODE_GEOIP_COUNTRY6_H

#include <v8.h>
#include <node.h>
#include "init.h"

using namespace v8;
using namespace node;

namespace native {
  class Country6: public ObjectWrap {
    private:
      explicit Country6();

      ~Country6();

      GeoIP *db;

      int db_edition;

      static Nan::Persistent<v8::Function> constructor;

      static NAN_METHOD(New);

      static NAN_METHOD(lookupSync);

    public:
      static void Init(v8::Local<v8::Object> exports);
  };
}

#endif /* NODE_GEOIP_COUNTRY6_H */
