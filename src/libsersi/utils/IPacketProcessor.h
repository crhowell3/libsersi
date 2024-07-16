#ifndef _dcl_dis_i_packet_processor_h_
#define _dcl_dis_i_packet_processor_h_

namespace dis {
class Pdu;

/// it is the responsibility of the processor to use the packet
/// because it will be deleted after this call.
class IPacketProcessor {
 public:
  virtual ~IPacketProcessor() = default;
  virtual void Process(const Pdu& p) = 0;
};

}  // namespace dis

#endif  // _dcl_dis_i_packet_processor_h_
