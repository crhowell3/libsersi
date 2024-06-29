#include "dis6/utils/PduBank.h"

#include "dis6/distributed_emissions/DesignatorPdu.h"
#include "dis6/distributed_emissions/ElectromagneticEmissionsPdu.h"
#include "dis6/entity_information/CollisionPdu.h"
#include "dis6/entity_information/EntityStatePdu.h"
#include "dis6/entity_management/AggregateStatePdu.h"
#include "dis6/entity_management/IsGroupOfPdu.h"
#include "dis6/entity_management/TransferControlRequestPdu.h"
#include "dis6/logistics/RepairCompletePdu.h"
#include "dis6/logistics/RepairResponsePdu.h"
#include "dis6/logistics/ResupplyOfferPdu.h"
#include "dis6/logistics/ResupplyReceivedPdu.h"
#include "dis6/logistics/ServiceRequestPdu.h"
#include "dis6/radio_communications/IntercomControlPdu.h"
#include "dis6/radio_communications/IntercomSignalPdu.h"
#include "dis6/radio_communications/ReceiverPdu.h"
#include "dis6/radio_communications/SignalPdu.h"
#include "dis6/radio_communications/TransmitterPdu.h"
#include "dis6/simulation_management/AcknowledgePdu.h"
#include "dis6/simulation_management/ActionRequestPdu.h"
#include "dis6/simulation_management/ActionResponsePdu.h"
#include "dis6/simulation_management/CommentPdu.h"
#include "dis6/simulation_management/CreateEntityPdu.h"
#include "dis6/simulation_management/DataQueryPdu.h"
#include "dis6/simulation_management/EventReportPdu.h"
#include "dis6/simulation_management/RemoveEntityPdu.h"
#include "dis6/simulation_management/SetDataPdu.h"
#include "dis6/simulation_management/StartResumePdu.h"
#include "dis6/simulation_management/StopFreezePdu.h"
#include "dis6/warfare/DetonationPdu.h"
#include "dis6/warfare/FirePdu.h"

namespace dis {
Pdu* PduBank::GetStaticPDU(PduType pdu_type) {
  static EntityStatePdu entity_state_pdu;
  static FirePdu fire_pdu;
  static DetonationPdu detonation_pdu;
  static CollisionPdu collision_pdu;
  static ServiceRequestPdu service_request_pdu;
  static ResupplyOfferPdu resupply_offer_pdu;
  static ResupplyReceivedPdu resupply_received_pdu;
  static ResupplyOfferPdu resupply_cancel_pdu;
  static RepairCompletePdu repair_complete_pdu;
  static RepairResponsePdu repair_response_pdu;
  static CreateEntityPdu create_entity_pdu;
  static RemoveEntityPdu remove_entity_pdu;
  static StartResumePdu start_resume_pdu;
  static AcknowledgePdu acknowledge_pdu;
  static ActionRequestPdu action_request_pdu;
  static ActionResponsePdu action_response_pdu;
  static DataQueryPdu data_query_pdu;
  static SetDataPdu set_data_pdu;
  static EventReportPdu event_report_pdu;
  static CommentPdu comment_pdu;
  static StopFreezePdu stop_freeze_pdu;
  static ElectromagneticEmissionsPdu electromagnetic_emissions_pdu;
  static DesignatorPdu designator_pdu;
  static TransmitterPdu transmitter_pdu;
  static SignalPdu signal_pdu;
  static ReceiverPdu receiver_pdu;
  static IntercomSignalPdu intercom_signal_pdu;
  static IntercomControlPdu intercom_control_pdu;
  static AggregateStatePdu aggregate_state_pdu;
  static IsGroupOfPdu is_group_of_pdu;
  static TransferControlRequestPdu transfer_ownership_pdu;

  switch (pdu_type) {
    case PduType::kEntityState:
      return &entity_state_pdu;
      break;
    case PduType::kFire:
      return &fire_pdu;
      break;
    case PduType::kDetonation:
      return &detonation_pdu;
      break;
    case PduType::kCollision:
      return &collision_pdu;
      break;
    case PduType::kServiceRequest:
      return &service_request_pdu;
      break;
    case PduType::kResupplyOffer:
      return &resupply_offer_pdu;
      break;
    case PduType::kResupplyReceived:
      return &resupply_received_pdu;
      break;
    case PduType::kResupplyCancel:
      return &resupply_cancel_pdu;
      break;
    case PduType::kRepairComplete:
      return &repair_complete_pdu;
      break;
    case PduType::kRepairResponse:
      return &repair_response_pdu;
      break;
    case PduType::kCreateEntity:
      return &create_entity_pdu;
      break;
    case PduType::kRemoveEntity:
      return &remove_entity_pdu;
      break;
    case PduType::kStartResume:
      return &start_resume_pdu;
      break;
    case PduType::kAcknowledge:
      return &acknowledge_pdu;
      break;
    case PduType::kActionRequest:
      return &action_request_pdu;
      break;
    case PduType::kActionResponse:
      return &action_response_pdu;
      break;
    case PduType::kDataQuery:
      return &data_query_pdu;
      break;
    case PduType::kSetData:
      return &set_data_pdu;
      break;
    case PduType::kEventReport:
      return &event_report_pdu;
      break;
    case PduType::kComment:
      return &comment_pdu;
      break;
    case PduType::kStopFreeze:
      return &stop_freeze_pdu;
      break;
    case PduType::kElectronicEmmisions:
      return &electromagnetic_emissions_pdu;
      break;
    case PduType::kDesignator:
      return &designator_pdu;
      break;
    case PduType::kTransmitter:
      return &transmitter_pdu;
      break;
    case PduType::kSignal:
      return &signal_pdu;
      break;
    case PduType::kReceiver:
      return &receiver_pdu;
      break;
    case PduType::kIntercomSignal:
      return &intercom_signal_pdu;
      break;
    case PduType::kIntercomControl:
      return &intercom_control_pdu;
      break;
    case PduType::kAggregateState:
      return &aggregate_state_pdu;
      break;
    case PduType::kIsGroupOf:
      return &is_group_of_pdu;
      break;
    case PduType::kTransferOwnership:
      return &transfer_ownership_pdu;
      break;
    default:
      break;
  }
  return nullptr;
}

}  // namespace dis
