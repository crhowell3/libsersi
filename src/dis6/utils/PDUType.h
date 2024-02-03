#ifndef _dtdis_pdu_type_h_
#define _dtdis_pdu_type_h_

namespace dis {
enum PDUType {
  kPduOther = 0,
  kPduEntityState = 1,
  kPduFire = 2,
  kPduDetonation = 3,
  kPduCollision = 4,
  kPduServiceRequest = 5,
  kPduResupplyOffer = 6,
  kPduResupplyReceived = 7,
  kPduResupplyCancel = 8,
  kPduRepairComplete = 9,
  kPduRepairResponse = 10,
  kPduCreateEntity = 11,
  kPduRemoveEntity = 12,
  kPduStartResume = 13,
  kPduStopFreeze = 14,
  kPduAcknowledge = 15,
  kPduActionRequest = 16,
  kPduActionResponse = 17,
  kPduDataQuery = 18,
  kPduSetData = 19,
  kPduData = 20,
  kPduEventReport = 21,
  kPduComment = 22,
  kPduElectronicEmmisions = 23,
  kPduDesignator = 24,
  kPduTransmitter = 25,
  kPduSignal = 26,
  kPduReceiver = 27,
  kPduIff = 28,
  kPduUnderwaterAcoustic = 29,
  kPduSupplementalEmissionEntity = 30,
  kPduIntercomSignal = 31,
  kPduIntercomControl = 32,
  kPduAggregateState = 33,
  kPduIsGroupOf = 34,
  kPduTransferOwnership = 35,
  kPduIsPartOf = 36,
  kPduMinefieldState = 37,
  kPduMinefieldQuery = 38,
  kPduMinefieldData = 39,
  kPduMinefieldResponseNack = 40,
  kPduEnvironmentalProcess = 41,
  kPduGriddedData = 42,
  kPduPointObjectState = 43,
  kPduLinearObjectState = 44,
  kPduArealObjectState = 45,
  kPduTspi = 46,
  kPduAppearance = 47,
  kPduArticulatedParts = 48
};
}

#endif  // _dtdis_pdu_type_h_