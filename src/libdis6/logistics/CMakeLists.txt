set(logistics_hdr
  LogisticsFamilyPdu.h
  RepairCompletePdu.h
  RepairResponsePdu.h
  ResupplyCancelPdu.h
  ResupplyOfferPdu.h
  ResupplyReceivedPdu.h
  ServiceRequestPdu.h
  SupplyQuantity.h
)

set(logistics_src
  LogisticsFamilyPdu.cpp
  RepairCompletePdu.cpp
  RepairResponsePdu.cpp
  ResupplyCancelPdu.cpp
  ResupplyOfferPdu.cpp
  ResupplyReceivedPdu.cpp
  ServiceRequestPdu.cpp
  SupplyQuantity.cpp
)

target_sources(dis6 PRIVATE ${logistics_src})

install(FILES ${logistics_hdr}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/libdis6/logistics
)
