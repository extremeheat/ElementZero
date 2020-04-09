#pragma once

#include <hook.h>

#include "../Core/Packet.h"
#include "../dll.h"

class TransferPacket : public Packet {
  std::string address;
  int port;

public:
  TransferPacket(std::string address, int port) : address(address), port(port) {}
  inline virtual ~TransferPacket() {}
  MCAPI virtual MinecraftPacketIds getId() const;
  MCAPI virtual std::string getName() const;
  MCAPI virtual void write(BinaryStream &) const;
  MCAPI virtual PacketReadResult read(ReadOnlyBinaryStream &);
};