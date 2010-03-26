/*
* ============================================================================
*
* Copyright [2009] maidsafe.net limited
*
* Description:  Classes of system packets
* Version:      1.0
* Created:      2009-01-29-00.59.58
* Revision:     none
* Compiler:     gcc
* Author:       Fraser Hutchison (fh), fraser.hutchison@maidsafe.net
* Company:      maidsafe.net limited
*
* The following source code is property of maidsafe.net limited and is not
* meant for external use.  The use of this code is governed by the license
* file LICENSE.TXT found in the root of this directory and also on
* www.maidsafe.net.
*
* You are not free to copy, amend or otherwise use this source code without
* the explicit written permission of the board of directors of maidsafe.net.
*
* ============================================================================
*/

#ifndef MAIDSAFE_CLIENT_SYSTEMPACKETS_H_
#define MAIDSAFE_CLIENT_SYSTEMPACKETS_H_

#include <boost/cstdint.hpp>

#include <string>
#include <vector>

#include "protobuf/packet.pb.h"
#include "maidsafe/client/packetfactory.h"

namespace maidsafe {

class SignaturePacket : public Packet {
 public:
  SignaturePacket() {}
  PacketParams Create(PacketParams params);
  PacketParams GetData(const std::string &ser_packet,
      PacketParams params);
  std::string PacketName(PacketParams params);
 private:
  SignaturePacket &operator=(const SignaturePacket&);
  SignaturePacket(const SignaturePacket&);
};

class MidPacket : public Packet {
 public:
  explicit MidPacket() {}
  virtual ~MidPacket() {}
  virtual PacketParams Create(PacketParams params);
  PacketParams GetData(const std::string &ser_packet,
      PacketParams params);
  std::string PacketName(PacketParams params);
 private:
  MidPacket &operator=(const MidPacket&);
  MidPacket(const MidPacket&);
};

class SmidPacket : public MidPacket {
 public:
  SmidPacket() {}
  PacketParams Create(PacketParams params);
  std::string PacketName(PacketParams params);
 private:
  SmidPacket &operator=(const SmidPacket&);
  SmidPacket(const SmidPacket&);
};

class TmidPacket : public Packet {
 public:
  TmidPacket() {}
  PacketParams Create(PacketParams params);
  PacketParams GetData(const std::string &ser_packet,
      PacketParams params);
  std::string PacketName(PacketParams params);
 private:
  TmidPacket &operator=(const TmidPacket&);
  TmidPacket(const TmidPacket&);
};

class PmidPacket : public Packet {
 public:
  PmidPacket() {}
  PacketParams Create(PacketParams params);
  PacketParams GetData(const std::string &ser_packet,
      PacketParams params);
  std::string PacketName(PacketParams params);
 private:
  PmidPacket &operator=(const PmidPacket&);
  PmidPacket(const PmidPacket&);
};

class MpidPacket : public Packet {
 public:
  MpidPacket() {}
  PacketParams Create(PacketParams params);
  PacketParams GetData(const std::string &ser_packet,
      PacketParams params);
  std::string PacketName(PacketParams params);
 private:
  MpidPacket &operator=(const MpidPacket&);
  MpidPacket(const MpidPacket&);
};

}  // namespace maidsafe

#endif  // MAIDSAFE_CLIENT_SYSTEMPACKETS_H_

