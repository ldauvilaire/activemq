/*
* Copyright 2006 The Apache Software Foundation or its licensors, as
* applicable.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
#ifndef WireFormatInfo_hpp_
#define WireFormatInfo_hpp_

#include <string>
#include "command/AbstractCommand.hpp"
    

#include "util/ifr/ap.hpp"
#include "util/ifr/p.hpp"

namespace apache
{
  namespace activemq
  {
    namespace client
    {
      namespace command
      {
        using namespace ifr::v1;
        using namespace std;
        using namespace apache::activemq::client;

/*
 *
 *  Marshalling code for Open Wire Format for WireFormatInfo
 *
 *
 *  NOTE!: This file is autogenerated - do not modify!
 *         if you need to make a change, please see the Groovy scripts in the
 *         activemq-core module
 *
 */
class WireFormatInfo : public AbstractCommand
{
private:
    ap<char> magic ;
    int version ;
    bool cacheEnabled ;
    bool stackTraceEnabled ;
    bool tcpNoDelayEnabled ;
    bool prefixPacketSize ;
    bool tightEncodingEnabled ;

public:
    const static int TYPE = 1;

public:
    WireFormatInfo() ;
    virtual ~WireFormatInfo() ;

    virtual int getCommandType() ;

    virtual ap<char> getMagic() ;
    virtual void setMagic(ap<char> magic) ;

    virtual int getVersion() ;
    virtual void setVersion(int version) ;

    virtual bool getCacheEnabled() ;
    virtual void setCacheEnabled(bool cacheEnabled) ;

    virtual bool getStackTraceEnabled() ;
    virtual void setStackTraceEnabled(bool stackTraceEnabled) ;

    virtual bool getTcpNoDelayEnabled() ;
    virtual void setTcpNoDelayEnabled(bool tcpNoDelayEnabled) ;

    virtual bool getPrefixPacketSize() ;
    virtual void setPrefixPacketSize(bool prefixPacketSize) ;

    virtual bool getTightEncodingEnabled() ;
    virtual void setTightEncodingEnabled(bool tightEncodingEnabled) ;


} ;

/* namespace */
      }
    }
  }
}

#endif /*WireFormatInfo_hpp_*/
