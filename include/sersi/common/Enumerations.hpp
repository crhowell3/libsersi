// Auto-generated from SISO-REF-010.xml
// Generator: xml2cpp.py

#pragma once
#include <cstdint>
#include <type_traits>

#pragma once

/*
 * Source: uid=3
 */
enum class DisProtocolVersion : uint8_t {
  OTHER = 0,                       // Other
  DIS_PDU_VERSION_1_0_MAY_92 = 1,  // DIS PDU version 1.0 (May 92)
  IEEE_1278_1993 = 2,              // IEEE 1278-1993
  DIS_APPLICATIONS_VERSION_2_0_THIRD_DRAFT_28_MAY_1993 =
      3,  // DIS Applications Version 2.0 - Third Draft (28 May 1993)
  DIS_APPLICATION_PROTOCOLS_VERSION_2_0_FOURTH_DRAFT_REVISED_16_MARCH_1994 =
      4,  // DIS Application Protocols Version 2.0 - Fourth Draft (Revised) (16
          // March 1994)
  IEEE_1278_1_1995 = 5,   // IEEE 1278.1-1995
  IEEE_1278_1A_1998 = 6,  // IEEE 1278.1A-1998
  IEEE_1278_1_2012 = 7,   // IEEE 1278.1-2012
};

/*
 * Source: uid=4
 */
enum class DisPduType : uint8_t {
  OTHER = 0,                      // Other
  ENTITY_STATE = 1,               // Entity State
  FIRE = 2,                       // Fire
  DETONATION = 3,                 // Detonation
  COLLISION = 4,                  // Collision
  SERVICE_REQUEST = 5,            // Service Request
  RESUPPLY_OFFER = 6,             // Resupply Offer
  RESUPPLY_RECEIVED = 7,          // Resupply Received
  RESUPPLY_CANCEL = 8,            // Resupply Cancel
  REPAIR_COMPLETE = 9,            // Repair Complete
  REPAIR_RESPONSE = 10,           // Repair Response
  CREATE_ENTITY = 11,             // Create Entity
  REMOVE_ENTITY = 12,             // Remove Entity
  START_RESUME = 13,              // Start/Resume
  STOP_FREEZE = 14,               // Stop/Freeze
  ACKNOWLEDGE = 15,               // Acknowledge
  ACTION_REQUEST = 16,            // Action Request
  ACTION_RESPONSE = 17,           // Action Response
  DATA_QUERY = 18,                // Data Query
  SET_DATA = 19,                  // Set Data
  DATA = 20,                      // Data
  EVENT_REPORT = 21,              // Event Report
  COMMENT = 22,                   // Comment
  ELECTROMAGNETIC_EMISSION = 23,  // Electromagnetic Emission
  DESIGNATOR = 24,                // Designator
  TRANSMITTER = 25,               // Transmitter
  SIGNAL = 26,                    // Signal
  RECEIVER = 27,                  // Receiver
  IFF = 28,                       // IFF
  UNDERWATER_ACOUSTIC = 29,       // Underwater Acoustic
  SUPPLEMENTAL_EMISSION_ENTITY_STATE =
      30,                              // Supplemental Emission / Entity State
  INTERCOM_SIGNAL = 31,                // Intercom Signal
  INTERCOM_CONTROL = 32,               // Intercom Control
  AGGREGATE_STATE = 33,                // Aggregate State
  ISGROUPOF = 34,                      // IsGroupOf
  TRANSFER_OWNERSHIP = 35,             // Transfer Ownership
  ISPARTOF = 36,                       // IsPartOf
  MINEFIELD_STATE = 37,                // Minefield State
  MINEFIELD_QUERY = 38,                // Minefield Query
  MINEFIELD_DATA = 39,                 // Minefield Data
  MINEFIELD_RESPONSE_NACK = 40,        // Minefield Response NACK
  ENVIRONMENTAL_PROCESS = 41,          // Environmental Process
  GRIDDED_DATA = 42,                   // Gridded Data
  POINT_OBJECT_STATE = 43,             // Point Object State
  LINEAR_OBJECT_STATE = 44,            // Linear Object State
  AREAL_OBJECT_STATE = 45,             // Areal Object State
  TSPI = 46,                           // TSPI
  APPEARANCE = 47,                     // Appearance
  ARTICULATED_PARTS = 48,              // Articulated Parts
  LE_FIRE = 49,                        // LE Fire
  LE_DETONATION = 50,                  // LE Detonation
  CREATE_ENTITY_R = 51,                // Create Entity-R
  REMOVE_ENTITY_R = 52,                // Remove Entity-R
  START_RESUME_R = 53,                 // Start/Resume-R
  STOP_FREEZE_R = 54,                  // Stop/Freeze-R
  ACKNOWLEDGE_R = 55,                  // Acknowledge-R
  ACTION_REQUEST_R = 56,               // Action Request-R
  ACTION_RESPONSE_R = 57,              // Action Response-R
  DATA_QUERY_R = 58,                   // Data Query-R
  SET_DATA_R = 59,                     // Set Data-R
  DATA_R = 60,                         // Data-R
  EVENT_REPORT_R = 61,                 // Event Report-R
  COMMENT_R = 62,                      // Comment-R
  RECORD_R = 63,                       // Record-R
  SET_RECORD_R = 64,                   // Set Record-R
  RECORD_QUERY_R = 65,                 // Record Query-R
  COLLISION_ELASTIC = 66,              // Collision-Elastic
  ENTITY_STATE_UPDATE = 67,            // Entity State Update
  DIRECTED_ENERGY_FIRE = 68,           // Directed Energy Fire
  ENTITY_DAMAGE_STATUS = 69,           // Entity Damage Status
  INFORMATION_OPERATIONS_ACTION = 70,  // Information Operations Action
  INFORMATION_OPERATIONS_REPORT = 71,  // Information Operations Report
  ATTRIBUTE = 72,                      // Attribute
};

/*
 * Source: uid=5
 */
enum class DisProtocolFamily : uint8_t {
  OTHER = 0,                              // Other
  ENTITY_INFORMATION_INTERACTION = 1,     // Entity Information/Interaction
  WARFARE = 2,                            // Warfare
  LOGISTICS = 3,                          // Logistics
  RADIO_COMMUNICATIONS = 4,               // Radio Communications
  SIMULATION_MANAGEMENT = 5,              // Simulation Management
  DISTRIBUTED_EMISSION_REGENERATION = 6,  // Distributed Emission Regeneration
  ENTITY_MANAGEMENT = 7,                  // Entity Management
  MINEFIELD = 8,                          // Minefield
  SYNTHETIC_ENVIRONMENT = 9,              // Synthetic Environment
  SIMULATION_MANAGEMENT_WITH_RELIABILITY =
      10,  // Simulation Management with Reliability
  LIVE_ENTITY_LE_INFORMATION_INTERACTION =
      11,                       // Live Entity (LE) Information/Interaction
  NON_REAL_TIME = 12,           // Non-Real-Time
  INFORMATION_OPERATIONS = 13,  // Information Operations
};

/*
 * Source: uid=6
 */
enum class ForceId : uint8_t {
  OTHER = 0,         // Other
  FRIENDLY = 1,      // Friendly
  OPPOSING = 2,      // Opposing
  NEUTRAL = 3,       // Neutral
  FRIENDLY_2 = 4,    // Friendly 2
  OPPOSING_2 = 5,    // Opposing 2
  NEUTRAL_2 = 6,     // Neutral 2
  FRIENDLY_3 = 7,    // Friendly 3
  OPPOSING_3 = 8,    // Opposing 3
  NEUTRAL_3 = 9,     // Neutral 3
  FRIENDLY_4 = 10,   // Friendly 4
  OPPOSING_4 = 11,   // Opposing 4
  NEUTRAL_4 = 12,    // Neutral 4
  FRIENDLY_5 = 13,   // Friendly 5
  OPPOSING_5 = 14,   // Opposing 5
  NEUTRAL_5 = 15,    // Neutral 5
  FRIENDLY_6 = 16,   // Friendly 6
  OPPOSING_6 = 17,   // Opposing 6
  NEUTRAL_6 = 18,    // Neutral 6
  FRIENDLY_7 = 19,   // Friendly 7
  OPPOSING_7 = 20,   // Opposing 7
  NEUTRAL_7 = 21,    // Neutral 7
  FRIENDLY_8 = 22,   // Friendly 8
  OPPOSING_8 = 23,   // Opposing 8
  NEUTRAL_8 = 24,    // Neutral 8
  FRIENDLY_9 = 25,   // Friendly 9
  OPPOSING_9 = 26,   // Opposing 9
  NEUTRAL_9 = 27,    // Neutral 9
  FRIENDLY_10 = 28,  // Friendly 10
  OPPOSING_10 = 29,  // Opposing 10
  NEUTRAL_10 = 30,   // Neutral 10
};

/*
 * Source: uid=7
 */
enum class EntityKind : uint8_t {
  OTHER = 0,             // Other
  PLATFORM = 1,          // Platform
  MUNITION = 2,          // Munition
  LIFE_FORM = 3,         // Life form
  ENVIRONMENTAL = 4,     // Environmental
  CULTURAL_FEATURE = 5,  // Cultural feature
  SUPPLY = 6,            // Supply
  RADIO = 7,             // Radio
  EXPENDABLE = 8,        // Expendable
  SENSOR_EMITTER = 9,    // Sensor/Emitter
};

/*
 * Source: uid=8
 */
enum class PlatformDomain : uint8_t {
  OTHER = 0,       // Other
  LAND = 1,        // Land
  AIR = 2,         // Air
  SURFACE = 3,     // Surface
  SUBSURFACE = 4,  // Subsurface
  SPACE = 5,       // Space
};

/*
 * Source: uid=9
 */
enum class PlatformLandCategory : uint8_t {
  OTHER = 0,                               // Other
  TANK = 1,                                // Tank
  ARMORED_FIGHTING_VEHICLE = 2,            // Armored Fighting Vehicle
  ARMORED_UTILITY_VEHICLE = 3,             // Armored Utility Vehicle
  SELF_PROPELLED_ARTILLERY = 4,            // Self-Propelled Artillery
  TOWED_ARTILLERY = 5,                     // Towed Artillery
  SMALL_WHEELED_UTILITY_VEHICLE = 6,       // Small Wheeled Utility Vehicle
  LARGE_WHEELED_UTILITY_VEHICLE = 7,       // Large Wheeled Utility Vehicle
  SMALL_TRACKED_UTILITY_VEHICLE = 8,       // Small Tracked Utility Vehicle
  LARGE_TRACKED_UTILITY_VEHICLE = 9,       // Large Tracked Utility Vehicle
  MORTAR = 10,                             // Mortar
  MINE_PLOW = 11,                          // Mine Plow
  MINE_RAKE = 12,                          // Mine Rake
  MINE_ROLLER = 13,                        // Mine Roller
  CARGO_TRAILER = 14,                      // Cargo Trailer
  FUEL_TRAILER = 15,                       // Fuel Trailer
  GENERATOR_TRAILER = 16,                  // Generator Trailer
  WATER_TRAILER = 17,                      // Water Trailer
  ENGINEER_EQUIPMENT = 18,                 // Engineer Equipment
  HEAVY_EQUIPMENT_TRANSPORT_TRAILER = 19,  // Heavy Equipment Transport Trailer
  MAINTENANCE_EQUIPMENT_TRAILER = 20,      // Maintenance Equipment Trailer
  LIMBER = 21,                             // Limber
  CHEMICAL_DECONTAMINATION_TRAILER = 22,   // Chemical Decontamination Trailer
  WARNING_SYSTEM = 23,                     // Warning System
  TRAIN_ENGINE = 24,                       // Train - Engine
  TRAIN_CAR = 25,                          // Train - Car
  TRAIN_CABOOSE = 26,                      // Train - Caboose
  CIVILIAN_VEHICLE = 27,                   // Civilian Vehicle [DEPRECATED]
  AIR_DEFENSE_MISSILE_DEFENSE_UNIT_EQUIPMENT =
      28,  // Air Defense / Missile Defense Unit Equipment
  COMMAND_CONTROL_COMMUNICATIONS_AND_INTELLIGENCE_C3I_SYSTEM =
      29,  // Command, Control, Communications, and Intelligence (C3I) System
  OPERATIONS_FACILITY = 30,       // Operations Facility
  INTELLIGENCE_FACILITY = 31,     // Intelligence Facility
  SURVEILLANCE_FACILITY = 32,     // Surveillance Facility
  COMMUNICATIONS_FACILITY = 33,   // Communications Facility
  COMMAND_FACILITY = 34,          // Command Facility
  C4I_FACILITY = 35,              // C4I Facility
  CONTROL_FACILITY = 36,          // Control Facility
  FIRE_CONTROL_FACILITY = 37,     // Fire Control Facility
  MISSILE_DEFENSE_FACILITY = 38,  // Missile Defense Facility
  FIELD_COMMAND_POST = 39,        // Field Command Post
  OBSERVATION_POST = 40,          // Observation Post
  MINE_FLAIL = 41,                // Mine Flail
  UNMANNED = 50,                  // Unmanned
  MOTORCYCLE = 80,                // Motorcycle
  CAR = 81,                       // Car
  BUS = 82,                       // Bus
  SINGLE_UNIT_CARGO_TRUCK = 83,   // Single Unit Cargo Truck
  SINGLE_UNIT_UTILITY_EMERGENCY_TRUCK =
      84,                          // Single Unit Utility/Emergency Truck
  MULTIPLE_UNIT_CARGO_TRUCK = 85,  // Multiple Unit Cargo Truck
  MULTIPLE_UNIT_UTILITY_EMERGENCY_TRUCK =
      86,                               // Multiple Unit Utility/Emergency Truck
  CONSTRUCTION_SPECIALTY_VEHICLE = 87,  // Construction Specialty Vehicle
  FARM_SPECIALTY_VEHICLE = 88,          // Farm Specialty Vehicle
  TRAILER = 89,                         // Trailer
  RECREATIONAL = 90,                    // Recreational
  NON_MOTORIZED = 91,                   // Non-motorized
  TRAINS = 92,                          // Trains
  UTILITY_EMERGENCY_CAR = 93,           // Utility/Emergency Car
};

/*
 * Source: uid=10
 */
enum class PlatformAirCategory : uint8_t {
  OTHER = 0,                   // Other
  FIGHTER_AIR_DEFENSE = 1,     // Fighter/Air Defense
  ATTACK_STRIKE = 2,           // Attack/Strike
  BOMBER = 3,                  // Bomber
  CARGO_TANKER = 4,            // Cargo/Tanker
  ASW_PATROL_OBSERVATION = 5,  // ASW/Patrol/Observation
  ELECTRONIC_WARFARE_EW = 6,   // Electronic Warfare (EW)
  RECONNAISSANCE = 7,          // Reconnaissance
  SURVEILLANCE_C2_AIRBORNE_EARLY_WARNING =
      8,                    // Surveillance/C2 (Airborne Early Warning)
  AIR_SEA_RESCUE_ASR = 9,   // Air-Sea Rescue (ASR)
  ATTACK_HELICOPTER = 20,   // Attack Helicopter
  UTILITY_HELICOPTER = 21,  // Utility Helicopter
  ANTI_SUBMARINE_WARFARE_PATROL_HELICOPTER =
      22,                       // Anti-Submarine Warfare/Patrol Helicopter
  CARGO_HELICOPTER = 23,        // Cargo Helicopter
  OBSERVATION_HELICOPTER = 24,  // Observation Helicopter
  SPECIAL_OPERATIONS_HELICOPTER = 25,  // Special Operations Helicopter
  TRAINING_HELICOPTER = 26,            // Training Helicopter
  TRAINER = 40,                        // Trainer
  UNMANNED = 50,                       // Unmanned
  NON_COMBATANT_COMMERCIAL_AIRCRAFT =
      57,  // Non-Combatant Commercial Aircraft [DEPRECATED]
  CIVILIAN_ULTRALIGHT_AIRCRAFT_NON_RIGID_WING =
      80,  // Civilian Ultralight Aircraft, Non-rigid Wing
  CIVILIAN_ULTRALIGHT_AIRCRAFT_RIGID_WING =
      81,  // Civilian Ultralight Aircraft, Rigid Wing
  CIVILIAN_FIXED_WING_AIRCRAFT_GLIDER =
      83,  // Civilian Fixed Wing Aircraft, Glider
  CIVILIAN_FIXED_WING_AIRCRAFT_LIGHT_SPORT_UP_TO_1320_LBS_600_KG =
      84,  // Civilian Fixed Wing Aircraft, Light Sport (up to 1320 lbs / 600
           // kg)
  CIVILIAN_FIXED_WING_AIRCRAFT_SMALL_UP_TO_12_500_LBS_5_670_KG =
      85,  // Civilian Fixed Wing Aircraft, Small (up to 12,500 lbs / 5,670 kg)
  CIVILIAN_FIXED_WING_AIRCRAFT_MEDIUM_UP_TO_41_000_LBS_18_597_KG =
      86,  // Civilian Fixed Wing Aircraft, Medium (up to 41,000 lbs / 18,597
           // kg)
  CIVILIAN_FIXED_WING_AIRCRAFT_LARGE_UP_TO_255_000_LBS_115_666_KG =
      87,  // Civilian Fixed Wing Aircraft, Large (up to 255,000 lbs / 115,666
           // kg)
  CIVILIAN_FIXED_WING_AIRCRAFT_HEAVY_ABOVE_255_000_LBS_115_666_KG =
      88,  // Civilian Fixed Wing Aircraft, Heavy (above 255,000 lbs / 115,666
           // kg)
  CIVILIAN_HELICOPTER_SMALL_UP_TO_7_000_LBS_3_175_KG =
      90,  // Civilian Helicopter, Small (up to 7,000 lbs / 3,175 kg)
  CIVILIAN_HELICOPTER_MEDIUM_UP_TO_20_000_LBS_9_072_KG =
      91,  // Civilian Helicopter, Medium (up to 20,000 lbs / 9,072 kg)
  CIVILIAN_HELICOPTER_LARGE_ABOVE_20_000_LBS_9_072_KG =
      92,  // Civilian Helicopter, Large (above 20,000 lbs / 9,072 kg)
  CIVILIAN_AUTOGYRO = 93,  // Civilian Autogyro
  CIVILIAN_LIGHTER_THAN_AIR_BALLOON =
      100,  // Civilian Lighter than Air, Balloon
  CIVILIAN_LIGHTER_THAN_AIR_AIRSHIP =
      101,  // Civilian Lighter than Air, Airship
};

/*
 * Source: uid=11
 */
enum class PlatformSurfaceCategory : uint8_t {
  OTHER = 0,                           // Other
  CARRIER = 1,                         // Carrier
  COMMAND_SHIP_CRUISER = 2,            // Command Ship/Cruiser
  GUIDED_MISSILE_CRUISER = 3,          // Guided Missile Cruiser
  GUIDED_MISSILE_DESTROYER_DDG = 4,    // Guided Missile Destroyer (DDG)
  DESTROYER_DD = 5,                    // Destroyer (DD)
  GUIDED_MISSILE_FRIGATE_FFG = 6,      // Guided Missile Frigate (FFG)
  LIGHT_PATROL_CRAFT = 7,              // Light/Patrol Craft
  MINE_COUNTERMEASURE_SHIP_CRAFT = 8,  // Mine Countermeasure Ship/Craft
  DOCK_LANDING_SHIP = 9,               // Dock Landing Ship
  TANK_LANDING_SHIP = 10,              // Tank Landing Ship
  LANDING_CRAFT = 11,                  // Landing Craft
  LIGHT_CARRIER = 12,                  // Light Carrier
  CRUISER_HELICOPTER_CARRIER = 13,     // Cruiser/Helicopter Carrier
  HYDROFOIL = 14,                      // Hydrofoil
  AIR_CUSHION_SURFACE_EFFECT = 15,     // Air Cushion/Surface Effect
  AUXILIARY = 16,                      // Auxiliary
  AUXILIARY_MERCHANT_MARINE = 17,      // Auxiliary, Merchant Marine
  UTILITY = 18,                        // Utility
  UNMANNED_SURFACE_VEHICLE_USV = 19,   // Unmanned Surface Vehicle (USV)
  LITTORAL_COMBAT_SHIPS_LCS = 20,      // Littoral Combat Ships (LCS)
  SURVEILLANCE_SHIP = 21,              // Surveillance Ship
  FRIGATE_INCLUDING_CORVETTE = 50,     // Frigate (including Corvette)
  BATTLESHIP = 51,                     // Battleship
  HEAVY_CRUISER = 52,                  // Heavy Cruiser
  DESTROYER_TENDER = 53,               // Destroyer Tender
  AMPHIBIOUS_ASSAULT_SHIP = 54,        // Amphibious Assault Ship
  AMPHIBIOUS_CARGO_SHIP = 55,          // Amphibious Cargo Ship
  AMPHIBIOUS_TRANSPORT_DOCK = 56,      // Amphibious Transport Dock
  AMMUNITION_SHIP = 57,                // Ammunition Ship
  COMBAT_STORES_SHIP = 58,             // Combat Stores Ship
  SURVEILLANCE_TOWED_ARRAY_SONAR_SYSTEM_SURTASS =
      59,  // Surveillance Towed Array Sonar System (SURTASS)
  FAST_COMBAT_SUPPORT_SHIP = 60,  // Fast Combat Support Ship
  NON_COMBATANT_SHIP = 61,        // Non-Combatant Ship [DEPRECATED]
  COAST_GUARD_CUTTERS = 62,       // Coast Guard Cutters
  COAST_GUARD_BOATS = 63,         // Coast Guard Boats
  FAST_ATTACK_CRAFT = 64,         // Fast Attack Craft
  INFLATABLE_BOAT = 65,           // Inflatable Boat
  PASSENGER_VESSEL_GROUP_1_MERCHANT =
      80,                                // Passenger Vessel (Group 1 Merchant)
  DRY_CARGO_SHIP_GROUP_2_MERCHANT = 81,  // Dry Cargo Ship (Group 2 Merchant)
  TANKER_GROUP_3_MERCHANT = 82,          // Tanker (Group 3 Merchant)
  OFFSHORE_SUPPORT_VESSEL = 83,          // Offshore Support Vessel
  PRIVATE_MOTORBOAT = 84,                // Private Motorboat
  PRIVATE_SAILBOAT = 85,                 // Private Sailboat
  FISHING_VESSEL = 86,                   // Fishing Vessel
  OTHER_VESSELS = 87,                    // Other Vessels
  SEARCH_AND_RESCUE_VESSELS = 100,       // Search and Rescue Vessels
  LIFE_SAVING_EQUIPMENT = 101,           // Life-Saving Equipment
};

/*
 * Source: uid=12
 */
enum class PlatformSubsurfaceCategory : uint8_t {
  OTHER = 0,                            // Other
  SSBN_NUCLEAR_BALLISTIC_MISSILE = 1,   // SSBN (Nuclear Ballistic Missile)
  SSGN_NUCLEAR_GUIDED_MISSILE = 2,      // SSGN (Nuclear Guided Missile)
  SSN_NUCLEAR_ATTACK_TORPEDO = 3,       // SSN (Nuclear Attack - Torpedo)
  SSG_CONVENTIONAL_GUIDED_MISSILE = 4,  // SSG (Conventional Guided Missile)
  SS_CONVENTIONAL_ATTACK_TORPEDO_PATROL =
      5,                           // SS (Conventional Attack - Torpedo, Patrol)
  SSAN_NUCLEAR_AUXILIARY = 6,      // SSAN (Nuclear Auxiliary)
  SSA_CONVENTIONAL_AUXILIARY = 7,  // SSA (Conventional Auxiliary)
  UNMANNED_UNDERWATER_VEHICLE_UUV = 8,  // Unmanned Underwater Vehicle (UUV)
  SSB_SUBMARINE_BALLISTIC_BALLISTIC_MISSILE_SUBMARINE =
      9,  // SSB (Submarine Ballistic, Ballistic Missile Submarine)
  SSC_COASTAL_SUBMARINE_OVER_150_TONS =
      10,  // SSC (Coastal Submarine, over 150 tons)
  SSP_ATTACK_SUBMARINE_DIESEL_AIR_INDEPENDENT_PROPULSION =
      11,  // SSP (Attack Submarine - Diesel Air-Independent Propulsion)
  SSM_MIDGET_SUBMARINE_UNDER_150_TONS =
      12,                              // SSM (Midget Submarine, under 150 tons)
  SSNR_SPECIAL_ATTACK_SUBMARINE = 13,  // SSNR (Special Attack Submarine)
  SST_TRAINING_SUBMARINE = 14,         // SST (Training Submarine)
  AGSS_AUXILIARY_SUBMARINE = 15,       // AGSS (Auxiliary Submarine)
  SEMI_SUBMERSIBLE_BOATS = 16,         // Semi-Submersible Boats
  CIVILIAN_SUBMARINES = 80,            // Civilian Submarines
  CIVILIAN_SUBMERSIBLES = 81,          // Civilian Submersibles
  CIVILIAN_SEMI_SUBMERSIBLE_BOATS = 82,  // Civilian Semi-Submersible Boats
};

/*
 * Source: uid=13
 */
enum class PlatformSpaceCategory : uint8_t {
  OTHER = 0,              // Other
  MANNED_SPACECRAFT = 1,  // Manned Spacecraft
  UNMANNED = 2,           // Unmanned [DEPRECATED]
  BOOSTER = 3,            // Booster
  DEBRIS = 10,            // Debris
  SATELLITE_UNKNOWN_UNSPECIFIED_MISSION =
      11,                        // Satellite - Unknown/Unspecified Mission
  SATELLITE_COMMUNICATION = 12,  // Satellite - Communication
  SATELLITE_NAVIGATION = 13,     // Satellite - Navigation
  SATELLITE_SCIENCE_EXPERIMENTAL_DEMONSTRATION =
      14,  // Satellite - Science/Experimental/Demonstration
  SATELLITE_INERT_TARGET_REFLECTOR_CALIBRATION =
      15,  // Satellite - Inert (Target/Reflector/Calibration)
  SATELLITE_EARTH_OBSERVATION = 16,   // Satellite - Earth Observation
  SATELLITE_SPACE_SURVEILLANCE = 17,  // Satellite - Space Surveillance
  SATELLITE_ASTRONOMY = 18,           // Satellite - Astronomy
};

/*
 * Source: uid=14
 */
enum class MunitionDomain : uint8_t {
  OTHER = 0,                       // Other
  ANTI_AIR = 1,                    // Anti-Air
  ANTI_ARMOR = 2,                  // Anti-Armor
  ANTI_GUIDED_WEAPON = 3,          // Anti-Guided Weapon
  ANTI_RADAR = 4,                  // Anti-Radar
  ANTI_SATELLITE = 5,              // Anti-Satellite
  ANTI_SHIP = 6,                   // Anti-Ship
  ANTI_SUBMARINE = 7,              // Anti-Submarine
  ANTI_PERSONNEL = 8,              // Anti-Personnel
  BATTLEFIELD_SUPPORT = 9,         // Battlefield Support
  STRATEGIC = 10,                  // Strategic
  TACTICAL = 11,                   // Tactical
  DIRECTED_ENERGY_DE_WEAPON = 12,  // Directed Energy (DE) Weapon
};

/*
 * Source: uid=15
 */
enum class MunitionCategory : uint8_t {
  OTHER = 0,      // Other
  GUIDED = 1,     // Guided
  BALLISTIC = 2,  // Ballistic
  FIXED = 3,      // Fixed
};

/*
 * Source: uid=16
 */
enum class LifeFormsSubcategoryUSWeapons : uint8_t {
  ASSAULT_MACHINE_PISTOL_KF_AMP = 1,  // Assault machine pistol, KF-AMP
  AUTOMATIC_MODEL_1911A1_45 = 2,      // Automatic model 1911A1 .45
  COMBAT_MASTER_MARK_VI_45_DETRONICS =
      3,                              // Combat Master Mark VI .45, Detronics
  DE_COCKER_KP90DC_45 = 4,            // De-cocker KP90DC .45
  DE_COCKER_KP91DC_40 = 5,            // De-cocker KP91DC .40
  GENERAL_OFFICER_S_MODEL_15_45 = 6,  // General officer's Model 15 .45
  NOVA_9_MM_LAFRANCE = 7,             // Nova 9-mm, LaFrance
  PERSONAL_DEFENSE_WEAPON_MP5K_PDW_9_MM =
      8,                          // Personal Defense Weapon MP5K-PDW 9-mm
  SILENCED_COLT_45_LAFRANCE = 9,  // Silenced Colt .45, LaFrance
  _5900_SERIES_9_MM_SMITH_WESSON_S_W =
      10,   // 5900-series 9-mm, Smith & Wesson (S&W)
  M9 = 11,  // M9
  MODEL_1911A1_SPRINGFIELD_ARMORY = 12,    // Model 1911A1, Springfield Armory
  MODEL_2000_9_MM = 13,                    // Model 2000 9-mm
  P_9_9_MM_SPRINGFIELD_ARMORY = 14,        // P-9 9-mm, Springfield Armory
  P_12_9_MM = 15,                          // P-12 9-mm
  P_85_MARK_II_9_MM_RUGER = 16,            // P-85 Mark II 9-mm, Ruger
  ADVANCED_COMBAT_RIFLE_5_56_MM_AAI = 17,  // Advanced Combat Rifle 5.56-mm, AAI
  COMMANDO_ASSAULT_RIFLE_MODEL_733_5_56_MM_COLT =
      18,  // Commando assault rifle, Model 733 5.56-mm, Colt
  INFANTRY_RIFLE_MINI_14_20_GB_5_56_MM_RUGER =
      19,                      // Infantry rifle, Mini-14/20 GB 5.56-mm, Ruger
  MINI_14_5_56_MM_RUGER = 20,  // Mini-14 5.56-mm, Ruger
  MINI_THIRTY_7_62_MM_RUGER = 21,  // Mini Thirty 7.62-mm, Ruger
  SEMI_AUTOMATIC_MODEL_82A2_50_BARRETT =
      22,  // Semi-automatic model 82A2 .50, Barrett
  SNIPER_WEAPON_SYSTEM_M24_7_62_MM = 23,  // Sniper Weapon System M24 7.62-mm
  SNIPING_RIFLE_M21_SPRINGFIELD_ARMORY =
      24,                            // Sniping rifle M21, Springfield Armory
  SNIPING_RIFLE_M40A1_7_62_MM = 25,  // Sniping rifle M40A1 7.62-mm
  SNIPING_RIFLE_M600_7_62_MM = 26,   // Sniping rifle M600 7.62-mm
  AR_15_M16_5_56_MM = 27,            // AR-15 (M16) 5.56-mm
  M1_30 = 28,                        // M1 .30
  M14_7_62_MM_NATO = 29,             // M14 7.62-mm, NATO
  M14_M1A_M1A1_A1_SPRINGFIELD_ARMORY =
      30,                            // M14 (M1A, M1A1-A1), Springfield Armory
  M14K_ASSAULT_RIFLE_LAFRANCE = 31,  // M14K assault rifle, LaFrance
  M16A2_ASSAULT_RIFLE_5_56_MM_COLT = 32,  // M16A2 assault rifle 5.56-mm, Colt
  M21_7_62_MM_U_S = 33,                   // M21 7.62-mm, U.S.
  M77_MARK_II_5_56_MM_RUGER = 34,         // M77 Mark II 5.56-mm, Ruger
  M77V_7_62_MM_RUGER = 35,                // M77V 7.62-mm, Ruger
  S_16_7_62_X_36_MM_GRENDEL = 36,         // S-16 7.62 x 36-mm, Grendel
  SAR_8_7_62_MM = 37,                     // SAR-8 7.62-mm
  SAR_4800_7_62_MM = 38,                  // SAR-4800 7.62-mm
  ASSAULT_CARBINE_M16K_LAFRANCE = 39,     // Assault carbine M16K, LaFrance
  M1_30 = 40,                             // M1 .30
  M4_MODEL_720_5_56_MM_COLT = 41,         // M4 (Model 720) 5.56-mm, Colt
  M_900_9_MM_CALICO = 42,                 // M-900 9-mm, Calico
  AC_556F_5_56_MM_RUGER = 43,             // AC-556F 5.56-mm, Ruger
  M3_45 = 44,                             // M3 .45
  M11_COBRAY = 45,                        // M11, Cobray
  M951_9_MM_CALICO = 46,                  // M951 9-mm, Calico
  MP5_10_10_MM = 47,                      // MP5/10 10-mm
  _9_MM_COLT = 48,                        // 9-mm, Colt
  INGRAM = 49,                            // Ingram
  EXTERNALLY_POWERED_EPG_7_62_MM_ARES =
      50,                            // Externally powered (EPG) 7.62-mm, Ares
  GECAL_50 = 51,                     // GECAL 50
  GENERAL_PURPOSE_M60_7_62_MM = 52,  // General purpose M60 7.62-mm
  HEAVY_M2HB_QCB_50_RAMO = 53,       // Heavy M2HB-QCB .50, RAMO
  LIGHT_ASSAULT_M60E3_ENHANCED_7_62_MM =
      54,                         // Light assault M60E3 (Enhanced) 7.62-mm
  LIGHT_M16A2_5_56_MM_COLT = 55,  // Light M16A2 5.56-mm, Colt
  LIGHT_5_56_MM_ARES = 56,        // Light 5.56-mm, Ares
  LIGHTWEIGHT_M2_50_RAMO = 57,    // Lightweight M2 .50, RAMO
  LIGHTWEIGHT_ASSAULT_M60E3_7_62_MM = 58,  // Lightweight assault M60E3 7.62-mm
  MINIGUN_M134_7_62_MM_GENERAL_ELECTRIC =
      59,                           // Minigun M134 7.62-mm, General Electric
  MG_SYSTEM_MK19_MOD_3_40_MM = 60,  // MG system MK19 Mod 3, 40-mm
  MG_SYSTEM_OR_KIT_M2HB_QCB_50_SACO_DEFENSE =
      61,  // MG system (or kit) M2HB QCB .50, Saco Defense
  M1919A4_30_CAL_BROWNING = 62,         // M1919A4 .30-cal, Browning
  _50_CAL_BROWNING = 63,                // .50-cal, Browning
  COLORED_SMOKE_HAND_GRENADE_M18 = 64,  // Colored-smoke hand grenade M18
  COLORED_SMOKE_GRENADES_FEDERAL_LABORATORIES =
      65,  // Colored-smoke grenades, Federal Laboratories
  INFRARED_SMOKE_GRENADE_M76 = 66,   // Infrared smoke grenade M76
  SMOKE_HAND_GRENADE_AN_M8_HC = 67,  // Smoke hand grenade AN-M8 HC
  DELAY_FRAGMENTATION_HAND_GRENADE_M61 =
      68,  // Delay fragmentation hand grenade M61
  DELAY_FRAGMENTATION_HAND_GRENADE_M67 =
      69,  // Delay fragmentation hand grenade M67
  IMPACT_FRAGMENTATION_HAND_GRENADE_M57 =
      70,  // Impact fragmentation hand grenade M57
  IMPACT_FRAGMENTATION_HAND_GRENADE_M68 =
      71,  // Impact fragmentation hand grenade M68
  INCENDIARY_HAND_GRENADE_AN_M14_TH3 =
      72,                      // Incendiary hand grenade AN-M14 TH3
  LAUNCHER_I_M203_40_MM = 73,  // Launcher I-M203 40-mm
  LAUNCHER_M79_40_MM = 74,     // Launcher M79 40-mm
  MULTIPLE_GRENADE_LAUNCHER_MM_1_40_MM =
      75,  // Multiple grenade launcher MM-1 40-mm
  MULTI_SHOT_PORTABLE_FLAME_WEAPON_M202A2_66_MM =
      76,                  // Multi-shot portable flame weapon M202A2 66-mm
  PORTABLE_ABC_M9_7 = 77,  // Portable ABC-M9-7
  PORTABLE_M2A1_7 = 78,    // Portable M2A1-7
  PORTABLE_M9E1_7 = 79,    // Portable M9E1-7
  DRAGON_MEDIUM_ANTI_ARMOR_MISSILE_M47_FGM_77A =
      80,               // Dragon medium Anti-Armor missile, M47, FGM-77A
  JAVELIN_AAWS_M = 81,  // Javelin AAWS-M
  LIGHT_ANTI_TANK_WEAPON_M72_LAW_II =
      82,                               // Light Anti-Tank Weapon M72 (LAW II)
  REDEYE_FIM_43_GENERAL_DYNAMICS = 83,  // Redeye, FIM-43, General Dynamics
  SABER_DUAL_PURPOSE_MISSILE_SYSTEM = 84,  // Saber dual-purpose missile system
  STINGER_FIM_92_GENERAL_DYNAMICS = 85,    // Stinger, FIM-92, General Dynamics
  TOW_HEAVY_ANTI_TANK_WEAPON = 86,         // TOW heavy Anti-Tank weapon
  BEAR_TRAP_AP_DEVICE_PANCOR = 87,         // Bear Trap AP device, Pancor
  CHAIN_GUN_AUTOMATIC_WEAPON_EX_34_7_62_MM =
      88,  // Chain Gun automatic weapon EX-34 7.62-mm
  CLOSE_ASSAULT_WEAPON_SYSTEM_CAWS_AAI =
      89,                           // Close Assault Weapon System (CAWS), AAI
  CAWS_OLIN_HECKLER_AND_KOCH = 90,  // CAWS, Olin/Heckler and Koch
  CROSSFIRE_SAM_MODEL_88 = 91,      // Crossfire SAM Model 88
  DRAGON_AND_M16 = 92,              // Dragon and M16
  FIRING_PORT_WEAPON_M231_5_56_MM_COLT =
      93,  // Firing port weapon M231, 5.56-mm, Colt
  FOXHOLE_DIGGER_EXPLOSIVE_KIT_EXFODA =
      94,  // Foxhole Digger Explosive Kit (EXFODA)
  INFANTRY_SUPPORT_WEAPON_ASP_30_RM_30_MM =
      95,                          // Infantry Support Weapon ASP-30 {RM} 30-mm
  JACKHAMMER_MK_3_A2_PANCOR = 96,  // Jackhammer Mk 3-A2, Pancor
  LIGHT_ANTI_ARMOR_WEAPON_M136_AT4 = 97,  // Light Anti-Armor weapon M136 (AT4)
  M26A2 = 98,                             // M26A2
  MASTER_KEY_S = 99,                      // Master Key S
  MINIGUN_5_56_MM = 100,                  // Minigun 5.56-mm
  MULTIPURPOSE_INDIVIDUAL_MUNITION_MPIM_MARQUARDT =
      101,  // Multipurpose Individual Munition (MPIM), Marquardt
  MULTIPURPOSE_WEAPON_AT8 = 102,  // Multipurpose weapon AT8
  RECOILLESS_RIFLE_M40_M40A2_AND_M40A4_106_MM =
      103,  // Recoilless rifle M40, M40A2, and M40A4; 106-mm
  RECOILLESS_RIFLE_M67_90_MM = 104,  // Recoilless rifle M67, 90-mm
  REVOLVER_SP_101 = 105,             // Revolver, SP 101
  REVOLVER_SUPER_REDHAWK_44_MAGNUM_RUGER =
      106,  // Revolver, Super Redhawk .44 magnum, Ruger
  RAW_ROCKET_140_MM_BRUNSWICK = 107,  // RAW rocket, 140-mm, Brunswick
  RIFLE_LAUNCHER_ANTI_ARMOR_MUNITION_RAAM_OLIN =
      108,  // Rifle-launcher Anti-Armor Munition (RAAM), Olin
  ROCKET_LAUNCHER_M_20_3_5_IN = 109,  // Rocket launcher M-20 3.5-in
  ROCKET_LAUNCHER_ENHANCED_M72_E_SERIES_HEAT_66_MM =
      110,  // Rocket launcher, Enhanced M72 "E series" HEAT, 66-mm
  SELECTIVE_FIRE_WEAPON_AC_556_5_56_MM_RUGER =
      111,  // Selective fire weapon AC-556 5.56-mm, Ruger
  SELECTIVE_FIRE_WEAPON_AC_556F_5_56_MM_RUGER =
      112,  // Selective fire weapon AC-556F 5.56-mm, Ruger
  SHOTGUN_M870_MK_1_U_S_MARINE_CORPS_REMINGTON =
      113,  // Shotgun M870 Mk 1 (U.S. Marine Corps), Remington
  SMAW_MK_193_83_MM_MCDONNELL_DOUGLAS =
      114,                       // SMAW Mk 193, 83-mm, McDonnell-Douglas
  SMAW_D_DISPOSABLE_SMAW = 115,  // SMAW-D: Disposable SMAW
  SQUAD_AUTOMATIC_WEAPON_SAW_M249_5_56_MM =
      116,  // Squad Automatic Weapon (SAW) M249 5.56-mm
  TACTICAL_SUPPORT_WEAPON_50_12_50_CAL_PEREGRINE =
      117,  // Tactical Support Weapon 50/12, .50-cal, Peregrine
  TELESCOPED_AMMUNITION_REVOLVER_GUN_TARG_50_CAL_ARES =
      118,  // Telescoped Ammunition Revolver Gun (TARG) .50-cal, Ares
  ULTIMATE_OVER_UNDER_COMBINATION_CIENER =
      119,                       // Ultimate over-under combination, Ciener
  M18A1_CLAYMORE_MINE = 120,     // M18A1 Claymore mine
  MORTAR_81_MM = 121,            // Mortar 81-mm
  MACHINEGUN_M240_7_62MM = 134,  // Machinegun M240 7.62mm
};

/*
 * Source: uid=17
 */
enum class LifeFormsSubcategoryCISWeapons : uint8_t {
  AUTOMATIC_APS_9_MM_STECHKIN = 201,       // Automatic (APS) 9-mm, Stechkin
  PSM_5_45_MM = 202,                       // PSM 5.45-mm
  SELF_LOADING_PM_9_MM_MAKAROV = 203,      // Self-loading (PM) 9-mm, Makarov
  TT_33_7_62_MM_TOKAREV = 204,             // TT-33 7.62-mm, Tokarev
  ASSAULT_RIFLE_AK_AND_AKM_7_62_MM = 205,  // Assault rifle AK and AKM, 7.62-mm
  ASSAULT_RIFLE_AK_74_AND_AKS_74_5_45_MM =
      206,  // Assault rifle AK-74 and AKS-74, 5.45-mm
  SELF_LOADING_RIFLE_SKS_7_62_MM_SIMONOV =
      207,  // Self-loading rifle (SKS), 7.62-mm, Simonov
  SNIPER_RIFLE_SVD_7_62_MM_DRAGUNOV =
      208,                           // Sniper rifle SVD 7.62-mm, Dragunov
  AKSU_74_5_45_MM = 209,             // AKSU-74 5.45-mm
  PPS_43_7_62_MM = 210,              // PPS-43 7.62-mm
  PPSH_41_7_62_MM = 211,             // PPSh-41 7.62-mm
  GENERAL_PURPOSE_PK_7_62_MM = 212,  // General purpose PK 7.62-mm
  HEAVY_DSHK_38_AND_MODEL_38_46_12_7_MM_DEGTYAREV =
      213,                  // Heavy DShK-38 and Model 38/46 12.7-mm, Degtyarev
  HEAVY_NSV_12_7_MM = 214,  // Heavy NSV 12.7-mm
  LIGHT_RPD_7_62_MM = 215,  // Light RPD 7.62-mm
  LIGHT_RPK_7_62_MM = 216,  // Light RPK 7.62-mm
  LIGHT_RPK_74_5_45_MM = 217,            // Light RPK-74 5.45-mm
  HAND_GRENADE_M75 = 218,                // Hand grenade M75
  HAND_GRENADE_RGD_5 = 219,              // Hand grenade RGD-5
  AP_HAND_GRENADE_F1 = 220,              // AP hand grenade F1
  AT_HAND_GRENADE_RKG_3 = 221,           // AT hand grenade RKG-3
  AT_HAND_GRENADE_RKG_3M = 222,          // AT hand grenade RKG-3M
  AT_HAND_GRENADE_RKG_3T = 223,          // AT hand grenade RKG-3T
  FRAGMENTATION_HAND_GRENADE_RGN = 224,  // Fragmentation hand grenade RGN
  FRAGMENTATION_HAND_GRENADE_RGO = 225,  // Fragmentation hand grenade RGO
  SMOKE_HAND_GRENADE_RDG_1 = 226,        // Smoke hand grenade RDG-1
  PLAMYA_LAUNCHER_30_MM_AGS_17 = 227,    // Plamya launcher, 30-mm AGS-17
  RIFLE_MOUNTED_LAUNCHER_BG_15_40_MM =
      228,                    // Rifle-mounted launcher, BG-15 40-mm
  LPO_50 = 229,               // LPO-50
  ROKS_3 = 230,               // ROKS-3
  CART_MOUNTED_TPO_50 = 231,  // Cart-mounted TPO-50
  GIMLET_SA_16 = 232,         // Gimlet SA-16
  GRAIL_SA_7 = 233,           // Grail SA-7
  GREMLIN_SA_14 = 234,        // Gremlin SA-14
  SAGGER_AT_3_MCLOS = 235,    // Sagger AT-3 (MCLOS)
  SAXHORN_AT_7 = 236,         // Saxhorn AT-7
  SPIGOT_A_B_AT_14 = 237,     // Spigot A/B AT-14
  SA_18 = 238,                // SA-18
  SA_19 = 239,                // SA-19
  GRAD_1P_MANPORTABLE_TRIPOD_ROCKET_LAUNCHER_122_MM_FOR_SPESNATZ_AND_OTHER_SPECIALISTS_AKA_9P132 =
      240,  // Grad-1P manportable tripod rocket launcher, 122-mm (for Spesnatz
            // and other specialists; aka 9P132)
  LIGHT_ANTI_ARMOR_WEAPON_RPG_18 = 241,   // Light Anti-Armor weapon RPG-18
  LIGHT_ANTI_TANK_WEAPON_RPG_22 = 242,    // Light Anti-Tank weapon RPG-22
  MG_RPG = 243,                           // MG & RPG
  PORTABLE_ROCKET_LAUNCHER_RPG_16 = 244,  // Portable rocket launcher RPG-16
  RECOILLESS_GUN_73_MM_SPG_9 = 245,       // Recoilless gun 73-mm SPG-9
  VAT_ROCKET_LAUNCHER_RPG_7 = 246,        // VAT rocket launcher RPG-7
  MON_50_ANTI_PERSONNEL_MINE = 248,       // Mon-50 Anti-Personnel mine
  RPG_29_VAMPIR = 249,                    // RPG-29 Vampir
  LASER_DESIGNATOR = 250,                 // Laser Designator
  AT_4_SPIGOT = 251,                      // AT-4 Spigot
  SA_24_IGLA_S = 252,                     // SA-24 Igla-S
  TYPE_69_RPG = 253,                      // Type 69 RPG
};

/*
 * Source: uid=18
 */
enum class LifeFormsSubcategoryUKWeapons : uint8_t {
  LAW_80 = 1,                              // LAW 80
  BLOWPIPE = 2,                            // Blowpipe
  JAVELIN = 3,                             // Javelin
  _51_MM_MORTAR = 4,                       // 51-mm mortar
  SLR_7_62_MM_RIFLE = 5,                   // SLR 7.62-mm rifle
  STERLING_9_MM_SUBMACHINE_GUN = 6,        // Sterling 9-mm submachine gun
  L7A2_GENERAL_PURPOSE_MG = 7,             // L7A2 general purpose MG
  L6_WOMBAT_RECOILLESS_RIFLE = 8,          // L6 Wombat Recoilless rifle,
  CARL_GUSTAV_89_MM_RECOILLESS_RIFLE = 9,  // Carl Gustav 89-mm recoilless rifle
  SA80_INDIVIDUAL_LIGHT_SUPPORT_WEAPON =
      10,                 // SA80 Individual/light support weapon
  TRIGAT = 11,            // Trigat
  MILAN_AT_MISSILE = 12,  // Milan AT missile
};

/*
 * Source: uid=19
 */
enum class LifeFormsSubcategoryFrenchWeapons : uint8_t {
  ACL_STRIM = 1,                         // ACL-STRIM
  MISTRAL_MISSILE = 2,                   // Mistral missile
  MILAN_AT_MISSILE = 3,                  // Milan AT missile
  LRAC_F1_89_MM_AT_ROCKET_LAUNCHER = 4,  // LRAC F1 89-mm AT rocket launcher
  FA_MAS_RIFLE = 5,                      // FA-MAS rifle
  AA_52_MACHINE_GUN = 6,                 // AA-52 machine gun
  _58_MM_RIFLE_GRENADE = 7,              // 58-mm rifle grenade
  FR_F1_SNIPER_RIFLE = 8,                // FR-F1 sniper rifle
};

/*
 * Source: uid=20
 */
enum class LifeFormsSubcategoryGermanWeapons : uint8_t {
  G3_RIFLE = 1,                // G3 rifle
  G11_RIFLE = 2,               // G11 rifle
  P1_PISTOL = 3,               // P1 pistol
  MG3_MACHINE_GUN = 4,         // MG3 machine gun
  MILAN_MISSILE = 5,           // Milan missile
  MP1_UZI_SUBMACHINE_GUN = 6,  // MP1 Uzi submachine gun
  PANZERFAUST_3_LIGHT_ANTI_TANK_WEAPON =
      7,                  // Panzerfaust 3 Light Anti-Tank Weapon
  DM19_HAND_GRENADE = 8,  // DM19 hand grenade
  DM29_HAND_GRENADE = 9,  // DM29 hand grenade
};

/*
 * Source: uid=21
 */
enum class EnvironmentalSubcategory : uint8_t {
  OTHER = 0,         // Other
  VERY_SMALL = 20,   // Very Small
  SMALL = 40,        // Small
  MEDIUM = 60,       // Medium
  LARGE = 80,        // Large
  VERY_LARGE = 100,  // Very Large
};

/*
 * Source: uid=22
 */
enum class RadioCategory : uint8_t {
  OTHER = 0,                             // Other
  VOICE_TRANSMISSION_RECEPTION = 1,      // Voice Transmission/Reception
  DATA_LINK_TRANSMISSION_RECEPTION = 2,  // Data Link Transmission/Reception
  VOICE_AND_DATA_LINK_TRANSMISSION_RECEPTION =
      3,  // Voice and Data Link Transmission/Reception
  INSTRUMENTED_LANDING_SYSTEM_ILS_GLIDESLOPE_TRANSMITTER =
      4,  // Instrumented Landing System (ILS) Glideslope Transmitter
  INSTRUMENTED_LANDING_SYSTEM_ILS_LOCALIZER_TRANSMITTER =
      5,  // Instrumented Landing System (ILS) Localizer Transmitter
  INSTRUMENTED_LANDING_SYSTEM_ILS_OUTER_MARKER_BEACON =
      6,  // Instrumented Landing System (ILS) Outer Marker Beacon
  INSTRUMENTED_LANDING_SYSTEM_ILS_MIDDLE_MARKER_BEACON =
      7,  // Instrumented Landing System (ILS) Middle Marker Beacon
  INSTRUMENTED_LANDING_SYSTEM_ILS_INNER_MARKER_BEACON =
      8,  // Instrumented Landing System (ILS) Inner Marker Beacon
  INSTRUMENTED_LANDING_SYSTEM_ILS_RECEIVER_PLATFORM_RADIO =
      9,  // Instrumented Landing System (ILS) Receiver (Platform Radio)
  TACTICAL_AIR_NAVIGATION_TACAN_TRANSMITTER_GROUND_FIXED_EQUIPMENT =
      10,  // Tactical Air Navigation (TACAN) Transmitter (Ground Fixed
           // Equipment)
  TACTICAL_AIR_NAVIGATION_TACAN_RECEIVER_MOVING_PLATFORM_EQUIPMENT =
      11,  // Tactical Air Navigation (TACAN) Receiver (Moving Platform
           // Equipment)
  TACTICAL_AIR_NAVIGATION_TACAN_TRANSMITTER_RECEIVER_MOVING_PLATFORM_EQUIPMENT =
      12,  // Tactical Air Navigation (TACAN) Transmitter/Receiver (Moving
           // Platform Equipment)
  VARIABLE_OMNI_RANGING_VOR_TRANSMITTER_GROUND_FIXED_EQUIPMENT =
      13,  // Variable Omni-Ranging (VOR) Transmitter (Ground Fixed Equipment)
  VARIABLE_OMNI_RANGING_VOR_WITH_DISTANCE_MEASURING_EQUIPMENT_DME_TRANSMITTER_GROUND_FIXED_EQUIPMENT =
      14,  // Variable Omni-Ranging (VOR) with Distance Measuring Equipment
           // (DME) Transmitter (Ground Fixed Equipment)
  COMBINED_VOR_ILS_RECEIVER_MOVING_PLATFORM_EQUIPMENT =
      15,  // Combined VOR/ILS Receiver (Moving Platform Equipment)
  COMBINED_VOR_TACAN_VORTAC_TRANSMITTER =
      16,  // Combined VOR & TACAN (VORTAC) Transmitter
  NON_DIRECTIONAL_BEACON_NDB_TRANSMITTER =
      17,  // Non-Directional Beacon (NDB) Transmitter
  NON_DIRECTIONAL_BEACON_NDB_RECEIVER =
      18,  // Non-Directional Beacon (NDB) Receiver
  NON_DIRECTIONAL_BEACON_NDB_WITH_DISTANCE_MEASURING_EQUIPMENT_DME_TRANSMITTER =
      19,  // Non-Directional Beacon (NDB) with Distance Measuring Equipment
           // (DME) Transmitter
  DISTANCE_MEASURING_EQUIPMENT_DME = 20,  // Distance Measuring Equipment (DME)
  LINK_16_TERMINAL = 21,                  // Link 16 Terminal
  LINK_11_TERMINAL = 22,                  // Link 11 Terminal
  LINK_11B_TERMINAL = 23,                 // Link 11B Terminal
  EPLRS_SADL_TERMINAL = 24,               // EPLRS/SADL Terminal
  F_22_INTRA_FLIGHT_DATA_LINK_IFDL = 25,  // F-22 Intra-Flight Data Link (IFDL)
  F_35_MULTIFUNCTION_ADVANCED_DATA_LINK_MADL =
      26,                       // F-35 Multifunction Advanced Data Link (MADL)
  SINCGARS_TERMINAL = 27,       // SINCGARS Terminal
  L_BAND_SATCOM_TERMINAL = 28,  // L-Band SATCOM Terminal
  IBS_TERMINAL = 29,            // IBS Terminal
  GPS = 30,                     // GPS
  TACTICAL_VIDEO = 31,          // Tactical Video
  AIR_TO_AIR_MISSILE_DATALINK = 32,  // Air-to-Air Missile Datalink
  LINK_16_SURROGATE_FOR_NON_NATO_TDL_TERMINAL =
      33,  // Link 16 Surrogate for Non-NATO TDL Terminal
  MQ_1_9_C_BAND_LOS_DATALINK = 34,      // MQ-1/9 C-Band LOS Datalink
  MQ_1_9_KU_BAND_SATCOM_DATALINK = 35,  // MQ-1/9 Ku-Band SATCOM Datalink
  AIR_TO_GROUND_WEAPON_DATALINK = 36,   // Air-to-Ground Weapon Datalink
  AUTOMATIC_IDENTIFICATION_SYSTEM_AIS =
      37,                // Automatic Identification System (AIS)
  JPALS_DATA_LINK = 38,  // JPALS Data Link
  COMBAT_SEARCH_AND_RESCUE_CSAR_RADIO =
      40,  // Combat Search and Rescue (CSAR) Radio
  COUNTER_UNMANNED_AIRCRAFT_SYSTEM_C_UAS_RADIO =
      41,  // Counter Unmanned Aircraft System (C-UAS) Radio
  EMERGENCY_POSITION_INDICATING_RADIO_BEACONS_EPIRB =
      42,  // Emergency Position-Indicating Radio Beacons (EPIRB)
  ELECTRONIC_ATTACK_SYSTEMS = 50,  // Electronic Attack Systems
  TACTICAL_TARGETING_NETWORK_TECHNOLOGY_TTNT =
      51,  // Tactical Targeting Network Technology (TTNT)
};

/*
 * Source: uid=23
 */
enum class RadioSubcategory : uint8_t {
  OTHER = 0,  // Other
  JOINT_ELECTRONICS_TYPE_DESIGNATION_SYSTEM_JETDS_NON_SPECIFIC_SERIES =
      1,  // Joint Electronics Type Designation System (JETDS) Non-specific
          // Series
  MANUFACTURER_DESIGNATION = 2,  // Manufacturer Designation
  NATIONAL_DESIGNATION = 3,      // National Designation
  JETDS_ARC_SET_1 = 11,          // JETDS ARC Set 1
  JETDS_ARC_SET_2 = 12,          // JETDS ARC Set 2
  JETDS_ARC_SET_3 = 13,          // JETDS ARC Set 3
  JETDS_ARC_SET_4 = 14,          // JETDS ARC Set 4
  JETDS_BRC_SET_1 = 15,          // JETDS BRC Set 1
  JETDS_BRC_SET_2 = 16,          // JETDS BRC Set 2
  JETDS_BRC_SET_3 = 17,          // JETDS BRC Set 3
  JETDS_BRC_SET_4 = 18,          // JETDS BRC Set 4
  JETDS_CRC_SET_1 = 19,          // JETDS CRC Set 1
  JETDS_CRC_SET_2 = 20,          // JETDS CRC Set 2
  JETDS_CRC_SET_3 = 21,          // JETDS CRC Set 3
  JETDS_CRC_SET_4 = 22,          // JETDS CRC Set 4
  JETDS_DRC_SET_1 = 23,          // JETDS DRC Set 1
  JETDS_DRC_SET_2 = 24,          // JETDS DRC Set 2
  JETDS_DRC_SET_3 = 25,          // JETDS DRC Set 3
  JETDS_DRC_SET_4 = 26,          // JETDS DRC Set 4
  JETDS_FRC_SET_1 = 27,          // JETDS FRC Set 1
  JETDS_FRC_SET_2 = 28,          // JETDS FRC Set 2
  JETDS_FRC_SET_3 = 29,          // JETDS FRC Set 3
  JETDS_FRC_SET_4 = 30,          // JETDS FRC Set 4
  JETDS_GRC_SET_1 = 31,          // JETDS GRC Set 1
  JETDS_GRC_SET_2 = 32,          // JETDS GRC Set 2
  JETDS_GRC_SET_3 = 33,          // JETDS GRC Set 3
  JETDS_GRC_SET_4 = 34,          // JETDS GRC Set 4
  JETDS_KRC_SET_1 = 35,          // JETDS KRC Set 1
  JETDS_KRC_SET_2 = 36,          // JETDS KRC Set 2
  JETDS_KRC_SET_3 = 37,          // JETDS KRC Set 3
  JETDS_KRC_SET_4 = 38,          // JETDS KRC Set 4
  JETDS_MRC_SET_1 = 39,          // JETDS MRC Set 1
  JETDS_MRC_SET_2 = 40,          // JETDS MRC Set 2
  JETDS_MRC_SET_3 = 41,          // JETDS MRC Set 3
  JETDS_MRC_SET_4 = 42,          // JETDS MRC Set 4
  JETDS_PRC_SET_1 = 43,          // JETDS PRC Set 1
  JETDS_PRC_SET_2 = 44,          // JETDS PRC Set 2
  JETDS_PRC_SET_3 = 45,          // JETDS PRC Set 3
  JETDS_PRC_SET_4 = 46,          // JETDS PRC Set 4
  JETDS_SRC_SET_1 = 47,          // JETDS SRC Set 1
  JETDS_SRC_SET_2 = 48,          // JETDS SRC Set 2
  JETDS_SRC_SET_3 = 49,          // JETDS SRC Set 3
  JETDS_SRC_SET_4 = 50,          // JETDS SRC Set 4
  JETDS_TRC_SET_1 = 51,          // JETDS TRC Set 1
  JETDS_TRC_SET_2 = 52,          // JETDS TRC Set 2
  JETDS_TRC_SET_3 = 53,          // JETDS TRC Set 3
  JETDS_TRC_SET_4 = 54,          // JETDS TRC Set 4
  JETDS_VRC_SET_1 = 55,          // JETDS VRC Set 1
  JETDS_VRC_SET_2 = 56,          // JETDS VRC Set 2
  JETDS_VRC_SET_3 = 57,          // JETDS VRC Set 3
  JETDS_VRC_SET_4 = 58,          // JETDS VRC Set 4
  JETDS_WRC_SET_1 = 59,          // JETDS WRC Set 1
  JETDS_WRC_SET_2 = 60,          // JETDS WRC Set 2
  JETDS_WRC_SET_3 = 61,          // JETDS WRC Set 3
  JETDS_WRC_SET_4 = 62,          // JETDS WRC Set 4
  JETDS_ZRC_SET_1 = 63,          // JETDS ZRC Set 1
  JETDS_ZRC_SET_2 = 64,          // JETDS ZRC Set 2
  JETDS_ZRC_SET_3 = 65,          // JETDS ZRC Set 3
  JETDS_ZRC_SET_4 = 66,          // JETDS ZRC Set 4
};

/*
 * Source: uid=25
 */
enum class ExpendableAirCategory : uint8_t {
  OTHER = 0,                      // Other
  CHAFF = 1,                      // Chaff
  FLARE = 2,                      // Flare
  COMBINED_CHAFF_AND_FLARE = 3,   // Combined Chaff and Flare
  ACTIVE_EMITTER = 4,             // Active Emitter
  PASSIVE_DECOY = 5,              // Passive Decoy
  WINGED_DECOY = 6,               // Winged Decoy
  SIGNAL_ILLUMINATION_FLARE = 7,  // Signal/Illumination Flare
  SMOKE_GENERATOR = 8,            // Smoke Generator
  COMBINED_FLARE_AND_SMOKE_GENERATOR =
      12,                     // Combined Flare and Smoke Generator
  SAR_NIGHT_LIGHT_SRNL = 13,  // SAR Night Light (SRNL)
  SAR_BUOY = 14,              // SAR Buoy
};

/*
 * Source: uid=26
 */
enum class ExpendableSurfaceCategory : uint8_t {
  OTHER = 0,            // Other
  FLARE = 2,            // Flare
  ACTIVE_EMITTER = 4,   // Active Emitter
  PASSIVE_DECOY = 5,    // Passive Decoy
  SMOKE_GENERATOR = 8,  // Smoke Generator
  COMBINED_FLARE_AND_SMOKE_GENERATOR =
      12,         // Combined Flare and Smoke Generator
  SAR_BUOY = 14,  // SAR Buoy
};

/*
 * Source: uid=27
 */
enum class ExpendableSubsurfaceCategory : uint8_t {
  OTHER = 0,                // Other
  ACTIVE_EMITTER = 4,       // Active emitter
  PASSIVE_DECOY = 5,        // Passive decoy
  SIGNAL = 7,               // Signal
  NOISE_MAKER_DECOY = 9,    // Noise-Maker Decoy
  BUBBLE_MAKER_DECOY = 10,  // Bubble-Maker Decoy
  MULTI_MODE_DECOY = 11,    // Multi-Mode Decoy
};

/*
 * Source: uid=28
 */
enum class SensorEmitterCategory : uint8_t {
  OTHER = 0,                        // Other
  MULTI_SPECTRAL = 1,               // Multi-spectral
  RF_ACTIVE = 2,                    // RF Active
  RF_PASSIVE_INTERCEPT_AND_DF = 3,  // RF Passive (intercept and DF)
  OPTICAL_DIRECT_VIEWING_WITH_OR_WITHOUT_OPTICS =
      4,                // Optical (direct viewing with or without optics)
  ELECTRO_OPTICAL = 5,  // Electro-Optical
  SEISMIC = 6,          // Seismic
  CHEMICAL_POINT_DETECTOR = 7,      // Chemical, point detector
  CHEMICAL_STANDOFF = 8,            // Chemical, standoff
  THERMAL_TEMPERATURE_SENSING = 9,  // Thermal (temperature sensing)
  ACOUSTIC_ACTIVE = 10,             // Acoustic, Active
  ACOUSTIC_PASSIVE = 11,            // Acoustic, Passive
  CONTACT_PRESSURE_PHYSICAL_HYDROSTATIC_BAROMETRIC =
      12,  // Contact/Pressure (physical, hydrostatic, barometric)
  ELECTRO_MAGNETIC_RADIATION_GAMMA_RADIATION =
      13,  // Electro-Magnetic Radiation (gamma radiation)
  PARTICLE_RADIATION_NEUTRONS_ALPHA_BETA_PARTICLES =
      14,              // Particle Radiation (Neutrons, alpha, beta particles)
  MAGNETIC = 15,       // Magnetic
  GRAVITATIONAL = 16,  // Gravitational
};

/*
 * Source: uid=29
 */
enum class Country : uint16_t {
  OTHER = 0,                    // Other
  AFGHANISTAN_AFG = 1,          // Afghanistan (AFG)
  ALBANIA_ALB = 2,              // Albania (ALB)
  ALGERIA_DZA = 3,              // Algeria (DZA)
  AMERICAN_SAMOA_ASM = 4,       // American Samoa (ASM)
  ANDORRA_AND = 5,              // Andorra (AND)
  ANGOLA_AGO = 6,               // Angola (AGO)
  ANGUILLA_AIA = 7,             // Anguilla (AIA)
  ANTARCTICA_ATA = 8,           // Antarctica (ATA)
  ANTIGUA_AND_BARBUDA_ATG = 9,  // Antigua and Barbuda (ATG)
  ARGENTINA_ARG = 10,           // Argentina (ARG)
  ARUBA_ABW = 11,               // Aruba (ABW)
  ASHMORE_AND_CARTIER_ISLANDS_AUSTRALIA =
      12,              // Ashmore and Cartier Islands (Australia) [DEPRECATED]
  AUSTRALIA_AUS = 13,  // Australia (AUS)
  AUSTRIA_AUT = 14,    // Austria (AUT)
  BAHAMAS_BHS = 15,    // Bahamas (BHS)
  BAHRAIN_BHR = 16,    // Bahrain (BHR)
  BAKER_ISLAND_UNITED_STATES = 17,  // Baker Island (United States) [DEPRECATED]
  BANGLADESH_BGD = 18,              // Bangladesh (BGD)
  BARBADOS_BRB = 19,                // Barbados (BRB)
  BASSAS_DA_INDIA_FRANCE = 20,      // Bassas da India (France) [DEPRECATED]
  BELGIUM_BEL = 21,                 // Belgium (BEL)
  BELIZE_BLZ = 22,                  // Belize (BLZ)
  BENIN_BEN = 23,                   // Benin (BEN)
  BERMUDA_BMU = 24,                 // Bermuda (BMU)
  BHUTAN_BTN = 25,                  // Bhutan (BTN)
  BOLIVIA_PLURINATIONAL_STATE_OF_BOL =
      26,                  // Bolivia (Plurinational State of) (BOL)
  BOTSWANA_BWA = 27,       // Botswana (BWA)
  BOUVET_ISLAND_BVT = 28,  // Bouvet Island (BVT)
  BRAZIL_BRA = 29,         // Brazil (BRA)
  BRITISH_INDIAN_OCEAN_TERRITORY_IOT =
      30,                               // British Indian Ocean Territory (IOT)
  VIRGIN_ISLANDS_BRITISH_VGB = 31,      // Virgin Islands (British) (VGB)
  BRUNEI_DARUSSALAM_BRN = 32,           // Brunei Darussalam (BRN)
  BULGARIA_BGR = 33,                    // Bulgaria (BGR)
  BURKINA_FASO_BFA = 34,                // Burkina Faso (BFA)
  MYANMAR_MMR = 35,                     // Myanmar (MMR)
  BURUNDI_BDI = 36,                     // Burundi (BDI)
  CAMBODIA_KHM = 37,                    // Cambodia (KHM)
  CAMEROON_CMR = 38,                    // Cameroon (CMR)
  CANADA_CAN = 39,                      // Canada (CAN)
  CABO_VERDE_CPV = 40,                  // Cabo Verde (CPV)
  CAYMAN_ISLANDS_CYM = 41,              // Cayman Islands (CYM)
  CENTRAL_AFRICAN_REPUBLIC_CAF = 42,    // Central African Republic (CAF)
  CHAD_TCD = 43,                        // Chad (TCD)
  CHILE_CHL = 44,                       // Chile (CHL)
  CHINA_PEOPLE_S_REPUBLIC_OF_CHN = 45,  // China, People's Republic of (CHN)
  CHRISTMAS_ISLAND_CXR = 46,            // Christmas Island (CXR)
  COCOS_KEELING_ISLANDS_CCK = 47,       // Cocos (Keeling) Islands (CCK)
  COLOMBIA_COL = 48,                    // Colombia (COL)
  COMOROS_COM = 49,                     // Comoros (COM)
  CONGO_COG = 50,                       // Congo (COG)
  COOK_ISLANDS_COK = 51,                // Cook Islands (COK)
  CORAL_SEA_ISLANDS_AUSTRALIA =
      52,                       // Coral Sea Islands (Australia) [DEPRECATED]
  COSTA_RICA_CRI = 53,          // Costa Rica (CRI)
  CUBA_CUB = 54,                // Cuba (CUB)
  CYPRUS_CYP = 55,              // Cyprus (CYP)
  CZECHOSLOVAKIA_CSK = 56,      // Czechoslovakia (CSK) [DEPRECATED]
  DENMARK_DNK = 57,             // Denmark (DNK)
  DJIBOUTI_DJI = 58,            // Djibouti (DJI)
  DOMINICA_DMA = 59,            // Dominica (DMA)
  DOMINICAN_REPUBLIC_DOM = 60,  // Dominican Republic (DOM)
  ECUADOR_ECU = 61,             // Ecuador (ECU)
  EGYPT_EGY = 62,               // Egypt (EGY)
  EL_SALVADOR_SLV = 63,         // El Salvador (SLV)
  EQUATORIAL_GUINEA_GNQ = 64,   // Equatorial Guinea (GNQ)
  ETHIOPIA_ETH = 65,            // Ethiopia (ETH)
  EUROPA_ISLAND_FRANCE = 66,    // Europa Island (France) [DEPRECATED]
  FALKLAND_ISLANDS_MALVINAS_FLK = 67,    // Falkland Islands (Malvinas) (FLK)
  FAROE_ISLANDS_FRO = 68,                // Faroe Islands (FRO)
  FIJI_FJI = 69,                         // Fiji (FJI)
  FINLAND_FIN = 70,                      // Finland (FIN)
  FRANCE_FRA = 71,                       // France (FRA)
  FRENCH_GUIANA_GUF = 72,                // French Guiana (GUF)
  FRENCH_POLYNESIA_PYF = 73,             // French Polynesia (PYF)
  FRENCH_SOUTHERN_TERRITORIES_ATF = 74,  // French Southern Territories (ATF)
  GABON_GAB = 75,                        // Gabon (GAB)
  GAMBIA_THE_GMB = 76,                   // Gambia, The (GMB)
  GAZA_STRIP_ISRAEL = 77,                // Gaza Strip (Israel) [DEPRECATED]
  GERMANY_DEU = 78,                      // Germany (DEU)
  GHANA_GHA = 79,                        // Ghana (GHA)
  GIBRALTAR_GIB = 80,                    // Gibraltar (GIB)
  GLORIOSO_ISLANDS_FRANCE = 81,  // Glorioso Islands (France) [DEPRECATED]
  GREECE_GRC = 82,               // Greece (GRC)
  GREENLAND_GRL = 83,            // Greenland (GRL)
  GRENADA_GRD = 84,              // Grenada (GRD)
  GUADELOUPE_GLP = 85,           // Guadeloupe (GLP)
  GUAM_GUM = 86,                 // Guam (GUM)
  GUATEMALA_GTM = 87,            // Guatemala (GTM)
  GUERNSEY_GGY = 88,             // Guernsey (GGY)
  GUINEA_GIN = 89,               // Guinea (GIN)
  GUINEA_BISSAU_GNB = 90,        // Guinea-Bissau (GNB)
  GUYANA_GUY = 91,               // Guyana (GUY)
  HAITI_HTI = 92,                // Haiti (HTI)
  HEARD_ISLAND_AND_MCDONALD_ISLANDS_HMD =
      93,              // Heard Island and McDonald Islands (HMD)
  HONDURAS_HND = 94,   // Honduras (HND)
  HONG_KONG_HKG = 95,  // Hong Kong (HKG)
  HOWLAND_ISLAND_UNITED_STATES =
      96,               // Howland Island (United States) [DEPRECATED]
  HUNGARY_HUN = 97,     // Hungary (HUN)
  ICELAND_ISL = 98,     // Iceland (ISL)
  INDIA_IND = 99,       // India (IND)
  INDONESIA_IDN = 100,  // Indonesia (IDN)
  IRAN_ISLAMIC_REPUBLIC_OF_IRN = 101,  // Iran (Islamic Republic of) (IRN)
  IRAQ_IRQ = 102,                      // Iraq (IRQ)
  IRELAND_IRL = 104,                   // Ireland (IRL)
  ISRAEL_ISR = 105,                    // Israel (ISR)
  ITALY_ITA = 106,                     // Italy (ITA)
  COTE_D_IVOIRE_CIV = 107,             // Cote d'Ivoire (CIV)
  JAMAICA_JAM = 108,                   // Jamaica (JAM)
  JAN_MAYEN_NORWAY = 109,              // Jan Mayen (Norway) [DEPRECATED]
  JAPAN_JPN = 110,                     // Japan (JPN)
  JARVIS_ISLAND_UNITED_STATES =
      111,           // Jarvis Island (United States) [DEPRECATED]
  JERSEY_JEY = 112,  // Jersey (JEY)
  JOHNSTON_ATOLL_UNITED_STATES =
      113,                    // Johnston Atoll (United States) [DEPRECATED]
  JORDAN_JOR = 114,           // Jordan (JOR)
  JUAN_DE_NOVA_ISLAND = 115,  // Juan de Nova Island [DEPRECATED]
  KENYA_KEN = 116,            // Kenya (KEN)
  KINGMAN_REEF_UNITED_STATES =
      117,             // Kingman Reef (United States) [DEPRECATED]
  KIRIBATI_KIR = 118,  // Kiribati (KIR)
  KOREA_DEMOCRATIC_PEOPLE_S_REPUBLIC_OF_PRK =
      119,                      // Korea (Democratic People's Republic of) (PRK)
  KOREA_REPUBLIC_OF_KOR = 120,  // Korea (Republic of) (KOR)
  KUWAIT_KWT = 121,             // Kuwait (KWT)
  LAO_PEOPLE_S_DEMOCRATIC_REPUBLIC_LAO =
      122,                     // Lao People's Democratic Republic (LAO)
  LEBANON_LBN = 123,           // Lebanon (LBN)
  LESOTHO_LSO = 124,           // Lesotho (LSO)
  LIBERIA_LBR = 125,           // Liberia (LBR)
  LIBYA_LBY = 126,             // Libya (LBY)
  LIECHTENSTEIN_LIE = 127,     // Liechtenstein (LIE)
  LUXEMBOURG_LUX = 128,        // Luxembourg (LUX)
  MADAGASCAR_MDG = 129,        // Madagascar (MDG)
  MACAO_MAC = 130,             // Macao (MAC)
  MALAWI_MWI = 131,            // Malawi (MWI)
  MALAYSIA_MYS = 132,          // Malaysia (MYS)
  MALDIVES_MDV = 133,          // Maldives (MDV)
  MALI_MLI = 134,              // Mali (MLI)
  MALTA_MLT = 135,             // Malta (MLT)
  ISLE_OF_MAN_IMN = 136,       // Isle of Man (IMN)
  MARSHALL_ISLANDS_MHL = 137,  // Marshall Islands (MHL)
  MARTINIQUE_MTQ = 138,        // Martinique (MTQ)
  MAURITANIA_MRT = 139,        // Mauritania (MRT)
  MAURITIUS_MUS = 140,         // Mauritius (MUS)
  MAYOTTE_MYT = 141,           // Mayotte (MYT)
  MEXICO_MEX = 142,            // Mexico (MEX)
  MICRONESIA_FEDERATED_STATES_OF_FSM =
      143,               // Micronesia (Federated States of) (FSM)
  MONACO_MCO = 144,      // Monaco (MCO)
  MONGOLIA_MNG = 145,    // Mongolia (MNG)
  MONTSERRAT_MSR = 146,  // Montserrat (MSR)
  MOROCCO_MAR = 147,     // Morocco (MAR)
  MOZAMBIQUE_MOZ = 148,  // Mozambique (MOZ)
  NAMIBIA_NAM = 149,     // Namibia (NAM)
  NAURU_NRU = 150,       // Nauru (NRU)
  NAVASSA_ISLAND_UNITED_STATES =
      151,                // Navassa Island (United States) [DEPRECATED]
  NEPAL_NPL = 152,        // Nepal (NPL)
  NETHERLANDS_NLD = 153,  // Netherlands (NLD)
  NETHERLANDS_ANTILLES_CURACAO_BONAIRE_SABA_SINT_MAARTEN_SINT_EUSTATIUS =
      154,  // Netherlands Antilles (Curacao, Bonaire, Saba, Sint Maarten Sint
            // Eustatius) [DEPRECATED]
  NEW_CALEDONIA_NCL = 155,             // New Caledonia (NCL)
  NEW_ZEALAND_NZL = 156,               // New Zealand (NZL)
  NICARAGUA_NIC = 157,                 // Nicaragua (NIC)
  NIGER_NER = 158,                     // Niger (NER)
  NIGERIA_NGA = 159,                   // Nigeria (NGA)
  NIUE_NIU = 160,                      // Niue (NIU)
  NORFOLK_ISLAND_NFK = 161,            // Norfolk Island (NFK)
  NORTHERN_MARIANA_ISLANDS_MNP = 162,  // Northern Mariana Islands (MNP)
  NORWAY_NOR = 163,                    // Norway (NOR)
  OMAN_OMN = 164,                      // Oman (OMN)
  PAKISTAN_PAK = 165,                  // Pakistan (PAK)
  PALMYRA_ATOLL_UNITED_STATES =
      166,                     // Palmyra Atoll (United States) [DEPRECATED]
  PANAMA_PAN = 168,            // Panama (PAN)
  PAPUA_NEW_GUINEA_PNG = 169,  // Papua New Guinea (PNG)
  PARACEL_ISLANDS_INTERNATIONAL_OCCUPIED_BY_CHINA_ALSO_CLAIMED_BY_TAIWAN_AND_VIETNAM =
      170,  // Paracel Islands (International - Occupied by China, also claimed
            // by Taiwan and Vietnam) [DEPRECATED]
  PARAGUAY_PRY = 171,               // Paraguay (PRY)
  PERU_PER = 172,                   // Peru (PER)
  PHILIPPINES_PHL = 173,            // Philippines (PHL)
  PITCAIRN_PCN = 174,               // Pitcairn (PCN)
  POLAND_POL = 175,                 // Poland (POL)
  PORTUGAL_PRT = 176,               // Portugal (PRT)
  PUERTO_RICO_PRI = 177,            // Puerto Rico (PRI)
  QATAR_QAT = 178,                  // Qatar (QAT)
  REUNION_REU = 179,                // Reunion (REU)
  ROMANIA_ROU = 180,                // Romania (ROU)
  RWANDA_RWA = 181,                 // Rwanda (RWA)
  SAINT_KITTS_AND_NEVIS_KNA = 182,  // Saint Kitts and Nevis (KNA)
  SAINT_HELENA_ASCENSION_AND_TRISTAN_DA_CUNHA_SHN =
      183,                // Saint Helena, Ascension and Tristan da Cunha (SHN)
  SAINT_LUCIA_LCA = 184,  // Saint Lucia (LCA)
  SAINT_PIERRE_AND_MIQUELON_SPM = 185,  // Saint Pierre and Miquelon (SPM)
  SAINT_VINCENT_AND_THE_GRENADINES_VCT =
      186,                          // Saint Vincent and the Grenadines (VCT)
  SAN_MARINO_SMR = 187,             // San Marino (SMR)
  SAO_TOME_AND_PRINCIPE_STP = 188,  // Sao Tome and Principe (STP)
  SAUDI_ARABIA_SAU = 189,           // Saudi Arabia (SAU)
  SENEGAL_SEN = 190,                // Senegal (SEN)
  SEYCHELLES_SYC = 191,             // Seychelles (SYC)
  SIERRA_LEONE_SLE = 192,           // Sierra Leone (SLE)
  SINGAPORE_SGP = 193,              // Singapore (SGP)
  SOLOMON_ISLANDS_SLB = 194,        // Solomon Islands (SLB)
  SOMALIA_SOM = 195,                // Somalia (SOM)
  SOUTH_GEORGIA_AND_THE_SOUTH_SANDWICH_ISLANDS_SGS =
      196,                 // South Georgia and the South Sandwich Islands (SGS)
  SOUTH_AFRICA_ZAF = 197,  // South Africa (ZAF)
  SPAIN_ESP = 198,         // Spain (ESP)
  SPRATLY_ISLANDS_INTERNATIONAL_PARTS_OCCUPIED_AND_CLAIMED_BY_CHINA_MALAYSIA_PHILIPPINES_TAIWAN_VIETNAM =
      199,  // Spratly Islands (International - parts occupied and claimed by
            // China,Malaysia, Philippines, Taiwan, Vietnam) [DEPRECATED]
  SRI_LANKA_LKA = 200,                    // Sri Lanka (LKA)
  SUDAN_SDN = 201,                        // Sudan (SDN)
  SURINAME_SUR = 202,                     // Suriname (SUR)
  SVALBARD_NORWAY = 203,                  // Svalbard (Norway) [DEPRECATED]
  ESWATINI_SWZ = 204,                     // Eswatini (SWZ)
  SWEDEN_SWE = 205,                       // Sweden (SWE)
  SWITZERLAND_CHE = 206,                  // Switzerland (CHE)
  SYRIAN_ARAB_REPUBLIC_SYR = 207,         // Syrian Arab Republic (SYR)
  TAIWAN_PROVINCE_OF_CHINA_TWN = 208,     // Taiwan, Province of China (TWN)
  TANZANIA_UNITED_REPUBLIC_OF_TZA = 209,  // Tanzania, United Republic of (TZA)
  THAILAND_THA = 210,                     // Thailand (THA)
  TOGO_TGO = 211,                         // Togo (TGO)
  TOKELAU_TKL = 212,                      // Tokelau (TKL)
  TONGA_TON = 213,                        // Tonga (TON)
  TRINIDAD_AND_TOBAGO_TTO = 214,          // Trinidad and Tobago (TTO)
  TROMELIN_ISLAND_FRANCE = 215,        // Tromelin Island (France) [DEPRECATED]
  PALAU_PLW = 216,                     // Palau (PLW)
  TUNISIA_TUN = 217,                   // Tunisia (TUN)
  TURKEY_TUR = 218,                    // Turkey (TUR)
  TURKS_AND_CAICOS_ISLANDS_TCA = 219,  // Turks and Caicos Islands (TCA)
  TUVALU_TUV = 220,                    // Tuvalu (TUV)
  UGANDA_UGA = 221,                    // Uganda (UGA)
  RUSSIA_RUS = 222,                    // Russia (RUS)
  UNITED_ARAB_EMIRATES_ARE = 223,      // United Arab Emirates (ARE)
  UNITED_KINGDOM_OF_GREAT_BRITAIN_AND_NORTHERN_IRELAND_GBR =
      224,  // United Kingdom of Great Britain and Northern Ireland (GBR)
  UNITED_STATES_OF_AMERICA_USA = 225,  // United States of America (USA)
  URUGUAY_URY = 226,                   // Uruguay (URY)
  VANUATU_VUT = 227,                   // Vanuatu (VUT)
  HOLY_SEE_VAT = 228,                  // Holy See (VAT)
  VENEZUELA_BOLIVARIAN_REPUBLIC_OF_VEN =
      229,                           // Venezuela (Bolivarian Republic of) (VEN)
  VIET_NAM_VNM = 230,                // Viet Nam (VNM)
  VIRGIN_ISLANDS_U_S_VIR = 231,      // Virgin Islands (U.S.) (VIR)
  WAKE_ISLAND_UNITED_STATES = 232,   // Wake Island (United States) [DEPRECATED]
  WALLIS_AND_FUTUNA_WLF = 233,       // Wallis and Futuna (WLF)
  WESTERN_SAHARA_ESH = 234,          // Western Sahara (ESH)
  WEST_BANK_ISRAEL = 235,            // West Bank (Israel) [DEPRECATED]
  SAMOA_WSM = 236,                   // Samoa (WSM)
  YEMEN_YEM = 237,                   // Yemen (YEM)
  SERBIA_AND_MONTENEGRO = 240,       // Serbia and Montenegro [DEPRECATED]
  ZAIRE = 241,                       // Zaire [DEPRECATED]
  ZAMBIA_ZMB = 242,                  // Zambia (ZMB)
  ZIMBABWE_ZWE = 243,                // Zimbabwe (ZWE)
  ARMENIA_ARM = 244,                 // Armenia (ARM)
  AZERBAIJAN_AZE = 245,              // Azerbaijan (AZE)
  BELARUS_BLR = 246,                 // Belarus (BLR)
  BOSNIA_AND_HERZEGOVINA_BIH = 247,  // Bosnia and Herzegovina (BIH)
  CLIPPERTON_ISLAND_FRANCE = 248,    // Clipperton Island (France) [DEPRECATED]
  CROATIA_HRV = 249,                 // Croatia (HRV)
  ESTONIA_EST = 250,                 // Estonia (EST)
  GEORGIA_GEO = 251,                 // Georgia (GEO)
  KAZAKHSTAN_KAZ = 252,              // Kazakhstan (KAZ)
  KYRGYZSTAN_KGZ = 253,              // Kyrgyzstan (KGZ)
  LATVIA_LVA = 254,                  // Latvia (LVA)
  LITHUANIA_LTU = 255,               // Lithuania (LTU)
  NORTH_MACEDONIA_MKD = 256,         // North Macedonia (MKD)
  MIDWAY_ISLANDS_UNITED_STATES =
      257,                        // Midway Islands (United States) [DEPRECATED]
  MOLDOVA_REPUBLIC_OF_MDA = 258,  // Moldova (Republic of) (MDA)
  MONTENEGRO_MNE = 259,           // Montenegro (MNE)
  RUSSIA = 260,                   // Russia [DEPRECATED]
  SERBIA_AND_MONTENEGRO_MONTENEGRO_TO_SEPARATE =
      261,  // Serbia and Montenegro (Montenegro to separate) [DEPRECATED]
  SLOVENIA_SVN = 262,        // Slovenia (SVN)
  TAJIKISTAN_TJK = 263,      // Tajikistan (TJK)
  TURKMENISTAN_TKM = 264,    // Turkmenistan (TKM)
  UKRAINE_UKR = 265,         // Ukraine (UKR)
  UZBEKISTAN_UZB = 266,      // Uzbekistan (UZB)
  CZECH_REPUBLIC_CZE = 267,  // Czech Republic (CZE)
  SLOVAKIA_SVK = 268,        // Slovakia (SVK)
  AALAND_ISLANDS_ALA = 269,  // Aaland Islands (ALA)
  BONAIRE_SINT_EUSTATIUS_AND_SABA_BES =
      270,  // Bonaire, Sint Eustatius and Saba (BES)
  CONGO_DEMOCRATIC_REPUBLIC_OF_THE_COD =
      271,                     // Congo (Democratic Republic of the) (COD)
  CURACAO_CUW = 272,           // Curacao (CUW)
  ERITREA_ERI = 273,           // Eritrea (ERI)
  SAINT_BARTHELEMY_BLM = 274,  // Saint Barthelemy (BLM)
  SAINT_MARTIN_FRENCH_PART_MAF = 275,  // Saint Martin (French Part) (MAF)
  SERBIA_SRB = 276,                    // Serbia (SRB)
  SINT_MAARTEN_DUTCH_PART_SXM = 277,   // Sint Maarten (Dutch part) (SXM)
  SOUTH_SUDAN_SSD = 278,               // South Sudan (SSD)
  SVALBARD_AND_JAN_MAYEN_SJM = 279,    // Svalbard and Jan Mayen (SJM)
  TIMOR_LESTE_TLS = 280,               // Timor-Leste (TLS)
  UNITED_STATES_MINOR_OUTLYING_ISLANDS_UMI =
      281,                       // United States Minor Outlying Islands (UMI)
  PALESTINE_STATE_OF_PSE = 282,  // Palestine, State of (PSE)
};

/*
 * Source: uid=44
 */
enum class DeadReckoningAlgorithm : uint8_t {
  OTHER = 0,                     // Other
  STATIC_NON_MOVING_ENTITY = 1,  // Static - Non-moving Entity
  DRM_FPW_CONSTANT_VELOCITY_LOW_ACCELERATION_LINEAR_MOTION_ENTITY =
      2,  // DRM (FPW) - Constant Velocity / Low Acceleration Linear Motion
          // Entity
  DRM_RPW_CONSTANT_VELOCITY_LOW_ACCELERATION_LINEAR_MOTION_ENTITY_WITH_EXTRAPOLATION_OF_ORIENTATION =
      3,  // DRM (RPW) - Constant Velocity / Low Acceleration Linear Motion
          // Entity with Extrapolation of Orientation
  DRM_RVW_HIGH_SPEED_OR_MANEUVERING_ENTITY_WITH_EXTRAPOLATION_OF_ORIENTATION =
      4,  // DRM (RVW) - High Speed or Maneuvering Entity with Extrapolation of
          // Orientation
  DRM_FVW_HIGH_SPEED_OR_MANEUVERING_ENTITY =
      5,  // DRM (FVW) - High Speed or Maneuvering Entity
  DRM_FPB_SIMILAR_TO_FPW_EXCEPT_IN_BODY_COORDINATES =
      6,  // DRM (FPB) - Similar to FPW except in Body Coordinates
  DRM_RPB_SIMILAR_TO_RPW_EXCEPT_IN_BODY_COORDINATES =
      7,  // DRM (RPB) - Similar to RPW except in Body Coordinates
  DRM_RVB_SIMILAR_TO_RVW_EXCEPT_IN_BODY_COORDINATES =
      8,  // DRM (RVB) - Similar to RVW except in Body Coordinates
  DRM_FVB_SIMILAR_TO_FVW_EXCEPT_IN_BODY_COORDINATES =
      9,  // DRM (FVB) - Similar to FVW except in Body Coordinates
};

/*
 * Source: uid=45
 */
enum class EntityMarkingCharacterSet : uint8_t {
  UNUSED = 0,            // Unused
  ASCII = 1,             // ASCII
  U_S_ARMY_MARKING = 2,  // U.S. Army Marking
  DIGIT_CHEVRON = 3,     // Digit Chevron
};

/*
 * Source: uid=55
 */
enum class EntityCapabilities : uint32_t {
  LAND_PLATFORM_ENTITY_CAPABILITIES = 0,  // Land Platform Entity Capabilities
  AIR_PLATFORM_ENTITY_CAPABILITIES = 1,   // Air Platform Entity Capabilities
  SURFACE_PLATFORM_ENTITY_CAPABILITIES =
      2,  // Surface Platform Entity Capabilities
  SUBSURFACE_PLATFORM_ENTITY_CAPABILITIES =
      3,  // Subsurface Platform Entity Capabilities
  SPACE_PLATFORM_ENTITY_CAPABILITIES = 4,  // Space Platform Entity Capabilities
  MUNITION_ENTITY_CAPABILITIES = 5,        // Munition Entity Capabilities
  LIFE_FORMS_ENTITY_CAPABILITIES = 6,      // Life Forms Entity Capabilities
  ENVIRONMENTAL_ENTITY_CAPABILITIES = 7,   // Environmental Entity Capabilities
  CULTURAL_FEATURE_ENTITY_CAPABILITIES =
      8,                                // Cultural Feature Entity Capabilities
  SUPPLY_ENTITY_CAPABILITIES = 9,       // Supply Entity Capabilities
  RADIO_ENTITY_CAPABILITIES = 10,       // Radio Entity Capabilities
  EXPENDABLE_ENTITY_CAPABILITIES = 11,  // Expendable Entity Capabilities
  SENSOR_EMITTER_ENTITY_CAPABILITIES =
      12,  // Sensor/Emitter Entity Capabilities
};

/*
 * Source: uid=56
 */
enum class VariableParameterRecordType : uint8_t {
  ARTICULATED_PART = 0,    // Articulated Part
  ATTACHED_PART = 1,       // Attached Part
  SEPARATION = 2,          // Separation
  ENTITY_TYPE = 3,         // Entity Type
  ENTITY_ASSOCIATION = 4,  // Entity Association
};

/*
 * Source: uid=57
 */
enum class AttachedParts : uint32_t {
  NOTHING_EMPTY = 0,            // Nothing, Empty
  M16A42_RIFLE = 896,           // M16A42 rifle
  M249_SAW = 897,               // M249 SAW
  M60_MACHINE_GUN = 898,        // M60 Machine gun
  M203_GRENADE_LAUNCHER = 899,  // M203 Grenade Launcher
  M136_AT4 = 900,               // M136 AT4
  M47_DRAGON = 901,             // M47 Dragon
  AAWS_M_JAVELIN = 902,         // AAWS-M Javelin
  M18A1_CLAYMORE_MINE = 903,    // M18A1 Claymore Mine
  MK19_GRENADE_LAUNCHER = 904,  // MK19 Grenade Launcher
  M2_MACHINE_GUN = 905,         // M2 Machine Gun
};

/*
 * Source: uid=58
 */
enum class ArticulatedPartsTypeMetric : uint8_t {
  NOT_SPECIFIED = 0,    // Not Specified
  POSITION = 1,         // Position
  POSITION_RATE = 2,    // Position Rate
  EXTENSION = 3,        // Extension
  EXTENSION_RATE = 4,   // Extension Rate
  X = 5,                // X
  X_RATE = 6,           // X Rate
  Y = 7,                // Y
  Y_RATE = 8,           // Y Rate
  Z = 9,                // Z
  Z_RATE = 10,          // Z Rate
  AZIMUTH = 11,         // Azimuth
  AZIMUTH_RATE = 12,    // Azimuth Rate
  ELEVATION = 13,       // Elevation
  ELEVATION_RATE = 14,  // Elevation Rate
  ROTATION = 15,        // Rotation
  ROTATION_RATE = 16,   // Rotation Rate
};

/*
 * Source: uid=59
 */
enum class ArticulatedPartsTypeClass : uint32_t {
  NOT_SPECIFIED = 0,             // Not Specified
  RUDDER = 1024,                 // Rudder
  LEFT_FLAP = 1056,              // Left Flap
  RIGHT_FLAP = 1088,             // Right Flap
  LEFT_AILERON = 1120,           // Left Aileron
  RIGHT_AILERON = 1152,          // Right Aileron
  HELICOPTER_MAIN_ROTOR = 1184,  // Helicopter - Main Rotor
  HELICOPTER_TAIL_ROTOR = 1216,  // Helicopter - Tail Rotor
  OTHER_AIRCRAFT_CONTROL_SURFACES_DEFINED_AS_NEEDED =
      1248,  // Other Aircraft Control Surfaces Defined as Needed
  PROPELLER_NUMBER_1 = 1280,  // Propeller Number 1
  PROPELLER_NUMBER_2 = 1312,  // Propeller Number 2
  PROPELLER_NUMBER_3 = 1344,  // Propeller Number 3
  PROPELLER_NUMBER_4 = 1376,  // Propeller Number 4
  LEFT_STABILATOR_STABILATOR_NUMBER_1 =
      1408,  // Left Stabilator (Stabilator Number 1)
  RIGHT_STABILATOR_STABILATOR_NUMBER_2 =
      1440,  // Right Stabilator (Stabilator Number 2)
  LEFT_RUDDERVATOR_RUDDERVATOR_NUMBER_1 =
      1472,  // Left Ruddervator (Ruddervator Number 1)
  RIGHT_RUDDERVATOR_RUDDERVATOR_NUMBER_2 =
      1504,  // Right Ruddervator (Ruddervator Number 2)
  LEFT_LEADING_EDGE_FLAP_SLAT = 1536,   // Left Leading Edge Flap/Slat
  RIGHT_LEADING_EDGE_FLAP_SLAT = 1568,  // Right Leading Edge Flap/Slat
  LEFT_ELEVATOR = 1600,                 // Left Elevator
  RIGHT_ELEVATOR = 1632,                // Right Elevator
  CANARD_LEFT = 1664,                   // Canard (left)
  CANARD_RIGHT = 1696,                  // Canard (right)
  ELEVON_INNER_LEFT = 1728,             // Elevon Inner (left)
  ELEVON_INNER_RIGHT = 1760,            // Elevon Inner (right)
  ELEVON_MIDDLE_LEFT = 1792,            // Elevon Middle (left)
  ELEVON_MIDDLE_RIGHT = 1824,           // Elevon Middle (right)
  ELEVON_OUTER_LEFT = 1856,             // Elevon Outer (left)
  ELEVON_OUTER_RIGHT = 1888,            // Elevon Outer (right)
  CANOPY_AIRCRAFT = 1920,               // Canopy (Aircraft)
  SPOILER_LEFT = 1952,                  // Spoiler (left)
  SPOILER_RIGHT = 1984,                 // Spoiler (right)
  PERISCOPE = 2048,                     // Periscope
  GENERIC_ANTENNA = 2080,               // Generic Antenna
  SNORKEL = 2112,                       // Snorkel
  OTHER_EXTENDIBLE_PARTS_DEFINED_AS_NEEDED =
      2144,                       // Other Extendible Parts Defined as Needed
  DIVE_PLANE_SAIL_LEFT = 2176,    // Dive Plane (Sail) - Left
  DIVE_PLANE_SAIL_RIGHT = 2208,   // Dive Plane (Sail) - Right
  DIVE_PLANE_BOW_LEFT = 2240,     // Dive Plane (Bow) - Left
  DIVE_PLANE_BOW_RIGHT = 2272,    // Dive Plane (Bow) - Right
  DIVE_PLANE_STERN_LEFT = 2304,   // Dive Plane (Stern) - Left
  DIVE_PLANE_STERN_RIGHT = 2336,  // Dive Plane (Stern) - Right
  LANDING_GEAR = 3072,            // Landing Gear
  TAIL_HOOK = 3104,               // Tail Hook
  SPEED_BRAKE = 3136,             // Speed Brake
  LEFT_DOOR_OF_PRIMARY_WEAPON_BAY = 3168,   // Left Door of Primary Weapon Bay
  RIGHT_DOOR_OF_PRIMARY_WEAPON_BAY = 3200,  // Right Door of Primary Weapon Bay
  TANK_OR_APC_HATCH = 3232,                 // Tank or APC Hatch
  WINGSWEEP = 3264,                         // Wingsweep
  BRIDGE_LAUNCHER = 3296,                   // Bridge Launcher
  BRIDGE_SECTION_1 = 3328,                  // Bridge Section 1
  BRIDGE_SECTION_2 = 3360,                  // Bridge Section 2
  BRIDGE_SECTION_3 = 3392,                  // Bridge Section 3
  PRIMARY_BLADE_1 = 3424,                   // Primary Blade 1
  PRIMARY_BLADE_2 = 3456,                   // Primary Blade 2
  PRIMARY_BOOM = 3488,                      // Primary Boom
  PRIMARY_LAUNCHER_ARM = 3520,              // Primary Launcher Arm
  OTHER_FIXED_POSITION_PARTS_DEFINED_AS_NEEDED =
      3552,                  // Other Fixed Position Parts Defined as Needed
  LANDING_GEAR_NOSE = 3584,  // Landing Gear - Nose
  LANDING_GEAR_LEFT_MAIN = 3616,          // Landing Gear - Left Main
  LANDING_GEAR_RIGHT_MAIN = 3648,         // Landing Gear - Right Main
  DOORS_OF_LEFT_SIDE_WEAPON_BAY = 3680,   // Doors of Left Side Weapon Bay
  DOORS_OF_RIGHT_SIDE_WEAPON_BAY = 3712,  // Doors of Right Side Weapon Bay
  SPOT_SEARCH_LIGHT_1 = 3744,             // Spot/Search Light #1
  SPOT_SEARCH_LIGHT_2 = 3776,             // Spot/Search Light #2
  SPOT_SEARCH_LIGHT_3 = 3808,             // Spot/Search Light #3
  SPOT_SEARCH_LIGHT_4 = 3840,             // Spot/Search Light #4
  LANDING_LIGHT = 3872,                   // Landing Light
  PRIMARY_TURRET_NUMBER_1 = 4096,         // Primary Turret Number 1
  PRIMARY_TURRET_NUMBER_2 = 4128,         // Primary Turret Number 2
  PRIMARY_TURRET_NUMBER_3 = 4160,         // Primary Turret Number 3
  PRIMARY_TURRET_NUMBER_4 = 4192,         // Primary Turret Number 4
  PRIMARY_TURRET_NUMBER_5 = 4224,         // Primary Turret Number 5
  PRIMARY_TURRET_NUMBER_6 = 4256,         // Primary Turret Number 6
  PRIMARY_TURRET_NUMBER_7 = 4288,         // Primary Turret Number 7
  PRIMARY_TURRET_NUMBER_8 = 4320,         // Primary Turret Number 8
  PRIMARY_TURRET_NUMBER_9 = 4352,         // Primary Turret Number 9
  PRIMARY_TURRET_NUMBER_10 = 4384,        // Primary Turret Number 10
  PRIMARY_GUN_NUMBER_1 = 4416,            // Primary Gun Number 1
  PRIMARY_GUN_NUMBER_2 = 4448,            // Primary Gun Number 2
  PRIMARY_GUN_NUMBER_3 = 4480,            // Primary Gun Number 3
  PRIMARY_GUN_NUMBER_4 = 4512,            // Primary Gun Number 4
  PRIMARY_GUN_NUMBER_5 = 4544,            // Primary Gun Number 5
  PRIMARY_GUN_NUMBER_6 = 4576,            // Primary Gun Number 6
  PRIMARY_GUN_NUMBER_7 = 4608,            // Primary Gun Number 7
  PRIMARY_GUN_NUMBER_8 = 4640,            // Primary Gun Number 8
  PRIMARY_GUN_NUMBER_9 = 4672,            // Primary Gun Number 9
  PRIMARY_GUN_NUMBER_10 = 4704,           // Primary Gun Number 10
  PRIMARY_LAUNCHER_1 = 4736,              // Primary Launcher 1
  PRIMARY_LAUNCHER_2 = 4768,              // Primary Launcher 2
  PRIMARY_LAUNCHER_3 = 4800,              // Primary Launcher 3
  PRIMARY_LAUNCHER_4 = 4832,              // Primary Launcher 4
  PRIMARY_LAUNCHER_5 = 4864,              // Primary Launcher 5
  PRIMARY_LAUNCHER_6 = 4896,              // Primary Launcher 6
  PRIMARY_LAUNCHER_7 = 4928,              // Primary Launcher 7
  PRIMARY_LAUNCHER_8 = 4960,              // Primary Launcher 8
  PRIMARY_LAUNCHER_9 = 4992,              // Primary Launcher 9
  PRIMARY_LAUNCHER_10 = 5024,             // Primary Launcher 10
  PRIMARY_DEFENSE_SYSTEMS_1 = 5056,       // Primary Defense Systems 1
  PRIMARY_DEFENSE_SYSTEMS_2 = 5088,       // Primary Defense Systems 2
  PRIMARY_DEFENSE_SYSTEMS_3 = 5120,       // Primary Defense Systems 3
  PRIMARY_DEFENSE_SYSTEMS_4 = 5152,       // Primary Defense Systems 4
  PRIMARY_DEFENSE_SYSTEMS_5 = 5184,       // Primary Defense Systems 5
  PRIMARY_DEFENSE_SYSTEMS_6 = 5216,       // Primary Defense Systems 6
  PRIMARY_DEFENSE_SYSTEMS_7 = 5248,       // Primary Defense Systems 7
  PRIMARY_DEFENSE_SYSTEMS_8 = 5280,       // Primary Defense Systems 8
  PRIMARY_DEFENSE_SYSTEMS_9 = 5312,       // Primary Defense Systems 9
  PRIMARY_DEFENSE_SYSTEMS_10 = 5344,      // Primary Defense Systems 10
  PRIMARY_RADAR_1 = 5376,                 // Primary Radar 1
  PRIMARY_RADAR_2 = 5408,                 // Primary Radar 2
  PRIMARY_RADAR_3 = 5440,                 // Primary Radar 3
  PRIMARY_RADAR_4 = 5472,                 // Primary Radar 4
  PRIMARY_RADAR_5 = 5504,                 // Primary Radar 5
  PRIMARY_RADAR_6 = 5536,                 // Primary Radar 6
  PRIMARY_RADAR_7 = 5568,                 // Primary Radar 7
  PRIMARY_RADAR_8 = 5600,                 // Primary Radar 8
  PRIMARY_RADAR_9 = 5632,                 // Primary Radar 9
  PRIMARY_RADAR_10 = 5664,                // Primary Radar 10
  SECONDARY_TURRET_NUMBER_1 = 5696,       // Secondary Turret Number 1
  SECONDARY_TURRET_NUMBER_2 = 5728,       // Secondary Turret Number 2
  SECONDARY_TURRET_NUMBER_3 = 5760,       // Secondary Turret Number 3
  SECONDARY_TURRET_NUMBER_4 = 5792,       // Secondary Turret Number 4
  SECONDARY_TURRET_NUMBER_5 = 5824,       // Secondary Turret Number 5
  SECONDARY_TURRET_NUMBER_6 = 5856,       // Secondary Turret Number 6
  SECONDARY_TURRET_NUMBER_7 = 5888,       // Secondary Turret Number 7
  SECONDARY_TURRET_NUMBER_8 = 5920,       // Secondary Turret Number 8
  SECONDARY_TURRET_NUMBER_9 = 5952,       // Secondary Turret Number 9
  SECONDARY_TURRET_NUMBER_10 = 5984,      // Secondary Turret Number 10
  SECONDARY_GUN_NUMBER_1 = 6016,          // Secondary Gun Number 1
  SECONDARY_GUN_NUMBER_2 = 6048,          // Secondary Gun Number 2
  SECONDARY_GUN_NUMBER_3 = 6080,          // Secondary Gun Number 3
  SECONDARY_GUN_NUMBER_4 = 6112,          // Secondary Gun Number 4
  SECONDARY_GUN_NUMBER_5 = 6144,          // Secondary Gun Number 5
  SECONDARY_GUN_NUMBER_6 = 6176,          // Secondary Gun Number 6
  SECONDARY_GUN_NUMBER_7 = 6208,          // Secondary Gun Number 7
  SECONDARY_GUN_NUMBER_8 = 6240,          // Secondary Gun Number 8
  SECONDARY_GUN_NUMBER_9 = 6272,          // Secondary Gun Number 9
  SECONDARY_GUN_NUMBER_10 = 6304,         // Secondary Gun Number 10
  SECONDARY_LAUNCHER_1 = 6336,            // Secondary Launcher 1
  SECONDARY_LAUNCHER_2 = 6368,            // Secondary Launcher 2
  SECONDARY_LAUNCHER_3 = 6400,            // Secondary Launcher 3
  SECONDARY_LAUNCHER_4 = 6432,            // Secondary Launcher 4
  SECONDARY_LAUNCHER_5 = 6464,            // Secondary Launcher 5
  SECONDARY_LAUNCHER_6 = 6496,            // Secondary Launcher 6
  SECONDARY_LAUNCHER_7 = 6528,            // Secondary Launcher 7
  SECONDARY_LAUNCHER_8 = 6560,            // Secondary Launcher 8
  SECONDARY_LAUNCHER_9 = 6592,            // Secondary Launcher 9
  SECONDARY_LAUNCHER_10 = 6624,           // Secondary Launcher 10
  SECONDARY_DEFENSE_SYSTEMS_1 = 6656,     // Secondary Defense Systems 1
  SECONDARY_DEFENSE_SYSTEMS_2 = 6688,     // Secondary Defense Systems 2
  SECONDARY_DEFENSE_SYSTEMS_3 = 6720,     // Secondary Defense Systems 3
  SECONDARY_DEFENSE_SYSTEMS_4 = 6752,     // Secondary Defense Systems 4
  SECONDARY_DEFENSE_SYSTEMS_5 = 6784,     // Secondary Defense Systems 5
  SECONDARY_DEFENSE_SYSTEMS_6 = 6816,     // Secondary Defense Systems 6
  SECONDARY_DEFENSE_SYSTEMS_7 = 6848,     // Secondary Defense Systems 7
  SECONDARY_DEFENSE_SYSTEMS_8 = 6880,     // Secondary Defense Systems 8
  SECONDARY_DEFENSE_SYSTEMS_9 = 6912,     // Secondary Defense Systems 9
  SECONDARY_DEFENSE_SYSTEMS_10 = 6944,    // Secondary Defense Systems 10
  SECONDARY_RADAR_1 = 6976,               // Secondary Radar 1
  SECONDARY_RADAR_2 = 7008,               // Secondary Radar 2
  SECONDARY_RADAR_3 = 7040,               // Secondary Radar 3
  SECONDARY_RADAR_4 = 7072,               // Secondary Radar 4
  SECONDARY_RADAR_5 = 7104,               // Secondary Radar 5
  SECONDARY_RADAR_6 = 7136,               // Secondary Radar 6
  SECONDARY_RADAR_7 = 7168,               // Secondary Radar 7
  SECONDARY_RADAR_8 = 7200,               // Secondary Radar 8
  SECONDARY_RADAR_9 = 7232,               // Secondary Radar 9
  SECONDARY_RADAR_10 = 7264,              // Secondary Radar 10
  DECK_ELEVATOR_1 = 7296,                 // Deck Elevator #1
  DECK_ELEVATOR_2 = 7328,                 // Deck Elevator #2
  CATAPULT_1 = 7360,                      // Catapult #1
  CATAPULT_2 = 7392,                      // Catapult #2
  JET_BLAST_DEFLECTOR_1 = 7424,           // Jet Blast Deflector #1
  JET_BLAST_DEFLECTOR_2 = 7456,           // Jet Blast Deflector #2
  ARRESTOR_WIRES_1 = 7488,                // Arrestor Wires #1
  ARRESTOR_WIRES_2 = 7520,                // Arrestor Wires #2
  ARRESTOR_WIRES_3 = 7552,                // Arrestor Wires #3
  WING_OR_ROTOR_FOLD = 7584,              // Wing (or Rotor) Fold
  FUSELAGE_FOLD = 7616,                   // Fuselage Fold
  MAIN_CARGO_DOOR = 7648,                 // Main Cargo Door
  CARGO_RAMP = 7680,                      // Cargo Ramp
  AIR_TO_AIR_REFUELING_BOOM = 7712,       // Air-to-Air Refueling Boom
  PRIMARY_AERIAL_REFUELING_RECEPTACLE_DOOR =
      7744,  // Primary Aerial Refueling Receptacle Door
  SECONDARY_AERIAL_REFUELING_RECEPTACLE_DOOR =
      7776,  // Secondary Aerial Refueling Receptacle Door
  AERIAL_REFUELING_RECEPTACLE_LATCH =
      7808,                                 // Aerial Refueling Receptacle Latch
  CARGO_DOOR_1 = 7840,                      // Cargo Door #1
  CARGO_DOOR_2 = 7872,                      // Cargo Door #2
  CARGO_DOOR_3 = 7904,                      // Cargo Door #3
  CARGO_DOOR_4 = 7936,                      // Cargo Door #4
  CARGO_DOOR_5 = 7968,                      // Cargo Door #5
  CARGO_DOOR_6 = 8000,                      // Cargo Door #6
  CARGO_DOOR_7 = 8032,                      // Cargo Door #7
  CARGO_DOOR_8 = 8064,                      // Cargo Door #8
  CARGO_DOOR_9 = 8096,                      // Cargo Door #9
  CARGO_DOOR_10 = 8128,                     // Cargo Door #10
  CENTRE_REFUELLING_DROGUE = 8160,          // Centre Refuelling Drogue
  PORT_REFUELLING_DROGUE = 8192,            // Port Refuelling Drogue
  STARBOARD_REFUELLING_DROGUE = 8224,       // Starboard Refuelling Drogue
  SUBMARINE_ENGINE_EXHAUST_MAST = 8256,     // Submarine Engine Exhaust Mast
  SUBMARINE_MAST_1 = 8288,                  // Submarine Mast #1
  SUBMARINE_MAST_2 = 8320,                  // Submarine Mast #2
  SUBMARINE_MAST_3 = 8352,                  // Submarine Mast #3
  SUBMARINE_MAST_4 = 8384,                  // Submarine Mast #4
  SUBMARINE_MAST_5 = 8416,                  // Submarine Mast #5
  SUBMARINE_MAST_6 = 8448,                  // Submarine Mast #6
  SUBMARINE_MAST_7 = 8480,                  // Submarine Mast #7
  SUBMARINE_MAST_8 = 8512,                  // Submarine Mast #8
  SUBMARINE_MAST_9 = 8544,                  // Submarine Mast #9
  SUBMARINE_MAST_10 = 8576,                 // Submarine Mast #10
  VECTORED_THRUST_NOZZLE = 8608,            // Vectored Thrust Nozzle
  LEFT_DOOR_OF_THE_LEFT_WEAPON_BAY = 8640,  // Left Door of the Left Weapon Bay
  RIGHT_DOOR_OF_THE_LEFT_WEAPON_BAY =
      8672,  // Right Door of the Left Weapon Bay
  LEFT_DOOR_OF_THE_RIGHT_WEAPON_BAY =
      8704,  // Left Door of the Right Weapon Bay
  RIGHT_DOOR_OF_THE_RIGHT_WEAPON_BAY =
      8736,                          // Right Door of the Right Weapon Bay
  GUN_DOOR = 8768,                   // Gun Door
  COUNTERMEASURE_DOOR_LEFT = 8800,   // Countermeasure Door Left
  COUNTERMEASURE_DOOR_RIGHT = 8832,  // Countermeasure Door Right
  HOOK_DOOR_FORWARD = 8864,          // Hook Door Forward
  HOOK_DOOR_AFT = 8896,              // Hook Door Aft
  LIFT_FAN_UPPER_DOOR = 8928,        // Lift Fan Upper Door
  LIFT_FAN_LOWER_DOOR_LEFT = 8960,   // Lift Fan Lower Door Left
  LIFT_FAN_LOWER_DOOR_RIGHT = 8992,  // Lift Fan Lower Door Right
  REFUEL_PROBE_DOOR = 9024,          // Refuel Probe Door
  LEFT_ENGINE_NACELLE = 9056,        // Left Engine Nacelle
  RIGHT_ENGINE_NACELLE = 9088,       // Right Engine Nacelle
  _1ST_LEFT_WHEEL = 9120,            // 1st Left Wheel
  _1ST_RIGHT_WHEEL = 9152,           // 1st Right Wheel
  _2ND_LEFT_WHEEL = 9184,            // 2nd Left Wheel
  _2ND_RIGHT_WHEEL = 9216,           // 2nd Right Wheel
  _3RD_LEFT_WHEEL = 9248,            // 3rd Left Wheel
  _3RD_RIGHT_WHEEL = 9280,           // 3rd Right Wheel
  _4TH_LEFT_WHEEL = 9312,            // 4th Left Wheel
  _4TH_RIGHT_WHEEL = 9344,           // 4th Right Wheel
  _5TH_LEFT_WHEEL = 9376,            // 5th Left Wheel
  _5TH_RIGHT_WHEEL = 9408,           // 5th Right Wheel
  _6TH_LEFT_WHEEL = 9440,            // 6th Left Wheel
  _6TH_RIGHT_WHEEL = 9472,           // 6th Right Wheel
  _7TH_LEFT_WHEEL = 9504,            // 7th Left Wheel
  _7TH_RIGHT_WHEEL = 9536,           // 7th Right Wheel
  _8TH_LEFT_WHEEL = 9568,            // 8th Left Wheel
  _8TH_RIGHT_WHEEL = 9600,           // 8th Right Wheel
  _9TH_LEFT_WHEEL = 9632,            // 9th Left Wheel
  _9TH_RIGHT_WHEEL = 9664,           // 9th Right Wheel
  _10TH_LEFT_WHEEL = 9696,           // 10th Left Wheel
  _10TH_RIGHT_WHEEL = 9728,          // 10th Right Wheel
  REFUELING_PROBE = 9760,            // Refueling Probe
  STEERING_WHEEL = 9792,             // Steering Wheel
  CRANE_BODY = 9824,                 // Crane Body
  CRANE_ARM_1 = 9856,                // Crane Arm 1
  CRANE_ARM_2 = 9888,                // Crane Arm 2
  CRANE_ARM_3 = 9920,                // Crane Arm 3
  CRANE_BOOM = 9952,                 // Crane Boom
  CRANE_HOOK = 9984,                 // Crane Hook
  TRAILER = 10016,                   // Trailer
  ROLLER_LEFT = 10048,               // Roller Left
  ROLLER_RIGHT = 10080,              // Roller Right
  PRIMARY_GUN_RECOIL = 10112,        // Primary Gun Recoil
  SECONDARY_GUN_RECOIL = 10144,      // Secondary Gun Recoil
};

/*
 * Source: uid=60
 */
enum class MunitionDescriptorWarhead : uint16_t {
  OTHER = 0000,                           // Other
  CARGO_VARIABLE_SUBMUNITIONS = 0010,     // Cargo (Variable Submunitions)
  FUEL_AIR_EXPLOSIVE = 0020,              // Fuel/Air Explosive
  GLASS_BEADS = 0030,                     // Glass Beads
  _1_UM = 0031,                           // 1 um
  _5_UM = 0032,                           // 5 um
  _10_UM = 0033,                          // 10 um
  HIGH_EXPLOSIVE_HE = 1000,               // High Explosive (HE)
  HE_PLASTIC = 1100,                      // HE, Plastic
  HE_INCENDIARY = 1200,                   // HE, Incendiary
  HE_FRAGMENTATION = 1300,                // HE, Fragmentation
  HE_ANTI_TANK = 1400,                    // HE, Anti-Tank
  HE_BOMBLETS = 1500,                     // HE, Bomblets
  HE_SHAPED_CHARGE = 1600,                // HE, Shaped Charge
  HE_CONTINUOUS_ROD = 1610,               // HE, Continuous Rod
  HE_TUNGSTEN_BALL = 1615,                // HE, Tungsten Ball
  HE_BLAST_FRAGMENTATION = 1620,          // HE, Blast Fragmentation
  HE_STEERABLE_DARTS_WITH_HE = 1625,      // HE, Steerable Darts with HE
  HE_DARTS = 1630,                        // HE, Darts
  HE_FLECHETTES = 1635,                   // HE, Flechettes
  HE_DIRECTED_FRAGMENTATION = 1640,       // HE, Directed Fragmentation
  HE_SEMI_ARMOR_PIERCING_SAP = 1645,      // HE, Semi-Armor Piercing (SAP)
  HE_SHAPED_CHARGE_FRAGMENTATION = 1650,  // HE, Shaped Charge Fragmentation
  HE_SEMI_ARMOR_PIERCING_FRAGMENTATION =
      1655,                        // HE, Semi-Armor Piercing, Fragmentation
  HE_HOLLOW_CHARGE = 1660,         // HE, Hollow Charge
  HE_DOUBLE_HOLLOW_CHARGE = 1665,  // HE, Double Hollow Charge
  HE_GENERAL_PURPOSE = 1670,       // HE, General Purpose
  HE_BLAST_PENETRATOR = 1675,      // HE, Blast Penetrator
  HE_ROD_PENETRATOR = 1680,        // HE, Rod Penetrator
  HE_ANTI_PERSONNEL = 1685,        // HE, Anti-Personnel
  HE_SHAPED_CHARGE_FRAGMENTATION_INCENDIARY =
      1690,  // HE, Shaped Charge, Fragmentation, Incendiary
  HE_PENETRATOR_BLAST_FRAGMENTATION =
      1695,                       // HE, Penetrator, Blast, Fragmentation
  SMOKE = 2000,                   // Smoke
  WP_WHITE_PHOSPHORUS = 2005,     // WP (White Phosphorus)
  FOGO_FOG_OIL = 2010,            // FOGO (Fog Oil)
  HC_HEXACHLOROETHANE = 2015,     // HC (HexaChloroEthane)
  ILLUMINATION = 3000,            // Illumination
  PRACTICE = 4000,                // Practice
  BLANK = 4001,                   // Blank
  DUMMY = 4002,                   // Dummy
  KINETIC = 5000,                 // Kinetic
  MINES = 6000,                   // Mines
  NUCLEAR = 7000,                 // Nuclear
  NUCLEAR_IMT = 7010,             // Nuclear, IMT
  CHEMICAL_GENERAL = 8000,        // Chemical, General
  CHEMICAL_BLISTER_AGENT = 8100,  // Chemical, Blister Agent
  HD_MUSTARD = 8110,              // HD (Mustard)
  THICKENED_HD_MUSTARD = 8115,    // Thickened HD (Mustard)
  DUSTY_HD_MUSTARD = 8120,        // Dusty HD (Mustard)
  L_LEWISITE = 8125,              // L (Lewisite)
  HN3_NITROGEN_MUSTARD = 8130,    // HN3 (Nitrogen Mustard)
  HL_MUSTARD_LEWISITE = 8135,     // HL (Mustard/Lewisite)
  CX_PHOSGENE_OXIME = 8140,       // CX (Phosgene Oxime)
  DMMP_PHOSPHATE_DIMETHYL_HYDROGEN =
      8145,                      // DMMP (Phosphate Dimethyl Hydrogen)
  DMHP_PHOSPHITE = 8150,         // DMHP (Phosphite)
  DMA_DIMETHYL_ACRYLATE = 8155,  // DMA (Dimethyl Acrylate)
  DEM = 8160,                    // DEM
  PX_P_XLENE = 8165,             // PX (P-xlene)
  CHEMICAL_BLOOD_AGENT = 8200,   // Chemical, Blood Agent
  AC_HCN = 8210,                 // AC (HCN)
  CK_CNCI = 8215,                // CK (CNCI)
  CG_PHOSGENE = 8220,            // CG (Phosgene)
  CHEMICAL_NERVE_AGENT = 8300,   // Chemical, Nerve Agent
  VX = 8310,                     // VX
  THICKENED_VX = 8315,           // Thickened VX
  DUSTY_VX = 8320,               // Dusty VX
  GA_TABUN = 8325,               // GA (Tabun)
  THICKENED_GA_TABUN = 8330,     // Thickened GA (Tabun)
  DUSTY_GA_TABUN = 8335,         // Dusty GA (Tabun)
  GB_SARIN = 8340,               // GB (Sarin)
  THICKENED_GB_SARIN = 8345,     // Thickened GB (Sarin)
  DUSTY_GB_SARIN = 8350,         // Dusty GB (Sarin)
  GD_SOMAN = 8355,               // GD (Soman)
  THICKENED_GD_SOMAN = 8360,     // Thickened GD (Soman)
  DUSTY_GD_SOMAN = 8365,         // Dusty GD (Soman)
  GF = 8370,                     // GF
  THICKENED_GF = 8375,           // Thickened GF
  DUSTY_GF = 8380,               // Dusty GF
  SVX_SOVIET_VX = 8385,          // SVX (Soviet VX)
  BIS = 8410,                    // BIS
  TCP = 8415,                    // TCP
  MS_METHYL_SALICYLATE = 8425,   // MS (Methyl Salicylate)
  TEP = 8430,                    // TEP
  H2O_WATER = 8445,              // H2O (Water)
  TO1_TOXIC_ORGANIC_1 = 8450,    // TO1 (Toxic Organic 1)
  TO2_TOXIC_ORGANIC_2 = 8455,    // TO2 (Toxic Organic 2)
  TO3_TOXIC_ORGANIC_3 = 8460,    // TO3 (Toxic Organic 3)
  SULFUR_HEXAFLUORIDE = 8465,    // Sulfur Hexafluoride
  AA_ACETIC_ACID = 8470,         // AA (Acetic Acid)
  HF_HYDROFLUORIC_ACID = 8475,   // HF (Hydrofluoric Acid)
  BIOLOGICAL = 9000,             // Biological
  BIOLOGICAL_VIRUS = 9100,       // Biological, Virus
  BIOLOGICAL_BACTERIA = 9200,    // Biological, Bacteria
  BIOLOGICAL_RICKETTSIA = 9300,  // Biological, Rickettsia
  BIOLOGICAL_GENETICALLY_MODIFIED_MICRO_ORGANISMS =
      9400,                 // Biological, Genetically Modified Micro-organisms
  BIOLOGICAL_TOXIN = 9500,  // Biological, Toxin
};

/*
 * Source: uid=61
 */
enum class MunitionDescriptorFuse : uint16_t {
  OTHER = 0000,                   // Other
  INTELLIGENT_INFLUENCE = 0010,   // Intelligent Influence
  SENSOR = 0020,                  // Sensor
  SELF_DESTRUCT = 0030,           // Self-destruct
  ULTRA_QUICK = 0040,             // Ultra Quick
  BODY = 0050,                    // Body
  DEEP_INTRUSION = 0060,          // Deep Intrusion
  MULTIFUNCTION = 0100,           // Multifunction
  POINT_DETONATION_PD = 0200,     // Point Detonation (PD)
  BASE_DETONATION_BD = 0300,      // Base Detonation (BD)
  CONTACT = 1000,                 // Contact
  CONTACT_INSTANT_IMPACT = 1100,  // Contact, Instant (Impact)
  CONTACT_DELAYED = 1200,         // Contact, Delayed
  _10_MS_DELAY = 1201,            // 10 ms Delay
  _20_MS_DELAY = 1202,            // 20 ms Delay
  _50_MS_DELAY = 1205,            // 50 ms Delay
  _60_MS_DELAY = 1206,            // 60 ms Delay
  _100_MS_DELAY = 1210,           // 100 ms Delay
  _125_MS_DELAY = 1212,           // 125 ms Delay
  _250_MS_DELAY = 1225,           // 250 ms Delay
  _5_MS_DELAY = 1250,             // 5 ms Delay
  _15_MS_DELAY = 1251,            // 15 ms Delay
  _25_MS_DELAY = 1252,            // 25 ms Delay
  _30_MS_DELAY = 1253,            // 30 ms Delay
  _35_MS_DELAY = 1254,            // 35 ms Delay
  _40_MS_DELAY = 1255,            // 40 ms Delay
  _45_MS_DELAY = 1256,            // 45 ms Delay
  _90_MS_DELAY = 1257,            // 90 ms Delay
  _120_MS_DELAY = 1258,           // 120 ms Delay
  _180_MS_DELAY = 1259,           // 180 ms Delay
  _240_MS_DELAY = 1260,           // 240 ms Delay
  CONTACT_ELECTRONIC_OBLIQUE_CONTACT =
      1300,                         // Contact, Electronic (Oblique Contact)
  CONTACT_GRAZE = 1400,             // Contact, Graze
  CONTACT_CRUSH = 1500,             // Contact, Crush
  CONTACT_HYDROSTATIC = 1600,       // Contact, Hydrostatic
  CONTACT_MECHANICAL = 1700,        // Contact, Mechanical
  CONTACT_CHEMICAL = 1800,          // Contact, Chemical
  CONTACT_PIEZOELECTRIC = 1900,     // Contact, Piezoelectric
  CONTACT_POINT_INITIATING = 1910,  // Contact, Point Initiating
  CONTACT_POINT_INITIATING_BASE_DETONATING =
      1920,                        // Contact, Point Initiating, Base Detonating
  CONTACT_BASE_DETONATING = 1930,  // Contact, Base Detonating
  CONTACT_BALLISTIC_CAP_AND_BASE = 1940,    // Contact, Ballistic Cap and Base
  CONTACT_BASE = 1950,                      // Contact, Base
  CONTACT_NOSE = 1960,                      // Contact, Nose
  CONTACT_FITTED_IN_STANDOFF_PROBE = 1970,  // Contact, Fitted in Standoff Probe
  CONTACT_NON_ALIGNED = 1980,               // Contact, Non-aligned
  TIMED = 2000,                             // Timed
  TIMED_PROGRAMMABLE = 2100,                // Timed, Programmable
  TIMED_BURNOUT = 2200,                     // Timed, Burnout
  TIMED_PYROTECHNIC = 2300,                 // Timed, Pyrotechnic
  TIMED_ELECTRONIC = 2400,                  // Timed, Electronic
  TIMED_BASE_DELAY = 2500,                  // Timed, Base Delay
  TIMED_REINFORCED_NOSE_IMPACT_DELAY =
      2600,                         // Timed, Reinforced Nose Impact Delay
  TIMED_SHORT_DELAY_IMPACT = 2700,  // Timed, Short Delay Impact
  _10_MS_DELAY = 2701,              // 10 ms Delay
  _20_MS_DELAY = 2702,              // 20 ms Delay
  _50_MS_DELAY = 2705,              // 50 ms Delay
  _60_MS_DELAY = 2706,              // 60 ms Delay
  _100_MS_DELAY = 2710,             // 100 ms Delay
  _125_MS_DELAY = 2712,             // 125 ms Delay
  _250_MS_DELAY = 2725,             // 250 ms Delay
  TIMED_NOSE_MOUNTED_VARIABLE_DELAY =
      2800,                               // Timed, Nose Mounted Variable Delay
  TIMED_LONG_DELAY_SIDE = 2900,           // Timed, Long Delay Side
  TIMED_SELECTABLE_DELAY = 2910,          // Timed, Selectable Delay
  TIMED_IMPACT = 2920,                    // Timed, Impact
  TIMED_SEQUENCE = 2930,                  // Timed, Sequence
  PROXIMITY = 3000,                       // Proximity
  PROXIMITY_ACTIVE_LASER = 3100,          // Proximity, Active Laser
  PROXIMITY_MAGNETIC_MAGPOLARITY = 3200,  // Proximity, Magnetic (Magpolarity)
  PROXIMITY_ACTIVE_RADAR_DOPPLER_RADAR =
      3300,  // Proximity, Active Radar (Doppler Radar)
  PROXIMITY_RADIO_FREQUENCY_RF = 3400,  // Proximity, Radio Frequency (RF)
  PROXIMITY_PROGRAMMABLE = 3500,        // Proximity, Programmable
  PROXIMITY_PROGRAMMABLE_PREFRAGMENTED =
      3600,                   // Proximity, Programmable, Prefragmented
  PROXIMITY_INFRARED = 3700,  // Proximity, Infrared
  COMMAND = 4000,             // Command
  COMMAND_ELECTRONIC_REMOTELY_SET = 4100,   // Command, Electronic, Remotely Set
  ALTITUDE = 5000,                          // Altitude
  ALTITUDE_RADIO_ALTIMETER = 5100,          // Altitude, Radio Altimeter
  ALTITUDE_AIR_BURST = 5200,                // Altitude, Air Burst
  DEPTH = 6000,                             // Depth
  ACOUSTIC = 7000,                          // Acoustic
  PRESSURE = 8000,                          // Pressure
  PRESSURE_DELAY = 8010,                    // Pressure, Delay
  INERT = 8100,                             // Inert
  DUMMY = 8110,                             // Dummy
  PRACTICE = 8120,                          // Practice
  PLUG_REPRESENTING = 8130,                 // Plug Representing
  TRAINING = 8150,                          // Training
  PYROTECHNIC = 9000,                       // Pyrotechnic
  PYROTECHNIC_DELAY = 9010,                 // Pyrotechnic, Delay
  ELECTRO_OPTICAL = 9100,                   // Electro-optical
  ELECTROMECHANICAL = 9110,                 // Electromechanical
  ELECTROMECHANICAL_NOSE = 9120,            // Electromechanical, Nose
  STRIKERLESS = 9200,                       // Strikerless
  STRIKERLESS_NOSE_IMPACT = 9210,           // Strikerless, Nose Impact
  STRIKERLESS_COMPRESSION_IGNITION = 9220,  // Strikerless, Compression-Ignition
  COMPRESSION_IGNITION = 9300,              // Compression-Ignition
  COMPRESSION_IGNITION_STRIKERLESS_NOSE_IMPACT =
      9310,           // Compression-Ignition, Strikerless, Nose Impact
  PERCUSSION = 9400,  // Percussion
  PERCUSSION_INSTANTANEOUS = 9410,       // Percussion, Instantaneous
  ELECTRONIC = 9500,                     // Electronic
  ELECTRONIC_INTERNALLY_MOUNTED = 9510,  // Electronic, Internally Mounted
  ELECTRONIC_RANGE_SETTING = 9520,       // Electronic, Range Setting
  ELECTRONIC_PROGRAMMED = 9530,          // Electronic, Programmed
  MECHANICAL = 9600,                     // Mechanical
  MECHANICAL_NOSE = 9610,                // Mechanical, Nose
  MECHANICAL_TAIL = 9620,                // Mechanical, Tail
};

/*
 * Source: uid=62
 */
enum class DetonationResult : uint8_t {
  OTHER = 0,                        // Other
  ENTITY_IMPACT = 1,                // Entity Impact
  ENTITY_PROXIMATE_DETONATION = 2,  // Entity Proximate Detonation
  GROUND_IMPACT = 3,                // Ground Impact
  GROUND_PROXIMATE_DETONATION = 4,  // Ground Proximate Detonation
  DETONATION = 5,                   // Detonation
  NONE_OR_NO_DETONATION_DUD = 6,    // None or No Detonation (Dud)
  HE_HIT_SMALL = 7,                 // HE hit, small
  HE_HIT_MEDIUM = 8,                // HE hit, medium
  HE_HIT_LARGE = 9,                 // HE hit, large
  ARMOR_PIERCING_HIT = 10,          // Armor-piercing hit
  DIRT_BLAST_SMALL = 11,            // Dirt blast, small
  DIRT_BLAST_MEDIUM = 12,           // Dirt blast, medium
  DIRT_BLAST_LARGE = 13,            // Dirt blast, large
  WATER_BLAST_SMALL = 14,           // Water blast, small
  WATER_BLAST_MEDIUM = 15,          // Water blast, medium
  WATER_BLAST_LARGE = 16,           // Water blast, large
  AIR_HIT = 17,                     // Air hit
  BUILDING_HIT_SMALL = 18,          // Building hit, small
  BUILDING_HIT_MEDIUM = 19,         // Building hit, medium
  BUILDING_HIT_LARGE = 20,          // Building hit, large
  MINE_CLEARING_LINE_CHARGE = 21,   // Mine-clearing line charge
  ENVIRONMENT_OBJECT_IMPACT = 22,   // Environment object impact
  ENVIRONMENT_OBJECT_PROXIMATE_DETONATION =
      23,                          // Environment object proximate detonation
  WATER_IMPACT = 24,               // Water Impact
  AIR_BURST = 25,                  // Air Burst
  KILL_WITH_FRAGMENT_TYPE_1 = 26,  // Kill with fragment type 1
  KILL_WITH_FRAGMENT_TYPE_2 = 27,  // Kill with fragment type 2
  KILL_WITH_FRAGMENT_TYPE_3 = 28,  // Kill with fragment type 3
  KILL_WITH_FRAGMENT_TYPE_1_AFTER_FLY_OUT_FAILURE =
      29,  // Kill with fragment type 1 after fly-out failure
  KILL_WITH_FRAGMENT_TYPE_2_AFTER_FLY_OUT_FAILURE =
      30,  // Kill with fragment type 2 after fly-out failure
  MISS_DUE_TO_FLY_OUT_FAILURE = 31,   // Miss due to fly-out failure
  MISS_DUE_TO_END_GAME_FAILURE = 32,  // Miss due to end-game failure
  MISS_DUE_TO_FLY_OUT_AND_END_GAME_FAILURE =
      33,  // Miss due to fly-out and end-game failure
};

/*
 * Source: uid=63
 */
enum class ServiceRequestServiceTypeRequested : uint8_t {
  OTHER = 0,                           // Other
  RESUPPLY = 1,                        // Resupply
  REPAIR = 2,                          // Repair
  AERIAL_REFUELING_HIGH_FIDELITY = 3,  // Aerial Refueling High Fidelity
  AERIAL_REFUELING_LOW_FIDELITY = 4,   // Aerial Refueling Low Fidelity
};

/*
 * Source: uid=64
 */
enum class RepairCompleteRepair : uint16_t {
  NO_REPAIRS_PERFORMED = 0,                 // no repairs performed
  ALL_REQUESTED_REPAIRS_PERFORMED = 1,      // all requested repairs performed
  MOTOR_ENGINE = 10,                        // motor / engine
  STARTER = 20,                             // starter
  ALTERNATOR = 30,                          // alternator
  GENERATOR = 40,                           // generator
  BATTERY = 50,                             // battery
  ENGINE_COOLANT_LEAK = 60,                 // engine-coolant leak
  FUEL_FILTER = 70,                         // fuel filter
  TRANSMISSION_OIL_LEAK = 80,               // transmission-oil leak
  ENGINE_OIL_LEAK = 90,                     // engine-oil leak
  PUMPS = 100,                              // pumps
  FILTERS = 110,                            // filters
  TRANSMISSION = 120,                       // transmission
  BRAKES = 130,                             // brakes
  SUSPENSION_SYSTEM = 140,                  // suspension system
  OIL_FILTER = 150,                         // oil filter
  HULL = 1000,                              // hull
  AIRFRAME = 1010,                          // airframe
  TRUCK_BODY = 1020,                        // truck body
  TANK_BODY = 1030,                         // tank body
  TRAILER_BODY = 1040,                      // trailer body
  TURRET = 1050,                            // turret
  PROPELLER = 1500,                         // propeller
  FILTERS = 1520,                           // filters
  WHEELS = 1540,                            // wheels
  TIRE = 1550,                              // tire
  TRACK = 1560,                             // track
  GUN_ELEVATION_DRIVE = 2000,               // gun elevation drive
  GUN_STABILIZATION_SYSTEM = 2010,          // gun stabilization system
  GUNNER_S_PRIMARY_SIGHT_GPS = 2020,        // gunner's primary sight (GPS)
  COMMANDER_S_EXTENSION_TO_THE_GPS = 2030,  // commander's extension to the GPS
  LOADING_MECHANISM = 2040,                 // loading mechanism
  GUNNER_S_AUXILIARY_SIGHT = 2050,          // gunner's auxiliary sight
  GUNNER_S_CONTROL_PANEL = 2060,            // gunner's control panel
  GUNNER_S_CONTROL_ASSEMBLY_HANDLE_S =
      2070,  // gunner's control assembly handle(s)
  COMMANDER_S_CONTROL_HANDLES_ASSEMBLY =
      2090,                           // commander's control handles/assembly
  COMMANDER_S_WEAPON_STATION = 2100,  // commander's weapon station
  COMMANDER_S_INDEPENDENT_THERMAL_VIEWER_CITV =
      2110,                    // commander's independent thermal viewer (CITV)
  GENERAL_WEAPONS = 2120,      // general weapons
  FUEL_TRANSFER_PUMP = 4000,   // fuel transfer pump
  FUEL_LINES = 4010,           // fuel lines
  GAUGES = 4020,               // gauges
  GENERAL_FUEL_SYSTEM = 4030,  // general fuel system
  ELECTRONIC_WARFARE_SYSTEMS = 4500,  // electronic warfare systems
  DETECTION_SYSTEMS = 4600,           // detection systems
  DETECTION_SYSTEMS_RADIO_FREQUENCY =
      4610,                            // detection systems, radio frequency
  DETECTION_SYSTEMS_MICROWAVE = 4620,  // detection systems, microwave
  DETECTION_SYSTEMS_INFRARED = 4630,   // detection systems, infrared
  DETECTION_SYSTEMS_LASER = 4640,      // detection systems, laser
  RANGE_FINDERS = 4700,                // range finders
  RANGE_ONLY_RADAR = 4710,             // range-only radar
  LASER_RANGE_FINDER = 4720,           // laser range finder
  ELECTRONIC_SYSTEMS = 4800,           // electronic systems
  ELECTRONICS_SYSTEMS_RADIO_FREQUENCY =
      4810,                              // electronics systems, radio frequency
  ELECTRONICS_SYSTEMS_MICROWAVE = 4820,  // electronics systems, microwave
  ELECTRONICS_SYSTEMS_INFRARED = 4830,   // electronics systems, infrared
  ELECTRONICS_SYSTEMS_LASER = 4840,      // electronics systems, laser
  RADIOS = 5000,                         // radios
  COMMUNICATION_SYSTEMS = 5010,          // communication systems
  INTERCOMS = 5100,                      // intercoms
  ENCODERS = 5200,                       // encoders
  ENCRYPTION_DEVICES = 5250,             // encryption devices
  DECODERS = 5300,                       // decoders
  DECRYPTION_DEVICES = 5350,             // decryption devices
  COMPUTERS = 5500,                      // computers
  NAVIGATION_AND_CONTROL_SYSTEMS = 6000,  // navigation and control systems
  FIRE_CONTROL_SYSTEMS = 6500,            // fire control systems
  AIR_SUPPLY = 8000,                      // air supply
  FILTERS = 8010,                         // filters
  WATER_SUPPLY = 8020,                    // water supply
  REFRIGERATION_SYSTEM = 8030,            // refrigeration system
  CHEMICAL_BIOLOGICAL_AND_RADIOLOGICAL_PROTECTION =
      8040,  // chemical, biological, and radiological protection
  WATER_WASH_DOWN_SYSTEMS = 8050,  // water wash down systems
  DECONTAMINATION_SYSTEMS = 8060,  // decontamination systems
  WATER_SUPPLY = 9000,             // water supply
  COOLING_SYSTEM = 9010,           // cooling system
  WINCHES = 9020,                  // winches
  CATAPULTS = 9030,                // catapults
  CRANES = 9040,                   // cranes
  LAUNCHERS = 9050,                // launchers
  LIFE_BOATS = 10000,              // life boats
  LANDING_CRAFT = 10010,           // landing craft
  EJECTION_SEATS = 10020,          // ejection seats
};

/*
 * Source: uid=65
 */
enum class RepairResponseRepairResult : uint8_t {
  OTHER = 0,                             // other
  REPAIR_ENDED = 1,                      // repair ended
  INVALID_REPAIR = 2,                    // invalid repair
  REPAIR_INTERRUPTED = 3,                // repair interrupted
  SERVICE_CANCELED_BY_THE_SUPPLIER = 4,  // service canceled by the supplier
};

/*
 * Source: uid=66
 */
enum class VariableRecordTypes : uint32_t {
  ENTITY_ID_LIST = 1,  // Entity ID List
  DDCP_JOIN_TRANSACTION_JOIN_REQUEST_MESSAGE =
      1001,  // DDCP Join Transaction Join Request Message
  DDCP_SET_PLAYBACK_WINDOW_TRANSACTION_SET_PLAYBACK_WINDOW_REQUEST_MESSAGE =
      1002,  // DDCP Set Playback Window Transaction Set Playback Window Request
             // Message
  DDCP_LOAD_MISSION_RECORDING_TRANSACTION_LOAD_MISSION_RECORDING_REQUEST_MESSAGE =
      1003,  // DDCP Load Mission Recording Transaction Load Mission Recording
             // Request Message
  DDCP_CUE_TRANSACTION_CUE_REQUEST_MESSAGE =
      1004,  // DDCP Cue Transaction Cue Request Message
  DDCP_PLAY_TRANSACTION_PLAY_REQUEST_MESSAGE =
      1005,  // DDCP Play Transaction Play Request Message
  DDCP_STOP_TRANSACTION_STOP_REQUEST_MESSAGE =
      1006,  // DDCP Stop Transaction Stop Request Message
  DDCP_PAUSE_TRANSACTION_PAUSE_REQUEST_MESSAGE =
      1007,  // DDCP Pause Transaction Pause Request Message
  DDCP_END_TRANSACTION_END_REQUEST_MESSAGE =
      1009,  // DDCP End Transaction End Request Message
  DDCP_JOIN_RESPONSE_MESSAGE = 1051,    // DDCP Join Response Message
  DDCP_REQUEST_RECEIPT_MESSAGE = 1052,  // DDCP Request Receipt Message
  DDCP_PLAYBACK_WINDOW_CONFIRMED_MESSAGE =
      1053,  // DDCP Playback Window Confirmed Message
  DDCP_MISSION_RECORDING_LOADED_MESSAGE =
      1054,                           // DDCP Mission Recording Loaded Message
  DDCP_CUE_CONFIRMED_MESSAGE = 1055,  // DDCP Cue Confirmed Message
  DDCP_TIME_TO_COMPLETE_MESSAGE = 1056,   // DDCP Time to Complete Message
  DDCP_PLAY_COMMENCED_MESSAGE = 1057,     // DDCP Play Commenced Message
  DDCP_STOP_CONFIRMED_MESSAGE = 1058,     // DDCP Stop Confirmed Message
  DDCP_PAUSE_CONFIRMED_MESSAGE = 1059,    // DDCP Pause Confirmed Message
  DDCP_END_RESPONSE_MESSAGE = 1061,       // DDCP End Response Message
  DDCP_MASTER_ANNOUNCE_MESSAGE = 1111,    // DDCP Master Announce Message
  DDCP_DEVICE_ANNOUNCE_MESSAGE = 1112,    // DDCP Device Announce Message
  DDCP_DEVICE_EXIT_MESSAGE = 1114,        // DDCP Device Exit Message
  DDCP_DEVICE_HEARTBEAT_MESSAGE = 1115,   // DDCP Device Heartbeat Message
  DDCP_MASTER_TIME_SYNC_MESSAGE = 1116,   // DDCP Master Time Sync Message
  DDCP_ERROR_MESSAGE = 1118,              // DDCP Error Message
  DDCP_MASTER_STOP_SYNC_MESSAGE = 1119,   // DDCP Master Stop Sync Message
  DDCP_MASTER_TRANSITION_MESSAGE = 1120,  // DDCP Master Transition Message
  MISSION_TIME = 1200,                    // Mission Time
  HIGH_FIDELITY_HAVE_QUICK_SATURN_RADIO =
      3000,  // High Fidelity HAVE QUICK/SATURN Radio
  BLANKING_SECTOR_ATTRIBUTE_RECORD = 3500,  // Blanking Sector attribute record
  ANGLE_DECEPTION_ATTRIBUTE_RECORD = 3501,  // Angle Deception attribute record
  FALSE_TARGETS_ATTRIBUTE_RECORD = 3502,    // False Targets attribute record
  DE_PRECISION_AIMPOINT_RECORD = 4000,      // DE Precision Aimpoint record
  DE_AREA_AIMPOINT_RECORD = 4001,           // DE Area Aimpoint record
  DIRECTED_ENERGY_DAMAGE_DESCRIPTION_RECORD =
      4500,               // Directed Energy Damage Description record
  CRYPTO_CONTROL = 5000,  // Crypto Control
  MODE_5_S_TRANSPONDER_LOCATION = 5001,  // Mode 5/S Transponder Location
  MODE_5_S_TRANSPONDER_LOCATION_ERROR =
      5002,  // Mode 5/S Transponder Location Error
  SQUITTER_AIRBORNE_POSITION_REPORT =
      5003,  // Squitter Airborne Position Report
  SQUITTER_AIRBORNE_VELOCITY_REPORT =
      5004,                                 // Squitter Airborne Velocity Report
  SQUITTER_SURFACE_POSITION_REPORT = 5005,  // Squitter Surface Position Report
  SQUITTER_IDENTIFICATION_REPORT = 5006,    // Squitter Identification Report
  GICB = 5007,                              // GICB
  SQUITTER_EVENT_DRIVEN_REPORT = 5008,      // Squitter Event-Driven Report
  ANTENNA_LOCATION = 5009,                  // Antenna Location
  BASIC_INTERACTIVE = 5010,                 // Basic Interactive
  INTERACTIVE_MODE_4_REPLY = 5011,          // Interactive Mode 4 Reply
  INTERACTIVE_MODE_5_REPLY = 5012,          // Interactive Mode 5 Reply
  INTERACTIVE_BASIC_MODE_5 = 5013,          // Interactive Basic Mode 5
  INTERACTIVE_BASIC_MODE_S = 5014,          // Interactive Basic Mode S
  IO_EFFECT = 5500,                         // IO Effect
  IO_COMMUNICATIONS_NODE = 5501,            // IO Communications Node
  IDENTIFICATION = 10000,                   // Identification
  TRAINER_INITIAL_CONDITIONS_FILENAME =
      10010,  // Trainer Initial Conditions Filename
  INCREMENT_3_1_MISSION_DATA_LOAD_NAME =
      10020,  // Increment 3.1 Mission Data Load Name
  INCREMENT_2_MISSION_DATA_LOAD_NAME =
      10030,                            // Increment 2 Mission Data Load Name
  SET_MARKPOINT_COMMAND = 10110,        // Set Markpoint Command
  MARKPOINT_ID = 10115,                 // Markpoint ID
  REACTION_LEVEL = 10140,               // Reaction Level
  WEAPON_RELOAD = 10150,                // Weapon Reload
  CES_ENTITY_SET_CLEAR_STATUS = 10157,  // CES Entity Set / Clear Status
  ACTIVATE_ENTITY = 10160,              // Activate Entity
  DISENGAGE_REENGAGE = 10170,           // Disengage / Reengage
  FUEL_FREEZE = 10190,                  // Fuel Freeze
  FIRE_LAUNCH_DISPENSE = 10250,         // Fire Launch Dispense
  TARGET_ASSIGNMENT = 10254,            // Target Assignment
  CIC_ENABLE = 10256,                   // CIC Enable
  SHOOT_INHIBIT = 10258,                // Shoot Inhibit
  POSTURE = 10259,                      // Posture
  JAMMER_STATE = 10262,                 // Jammer State
  JAMMER_TYPE = 10263,                  // Jammer Type
  DYNAMIC_TARGETING = 10264,            // Dynamic Targeting
  MANUAL_JAMMING_ON_OVERRIDE = 10267,   // Manual Jamming On Override
  SOJ_AXIS = 10268,                     // SOJ Axis
  EMITTER_OVERRIDE = 10280,             // Emitter Override
  SHIELDS = 10290,                      // Shields
  CRASH_OVERRIDE = 10300,               // Crash Override
  STOP_BUZZER = 10306,                  // Stop Buzzer
  TARGET_LASING_ON_OFF = 10307,         // Target Lasing - On / Off
  TARGET_LASING_LASER_CODE = 10308,     // Target Lasing - Laser Code
  POWER_PLANT = 10310,                  // Power Plant
  TACTICAL_LIGHTING_ON_OFF_CONTROL_LIGHT_CONTROL =
      10311,  // Tactical Lighting On / Off Control - Light Control
  TACTICAL_LIGHTING_BLINKER_CONTROL_BLINKER_VALUE =
      10312,  // Tactical Lighting Blinker Control - Blinker Value
  TACTICAL_LIGHTING_ON_OFF_CONTROL_LIGHT_CONTROL_TYPE =
      10313,  // Tactical Lighting On / Off Control - Light Control Type
  PARK_VEHICLE = 10314,                 // Park Vehicle
  SIGNALING_ON_OFF = 10315,             // Signaling On / Off
  SIGNALING_DEVICE = 10316,             // Signaling Device
  OWNSHIP_ID = 10400,                   // Ownship ID
  STATE_CHANGE = 10600,                 // State Change
  ENTITY_TYPE = 11000,                  // Entity Type
  CONCATENATED = 11100,                 // Concatenated
  KIND = 11110,                         // Kind
  DOMAIN = 11120,                       // Domain
  COUNTRY = 11130,                      // Country
  CATEGORY = 11140,                     // Category
  SUBCATEGORY = 11150,                  // Subcategory
  SPECIFIC = 11160,                     // Specific
  EXTRA = 11170,                        // Extra
  FORCE_ID = 11180,                     // Force ID
  FORCE_ID = 11200,                     // Force ID
  DESCRIPTION = 11300,                  // Description
  TANKER_BOOM_CONTROL = 11500,          // Tanker Boom Control
  AIRPORT_LIGHTS = 11501,               // Airport Lights
  WEATHER_POST = 11502,                 // Weather Post
  LOCALIZER_AND_GLIDESLOPE = 11503,     // Localizer and GlideSlope
  TACAN_NAVAIDS = 11504,                // TACAN NavAids
  ALTERNATIVE_ENTITY_TYPE = 12000,      // Alternative Entity Type
  KIND = 12110,                         // Kind
  DOMAIN = 12120,                       // Domain
  COUNTRY = 12130,                      // Country
  CATEGORY = 12140,                     // Category
  SUBCATEGORY = 12150,                  // Subcategory
  SPECIFIC = 12160,                     // Specific
  EXTRA = 12170,                        // Extra
  DESCRIPTION = 12300,                  // Description
  ENTITY_MARKING = 13000,               // Entity Marking
  ENTITY_MARKING_CHARACTERS = 13100,    // Entity Marking Characters
  CREW_ID = 13200,                      // Crew ID
  TASK_ORGANIZATION = 14000,            // Task Organization
  REGIMENT_NAME = 14200,                // Regiment Name
  BATTALION_NAME = 14300,               // Battalion Name
  COMPANY_NAME = 14400,                 // Company Name
  PLATOON_NAME = 14500,                 // Platoon Name
  SQUAD_NAME = 14520,                   // Squad Name
  TEAM_NAME = 14540,                    // Team Name
  BUMPER_NUMBER = 14600,                // Bumper Number
  VEHICLE_NUMBER = 14700,               // Vehicle Number
  UNIT_NUMBER = 14800,                  // Unit Number
  DIS_IDENTITY = 15000,                 // DIS Identity
  DIS_SITE_ID = 15100,                  // DIS Site ID
  DIS_HOST_ID = 15200,                  // DIS Host ID
  DIS_ENTITY_ID = 15300,                // DIS Entity ID
  MOUNT_INTENT = 15400,                 // Mount Intent
  TETHER_UNTHETHER_COMMAND_ID = 15500,  // Tether-Unthether Command ID
  TELEPORT_ENTITY_DATA_RECORD = 15510,  // Teleport Entity Data Record
  DIS_AGGREGATE_ID_SET_IF_COMMUNICATION_TO_AGGREGATE =
      15600,  // DIS Aggregate ID (Set if communication to aggregate)
  OWNERSHIP_STATUS = 15800,                // Ownership Status
  RECONSTITUTE = 19177,                    // Reconstitute
  LOADS = 20000,                           // Loads
  CREW_MEMBERS = 21000,                    // Crew Members
  CREW_MEMBER_ID = 21100,                  // Crew Member ID
  HEALTH = 21200,                          // Health
  JOB_ASSIGNMENT = 21300,                  // Job Assignment
  FUEL = 23000,                            // Fuel
  QUANTITY = 23100,                        // Quantity
  QUANTITY = 23105,                        // Quantity
  AMMUNITION = 24000,                      // Ammunition
  _120_MM_HEAT_QUANTITY = 24001,           // 120-mm HEAT, quantity
  _120_MM_SABOT_QUANTITY = 24002,          // 120-mm SABOT, quantity
  _12_7_MM_M8_QUANTITY = 24003,            // 12.7-mm M8, quantity
  _12_7_MM_M20_QUANTITY = 24004,           // 12.7-mm M20, quantity
  _7_62_MM_M62_QUANTITY = 24005,           // 7.62-mm M62, quantity
  M250_UKL8A1_QUANTITY = 24006,            // M250 UKL8A1, quantity
  M250_UKL8A3_QUANTITY = 24007,            // M250 UKL8A3, quantity
  _7_62_MM_M80_QUANTITY = 24008,           // 7.62-mm M80, quantity
  _12_7_MM_QUANTITY = 24009,               // 12.7-mm, quantity
  _7_62_MM_QUANTITY = 24010,               // 7.62-mm, quantity
  MINES_QUANTITY = 24060,                  // Mines, quantity
  TYPE = 24100,                            // Type
  KIND = 24110,                            // Kind
  DOMAIN = 24120,                          // Domain
  COUNTRY = 24130,                         // Country
  CATEGORY = 24140,                        // Category
  SUBCATEGORY = 24150,                     // Subcategory
  EXTRA = 24160,                           // Extra
  DESCRIPTION = 24300,                     // Description
  CARGO = 25000,                           // Cargo
  VEHICLE_MASS = 26000,                    // Vehicle Mass
  SUPPLY_QUANTITY = 27000,                 // Supply Quantity
  ARMAMENT = 28000,                        // Armament
  STATUS = 30000,                          // Status
  ACTIVATE_ENTITY = 30010,                 // Activate entity
  SUBSCRIPTION_STATE = 30100,              // Subscription State
  ROUND_TRIP_TIME_DELAY = 30300,           // Round trip time delay
  TADIL_J_MESSAGE_COUNT_LABEL_0 = 30400,   // TADIL J message count (label 0)
  TADIL_J_MESSAGE_COUNT_LABEL_1 = 30401,   // TADIL J message count (label 1)
  TADIL_J_MESSAGE_COUNT_LABEL_2 = 30402,   // TADIL J message count (label 2)
  TADIL_J_MESSAGE_COUNT_LABEL_3 = 30403,   // TADIL J message count (label 3)
  TADIL_J_MESSAGE_COUNT_LABEL_4 = 30404,   // TADIL J message count (label 4)
  TADIL_J_MESSAGE_COUNT_LABEL_5 = 30405,   // TADIL J message count (label 5)
  TADIL_J_MESSAGE_COUNT_LABEL_6 = 30406,   // TADIL J message count (label 6)
  TADIL_J_MESSAGE_COUNT_LABEL_7 = 30407,   // TADIL J message count (label 7)
  TADIL_J_MESSAGE_COUNT_LABEL_8 = 30408,   // TADIL J message count (label 8)
  TADIL_J_MESSAGE_COUNT_LABEL_9 = 30409,   // TADIL J message count (label 9)
  TADIL_J_MESSAGE_COUNT_LABEL_10 = 30410,  // TADIL J message count (label 10)
  TADIL_J_MESSAGE_COUNT_LABEL_11 = 30411,  // TADIL J message count (label 11)
  TADIL_J_MESSAGE_COUNT_LABEL_12 = 30412,  // TADIL J message count (label 12)
  TADIL_J_MESSAGE_COUNT_LABEL_13 = 30413,  // TADIL J message count (label 13)
  TADIL_J_MESSAGE_COUNT_LABEL_14 = 30414,  // TADIL J message count (label 14)
  TADIL_J_MESSAGE_COUNT_LABEL_15 = 30415,  // TADIL J message count (label 15)
  TADIL_J_MESSAGE_COUNT_LABEL_16 = 30416,  // TADIL J message count (label 16)
  TADIL_J_MESSAGE_COUNT_LABEL_17 = 30417,  // TADIL J message count (label 17)
  TADIL_J_MESSAGE_COUNT_LABEL_18 = 30418,  // TADIL J message count (label 18)
  TADIL_J_MESSAGE_COUNT_LABEL_19 = 30419,  // TADIL J message count (label 19)
  TADIL_J_MESSAGE_COUNT_LABEL_20 = 30420,  // TADIL J message count (label 20)
  TADIL_J_MESSAGE_COUNT_LABEL_21 = 30421,  // TADIL J message count (label 21)
  TADIL_J_MESSAGE_COUNT_LABEL_22 = 30422,  // TADIL J message count (label 22)
  TADIL_J_MESSAGE_COUNT_LABEL_23 = 30423,  // TADIL J message count (label 23)
  TADIL_J_MESSAGE_COUNT_LABEL_24 = 30424,  // TADIL J message count (label 24)
  TADIL_J_MESSAGE_COUNT_LABEL_25 = 30425,  // TADIL J message count (label 25)
  TADIL_J_MESSAGE_COUNT_LABEL_26 = 30426,  // TADIL J message count (label 26)
  TADIL_J_MESSAGE_COUNT_LABEL_27 = 30427,  // TADIL J message count (label 27)
  TADIL_J_MESSAGE_COUNT_LABEL_28 = 30428,  // TADIL J message count (label 28)
  TADIL_J_MESSAGE_COUNT_LABEL_29 = 30429,  // TADIL J message count (label 29)
  TADIL_J_MESSAGE_COUNT_LABEL_30 = 30430,  // TADIL J message count (label 30)
  TADIL_J_MESSAGE_COUNT_LABEL_31 = 30431,  // TADIL J message count (label 31)
  POSITION = 31000,                        // Position
  ROUTE_WAYPOINT_TYPE = 31010,             // Route (Waypoint) type
  MILGRID10 = 31100,                       // MilGrid10
  GEOCENTRIC_COORDINATES = 31200,          // Geocentric Coordinates
  X = 31210,                               // X
  Y = 31220,                               // Y
  Z = 31230,                               // Z
  LATITUDE = 31300,                        // Latitude
  LONGITUDE = 31400,                       // Longitude
  LINE_OF_SIGHT = 31500,                   // Line of Sight
  X = 31510,                               // X
  Y = 31520,                               // Y
  Z = 31530,                               // Z
  ALTITUDE = 31600,                        // Altitude
  DESTINATION_LATITUDE = 31700,            // Destination Latitude
  DESTINATION_LONGITUDE = 31800,           // Destination Longitude
  DESTINATION_ALTITUDE = 31900,            // Destination Altitude
  ORIENTATION = 32000,                     // Orientation
  HULL_HEADING_ANGLE = 32100,              // Hull Heading Angle
  HULL_PITCH_ANGLE = 32200,                // Hull Pitch Angle
  ROLL_ANGLE = 32300,                      // Roll Angle
  X = 32500,                               // X
  Y = 32600,                               // Y
  Z = 32700,                               // Z
  APPEARANCE = 33000,                      // Appearance
  AMBIENT_LIGHTING = 33100,                // Ambient Lighting
  LIGHTS = 33101,                          // Lights
  PAINT_SCHEME = 33200,                    // Paint Scheme
  SMOKE = 33300,                           // Smoke
  TRAILING_EFFECTS = 33400,                // Trailing Effects
  FLAMING = 33500,                         // Flaming
  MARKING = 33600,                         // Marking
  MINE_PLOWS_ATTACHED = 33710,             // Mine Plows Attached
  MINE_ROLLERS_ATTACHED = 33720,           // Mine Rollers Attached
  TANK_TURRET_AZIMUTH = 33730,             // Tank Turret Azimuth
  FAILURES_AND_MALFUNCTIONS = 34000,       // Failures and Malfunctions
  AGE = 34100,                             // Age
  KILOMETERS = 34110,                      // Kilometers
  DAMAGE = 35000,                          // Damage
  CAUSE = 35050,                           // Cause
  MOBILITY_KILL = 35100,                   // Mobility Kill
  FIRE_POWER_KILL = 35200,                 // Fire-Power Kill
  PERSONNEL_CASUALTIES = 35300,            // Personnel Casualties
  VELOCITY = 36000,                        // Velocity
  X_VELOCITY = 36100,                      // X-velocity
  Y_VELOCITY = 36200,                      // Y-velocity
  Z_VELOCITY = 36300,                      // Z-velocity
  SPEED = 36400,                           // Speed
  ACCELERATION = 37000,                    // Acceleration
  X_ACCELERATION = 37100,                  // X-acceleration
  Y_ACCELERATION = 37200,                  // Y-acceleration
  Z_ACCELERATION = 37300,                  // Z-acceleration
  ENGINE_STATUS = 38100,                   // Engine Status
  PRIMARY_TARGET_LINE_PTL = 39000,         // Primary Target Line (PTL)
  EXERCISE = 40000,                        // Exercise
  EXERCISE_STATE = 40010,                  // Exercise State
  RESTART_REFRESH = 40015,                 // Restart/Refresh
  AFATDS_FILE_NAME = 40020,                // AFATDS File Name
  TERRAIN_DATABASE = 41000,                // Terrain Database
  MISSIONS = 42000,                        // Missions
  MISSION_ID = 42100,                      // Mission ID
  MISSION_TYPE = 42200,                    // Mission Type
  MISSION_REQUEST_TIME_STAMP = 42300,      // Mission Request Time Stamp
  EXERCISE_DESCRIPTION = 43000,            // Exercise Description
  NAME = 43100,                            // Name
  ENTITIES = 43200,                        // Entities
  VERSION = 43300,                         // Version
  GUISE_MODE = 43410,                      // Guise Mode
  SIMULATION_APPLICATION_ACTIVE_STATUS =
      43420,  // Simulation Application Active Status
  SIMULATION_APPLICATION_ROLE_RECORD =
      43430,                             // Simulation Application Role Record
  SIMULATION_APPLICATION_STATE = 43440,  // Simulation Application State
  VISUAL_OUTPUT_MODE = 44000,            // Visual Output Mode
  SIMULATION_MANAGER_ROLE = 44100,       // Simulation Manager Role
  SIMULATION_MANAGER_SITE_ID = 44110,    // Simulation Manager Site ID
  SIMULATION_MANAGER_APPLIC_ID = 44120,  // Simulation Manager Applic. ID
  SIMULATION_MANAGER_ENTITY_ID = 44130,  // Simulation Manager Entity ID
  SIMULATION_MANAGER_ACTIVE_STATUS = 44140,  // Simulation Manager Active Status
  AFTER_ACTIVE_REVIEW_ROLE = 44200,          // After Active Review Role
  AFTER_ACTIVE_REVIEW_SITE_ID = 44210,       // After Active Review Site ID
  AFTER_ACTIVE_APPLIC_ID = 44220,            // After Active Applic. ID
  AFTER_ACTIVE_REVIEW_ENTITY_ID = 44230,     // After Active Review Entity ID
  AFTER_ACTIVE_REVIEW_ACTIVE_STATUS =
      44240,                              // After Active Review Active Status
  EXERCISE_LOGGER_ROLE = 44300,           // Exercise Logger Role
  EXERCISE_LOGGER_SITE_ID = 44310,        // Exercise Logger Site ID
  EXERCISE_LOGGER_APPLIC_ID = 44320,      // Exercise Logger Applic. ID
  EXERCISE_ENTITY_ID = 44330,             // Exercise Entity ID
  EXERCISE_LOGGER_ACTIVE_STATUS = 44340,  // Exercise Logger Active Status
  SYNTHETIC_ENVIRONMENT_MANAGER_ROLE =
      44400,  // Synthetic Environment Manager Role
  SYNTHETIC_ENVIRONMENT_MANAGER_SITE_ID =
      44410,  // Synthetic Environment Manager Site ID
  SYNTHETIC_ENVIRONMENT_MANAGER_APPLIC_ID =
      44420,  // Synthetic Environment Manager Applic. ID
  SYNTHETIC_ENVIRONMENT_MANAGER_ENTITY_ID =
      44430,  // Synthetic Environment Manager Entity ID
  SYNTHETIC_ENVIRONMENT_MANAGER_ACTIVE_STATUS =
      44440,  // Synthetic Environment Manager Active Status
  SIMNET_DIS_TRANSLATOR_ROLE = 44500,       // SIMNET-DIS Translator Role
  SIMNET_DIS_TRANSLATOR_SITE_ID = 44510,    // SIMNET-DIS Translator Site ID
  SIMNET_DIS_TRANSLATOR_APPLIC_ID = 44520,  // SIMNET-DIS Translator Applic. ID
  SIMNET_DIS_TRANSLATOR_ENTITY_ID = 44530,  // SIMNET-DIS Translator Entity ID
  SIMNET_DIS_TRANSLATOR_ACTIVE_STATUS =
      44540,                           // SIMNET-DIS Translator Active Status
  APPLICATION_RATE = 45000,            // Application Rate
  APPLICATION_TIME = 45005,            // Application Time
  APPLICATION_TIMESTEP = 45010,        // Application Timestep
  FEEDBACK_TIME = 45020,               // Feedback Time
  SIMULATION_RATE = 45030,             // Simulation Rate
  SIMULATION_TIME = 45040,             // Simulation Time
  SIMULATION_TIMESTEP = 45050,         // Simulation Timestep
  TIME_INTERVAL = 45060,               // Time Interval
  TIME_LATENCY = 45070,                // Time Latency
  TIME_SCHEME = 45080,                 // Time Scheme
  EXERCISE_ELAPSED_TIME = 46000,       // Exercise Elapsed Time
  ELAPSED_TIME = 46010,                // Elapsed Time
  ENVIRONMENT = 50000,                 // Environment
  SCENARIO_DATE = 50103,               // Scenario Date
  TIME_DATE_VALID = 50106,             // Time & Date Valid
  SCENARIO_TIME = 50118,               // Scenario Time
  SNOW_ENABLE_DISABLE = 50120,         // Snow Enable/Disable
  WEATHER_ATTRIBUTES_REQUEST = 50124,  // Weather Attributes Request
  MET_HEARTBEAT_MESSAGE = 50126,       // MET Heartbeat Message
  CONTRAILS_ENABLE = 50600,            // Contrails Enable
  CONTRAIL_ALTITUDES = 50700,          // Contrail Altitudes
  WEATHER = 51000,                     // Weather
  WEATHER_CONDITION = 51010,           // Weather Condition
  THERMAL_CONDITION = 51100,           // Thermal Condition
  THERMAL_VISIBILITY = 51110,          // Thermal Visibility
  THERMAL_VISIBILITY = 51111,          // Thermal Visibility
  TIME = 52000,                        // Time
  TIME = 52001,                        // Time
  TIME_OF_DAY_DISCRETE = 52100,        // Time of Day, Discrete
  TIME_OF_DAY_CONTINUOUS = 52200,      // Time of Day, Continuous
  TIME_MODE = 52300,                   // Time Mode
  TIME_SCENE = 52305,                  // Time Scene
  CURRENT_HOUR = 52310,                // Current Hour
  CURRENT_MINUTE = 52320,              // Current Minute
  CURRENT_SECOND = 52330,              // Current Second
  AZIMUTH = 52340,                     // Azimuth
  MAXIMUM_ELEVATION = 52350,           // Maximum Elevation
  TIME_ZONE = 52360,                   // Time Zone
  TIME_RATE = 52370,                   // Time Rate
  THE_NUMBER_OF_SIMULATION_SECONDS_SINCE_THE_START_OF_THE_EXERCISE_SIMULATION_TIME =
      52380,  // The number of simulation seconds since the start of the
              // exercise (simulation time)
  TIME_SUNRISE_ENABLED = 52400,             // Time Sunrise Enabled
  SUNRISE_HOUR = 52410,                     // Sunrise Hour
  SUNRISE_MINUTE = 52420,                   // Sunrise Minute
  SUNRISE_SECOND = 52430,                   // Sunrise Second
  SUNRISE_AZIMUTH = 52440,                  // Sunrise Azimuth
  TIME_SUNSET_ENABLED = 52500,              // Time Sunset Enabled
  SUNSET_HOUR = 52510,                      // Sunset Hour
  SUNSET_HOUR = 52511,                      // Sunset Hour
  SUNSET_MINUTE = 52520,                    // Sunset Minute
  SUNSET_SECOND = 52530,                    // Sunset Second
  DATE = 52600,                             // Date
  DATE_EUROPEAN = 52601,                    // Date (European)
  DATE_US = 52602,                          // Date (US)
  MONTH = 52610,                            // Month
  DAY = 52620,                              // Day
  YEAR = 52630,                             // Year
  CLOUDS = 53000,                           // Clouds
  CLOUD_LAYER_ENABLE = 53050,               // Cloud Layer Enable
  CLOUD_LAYER_SELECTION = 53060,            // Cloud Layer Selection
  VISIBILITY = 53100,                       // Visibility
  BASE_ALTITUDE = 53200,                    // Base Altitude
  BASE_ALTITUDE = 53250,                    // Base Altitude
  CEILING = 53300,                          // Ceiling
  CEILING = 53350,                          // Ceiling
  CHARACTERISTICS = 53400,                  // Characteristics
  CONCENTRATION_LENGTH = 53410,             // Concentration Length
  TRANSMITTANCE = 53420,                    // Transmittance
  RADIANCE = 53430,                         // Radiance
  PRECIPITATION = 54000,                    // Precipitation
  RAIN = 54100,                             // Rain
  FOG = 55000,                              // Fog
  VISIBILITY = 55100,                       // Visibility
  VISIBILITY = 55101,                       // Visibility
  VISIBILITY = 55105,                       // Visibility
  DENSITY = 55200,                          // Density
  BASE = 55300,                             // Base
  VIEW_LAYER_FROM_ABOVE = 55401,            // View Layer from above.
  TRANSITION_RANGE = 55410,                 // Transition Range
  BOTTOM = 55420,                           // Bottom
  BOTTOM = 55425,                           // Bottom
  CEILING = 55430,                          // Ceiling
  CEILING = 55435,                          // Ceiling
  HEAVENLY_BODIES = 56000,                  // Heavenly Bodies
  SUN = 56100,                              // Sun
  SUN_VISIBLE = 56105,                      // Sun Visible
  POSITION = 56110,                         // Position
  SUN_POSITION_ELEVATION_DEGREES = 56111,   // Sun Position Elevation, Degrees
  POSITION_AZIMUTH = 56120,                 // Position Azimuth
  SUN_POSITION_AZIMUTH_DEGREES = 56121,     // Sun Position Azimuth, Degrees
  POSITION_ELEVATION = 56130,               // Position Elevation
  POSITION_INTENSITY = 56140,               // Position Intensity
  MOON = 56200,                             // Moon
  MOON_VISIBLE = 56205,                     // Moon Visible
  POSITION = 56210,                         // Position
  POSITION_AZIMUTH = 56220,                 // Position Azimuth
  MOON_POSITION_AZIMUTH_DEGREES = 56221,    // Moon Position Azimuth, Degrees
  POSITION_ELEVATION = 56230,               // Position Elevation
  MOON_POSITION_ELEVATION_DEGREES = 56231,  // Moon Position Elevation, Degrees
  POSITION_INTENSITY = 56240,               // Position Intensity
  HORIZON = 56310,                          // Horizon
  HORIZON_AZIMUTH = 56320,                  // Horizon Azimuth
  HORIZON_ELEVATION = 56330,                // Horizon Elevation
  HORIZON_HEADING = 56340,                  // Horizon Heading
  HORIZON_INTENSITY = 56350,                // Horizon Intensity
  HUMIDITY = 57200,                         // Humidity
  VISIBILITY = 57300,                       // Visibility
  WINDS = 57400,                            // Winds
  SPEED = 57410,                            // Speed
  WIND_SPEED_KNOTS = 57411,                 // Wind Speed, Knots
  WIND_DIRECTION = 57420,                   // Wind Direction
  WIND_DIRECTION_DEGREES = 57421,           // Wind Direction, Degrees
  RAINSOAK = 57500,                         // Rainsoak
  TIDE_SPEED = 57610,                       // Tide Speed
  TIDE_SPEED_KNOTS = 57611,                 // Tide Speed, Knots
  TIDE_DIRECTION = 57620,                   // Tide Direction
  TIDE_DIRECTION_DEGREES = 57621,           // Tide Direction, Degrees
  HAZE = 58000,                             // Haze
  VISIBILITY = 58100,                       // Visibility
  VISIBILITY = 58105,                       // Visibility
  DENSITY = 58200,                          // Density
  CEILING = 58430,                          // Ceiling
  CEILING = 58435,                          // Ceiling
  CONTAMINANTS_AND_OBSCURANTS = 59000,      // Contaminants and Obscurants
  CONTAMINANT_OBSCURANT_TYPE = 59100,       // Contaminant/Obscurant Type
  PERSISTENCE = 59110,                      // Persistence
  CHEMICAL_DOSAGE = 59115,                  // Chemical Dosage
  CHEMICAL_AIR_CONCENTRATION = 59120,       // Chemical Air Concentration
  CHEMICAL_GROUND_DEPOSITION = 59125,       // Chemical Ground Deposition
  CHEMICAL_MAXIMUM_GROUND_DEPOSITION =
      59130,                             // Chemical Maximum Ground Deposition
  CHEMICAL_DOSAGE_THRESHOLD = 59135,     // Chemical Dosage Threshold
  BIOLOGICAL_DOSAGE = 59140,             // Biological Dosage
  BIOLOGICAL_AIR_CONCENTRATION = 59145,  // Biological Air Concentration
  BIOLOGICAL_DOSAGE_THRESHOLD = 59150,   // Biological Dosage Threshold
  BIOLOGICAL_BINNED_PARTICLE_COUNT = 59155,  // Biological Binned Particle Count
  RADIOLOGICAL_DOSAGE = 59160,               // Radiological Dosage
  COMMUNICATIONS = 60000,                    // Communications
  FIRE_BOTTLE_RELOAD = 61005,                // Fire Bottle Reload
  CHANNEL_TYPE = 61100,                      // Channel Type
  CHANNEL_TYPE = 61101,                      // Channel Type
  CHANNEL_IDENTIFICATION = 61200,            // Channel Identification
  ALPHA_IDENTIFICATION = 61300,              // Alpha Identification
  RADIO_IDENTIFICATION = 61400,              // Radio Identification
  LAND_LINE_IDENTIFICATION = 61500,          // Land Line Identification
  INTERCOM_IDENTIFICATION = 61600,           // Intercom Identification
  GROUP_NETWORK_CHANNEL_NUMBER = 61700,      // Group Network Channel Number
  RADIO_COMMUNICATIONS_STATUS = 62100,       // Radio Communications Status
  BOOM_INTERPHONE = 62101,                   // Boom Interphone
  STATIONARY_RADIO_TRANSMITTERS_DEFAULT_TIME =
      62200,  // Stationary Radio Transmitters Default Time
  MOVING_RADIO_TRANSMITTERS_DEFAULT_TIME =
      62300,  // Moving Radio Transmitters Default Time
  STATIONARY_RADIO_SIGNALS_DEFAULT_TIME =
      62400,  // Stationary Radio Signals Default Time
  MOVING_RADIO_SIGNAL_DEFAULT_TIME = 62500,  // Moving Radio Signal Default Time
  RADIO_INITIALIZATION_TRANSEC_SECURITY_KEY =
      63101,  // Radio Initialization Transec Security Key
  RADIO_INITIALIZATION_INTERNAL_NOISE_LEVEL =
      63102,  // Radio Initialization Internal Noise Level
  RADIO_INITIALIZATION_SQUELCH_THRESHOLD =
      63103,  // Radio Initialization Squelch Threshold
  RADIO_INITIALIZATION_ANTENNA_LOCATION =
      63104,  // Radio Initialization Antenna Location
  RADIO_INITIALIZATION_ANTENNA_PATTERN_TYPE =
      63105,  // Radio Initialization Antenna Pattern Type
  RADIO_INITIALIZATION_ANTENNA_PATTERN_LENGTH =
      63106,  // Radio Initialization Antenna Pattern Length
  RADIO_INITIALIZATION_BEAM_DEFINITION =
      63107,  // Radio Initialization Beam Definition
  RADIO_INITIALIZATION_TRANSMIT_HEARTBEAT_TIME =
      63108,  // Radio Initialization Transmit Heartbeat Time
  RADIO_INITIALIZATION_TRANSMIT_DISTANCE_THRESHOLD_VARIABLE_RECORD =
      63109,  // Radio Initialization Transmit Distance Threshold Variable
              // Record
  RADIO_CHANNEL_INITIALIZATION_LOCKOUT_ID =
      63110,  // Radio Channel Initialization Lockout ID
  RADIO_CHANNEL_INITIALIZATION_HOPSET_ID =
      63111,  // Radio Channel Initialization Hopset ID
  RADIO_CHANNEL_INITIALIZATION_PRESET_FREQUENCY =
      63112,  // Radio Channel Initialization Preset Frequency
  RADIO_CHANNEL_INITIALIZATION_FREQUENCY_SYNC_TIME =
      63113,  // Radio Channel Initialization Frequency Sync Time
  RADIO_CHANNEL_INITIALIZATION_COMSEC_KEY =
      63114,  // Radio Channel Initialization Comsec Key
  RADIO_CHANNEL_INITIALIZATION_ALPHA =
      63115,                             // Radio Channel Initialization Alpha
  ALGORITHM_PARAMETERS = 70000,          // Algorithm Parameters
  DEAD_RECKONING_ALGORITHM_DRA = 71000,  // Dead Reckoning Algorithm (DRA)
  DRA_LOCATION_THRESHOLD = 71100,        // DRA Location Threshold
  DRA_ORIENTATION_THRESHOLD = 71200,     // DRA Orientation Threshold
  DRA_TIME_THRESHOLD = 71300,            // DRA Time Threshold
  SIMULATION_MANAGEMENT_PARAMETERS = 72000,  // Simulation Management Parameters
  CHECKPOINT_INTERVAL = 72100,               // Checkpoint Interval
  TRANSMITTER_TIME_THRESHOLD = 72600,        // Transmitter Time Threshold
  RECEIVER_TIME_THRESHOLD = 72700,           // Receiver Time Threshold
  INTEROPERABILITY_MODE = 73000,             // Interoperability Mode
  SIMNET_DATA_COLLECTION = 74000,            // SIMNET Data Collection
  EVENT_ID = 75000,                          // Event ID
  SOURCE_SITE_ID = 75100,                    // Source Site ID
  SOURCE_HOST_ID = 75200,                    // Source Host ID
  ARTICULATED_PARTS = 90000,                 // Articulated Parts
  PART_ID = 90050,                           // Part ID
  INDEX = 90070,                             // Index
  POSITION = 90100,                          // Position
  POSITION_RATE = 90200,                     // Position Rate
  EXTENSION = 90300,                         // Extension
  EXTENSION_RATE = 90400,                    // Extension Rate
  X = 90500,                                 // X
  X_RATE = 90600,                            // X-rate
  Y = 90700,                                 // Y
  Y_RATE = 90800,                            // Y-rate
  Z = 90900,                                 // Z
  Z_RATE = 91000,                            // Z-rate
  AZIMUTH = 91100,                           // Azimuth
  AZIMUTH_RATE = 91200,                      // Azimuth Rate
  ELEVATION = 91300,                         // Elevation
  ELEVATION_RATE = 91400,                    // Elevation Rate
  ROTATION = 91500,                          // Rotation
  ROTATION_RATE = 91600,                     // Rotation Rate
  DRA_ANGULAR_X_VELOCITY = 100001,           // DRA Angular X-Velocity
  DRA_ANGULAR_Y_VELOCITY = 100002,           // DRA Angular Y-Velocity
  DRA_ANGULAR_Z_VELOCITY = 100003,           // DRA Angular Z-Velocity
  APPEARANCE_TRAILING_EFFECTS = 100004,      // Appearance, Trailing Effects
  APPEARANCE_HATCH = 100005,                 // Appearance, Hatch
  APPEARANCE_CHARACTER_SET = 100008,         // Appearance, Character Set
  CAPABILITY_AMMUNITION_SUPPLIER = 100010,   // Capability, Ammunition Supplier
  CAPABILITY_MISCELLANEOUS_SUPPLIER =
      100011,                             // Capability, Miscellaneous Supplier
  CAPABILITY_REPAIR_PROVIDER = 100012,    // Capability, Repair Provider
  ARTICULATION_PARAMETER = 100014,        // Articulation Parameter
  ARTICULATION_PARAMETER_TYPE = 100047,   // Articulation Parameter Type
  ARTICULATION_PARAMETER_VALUE = 100048,  // Articulation Parameter Value
  TIME_OF_DAY_SCENE = 100058,             // Time of Day-Scene
  LATITUDE_NORTH_LOCATION_OF_WEATHER_CELL =
      100061,  // Latitude-North (Location of weather cell)
  LONGITUDE_EAST_LOCATION_OF_WEATHER_CELL =
      100063,                       // Longitude-East (Location of weather cell)
  TACTICAL_DRIVER_STATUS = 100068,  // Tactical Driver Status
  SONAR_SYSTEM_STATUS = 100100,     // Sonar System Status
  ACCOMPLISHED_ACCEPT = 100160,     // Accomplished accept
  UPPER_LATITUDE = 100161,          // Upper latitude
  LATITUDE_SOUTH_LOCATION_OF_WEATHER_CELL =
      100162,                  // Latitude-South (Location of weather cell)
  WESTERN_LONGITUDE = 100163,  // Western longitude
  LONGITUDE_WEST_LOCATION_OF_WEATHER_CELL =
      100164,  // Longitude-West (location of weather cell)
  CD_ROM_NUMBER_DISK_ID_FOR_TERRAIN =
      100165,                             // CD ROM Number (Disk ID for terrain)
  DTED_DISK_ID = 100166,                  // DTED disk ID
  ALTITUDE = 100167,                      // Altitude
  TACTICAL_SYSTEM_STATUS = 100169,        // Tactical System Status
  JTIDS_STATUS = 100170,                  // JTIDS Status
  TADIL_J_STATUS = 100171,                // TADIL-J Status
  DSDD_STATUS = 100172,                   // DSDD Status
  WEAPON_SYSTEM_STATUS = 100200,          // Weapon System Status
  SUBSYSTEM_STATUS = 100205,              // Subsystem status
  NUMBER_OF_INTERCEPTORS_FIRED = 100206,  // Number of interceptors fired
  NUMBER_OF_INTERCEPTOR_DETONATIONS =
      100207,  // Number of interceptor detonations
  NUMBER_OF_MESSAGE_BUFFERS_DROPPED =
      100208,  // Number of message buffers dropped
  SATELLITE_SENSOR_BACKGROUND_YEAR_DAY =
      100213,  // Satellite sensor background (year, day)
  SATELLITE_SENSOR_BACKGROUND_HOUR_MINUTE =
      100214,              // Satellite sensor background (hour, minute)
  SCRIPT_NUMBER = 100218,  // Script Number
  ENTITY_TRACK_UPDATE_DATA = 100300,    // Entity/Track/Update Data
  LOCAL_FORCE_TRAINING = 100400,        // Local/Force Training
  ENTITY_TRACK_IDENTITY_DATA = 100500,  // Entity/Track Identity Data
  ENTITY_FOR_TRACK_EVENT = 100510,      // Entity for Track Event
  IFF_FRIEND_FOE_STATUS = 100520,       // IFF (Friend-Foe) status
  ENGAGEMENT_DATA = 100600,             // Engagement Data
  TARGET_LATITUDE = 100610,             // Target Latitude
  TARGET_LONGITUDE = 100620,            // Target Longitude
  AREA_OF_INTEREST_GROUND_IMPACT_CIRCLE_CENTER_LATITUDE =
      100631,  // Area of Interest (Ground Impact Circle) Center Latitude
  AREA_OF_INTEREST_GROUND_IMPACT_CIRCLE_CENTER_LONGITUDE =
      100632,  // Area of Interest (Ground Impact Circle) Center Longitude
  AREA_OF_INTEREST_GROUND_IMPACT_CIRCLE_RADIUS =
      100633,  // Area of Interest (Ground Impact Circle) Radius
  AREA_OF_INTEREST_TYPE = 100634,      // Area of Interest Type
  TARGET_AGGREGATE_ID = 100640,        // Target Aggregate ID
  GIC_IDENTIFICATION_NUMBER = 100650,  // GIC Identification Number
  ESTIMATED_TIME_OF_FLIGHT_TO_TBM_IMPACT =
      100660,                         // Estimated Time of Flight to TBM Impact
  ESTIMATED_INTERCEPT_TIME = 100661,  // Estimated Intercept Time
  ESTIMATED_TIME_OF_FLIGHT_TO_NEXT_WAYPOINT =
      100662,  // Estimated Time of Flight to Next Waypoint
  ENTITY_TRACK_EQUIPMENT_DATA = 100700,     // Entity/Track Equipment Data
  EMISSION_EW_DATA = 100800,                // Emission/EW Data
  APPEARANCE_DATA = 100900,                 // Appearance Data
  COMMAND_ORDER_DATA = 101000,              // Command/Order Data
  ENVIRONMENTAL_DATA = 101100,              // Environmental Data
  SIGNIFICANT_EVENT_DATA = 101200,          // Significant Event Data
  OPERATOR_ACTION_DATA = 101300,            // Operator Action Data
  ADA_ENGAGEMENT_MODE = 101310,             // ADA Engagement Mode
  ADA_SHOOTING_STATUS = 101320,             // ADA Shooting Status
  ADA_MODE = 101321,                        // ADA Mode
  ADA_RADAR_STATUS = 101330,                // ADA Radar Status
  SHOOT_COMMAND = 101340,                   // Shoot Command
  ADA_WEAPON_STATUS = 101350,               // ADA Weapon Status
  ADA_FIRING_DISCIPLE = 101360,             // ADA Firing Disciple
  ORDER_STATUS = 101370,                    // Order Status
  TIME_SYNCHRONIZATION = 101400,            // Time Synchronization
  TOMAHAWK_DATA = 101500,                   // Tomahawk Data
  NUMBER_OF_DETONATIONS = 102100,           // Number of Detonations
  NUMBER_OF_INTERCEPTS = 102200,            // Number of Intercepts
  OBT_CONTROL_MT_201 = 200201,              // OBT Control MT-201
  SENSOR_DATA_MT_202 = 200202,              // Sensor Data MT-202
  ENVIRONMENTAL_DATA_MT_203 = 200203,       // Environmental Data MT-203
  OWNSHIP_DATA_MT_204 = 200204,             // Ownship Data MT-204
  ACOUSTIC_CONTACT_DATA_MT_205 = 200205,    // Acoustic Contact Data MT-205
  SONOBUOY_DATA_MT_207 = 200207,            // Sonobuoy Data MT-207
  SONOBUOY_CONTACT_DATA_MT_210 = 200210,    // Sonobuoy Contact Data MT-210
  HELO_CONTROL_MT_211 = 200211,             // Helo Control MT-211
  ESM_CONTROL_DATA = 200213,                // ESM Control Data
  ESM_CONTACT_DATA_MT_214 = 200214,         // ESM Contact Data MT-214
  ESM_EMITTER_DATA_MT_215 = 200215,         // ESM Emitter Data MT-215
  WEAPON_DEFINITION_DATA_MT_217 = 200216,   // Weapon Definition Data MT-217
  WEAPON_PRESET_DATA_MT_217 = 200217,       // Weapon Preset Data MT-217
  OBT_CONTROL_MT_301 = 200301,              // OBT Control MT-301
  SENSOR_DATA_MT_302 = 200302,              // Sensor Data MT-302
  ENVIRONMENTAL_DATA_MT_303M = 200303,      // Environmental Data MT-303m
  OWNSHIP_DATA_MT_304 = 200304,             // Ownship Data MT-304
  ACOUSTIC_CONTACT_DATA_MT_305 = 200305,    // Acoustic Contact Data MT-305
  SONOBUOY_DATA_MT_307 = 200307,            // Sonobuoy Data MT-307
  SONOBUOY_CONTACT_DATA_MT_310 = 200310,    // Sonobuoy Contact Data MT-310
  HELO_SCENARIO_EQUIPMENT_STATUS = 200311,  // Helo Scenario / Equipment Status
  ESM_CONTROL_DATA_MT_313 = 200313,         // ESM Control Data MT-313
  ESM_CONTACT_DATA_MT_314 = 200314,         // ESM Contact Data MT-314
  ESM_EMITTER_DATA_MT_315 = 200315,         // ESM Emitter Data MT-315
  WEAPON_DEFINITION_DATA_MT_316 = 200316,   // Weapon Definition Data MT-316
  WEAPON_PRESET_DATA_MT_317 = 200317,       // Weapon Preset Data MT-317
  PAIRING_ASSOCIATION_EMT_56 = 200400,      // Pairing/Association (eMT-56)
  POINTER_EMT_57 = 200401,                  // Pointer (eMT-57)
  REPORTING_RESPONSIBILITY_EMT_58 =
      200402,                    // Reporting Responsibility (eMT-58)
  TRACK_NUMBER_EMT_59 = 200403,  // Track Number (eMT-59)
  ID_FOR_LINK_11_REPORTING_EMT_60 =
      200404,                          // ID for Link-11 Reporting (eMT-60)
  REMOTE_TRACK_EMT_62 = 200405,        // Remote Track (eMT-62)
  LINK_11_ERROR_RATE_EMT_63 = 200406,  // Link-11 Error Rate (eMT-63)
  TRACK_QUALITY_EMT_64 = 200407,       // Track Quality (eMT-64)
  GRIDLOCK_EMT_65 = 200408,            // Gridlock (eMT-65)
  KILL_EMT_66 = 200409,                // Kill (eMT-66)
  TRACK_ID_CHANGE_RESOLUTION_EMT_68 =
      200410,                        // Track ID Change / Resolution (eMT-68)
  WEAPONS_STATUS_EMT_69 = 200411,    // Weapons Status (eMT-69)
  LINK_11_OPERATOR_EMT_70 = 200412,  // Link-11 Operator (eMT-70)
  FORCE_TRAINING_TRANSMIT_EMT_71 = 200413,  // Force Training Transmit (eMT-71)
  FORCE_TRAINING_RECEIVE_EMT_72 = 200414,   // Force Training Receive (eMT-72)
  INTERCEPTOR_AMPLIFICATION_EMT_75 =
      200415,                   // Interceptor Amplification (eMT-75)
  CONSUMABLES_EMT_78 = 200416,  // Consumables (eMT-78)
  LINK_11_LOCAL_TRACK_QUALITY_EMT_95 =
      200417,                    // Link-11 Local Track Quality (eMT-95)
  DLRP_EMT_19 = 200418,          // DLRP (eMT-19)
  FORCE_ORDER_EMT_52 = 200419,   // Force Order (eMT-52)
  WILCO_CANTCO_EMT_53 = 200420,  // Wilco / Cantco (eMT-53)
  EMC_BEARING_EMT_54 = 200421,   // EMC Bearing (eMT-54)
  CHANGE_TRACK_ELIGIBILITY_EMT_55 =
      200422,                            // Change Track Eligibility (eMT-55)
  LAND_MASS_REFERENCE_POINT = 200423,    // Land Mass Reference Point
  SYSTEM_REFERENCE_POINT = 200424,       // System Reference Point
  PU_AMPLIFICATION = 200425,             // PU Amplification
  SET_DRIFT = 200426,                    // Set/Drift
  BEGIN_INITIALIZATION_MT_1 = 200427,    // Begin Initialization (MT-1)
  STATUS_AND_CONTROL_MT_3 = 200428,      // Status and Control (MT-3)
  SCINTILLATION_CHANGE_MT_39 = 200429,   // Scintillation Change (MT-39)
  LINK_11_ID_CONTROL_MT_61 = 200430,     // Link 11 ID Control (MT-61)
  PU_GUARD_LIST = 200431,                // PU Guard List
  WINDS_ALOFT_MT_14 = 200432,            // Winds Aloft (MT-14)
  SURFACE_WINDS_MT_15 = 200433,          // Surface Winds (MT-15)
  SEA_STATE_MT_17 = 200434,              // Sea State (MT-17)
  MAGNETIC_VARIATION_MT_37 = 200435,     // Magnetic Variation (MT-37)
  TRACK_ELIGIBILITY_MT_29 = 200436,      // Track Eligibility (MT-29)
  TRAINING_TRACK_NOTIFICATION = 200437,  // Training Track Notification
  TACAN_DATA_MT_32 = 200501,             // Tacan Data (MT-32)
  INTERCEPTOR_AMPLIFICATION_MT_75 =
      200502,                               // Interceptor Amplification (MT-75)
  TACAN_ASSIGNMENT_MT_76 = 200503,          // Tacan Assignment (MT-76)
  AUTOPILOT_STATUS_MT_77 = 200504,          // Autopilot Status (MT-77)
  CONSUMABLES_MT_78 = 200505,               // Consumables (MT-78)
  DOWNLINK_MT_79 = 200506,                  // Downlink (MT-79)
  TIN_REPORT_MT_80 = 200507,                // TIN Report (MT-80)
  SPECIAL_POINT_CONTROL_MT_81 = 200508,     // Special Point Control (MT-81)
  CONTROL_DISCRETES_MT_82 = 200509,         // Control Discretes (MT-82)
  REQUEST_TARGET_DISCRETES_MT_83 = 200510,  // Request Target Discretes(MT-83)
  TARGET_DISCRETES_MT_84 = 200511,          // Target Discretes (MT-84)
  REPLY_DISCRETES_MT_85 = 200512,           // Reply Discretes (MT-85)
  COMMAND_MANEUVERS_MT_86 = 200513,         // Command Maneuvers (MT-86)
  TARGET_DATA_MT_87 = 200514,               // Target Data (MT-87)
  TARGET_POINTER_MT_88 = 200515,            // Target Pointer (MT-88)
  INTERCEPT_DATA_MT_89 = 200516,            // Intercept Data (MT-89)
  DECREMENT_MISSILE_INVENTORY_MT_90 =
      200517,                      // Decrement Missile Inventory (MT-90)
  LINK_4A_ALERT_MT_91 = 200518,    // Link-4A Alert (MT-91)
  STRIKE_CONTROL_MT_92 = 200519,   // Strike Control (MT-92)
  SPEED_CHANGE_MT_25 = 200521,     // Speed Change (MT-25)
  COURSE_CHANGE_MT_26 = 200522,    // Course Change (MT-26)
  ALTITUDE_CHANGE_MT_27 = 200523,  // Altitude Change (MT-27)
  ACLS_AN_SPN_46_STATUS = 200524,  // ACLS AN/SPN-46 Status
  ACLS_AIRCRAFT_REPORT = 200525,   // ACLS Aircraft Report
  SPS_67_RADAR_OPERATOR_FUNCTIONS = 200600,  // SPS-67 Radar Operator Functions
  SPS_55_RADAR_OPERATOR_FUNCTIONS = 200601,  // SPS-55 Radar Operator Functions
  SPQ_9A_RADAR_OPERATOR_FUNCTIONS = 200602,  // SPQ-9A Radar Operator Functions
  SPS_49_RADAR_OPERATOR_FUNCTIONS = 200603,  // SPS-49 Radar Operator Functions
  MK_23_RADAR_OPERATOR_FUNCTIONS = 200604,   // MK-23 Radar Operator Functions
  SPS_48_RADAR_OPERATOR_FUNCTIONS = 200605,  // SPS-48 Radar Operator Functions
  SPS_40_RADAR_OPERATOR_FUNCTIONS = 200606,  // SPS-40 Radar Operator Functions
  MK_95_RADAR_OPERATOR_FUNCTIONS = 200607,   // MK-95 Radar Operator Functions
  KILL_NO_KILL = 200608,                     // Kill/No Kill
  CMT_PC = 200609,                           // CMT pc
  CMC4AIRGLOBALDATA = 200610,                // CMC4AirGlobalData
  CMC4GLOBALDATA = 200611,                   // CMC4GlobalData
  LINKSIMCOMMENTPDU = 200612,                // LINKSIM_COMMENT_PDU
  NSST_OWNSHIP_CONTROL = 200613,             // NSST Ownship Control
  OTHER = 240000,                            // Other
  MASS_OF_THE_VEHICLE = 240001,              // Mass Of The Vehicle
  FORCE_ID = 240002,                         // Force ID
  ENTITY_TYPE_KIND = 240003,                 // Entity Type Kind
  ENTITY_TYPE_DOMAIN = 240004,               // Entity Type Domain
  ENTITY_TYPE_COUNTRY = 240005,              // Entity Type Country
  ENTITY_TYPE_CATEGORY = 240006,             // Entity Type Category
  ENTITY_TYPE_SUB_CATEGORY = 240007,         // Entity Type Sub Category
  ENTITY_TYPE_SPECIFIC = 240008,             // Entity Type Specific
  ENTITY_TYPE_EXTRA = 240009,                // Entity Type Extra
  ALTERNATIVE_ENTITY_TYPE_KIND = 240010,     // Alternative Entity Type Kind
  ALTERNATIVE_ENTITY_TYPE_DOMAIN = 240011,   // Alternative Entity Type Domain
  ALTERNATIVE_ENTITY_TYPE_COUNTRY = 240012,  // Alternative Entity Type Country
  ALTERNATIVE_ENTITY_TYPE_CATEGORY =
      240013,  // Alternative Entity Type Category
  ALTERNATIVE_ENTITY_TYPE_SUB_CATEGORY =
      240014,  // Alternative Entity Type Sub Category
  ALTERNATIVE_ENTITY_TYPE_SPECIFIC =
      240015,                              // Alternative Entity Type Specific
  ALTERNATIVE_ENTITY_TYPE_EXTRA = 240016,  // Alternative Entity Type Extra
  ENTITY_LOCATION_X = 240017,              // Entity Location X
  ENTITY_LOCATION_Y = 240018,              // Entity Location Y
  ENTITY_LOCATION_Z = 240019,              // Entity Location Z
  ENTITY_LINEAR_VELOCITY_X = 240020,       // Entity Linear Velocity X
  ENTITY_LINEAR_VELOCITY_Y = 240021,       // Entity Linear Velocity Y
  ENTITY_LINEAR_VELOCITY_Z = 240022,       // Entity Linear Velocity Z
  ENTITY_ORIENTATION_PSI = 240023,         // Entity Orientation Psi
  ENTITY_ORIENTATION_THETA = 240024,       // Entity Orientation Theta
  ENTITY_ORIENTATION_PHI = 240025,         // Entity Orientation Phi
  DEAD_RECKONING_ALGORITHM = 240026,       // Dead Reckoning Algorithm
  DEAD_RECKONING_LINEAR_ACCELERATION_X =
      240027,  // Dead Reckoning Linear Acceleration X
  DEAD_RECKONING_LINEAR_ACCELERATION_Y =
      240028,  // Dead Reckoning Linear Acceleration Y
  DEAD_RECKONING_LINEAR_ACCELERATION_Z =
      240029,  // Dead Reckoning Linear Acceleration Z
  DEAD_RECKONING_ANGULAR_VELOCITY_X =
      240030,  // Dead Reckoning Angular Velocity X
  DEAD_RECKONING_ANGULAR_VELOCITY_Y =
      240031,  // Dead Reckoning Angular Velocity Y
  DEAD_RECKONING_ANGULAR_VELOCITY_Z =
      240032,                               // Dead Reckoning Angular Velocity Z
  ENTITY_APPEARANCE = 240033,               // Entity Appearance
  ENTITY_MARKING_CHARACTER_SET = 240034,    // Entity Marking Character Set
  ENTITY_MARKING_11_BYTES = 240035,         // Entity Marking 11 Bytes
  CAPABILITY = 240036,                      // Capability
  NUMBER_ARTICULATION_PARAMETERS = 240037,  // Number Articulation Parameters
  ARTICULATION_PARAMETER_ID = 240038,       // Articulation Parameter ID
  ARTICULATION_PARAMETER_TYPE = 240039,     // Articulation Parameter Type
  ARTICULATION_PARAMETER_VALUE = 240040,    // Articulation Parameter Value
  TYPE_OF_STORES = 240041,                  // Type Of Stores
  QUANTITY_OF_STORES = 240042,              // Quantity Of Stores
  FUEL_QUANTITY = 240043,                   // Fuel Quantity
  RADAR_SYSTEM_STATUS = 240044,             // Radar System Status
  RADIO_COMMUNICATION_SYSTEM_STATUS =
      240045,  // Radio Communication System Status
  DEFAULT_TIME_FOR_RADIO_TRANSMISSION_FOR_STATIONARY_TRANSMITTERS =
      240046,  // Default Time For Radio Transmission For Stationary
               // Transmitters
  DEFAULT_TIME_FOR_RADIO_TRANSMISSION_FOR_MOVING_TRANSMITTERS =
      240047,  // Default Time For Radio Transmission For Moving Transmitters
  BODY_PART_DAMAGED_RATIO = 240048,  // Body Part Damaged Ratio
  NAME_OF_THE_TERRAIN_DATABASE_FILE =
      240049,                         // Name Of The Terrain Database File
  NAME_OF_LOCAL_FILE = 240050,        // Name Of Local File
  AIMPOINT_BEARING = 240051,          // Aimpoint Bearing
  AIMPOINT_ELEVATION = 240052,        // Aimpoint Elevation
  AIMPOINT_RANGE = 240053,            // Aimpoint Range
  AIR_SPEED = 240054,                 // Air Speed
  ALTITUDE = 240055,                  // Altitude
  APPLICATION_STATUS = 240056,        // Application Status
  AUTO_IFF = 240057,                  // Auto Iff
  BEACON_DELAY = 240058,              // Beacon Delay
  BINGO_FUEL_SETTING = 240059,        // Bingo Fuel Setting
  CLOUD_BOTTOM = 240060,              // Cloud Bottom
  CLOUD_TOP = 240061,                 // Cloud Top
  DIRECTION = 240062,                 // Direction
  END_ACTION = 240063,                // End Action
  FREQUENCY = 240064,                 // Frequency
  FREEZE = 240065,                    // Freeze
  HEADING = 240066,                   // Heading
  IDENTIFICATION = 240067,            // Identification
  INITIAL_POINT_DATA = 240068,        // Initial Point Data
  LATITUDE = 240069,                  // Latitude
  LIGHTS = 240070,                    // Lights
  LINEAR = 240071,                    // Linear
  LONGITUDE = 240072,                 // Longitude
  LOW_ALTITUDE = 240073,              // Low Altitude
  MFD_FORMATS = 240074,               // Mfd Formats
  NCTR = 240075,                      // Nctr
  NUMBER_PROJECTILES = 240076,        // Number Projectiles
  OPERATION_CODE = 240077,            // Operation Code
  PITCH = 240078,                     // Pitch
  PROFILES = 240079,                  // Profiles
  QUANTITY = 240080,                  // Quantity
  RADAR_MODES = 240081,               // Radar Modes
  RADAR_SEARCH_VOLUME = 240082,       // Radar Search Volume
  ROLL = 240083,                      // Roll
  ROTATION = 240084,                  // Rotation
  SCALE_FACTOR_X = 240085,            // Scale Factor X
  SCALE_FACTOR_Y = 240086,            // Scale Factor Y
  SHIELDS = 240087,                   // Shields
  STEERPOINT = 240088,                // Steerpoint
  SPARE1 = 240089,                    // Spare1
  SPARE2 = 240090,                    // Spare2
  TEAM = 240091,                      // Team
  TEXT = 240092,                      // Text
  TIME_OF_DAY = 240093,               // Time Of Day
  TRAIL_FLAG = 240094,                // Trail Flag
  TRAIL_SIZE = 240095,                // Trail Size
  TYPE_OF_PROJECTILE = 240096,        // Type Of Projectile
  TYPE_OF_TARGET = 240097,            // Type Of Target
  TYPE_OF_THREAT = 240098,            // Type Of Threat
  UHF_FREQUENCY = 240099,             // Uhf Frequency
  UTM_ALTITUDE = 240100,              // Utm Altitude
  UTM_LATITUDE = 240101,              // Utm Latitude
  UTM_LONGITUDE = 240102,             // Utm Longitude
  VHF_FREQUENCY = 240103,             // Vhf Frequency
  VISIBILITY_RANGE = 240104,          // Visibility Range
  VOID_AAA_HIT = 240105,              // Void Aaa Hit
  VOID_COLLISION = 240106,            // Void Collision
  VOID_EARTH_HIT = 240107,            // Void Earth Hit
  VOID_FRIENDLY = 240108,             // Void Friendly
  VOID_GUN_HIT = 240109,              // Void Gun Hit
  VOID_ROCKET_HIT = 240110,           // Void Rocket Hit
  VOID_SAM_HIT = 240111,              // Void Sam Hit
  WEAPON_DATA = 240112,               // Weapon Data
  WEAPON_TYPE = 240113,               // Weapon Type
  WEATHER = 240114,                   // Weather
  WIND_DIRECTION = 240115,            // Wind Direction
  WIND_SPEED = 240116,                // Wind Speed
  WING_STATION = 240117,              // Wing Station
  YAW = 240118,                       // Yaw
  MEMORY_OFFSET = 240119,             // Memory Offset
  MEMORY_DATA = 240120,               // Memory Data
  VASI = 240121,                      // VASI
  BEACON = 240122,                    // Beacon
  STROBE = 240123,                    // Strobe
  CULTURE = 240124,                   // Culture
  APPROACH = 240125,                  // Approach
  RUNWAY_END = 240126,                // Runway End
  OBSTRUCTION = 240127,               // Obstruction
  RUNWAY_EDGE = 240128,               // Runway Edge
  RAMP_TAXIWAY = 240129,              // Ramp Taxiway
  LASER_BOMB_CODE = 240130,           // Laser Bomb Code
  RACK_TYPE = 240131,                 // Rack Type
  HUD = 240132,                       // HUD
  ROLEFILENAME = 240133,              // RoleFileName
  PILOTNAME = 240134,                 // PilotName
  PILOTDESIGNATION = 240135,          // PilotDesignation
  MODEL_TYPE = 240136,                // Model Type
  DIS_TYPE = 240137,                  // DIS Type
  CLASS = 240138,                     // Class
  CHANNEL = 240139,                   // Channel
  ENTITY_TYPE = 240140,               // Entity Type
  ALTERNATIVE_ENTITY_TYPE = 240141,   // Alternative Entity Type
  ENTITY_LOCATION = 240142,           // Entity Location
  ENTITY_LINEAR_VELOCITY = 240143,    // Entity Linear Velocity
  ENTITY_ORIENTATION = 240144,        // Entity Orientation
  DEAD_RECKONING = 240145,            // Dead Reckoning
  FAILURE_SYMPTOM = 240146,           // Failure Symptom
  MAX_FUEL = 240147,                  // Max Fuel
  REFUELING_BOOM_CONNECT = 240148,    // Refueling Boom Connect
  ALTITUDE_AGL = 240149,              // Altitude AGL
  CALIBRATED_AIRSPEED = 240150,       // Calibrated Airspeed
  TACAN_CHANNEL = 240151,             // TACAN Channel
  TACAN_BAND = 240152,                // TACAN Band
  TACAN_MODE = 240153,                // TACAN Mode
  FUEL_FLOW_RATE_KG_MIN = 270115,     // Fuel Flow Rate (kg/min)
  FUEL_TEMPERATURE_DEGC = 270116,     // Fuel Temperature (degC)
  FUEL_PRESSURE_PA = 270117,          // Fuel Pressure (Pa)
  SKE_SLOT = 270150,                  // SKE Slot
  SKE_LEAD = 270151,                  // SKE Lead
  SKE_FREQUENCY = 270152,             // SKE Frequency
  FCI_CMD = 270153,                   // FCI Cmd
  FCI_NUM = 270154,                   // FCI Num
  SKE_BIT_FIELD = 270155,             // SKE Bit Field
  FORMATION_POSITION = 270156,        // Formation Position
  FORMATION_NUMBER = 270157,          // Formation Number
  FFS_MODE_ACTIVE = 270158,           // FFS Mode Active
  FFS_ROLE = 270159,                  // FFS Role
  FFS_VCAS = 270160,                  // FFS VCAS
  FFS_BIT_FIELD = 270161,             // FFS Bit Field
  FFS_CALL_SIGN = 270162,             // FFS Call Sign
  FFS_GUIDANCE_DATA = 270163,         // FFS Guidance Data
  FFS_TEXT_DATA = 270164,             // FFS Text Data
  FFS_AIRDROP_REQUEST_DATA = 270165,  // FFS Airdrop Request Data
  FFS_AIRDROP_DATA = 270166,          // FFS Airdrop Data
  HORIZONTAL_CIRCULAR_ERROR_PROBABLE_M =
      300000,  // Horizontal Circular Error Probable (m)
  HORIZONTAL_POSITION_ERROR_M = 300001,    // Horizontal Position Error (m)
  VERTICAL_POSITION_ERROR_M = 300002,      // Vertical Position Error (m)
  HORIZONTAL_VELOCITY_ERROR_M_S = 300003,  // Horizontal Velocity Error (m/s)
  VERTICAL_VELOCITY_ERROR_M_S = 300004,    // Vertical Velocity Error (m/s)
  _4TH_LOWEST_JAMMER_TO_SIGNAL_RATIO_FOR_P_Y_L1_DB =
      300005,  // 4th Lowest Jammer to Signal Ratio for P(Y)-L1 (dB)
  _4TH_LOWEST_JAMMER_TO_SIGNAL_RATIO_FOR_P_Y_L2_DB =
      300006,  // 4th Lowest Jammer to Signal Ratio for P(Y)-L2 (dB)
  GPS_FIGURE_OF_MERIT = 300007,        // GPS Figure of Merit
  WEAPON_TRANSFER_GPS_STATE = 300008,  // Weapon Transfer GPS State
  WEAPON_TRANSFER_HORIZONTAL_POSITION_ERROR_M =
      300009,  // Weapon Transfer Horizontal Position Error (m)
  WEAPON_TRANSFER_VERTICAL_POSITION_ERROR_M =
      300010,  // Weapon Transfer Vertical Position Error (m)
  WEAPON_TRANSFER_VERTICAL_POSITION_ERROR_M =
      300011,  // Weapon Transfer Vertical Position Error (m)
  WEAPON_TRANSFER_HORIZONTAL_VELOCITY_ERROR_M_S =
      300012,  // Weapon Transfer Horizontal Velocity Error (m/s)
  TIME_TRANSFER_ERROR_SEC = 300013,  // Time Transfer Error (sec)
  AGE_OF_EPHEMERIS_SEC = 300014,     // Age of Ephemeris (sec)
  NON_FLYOUT_MUNITION_ENTITY_REQUEST_DIS_TYPE_ENUMERATION =
      300016,  // Non-Flyout Munition Entity Request DIS Type Enumeration
  NON_FLYOUT_MUNITION_ENTITY_REQUEST_LAUNCH_POINT_X_M =
      300017,  // Non-Flyout Munition Entity Request Launch Point X (m)
  NON_FLYOUT_MUNITION_ENTITY_REQUEST_LAUNCH_POINT_Y_M =
      300018,  // Non-Flyout Munition Entity Request Launch Point Y (m)
  NON_FLYOUT_MUNITION_ENTITY_REQUEST_LAUNCH_POINT_Z_M =
      300019,  // Non-Flyout Munition Entity Request Launch Point Z (m)
  NON_FLYOUT_MUNITION_ENTITY_REQUEST_MAXIMUM_ALTITUDE_M_MSL =
      300020,  // Non-Flyout Munition Entity Request Maximum Altitude (m MSL)
  NON_FLYOUT_MUNITION_ENTITY_REQUEST_FLIGHT_PATH =
      300021,  // Non-Flyout Munition Entity Request Flight Path
  NON_FLYOUT_MUNITION_ENTITY_REQUEST_IMPACT_POINT_X_M =
      300022,  // Non-Flyout Munition Entity Request Impact Point X (m)
  NON_FLYOUT_MUNITION_ENTITY_REQUEST_IMPACT_POINT_Y_M =
      300023,  // Non-Flyout Munition Entity Request Impact Point Y (m)
  NON_FLYOUT_MUNITION_ENTITY_REQUEST_IMPACT_POINT_Z_M =
      300024,  // Non-Flyout Munition Entity Request Impact Point Z (m)
  NON_FLYOUT_MUNITION_ENTITY_REQUEST_ELAPSED_FLIGHT_TIME_SEC =
      300025,  // Non-Flyout Munition Entity Request Elapsed Flight Time (sec)
  NON_FLYOUT_MUNITION_ENTITY_REQUEST_LAUNCH_TIME_SEC =
      300026,  // Non-Flyout Munition Entity Request Launch Time (sec)
  TIME_ERROR_SEC = 300027,                // Time Error (sec)
  LINK_16_COMMAND_VARIETY_1 = 301100,     // Link 16 Command Variety 1
  PUSH = 301130,                          // Push
  ROLEX = 301140,                         // Rolex
  TERMINATE_INTERCEPT = 301150,           // Terminate Intercept
  HEAL_DAMAGE = 301151,                   // Heal Damage
  DESTROY = 301152,                       // Destroy
  TRANSFER_CONTROL_MANAGEMENT = 301160,   // Transfer Control Management
  LINK_16_CONTROLS_PPLI_ENABLE = 301170,  // Link 16 Controls - PPLI Enable
  LINK_16_CONTROLS_COMMAND_CONTROL_ENABLE =
      301171,  // Link 16 Controls - Command & Control Enable
  LINK_16_REFERENCE_POINT_MESSAGE_INITIATION =
      301174,  // Link 16 Reference Point Message Initiation
  ASSIGN_EXTERNAL_ENTITY_LINK_16_TRACK_NUMBER =
      301175,  // Assign External Entity Link 16 Track Number
  LINK_16_INTELLIGENCE_INFO = 301176,  // Link 16 Intelligence Info
  LINK_16_TRACK_MANAGEMENT = 301177,   // Link 16 Track Management
  LINK_16_CONTROLS_CES_GLOBAL_PPLI_PUBLISH =
      301178,  // Link 16 Controls - CES Global PPLI Publish
  LINK_16_CONTROLS_CES_GLOBAL_SURVEILLANCE_PUBLISH =
      301179,  // Link 16 Controls - CES Global Surveillance Publish
  REQUEST_GLOBAL_LINK_16_CONFIGURATION =
      301180,  // Request Global Link 16 Configuration
  LINK_16_CONTROLS_SURVEILLANCE_ENABLE =
      301181,                // Link 16 Controls - Surveillance Enable
  LINK_16_POINTER = 301182,  // Link 16 Pointer
  LINK_16_VECTOR = 301183,   // Link 16 Vector
  LINK_16_CONTROL_UNIT_CHANGE = 301184,   // Link 16 Control Unit Change
  LINK_16_TEXT = 301185,                  // Link 16 Text
  REQUEST_LINK_16_OBJECTS = 301186,       // Request Link 16 Objects
  LINK_16_REF_OBJECT_NAME_LIST = 301187,  // Link 16 Ref Object Name List
  TOTAL_NUMBER_OF_PDUS_IN_LINK_16_REF_OBJECTS_RESPONSE =
      301189,  // Total Number of PDUs in Link 16 Ref Objects Response
  PDU_NUMBER_IN_LINK_16_REF_OBJECTS_RESPONSE =
      301190,  // PDU Number in Link 16 Ref Objects Response
  TOTAL_NUMBER_OF_LINK_16_REF_OBJECTS =
      301191,  // Total Number of Link 16 Ref Objects
  LINK_16_CONTROLS_F2F_A_ENABLE = 301197,  // Link 16 Controls - F2F A Enable
  LINK_16_CONTROLS_F2F_B_ENABLE = 301198,  // Link 16 Controls - F2F B Enable
  STN_OF_FORMATION_LEADER = 301199,        // STN of Formation Leader
  FORMATION_NAME = 301200,                 // Formation Name
  FORMATION_ROLE = 301201,                 // Formation Role
  SURVEILLANCE_CONTRIBUTOR_SENSOR_BASED_DETECTION =
      301202,          // Surveillance Contributor Sensor Based Detection
  F2F_A_NPG = 301220,  // F2F A NPG
  LINK_16_CONTROLS_F2F_A_NET = 301221,    // Link 16 Controls - F2F A Net
  F2F_B_NPG = 301222,                     // F2F B NPG
  LINK_16_CONTROLS_F2F_B_NET = 301223,    // Link 16 Controls - F2F B Net
  SURVEILLANCE_ENABLED_NPB = 301224,      // Surveillance Enabled NPB
  SURVEILLANCE_ENABLED_NET = 301225,      // Surveillance Enabled Net
  CONTROL_UNIT_ENABLED = 301226,          // Control Unit Enabled
  CONTROL_UNIT_ENABLED_NPG = 301227,      // Control Unit Enabled NPG
  CONTROL_UNIT_ENABLED_NET = 301228,      // Control Unit Enabled Net
  VOICE_FREQUENCY = 301229,               // Voice Frequency
  LINK_16_JTIDS_VOICE_CALLSIGN = 301234,  // Link 16 JTIDS Voice Callsign
  ENTITY_ID_OF_CONTROL_UNIT = 301237,     // Entity ID of Control Unit
  STN_OF_CONTROL_UNIT = 301238,           // STN of Control Unit
  NTR_PARTICIPATION_LEVEL = 301239,       // NTR Participation Level
  LINK_16_CONTROLS_CES_GLOBAL_PPLI_SUBSCRIBE =
      301240,  // Link 16 Controls - CES Global PPLI Subscribe
  LINK_16_CONTROLS_CES_GLOBAL_SURVEILLANCE_SUBSCRIBE =
      301241,  // Link 16 Controls - CES Global Surveillance Subscribe
  NTR_IN_MISSION = 301242,                  // NTR in Mission
  NTR_MARKING = 301243,                     // NTR Marking
  NTR_RECEIPT_COMPLIANCE = 301244,          // NTR Receipt/Compliance
  FORMATION_F2F_NPG = 301255,               // Formation F2F NPG
  FORMATION_F2F_CHANNEL = 301256,           // Formation F2F Channel
  JLVC_JSPA_LOGREPORT = 400008,             // JLVC (JSPA) LogReport
  JLVC_JSPA_SUPPLYADJUST = 400009,          // JLVC (JSPA) SupplyAdjust
  JLVC_JSPA_ENTITYCONTROL = 400010,         // JLVC (JSPA) EntityControl
  JLVC_JSPA_HEALTHUPDATE = 400011,          // JLVC (JSPA) HealthUpdate
  JLVC_JSPA_REPAIRCOMPLETE = 400012,        // JLVC (JSPA) RepairComplete
  JLVC_JSPA_UNITACTIVATION = 400013,        // JLVC (JSPA) UnitActivation
  JLVC_JSPA_BATTLEDAMAGEREPAIR = 400014,    // JLVC (JSPA) BattleDamageRepair
  JLVC_JSPA_MINEFIELD = 400015,             // JLVC (JSPA) Minefield
  JLVC_JSPA_WIRE = 400016,                  // JLVC (JSPA) Wire
  JLVC_JSPA_ABATIS = 400017,                // JLVC (JSPA) Abatis
  JLVC_JSPA_CRATER = 400018,                // JLVC (JSPA) Crater
  JLVC_JSPA_DITCH = 400019,                 // JLVC (JSPA) Ditch
  JLVC_JSPA_LANES = 400020,                 // JLVC (JSPA) Lanes
  JLVC_JSPA_IED = 400021,                   // JLVC (JSPA) IED
  JLVC_JSPA_RUBBLE = 400022,                // JLVC (JSPA) Rubble
  JLVC_JSPA_SUBMERGEDBARRIER = 400023,      // JLVC (JSPA) SubmergedBarrier
  JLVC_JSPA_FLOATINGBARRIER = 400024,       // JLVC (JSPA) FloatingBarrier
  JLVC_JSPA_FOXHOLE = 400025,               // JLVC (JSPA) Foxhole
  JLVC_JSPA_VEHICLEHOLE = 400026,           // JLVC (JSPA) VehicleHole
  JLVC_JSPA_VEHICLEFORTIFICATION = 400027,  // JLVC (JSPA) VehicleFortification
  JLVC_JSPA_SANDBAG = 400028,               // JLVC (JSPA) Sandbag
  JLVC_JSPA_CHECKPOINT = 400029,            // JLVC (JSPA) Checkpoint
  JLVC_JSPA_CONTAMCLOUD2D = 400030,         // JLVC (JSPA) ContamCloud2D
  JLVC_JSPA_POPULATIONEFFECT = 400031,      // JLVC (JSPA) PopulationEffect
  JLVC_JSPA_MINE = 400032,                  // JLVC (JSPA) Mine
  JLVC_JSPA_SEAMINEFIELD = 400033,          // JLVC (JSPA) SeaMinefield
  MUNITION = 500001,                        // Munition
  ENGINE_FUEL = 500002,                     // Engine Fuel
  STORAGE_FUEL = 500003,                    // Storage Fuel
  NOT_USED = 500004,                        // Not Used
  EXPENDABLE = 500005,                      // Expendable
  TOTAL_RECORD_SETS = 500006,               // Total Record Sets
  LAUNCHED_MUNITION = 500007,               // Launched Munition
  ASSOCIATION = 500008,                     // Association
  SENSOR = 500009,                          // Sensor
  MUNITION_RELOAD = 500010,                 // Munition Reload
  ENGINE_FUEL_RELOAD = 500011,              // Engine Fuel Reload
  STORAGE_FUEL_RELOAD = 500012,             // Storage Fuel Reload
  EXPENDABLE_RELOAD = 500013,               // Expendable Reload
  IFF_CHANGE_CONTROL_MODE_1_CODE = 500014,  // IFF Change Control - Mode 1 Code
  IFF_CHANGE_CONTROL_MODE_2_CODE = 500015,  // IFF Change Control - Mode 2 Code
  IFF_CHANGE_CONTROL_MODE_3_CODE = 500016,  // IFF Change Control - Mode 3 Code
  IFF_CHANGE_CONTROL_MODE_4_CODE = 500017,  // IFF Change Control - Mode 4 Code
  IFF_CHANGE_CONTROL_MODE_5_CODE = 500018,  // IFF Change Control - Mode 5 Code
  IFF_CHANGE_CONTROL_MODE_6_CODE = 500019,  // IFF Change Control - Mode 6 Code
  LINK_16_DATA = 500021,                    // Link 16 Data
  ARM_ALERT = 500022,                       // ARM Alert
  IFF_CHANGE_CONTROL_MODE_ON_OFF = 500023,  // IFF Change Control - Mode On/Off
  WEAPON_STATUS_DATA = 500024,              // Weapon Status Data
  EXPENDABLE_STATUS_DATA = 500025,          // Expendable Status Data
  TACTIC_STATUS_DATA = 500026,              // Tactic Status Data
  EMITTER_SENSOR_DATA = 500027,             // Emitter/Sensor Data
  IOS_CONTROL_DATA = 500028,                // IOS Control Data
  STATIC_STATUS_DATA = 500029,              // Static Status Data
  REQUEST_INACTIVE_ENTITIES = 500200,       // Request Inactive Entities
  INACTIVE_ENTITY_QUANTITY = 500201,        // Inactive Entity Quantity
  INACTIVE_ENTITY_ID = 500202,              // Inactive Entity ID
  INACTIVE_ENTITY_TYPE = 500203,            // Inactive Entity Type
  ACTIVATION_TRIGGER_TYPE = 500204,         // Activation Trigger Type
  ACTIVATION_TRIGGER_VALUE = 500205,        // Activation Trigger Value
  AIR_TO_AIR_MISSILE_QTY = 551001,          // Air-to-Air Missile Qty
  AIM_7_MISSILE_QTY = 551002,               // AIM-7 Missile Qty
  AIM_9_MISSILE_QTY = 551003,               // AIM-9 Missile Qty
  AIM_120_MISSILE_QTY = 551004,             // AIM-120 Missile Qty
  AIR_TO_GROUND_MISSILE_QTY = 551005,       // Air-to-Ground Missile Qty
  SURFACE_TO_AIR_MISSILE_QTY = 551006,      // Surface-to-Air Missile Qty
  BULLET_QTY = 551007,                      // Bullet Qty
  CHAFF_QTY = 552001,                       // Chaff Qty
  FLARE_QTY = 552002,                       // Flare Qty
  FUEL_LEVEL = 553001,                      // Fuel Level
  ROUTE_TYPE = 553002,                      // Route Type
  THREAT_MODE = 553003,                     // Threat Mode
  TARGET_OCCLUDED = 553004,                 // Target Occluded
  TERRAIN_HEIGHT = 553005,                  // Terrain Height
  ENTITY_STATUS = 553006,                   // Entity Status
  MARSHAL_STATUS = 553007,                  // Marshal Status
  POWER_PLANT_STATUS = 553008,              // Power Plant Status
  NAV_LIGHT_STATUS = 553009,                // Nav Light Status
  INTERIOR_LIGHT_STATUS = 553010,           // Interior Light Status
  LANDING_LIGHT_STATUS = 553011,            // Landing Light Status
  FORMATION_LIGHT_STATUS = 553012,          // Formation Light Status
  ANTI_COLLISION_LIGHT_STATUS = 553013,     // Anti-Collision Light Status
  NAV_FORMATION_FLASH_RATE = 553014,        // Nav/Formation Flash Rate
  ANTI_COL_ON_DURATION = 553015,            // Anti-Col. 'On' Duration
  ANTI_COL_OFF_DURATION = 553016,           // Anti-Col. 'Off' Duration
  INTERCEPT_STATUS = 553017,                // Intercept Status
  LIFEFORM_SIGNALING_DEVICE_TYPE = 553018,  // LifeForm Signaling Device Type
  LIFEFORM_MOVEMENT_TYPE = 553019,          // LifeForm Movement Type
  LIFEFORM_IN_VEHICLE = 553020,             // LifeForm In Vehicle
  MOBILITY_KILL = 553021,                   // Mobility Kill
  FIREPOWER_KILL = 553022,                  // Firepower Kill
  TANKER_ENABLED_DISABLED = 553028,         // Tanker Enabled/Disabled
  THREAT_STATUS_TACTIC_OK_TO_SHOOT_DOWN_WEAPONS =
      553029,              // Threat Status Tactic OK to Shoot Down Weapons
  TACAN_CHANNEL = 554001,  // TACAN Channel
  TACAN_BAND = 554002,     // TACAN Band
  TACAN_MODE = 554003,     // TACAN Mode
  RWR_STATUS = 554004,     // RWR Status
  UHF_RADIO_FREQUENCY = 554005,              // UHF Radio Frequency
  EMIT_JAMMING_STATUS = 554006,              // Emit Jamming Status
  EMIT_JAMMING_TYPE = 554007,                // Emit Jamming Type
  RECEIVE_JAMMING_STATUS = 554008,           // Receive Jamming Status
  RADAR_MODE = 554009,                       // RADAR Mode
  AVAILABLE_RADAR_MODES = 554010,            // Available RADAR Modes
  JAMMER_POD_ENUMERATION = 554100,           // Jammer Pod Enumeration
  JAMMER_POD_BEHAVIOR = 554101,              // Jammer Pod Behavior
  JAMMER_POD_PROGRAMS = 554102,              // Jammer Pod Programs
  JAMMER_POD_RECEIVER_SENSITIVITY = 554103,  // Jammer Pod Receiver Sensitivity
  JAMMER_POD_RECEIVER_FREQUENCY_MINIMUM =
      554104,  // Jammer Pod Receiver Frequency Minimum
  JAMMER_POD_RECEIVER_FREQUENCY_MAXIMUM =
      554105,                       // Jammer Pod Receiver Frequency Maximum
  JAMMER_POD_POWER = 554106,        // Jammer Pod Power
  JAMMER_POD_VARIABILITY = 554107,  // Jammer Pod Variability
  JAMMER_POD_NUMBER_OF_FALSE_TARGETS =
      554108,                           // Jammer Pod Number of False Targets
  JAMMER_POD_JAMMER_KNOB = 554109,      // Jammer Pod Jammer Knob
  JAMMER_POD_MISSILE_JAMMING = 554110,  // Jammer Pod Missile Jamming
  EMITTER_OVERRIDE = 555001,            // Emitter Override
  JAMMER_OVERRIDE = 555002,             // Jammer Override
  DISENGAGE_REENGAGE = 555003,          // Disengage / Reengage
  HEADING_OVERRIDE = 555004,            // Heading Override
  ALTITUDE_OVERRIDE = 555005,           // Altitude Override
  SPEED_OVERRIDE = 555006,              // Speed Override
  VERBOSE_OVERRIDE = 555007,            // Verbose Override
  OCCLUSION_OVERRIDE = 555008,          // Occlusion Override
  COMMIT_RANGE = 556001,                // Commit Range
  CURRENT_SCENARIO_IFF_MODE_4A_CODE_FOR_THIS_THREAT_S_AFFILIATION =
      556007,  // Current Scenario IFF Mode 4A Code for This Threat's
               // Affiliation
  CURRENT_SCENARIO_IFF_MODE_4B_CODE_FOR_THIS_THREAT_S_AFFILIATION =
      556008,  // Current Scenario IFF Mode 4B Code for This Threat's
               // Affiliation
  OK_TO_ENGAGE_WAYPOINT_NUMBER = 556016,  // Ok to Engage Waypoint Number
  MAX_SPEED_AT_SEA_LEVEL = 556017,        // Max Speed at Sea Level
  MAX_SPEED = 556018,                     // Max Speed
  CURRENT_WAYPOINT_NUMBER = 556019,       // Current Waypoint Number
  ROUTE_INFORMATION = 556020,             // Route Information
  THREAT_STATUS_STATIC_MULTI_TARGET_TRACK =
      556029,                       // Threat Status Static Multi Target Track
  AIR_AIR_IR_MISSILE_QTY = 557001,  // Air-Air IR Missile Qty
  AIR_AIR_RADAR_MISSILE_QTY = 557002,     // Air-Air Radar Missile Qty
  AIR_GROUND_IR_MISSILE_QTY = 557003,     // Air-Ground IR Missile Qty
  AIR_GROUND_RADAR_MISSILE_QTY = 557004,  // Air-Ground Radar Missile Qty
  AIR_GROUND_ANTI_RADIATION_MISSILE_QTY =
      557005,                           // Air-Ground Anti-Radiation Missile Qty
  AIR_GROUND_BOMB_QTY = 557006,         // Air-Ground Bomb Qty
  AIR_GROUND_ROCKET_QTY = 557007,       // Air-Ground Rocket Qty
  SURFACE_AIR_IR_MISSILE_QTY = 557008,  // Surface-Air IR Missile Qty
  SURFACE_AIR_RADAR_MISSILE_QTY = 557009,  // Surface-Air Radar Missile Qty
  BULLET_QTY = 557010,                     // Bullet Qty
  PPLI_PUBLISH_ENABLED = 559001,           // PPLI Publish Enabled
  SURVEILLANCE_PUBLISHENABLED = 559002,    // Surveillance PublishEnabled
  NPG = 559003,                            // NPG
  NPG_CHANNEL = 559004,                    // NPG Channel
  JTIDS_TRACK_NUMBER = 559005,             // JTIDS Track Number
  LINK_16_CONTROLS_SURVEILLANCE_REPORTABLE =
      559006,  // Link 16 Controls - Surveillance Reportable
  LINK_16_CONTROLS_SURVEILLANCE_TRACK_QUALITY =
      559007,  // Link 16 Controls - Surveillance Track Quality
  LINK_16_CONTROLS_TARGET_POSITION_QUALITY =
      559008,  // Link 16 Controls - Target Position Quality
  LINK_16_CONTROLS_QUALITY_ERROR_TYPE =
      559009,  // Link 16 Controls - Quality Error Type
  LINK_16_CONTROLS_AFFILIATION_DETERMINATION_RULE =
      559010,  // Link 16 Controls - Affiliation Determination Rule
  LINK_16_CONTROLS_RESET_ENTITY_AFFILIATION =
      559011,  // Link 16 Controls - Reset Entity Affiliation
  LINK_16_CONTROLS_RESET_ALL_AFFILIATION =
      559012,                // Link 16 Controls - Reset All Affiliation
  END_OF_MESSAGES = 559999,  // End of Messages
  MALFUNCTION_ACTIVATE_DEACTIVATE_SET =
      600001,                            // Malfunction Activate/Deactivate Set
  MALFUNCTION_STATUS = 600002,           // Malfunction Status
  REQUEST_JTIDS_TRACK_NUMBERS = 600210,  // Request JTIDS Track Numbers
  TRACK_NUMBERS_VS_EID = 600212,         // Track Numbers vs EID
  TOTAL_NUMBER_OF_JTIDS_TRACK_NUMBERS =
      600214,  // Total Number of JTIDS Track Numbers
  PDU_NUMBER_IN_JTIDS_TRACK_NUMBER_RESPONSE =
      600215,  // PDU Number in JTIDS Track Number Response
  TOTAL_NUMBER_OF_PDUS_IN_JTIDS_TRACK_NUMBER_RESPONSE =
      600216,  // Total Number of PDUs in JTIDS Track Number Response
  AIR_TO_AIR_REFUELER_ENTITIES_REQUEST =
      600218,                           // Air to Air Refueler Entities Request
  AIR_TO_AIR_REFUELING_COUNT = 600219,  // Air to Air Refueling Count
  AIR_TO_AIR_REFUELER_ENTITY = 600220,  // Air To Air Refueler Entity
  FORMATION_LIBRARY_REQUEST = 600300,   // Formation Library Request
  TOTAL_NUMBER_FORMATION_LIBRARY_PDUS =
      600301,  // Total Number Formation Library PDUs
  PDU_NUMBER_IN_FORMATION_LIBRARY_RESPONSE =
      600302,  // PDU Number in Formation Library Response
  TOTAL_NUMBER_FORMATION_LIBRARY_ITEMS_IN_PDU =
      600303,  // Total Number Formation Library Items in PDU
  FORMATION_LIBRARY_VARIABLE = 600304,     // Formation Library Variable
  CREATE_RUNTIME_FORMATION = 600305,       // Create Runtime Formation
  FORMATION_REQUEST_HEADER = 600306,       // Formation Request Header
  FORMATION_POSITION_ABSOLUTE = 600307,    // Formation Position Absolute
  FORMATION_POSITION_RELATIVE = 600308,    // Formation Position Relative
  EXPENDABLES_RELOAD = 610006,             // Expendables Reload
  POSITION_FREEZE = 610007,                // Position Freeze
  ACTIVATE_OWNSHIP = 610008,               // Activate Ownship
  CHOCKS = 610009,                         // Chocks
  WARM_UP_COOL_DOWN_OVERRIDE = 610010,     // Warm-up Cool-down Override
  GROUND_POWER = 610011,                   // Ground Power
  SCRAMBLE_START = 610012,                 // Scramble Start
  OWNSHIP_AS_A_THREAT = 610013,            // Ownship as a Threat
  FUEL_EXTERNAL = 610015,                  // Fuel External
  FUEL_INTERNAL = 610016,                  // Fuel Internal
  FUEL_TANK_TEMP = 610017,                 // Fuel Tank Temp
  GROSS_WEIGHT = 610025,                   // Gross Weight
  ANGLE_OF_ATTACK = 610026,                // Angle Of Attack
  G_LOAD = 610027,                         // G Load
  WEIGHT_ON_WHEELS = 610029,               // Weight On Wheels
  STORED_ENERGY_SYSTEM_RELOAD = 610032,    // Stored Energy System Reload
  KILL_OVERRIDE = 610035,                  // Kill Override
  EXPENDABLES_FREEZE = 610036,             // Expendables Freeze
  GPS_SATELLITES_ENABLE_DISABLE = 610037,  // GPS Satellites Enable/Disable
  OWNSHIP_MESSAGE_DISPLAY = 610040,        // Ownship Message Display
  WEAPON_QUANTITY_FREEZE = 610042,         // Weapon Quantity Freeze
  GLOBAL_CONTROL_FREEZE_WEAPONS_QUANTITY_ON_ALL_OWNSHIPS =
      610043,  // Global Control - Freeze Weapons Quantity On All Ownships
  GLOBAL_CONTROL_FREEZE_FUEL_QUANTITY_ON_ALL_OWNSHIPS =
      610044,  // Global Control - Freeze Fuel Quantity On All Ownships
  GLOBAL_CONTROL_FREEZE_KILL_OVERRIDE_ON_ALL_OWNSHIPS =
      610045,  // Global Control - Freeze Kill Override On All Ownships
  GLOBAL_CONTROL_FREEZE_CRASH_OVERRIDE_ON_ALL_OWNSHIPS =
      610046,  // Global Control - Freeze Crash Override On All Ownships
  OWNSHIP_OFP_BLOCK_NUMBER = 610047,       // Ownship OFP Block Number
  WAYPOINT_INFORMATION_QUERY = 610048,     // Waypoint Information Query
  WAYPOINT_INFORMATION = 610049,           // Waypoint Information
  OWNSHIP_SUBSYSTEM_STATUS_DATA = 610050,  // Ownship Subsystem Status Data
  COCKPIT_SWITCH_STATUS = 613002,          // Cockpit Switch Status
  INTEGRATED_CONTROL_PANEL_MESSAGES =
      613003,                   // Integrated Control Panel Messages
  THROTTLE_POSITIONS = 613004,  // Throttle Positions
  CURRENT_CRITICAL_SWITCH_POSITION =
      613005,  // Current Critical Switch Position
  CORRECT_CRITICAL_SWITCH_POSITION =
      613006,                               // Correct Critical Switch Position
  CURRENT_CRITICAL_SWITCH_DATA = 613007,    // Current Critical Switch Data
  CORRECT_CRITICAL_SWITCH_DATA = 613008,    // Correct Critical Switch Data
  MISSION_INITIAL_CONDITIONS_SET = 613013,  // Mission Initial Conditions Set
  GLOBAL_CONTROL_MALFUNCTION_ACTIVE_ON_ALL_OWNSHIPS =
      613016,  // Global Control - Malfunction Active on All Ownships
  GLOBAL_CONTROL_MALFUNCTION_CLEAR_ON_ALL_OWNSHIPS =
      613017,  // Global Control - Malfunction Clear On All Ownships
  VALIDATED_CRITICAL_SWITCH_REPORT =
      613020,                 // Validated Critical Switch Report
  SAR_MAP_PATHNAME = 613021,  // SAR Map Pathname
  VALIDATED_CRITICAL_SWITCH_OWNSHIP_ID =
      613022,                        // Validated Critical Switch Ownship ID
  LOWER_BOOM_EVENT_REPORT = 613027,  // Lower Boom Event Report
  RAISE_BOOM_EVENT_REPORT = 613028,  // Raise Boom Event Report
  BREAKAWAY_EVENT_REPORT = 613029,   // Breakaway Event Report
  COMPLETE_EVENT_REPORT = 613030,    // Complete Event Report
  AUX_COMM_PANEL_FREQUENCY_DISPLAY =
      613031,                            // Aux Comm Panel Frequency Display
  NETWORK_STATION_INFORMATION = 615000,  // Network Station Information
  GLOBAL_CONTROL_SELECT_NETWORK_STATION =
      615001,  // Global Control Select Network Station
  NETWORK_STATION_UNDER_GLOBAL_CONTROL =
      615002,  // Network Station Under Global Control
  GLOBAL_CONTROL_STILL_CONTROLLING =
      615003,  // Global Control Still Controlling
  GLOBAL_CONTROL_RELEASE_CONTROL_OF_NETWORK_STATION =
      615004,  // Global Control Release Control of Network Station
  GLOBAL_CONTROL_FREEZE_WEAPON_QUANTITY =
      615005,  // Global Control Freeze Weapon Quantity
  GLOBAL_CONTROL_FREEZE_FUEL_QUANTITY =
      615006,  // Global Control Freeze Fuel Quantity
  GLOBAL_CONTROL_FREEZE_KILL_OVERRIDE =
      615007,  // Global Control Freeze Kill Override
  GLOBAL_CONTROL_FREEZE_CRASH_OVERRIDE =
      615008,  // Global Control Freeze Crash Override
  GLOBAL_CONTROL_MALFUNCTION_ACTIVE =
      615009,  // Global Control Malfunction Active
  GLOBAL_CONTROL_MALFUNCTION_CLEAR =
      615010,                              // Global Control Malfunction Clear
  GLOBAL_CONTROL_START_DEVICES = 615011,   // Global Control Start Devices
  GLOBAL_CONTROL_FREEZE_DEVICES = 615012,  // Global Control Freeze Devices
  GLOBAL_CONTROL_JTIDS_COMMAND = 615013,   // Global Control JTIDS Command
  NETWORK_STATION_IC_SET_INFORMATION =
      615015,                            // Network Station IC Set Information
  GLOBAL_CONTROL_RESET_IC_SET = 615017,  // Global Control Reset IC Set
  NUMBER_OF_CONTROLLING_UNITS = 615018,  // Number of Controlling Units
  NETWORK_STATION_JTIDS_CONTROLLING_UNITS =
      615019,  // Network Station JTIDS Controlling Units
  NETWORK_STATION_JTIDS_OBJECTIVE_TRACKS =
      615020,  // Network Station JTIDS Objective Tracks
  NUMBER_OF_REFERENCE_OBJECTS = 615021,  // Number of Reference Objects
  NETWORK_STATION_JTIDS_REFERENCE_OBJECTS =
      615022,  // Network Station JTIDS Reference Objects
  NETWORKED_STATION_STILL_UNDER_CONTROL =
      615023,  // Networked Station Still Under Control
  GLOBAL_CONTROL_DELETE_THREAT_ENTITIES =
      615024,  // Global Control Delete Threat Entities
  NETWORK_STATION_OWNSHIP_CALLSIGNS =
      615025,  // Network Station Ownship Callsigns
  GLOBAL_CONTROL_REQUEST_FORMATION_LIBRARY_DATA =
      615026,  // Global Control Request Formation Library Data
  TOTAL_NUMBER_FORMATION_LIBRARY_PDUS =
      615027,  // Total Number Formation Library PDUs
  PDU_NUMBER_IN_FORMATION_LIBRARY_RESPONSE =
      615028,  // PDU Number in Formation Library Response
  TOTAL_NUMBER_FORMATION_LIBRARY_ITEMS_IN_PDUS =
      615029,  // Total Number Formation Library Items in PDUs
  NETWORK_STATION_FORMATION_LIBRARY_ITEM =
      615030,  // Network Station Formation Library Item
  GLOBAL_CONTROL_ADD_RELATIVE_FORMATION =
      615031,  // Global Control Add Relative Formation
  NETWORK_STATION_TIC_FILENAME = 615032,  // Network Station TIC Filename
  GLOBAL_CONTROL_FREEZE_WARM_UP_OVERRIDE =
      615033,                          // Global Control Freeze Warm-up Override
  GLOBAL_CONTROL_RELOAD_SES = 615034,  // Global Control Reload SES
  GLOBAL_CONTROL_RELOAD_WEAPONS = 615035,  // Global Control Reload Weapons
  GLOBAL_CONTROL_RELOAD_EXPENDABLES =
      615036,                           // Global Control Reload Expendables
  GLOBAL_CONTROL_RELOAD_FUEL = 615037,  // Global Control Reload Fuel
  GLOBAL_CONTROL_RELOAD_FIREBOTTLE =
      615038,                                // Global Control Reload Firebottle
  TEST_PATTERN_DORT = 700000,                // Test Pattern (DORT)
  AUDIO_TEST_DORT = 700001,                  // Audio Test (DORT)
  AUDIO_TONE_DORT = 700002,                  // Audio Tone (DORT)
  CALIBRATE_THROTTLES_DORT = 700003,         // Calibrate Throttles (DORT)
  OPERATIONAL_LIMITS_EVENT_REPORT = 700004,  // Operational Limits Event Report
  OPERATIONAL_LIMITS = 700005,               // Operational Limits
  EVENT_MARKER_MESSAGE = 1000620,            // Event Marker Message
  RECEIVER_AIRCRAFT_AERO_MODEL_DATA =
      2000000,  // Receiver Aircraft Aero Model Data
  TANKER_AIRCRAFT_AERO_MODEL_DATA = 2000010,  // Tanker Aircraft Aero Model Data
  BOOM_AIRCRAFT_AERO_MODEL_DATA = 2000020,    // Boom Aircraft Aero Model Data
  ACCESS_TO_IMAGE_GENERATOR_DATA = 2000030,   // Access to Image Generator Data
  ACCESS_TO_IMAGE_GENERATOR_DATA = 2000031,   // Access to Image Generator Data
  ACCESS_TO_IMAGE_GENERATOR_DATA = 2000032,   // Access to Image Generator Data
  ACCESS_TO_IMAGE_GENERATOR_DATA = 2000033,   // Access to Image Generator Data
  ACCESS_TO_IMAGE_GENERATOR_DATA = 2000034,   // Access to Image Generator Data
  ACCESS_TO_IMAGE_GENERATOR_DATA = 2000035,   // Access to Image Generator Data
  ACCESS_TO_IMAGE_GENERATOR_DATA = 2000036,   // Access to Image Generator Data
  ACCESS_TO_IMAGE_GENERATOR_DATA = 2000037,   // Access to Image Generator Data
  ACCESS_TO_IMAGE_GENERATOR_DATA = 2000038,   // Access to Image Generator Data
  ACCESS_TO_IMAGE_GENERATOR_DATA = 2000039,   // Access to Image Generator Data
  ACCESS_TO_IMAGE_GENERATOR_DATA = 2000040,   // Access to Image Generator Data
  ACCESS_TO_IMAGE_GENERATOR_DATA = 2000041,   // Access to Image Generator Data
  ACCESS_TO_IMAGE_GENERATOR_DATA = 2000042,   // Access to Image Generator Data
  ACCESS_TO_IMAGE_GENERATOR_DATA = 2000043,   // Access to Image Generator Data
  ACCESS_TO_IMAGE_GENERATOR_DATA = 2000044,   // Access to Image Generator Data
  ACCESS_TO_IMAGE_GENERATOR_DATA = 2000045,   // Access to Image Generator Data
  HOST_LOAD_NUMBER = 2000050,                 // Host Load Number
  EXTENDED_FIRE_EVENT_REPORTS = 5005001,      // Extended Fire Event Reports
  BATTLE_DAMAGE_ASSESSMENT_BDA_EVENT_REPORT =
      5005002,  // Battle Damage Assessment (BDA) Event Report
  EXTENDED_FIRE_EVENT_LAUNCHER = 5005003,    // Extended Fire Event Launcher
  EXTENDED_FIRE_EVENT_MISSILE = 5005006,     // Extended Fire Event Missile
  EXTENDED_FIRE_EVENT_MRM_WEAPON = 5005008,  // Extended Fire Event MRM Weapon
  EXTENDED_FIRE_EVENT_GUN_FIRE_CONTROL =
      5005009,                         // Extended Fire Event Gun Fire Control
  EXTENDED_FIRE_EVENT_BOMB = 5005010,  // Extended Fire Event Bomb
  EXTENDED_FIRE_EVENT_EXPENDABLE = 5005011,  // Extended Fire Event Expendable
  BATTLE_DAMAGE_ASSESSMENT = 5005012,        // Battle Damage Assessment
  EXTENDED_FIRE_PICKLE_EVENT = 5005014,      // Extended Fire Pickle Event
  RADAR_TRACK_REPORT = 5005055,              // Radar Track Report
  JAMMER_REPORT = 5005060,                   // Jammer Report
  JAMMER_FALSE_TARGETS_REPORT = 5005061,     // Jammer False Targets Report
  DETECT_EVENT_REPORT = 5005063,             // Detect Event Report
  MALD_BEAM_REPORT = 5005070,                // MALD Beam Report
  TRANSMITTER_RADIATION_VOLUME =
      5005080,  // Transmitter Radiation Volume [DEPRECATED]
  TRANSMITTER_RADIATION_VOLUME_V2 = 5005081,  // Transmitter Radiation Volume v2
  PHYSICAL_NETWORK_DEFINITION = 5007010,      // Physical Network Definition
  NETWORK_CHANNEL_DEFINITION = 5007020,       // Network Channel Definition
  LOGICAL_NETWORK_DEFINITION = 5007030,       // Logical Network Definition
  LOGICAL_NETWORK_ENTITY_DEFINITION =
      5007040,  // Logical Network - Entity Definition
  PHYSICAL_NETWORK_ENTITY_DEFINITION =
      5007050,                          // Physical Network - Entity Definition
  C2_MESSAGE = 5008010,                 // C2 Message
  CANDIDATE_OBJECT = 5008020,           // Candidate Object
  SET_OF_CANDIDATE_OBJECTS = 5008030,   // Set of Candidate Objects
  BOUNDED_REGION = 5008040,             // Bounded Region
  ANGULAR_REGION = 5008050,             // Angular Region
  ROE_OBJECT = 5008060,                 // RoE Object
  TRACK_OBJECT = 5008070,               // Track Object
  SET_OF_TRACK_OBJECTS = 5008080,       // Set of Track Objects
  LOGICAL_ENTITY_DEFINITION = 5009010,  // Logical Entity Definition
  LOGICAL_ENTITY_RELATIONSHIP_DEFINITION =
      5009020,                        // Logical Entity Relationship Definition
  INTENT_BASED_EW_MESSAGE = 5507010,  // Intent-Based EW Message
};

/*
 * Source: uid=67
 */
enum class StopFreezeReason : uint8_t {
  OTHER = 0,                  // Other
  RECESS = 1,                 // Recess
  TERMINATION = 2,            // Termination
  SYSTEM_FAILURE = 3,         // System Failure
  SECURITY_VIOLATION = 4,     // Security Violation
  ENTITY_RECONSTITUTION = 5,  // Entity Reconstitution
  STOP_FOR_RESET = 6,         // Stop for reset
  STOP_FOR_RESTART = 7,       // Stop for restart
  ABORT_TRAINING_RETURN_TO_TACTICAL_OPERATIONS =
      8,  // Abort Training Return to Tactical Operations
};

/*
 * Source: uid=69
 */
enum class AcknowledgeAcknowledgeFlag : uint16_t {
  CREATE_ENTITY = 1,       // Create Entity
  REMOVE_ENTITY = 2,       // Remove Entity
  START_RESUME = 3,        // Start/Resume
  STOP_FREEZE = 4,         // Stop/Freeze
  TRANSFER_OWNERSHIP = 5,  // Transfer Ownership
};

/*
 * Source: uid=70
 */
enum class AcknowledgeResponseFlag : uint16_t {
  OTHER = 0,                    // Other
  ABLE_TO_COMPLY = 1,           // Able to comply
  UNABLE_TO_COMPLY = 2,         // Unable to comply
  PENDING_OPERATOR_ACTION = 3,  // Pending Operator Action
};

/*
 * Source: uid=71
 */
enum class ActionRequestActionId : uint32_t {
  OTHER = 0,  // Other
  LOCAL_STORAGE_OF_THE_REQUESTED_INFORMATION =
      1,  // Local storage of the requested information
  INFORM_SM_OF_EVENT_RAN_OUT_OF_AMMUNITION =
      2,  // Inform SM of event "ran out of ammunition"
  INFORM_SM_OF_EVENT_KILLED_IN_ACTION =
      3,                          // Inform SM of event "killed in action"
  INFORM_SM_OF_EVENT_DAMAGE = 4,  // Inform SM of event "damage"
  INFORM_SM_OF_EVENT_MOBILITY_DISABLED =
      5,  // Inform SM of event "mobility disabled"
  INFORM_SM_OF_EVENT_FIRE_DISABLED = 6,  // Inform SM of event "fire disabled"
  INFORM_SM_OF_EVENT_RAN_OUT_OF_FUEL =
      7,                          // Inform SM of event "ran out of fuel"
  RECALL_CHECKPOINT_DATA = 8,     // Recall checkpoint data
  RECALL_INITIAL_PARAMETERS = 9,  // Recall initial parameters
  INITIATE_TETHER_LEAD = 10,      // Initiate tether-lead
  INITIATE_TETHER_FOLLOW = 11,    // Initiate tether-follow
  UNTHETHER = 12,                 // Unthether
  INITIATE_SERVICE_STATION_RESUPPLY = 13,  // Initiate service station resupply
  INITIATE_TAILGATE_RESUPPLY = 14,         // Initiate tailgate resupply
  INITIATE_HITCH_LEAD = 15,                // Initiate hitch lead
  INITIATE_HITCH_FOLLOW = 16,              // Initiate hitch follow
  UNHITCH = 17,                            // Unhitch
  MOUNT = 18,                              // Mount
  DISMOUNT = 19,                           // Dismount
  START_DRC_DAILY_READINESS_CHECK = 20,    // Start DRC (Daily Readiness Check)
  STOP_DRC = 21,                           // Stop DRC
  DATA_QUERY = 22,                         // Data Query
  STATUS_REQUEST = 23,                     // Status Request
  SEND_OBJECT_STATE_DATA = 24,             // Send Object State Data
  RECONSTITUTE = 25,                       // Reconstitute
  LOCK_SITE_CONFIGURATION = 26,            // Lock Site Configuration
  UNLOCK_SITE_CONFIGURATION = 27,          // Unlock Site Configuration
  UPDATE_SITE_CONFIGURATION = 28,          // Update Site Configuration
  QUERY_SITE_CONFIGURATION = 29,           // Query Site Configuration
  TETHERING_INFORMATION = 30,              // Tethering Information
  MOUNT_INTENT = 31,                       // Mount Intent
  ACCEPT_SUBSCRIPTION = 33,                // Accept Subscription
  UNSUBSCRIBE = 34,                        // Unsubscribe
  TELEPORT_ENTITY = 35,                    // Teleport entity
  CHANGE_AGGREGATE_STATE = 36,             // Change aggregate state
  REQUEST_START_PDU = 37,                  // Request Start PDU
  WAKEUP_GET_READY_FOR_INITIALIZATION =
      38,                               // Wakeup get ready for initialization
  INITIALIZE_INTERNAL_PARAMETERS = 39,  // Initialize internal parameters
  SEND_PLAN_DATA = 40,                  // Send plan data
  SYNCHRONIZE_INTERNAL_CLOCKS = 41,     // Synchronize internal clocks
  RUN = 42,                             // Run
  SAVE_INTERNAL_PARAMETERS = 43,        // Save internal parameters
  SIMULATE_MALFUNCTION = 44,            // Simulate malfunction
  JOIN_EXERCISE = 45,                   // Join exercise
  RESIGN_EXERCISE = 46,                 // Resign exercise
  TIME_ADVANCE = 47,                    // Time advance
  TACCSF_LOS_REQUEST_TYPE_1 = 100,      // TACCSF LOS Request-Type 1
  TACCSF_LOS_REQUEST_TYPE_2 = 101,      // TACCSF LOS Request-Type 2
  AIRMOUNT_MOUNT_REQUEST = 4303,        // Airmount Mount Request
  AIRMOUNT_DISMOUNT_REQUEST = 4304,     // Airmount Dismount Request
  AIRMOUNT_INFORMATION_REQUEST = 4305,  // Airmount Information Request
};

/*
 * Source: uid=72
 */
enum class ActionResponseRequestStatus : uint32_t {
  OTHER = 0,                             // Other
  PENDING = 1,                           // Pending
  EXECUTING = 2,                         // Executing
  PARTIALLY_COMPLETE = 3,                // Partially Complete
  COMPLETE = 4,                          // Complete
  REQUEST_REJECTED = 5,                  // Request rejected
  RETRANSMIT_REQUEST_NOW = 6,            // Retransmit request now
  RETRANSMIT_REQUEST_LATER = 7,          // Retransmit request later
  INVALID_TIME_PARAMETERS = 8,           // Invalid time parameters
  SIMULATION_TIME_EXCEEDED = 9,          // Simulation time exceeded
  REQUEST_DONE = 10,                     // Request done
  TACCSF_LOS_REPLY_TYPE_1 = 100,         // TACCSF LOS Reply-Type 1
  TACCSF_LOS_REPLY_TYPE_2 = 101,         // TACCSF LOS Reply-Type 2
  JOIN_EXERCISE_REQUEST_REJECTED = 201,  // Join Exercise Request Rejected
};

/*
 * Source: uid=73
 */
enum class EventReportEventType : uint32_t {
  OTHER = 0,                  // Other
  RAN_OUT_OF_AMMUNITION = 2,  // Ran Out of Ammunition
  KILLED_IN_ACTION_KIA = 3,   // Killed in Action (KIA)
  DAMAGE = 4,                 // Damage
  MOBILITY_DISABLED = 5,      // Mobility Disabled
  FIRE_DISABLED = 6,          // Fire Disabled
  RAN_OUT_OF_FUEL = 7,        // Ran Out of Fuel
  ENTITY_INITIALIZATION = 8,  // Entity Initialization
  REQUEST_FOR_INDIRECT_FIRE_OR_CAS_MISSION =
      9,                           // Request for Indirect Fire or CAS Mission
  INDIRECT_FIRE_OR_CAS_FIRE = 10,  // Indirect Fire or CAS Fire
  MINEFIELD_ENTRY = 11,            // Minefield Entry
  MINEFIELD_DETONATION = 12,       // Minefield Detonation
  VEHICLE_MASTER_POWER_ON = 13,    // Vehicle Master Power On
  VEHICLE_MASTER_POWER_OFF = 14,   // Vehicle Master Power Off
  AGGREGATE_STATE_CHANGE_REQUESTED = 15,  // Aggregate State Change Requested
  PREVENT_COLLISION_DETONATION = 16,      // Prevent Collision / Detonation
  OWNERSHIP_REPORT = 17,                  // Ownership Report
  RADAR_PERCEPTION = 18,                  // Radar Perception
  DETECT = 19,                            // Detect
};

/*
 * Source: uid=74
 */
enum class RequiredReliabilityService : uint8_t {
  ACKNOWLEDGED = 0,    // Acknowledged
  UNACKNOWLEDGED = 1,  // Unacknowledged
};

/*
 * Source: uid=75
 */
enum class EmitterName : uint16_t {
  _1245_6X = 2,                             // 1245/6X
  _1L117 = 3,                               // 1L117
  _1L121E = 4,                              // 1L121E
  _1L250 = 5,                               // 1L250
  _1L220_U = 6,                             // 1L220-U
  _1L122_1E = 7,                            // 1L122-1E
  _1RL257 = 9,                              // 1RL257
  _1RL138 = 10,                             // 1RL138
  _1RL257_KRASUKHA_4_JAMMER = 11,           // 1RL257 (Krasukha-4) Jammer
  _5N20 = 12,                               // 5N20
  _5H62B = 13,                              // 5H62B
  _5P_10 = 14,                              // 5P-10
  _5P_10E = 15,                             // 5P-10E
  _5P_10_01 = 16,                           // 5P-10-01
  _5P_10_01E = 17,                          // 5P-10-01E
  _5P_10_02 = 18,                           // 5P-10-02
  _5P_10_02E = 19,                          // 5P-10-02E
  _5P_10_03 = 20,                           // 5P-10-03
  _5P_10_03E = 21,                          // 5P-10-03E
  _5P_10E_MOD = 22,                         // 5P-10E MOD
  _621A_3 = 25,                             // 621A-3
  VALUE_40 = 40,                            //
  _9B_1103M2 = 42,                          // 9B-1103M2
  _1226_DECCA_MIL = 45,                     // 1226 DECCA MIL
  _9B_1348 = 46,                            // 9B-1348
  _3KM6 = 47,                               // 3KM6
  _9KR400 = 48,                             // 9KR400
  _50N6A = 49,                              // 50N6A
  _55G6_1 = 50,                             // 55G6-1
  _59N6 = 55,                               // 59N6
  _5N69 = 57,                               // 5N69
  _67N6 = 60,                               // 67N6
  _76T6 = 63,                               // 76T6
  _77T6_ABM = 64,                           // 77T6 ABM
  _80K6 = 65,                               // 80K6
  _91N6A_M = 66,                            // 91N6A(M)
  _96L6E = 70,                              // 96L6E
  _96L6_TSP = 75,                           // 96L6-TsP
  _9C18M3 = 76,                             // 9C18M3
  _9C36M = 77,                              // 9C36M
  _9GR400 = 80,                             // 9GR400
  _9_GR_400A = 81,                          // 9 GR 400A
  _9GR600 = 90,                             // 9GR600
  _9GR606 = 91,                             // 9GR606
  _9_LV_100 = 125,                          // 9 LV 100
  _9LV_200_TA = 135,                        // 9LV 200 TA
  _9LV_200_TV = 180,                        // 9LV 200 TV
  _9LV_200_TT = 181,                        // 9LV 200 TT
  _9LV200_MK_III = 183,                     // 9LV200 MK III
  _9LV326 = 185,                            // 9LV326
  _9M96E2_SEEKER = 190,                     // 9M96E2 Seeker
  _9S15M2 = 195,                            // 9S15M2
  _9S19M2 = 196,                            // 9S19M2
  _9S19ME = 197,                            // 9S19ME
  _9S32M = 198,                             // 9S32M
  _9S32ME = 199,                            // 9S32ME
  _9S36E = 200,                             // 9S36E
  _9S112 = 215,                             // 9S112
  VALUE_225 = 225,                          //
  VALUE_270 = 270,                          //
  VALUE_315 = 315,                          //
  VALUE_360 = 360,                          //
  VALUE_405 = 405,                          //
  VALUE_450 = 450,                          //
  VALUE_495 = 495,                          //
  VALUE_540 = 540,                          //
  VALUE_585 = 585,                          //
  VALUE_630 = 630,                          //
  VALUE_675 = 675,                          //
  VALUE_720 = 720,                          //
  VALUE_765 = 765,                          //
  VALUE_810 = 810,                          //
  VALUE_855 = 855,                          //
  VALUE_900 = 900,                          //
  VALUE_945 = 945,                          //
  VALUE_990 = 990,                          //
  VALUE_1035 = 1035,                        //
  AA_6C_ACRID_R_40 = 1070,                  // AA-6C Acrid (R-40)
  AA_7C_APEX_R_24R = 1073,                  // AA-7C Apex (R-24R)
  VALUE_1080 = 1080,                        //
  AA_10A_R_27R = 1081,                      // AA-10A (R-27R)
  VALUE_1082 = 1082,                        //
  AA_13_ARROW_SEEKER = 1085,                // AA-13 Arrow Seeker
  AAM_4B_MH = 1090,                         // AAM-4B MH
  AA_300 = 1094,                            // AA-300
  AA_12_SEEKER = 1095,                      // AA-12 Seeker
  VALUE_1096 = 1096,                        //
  ADES = 1097,                              // ADES
  ADS_4_LRSR = 1098,                        // ADS-4 LRSR
  ACR_430 = 1099,                           // ACR-430
  AGAVE = 1100,                             // Agave
  ACSOPRI_E = 1101,                         // ACSOPRI-E
  ABD_2000 = 1102,                          // ABD 2000
  ADAC_MK_1 = 1110,                         // ADAC MK 1
  ADAC_MK_2 = 1111,                         // ADAC MK 2
  ADAR = 1113,                              // ADAR
  ADOUR = 1115,                             // ADOUR
  AGAT_9B_1348 = 1117,                      // AGAT 9B-1348
  ADROS_KT_01AV = 1118,                     // Adros KT-01AV
  AGAT_9E420 = 1120,                        // Agat 9E420
  AGM_158_JASSM_SAR = 1122,                 // AGM-158 JASSM SAR
  AGM_88_HARM_MMW = 1123,                   // AGM-88 HARM MMW
  AGRION_15 = 1125,                         // AGRION 15
  VALUE_1130 = 1130,                        //
  AHV_17 = 1150,                            // AHV-17
  AI_MK_23 = 1170,                          // AI MK 23
  AIDA_II = 1215,                           // AIDA II
  AIM_120A = 1216,                          // AIM-120A
  AIM_7M_SPARROW = 1218,                    // AIM-7M Sparrow
  _1L271 = 1230,                            // 1L271
  ALA_51 = 1240,                            // ALA-51
  ALBATROS_MK2 = 1260,                      // Albatros MK2
  ALT_50 = 1263,                            // ALT-50
  ALTAIR = 1264,                            // ALTAIR
  AM_APS_717 = 1265,                        // AM/APS-717
  AMES_13_MK_1 = 1268,                      // AMES 13 MK 1
  WGU_16_B = 1270,                          // WGU-16/B
  _1L13_3_55G6 = 1280,                      // 1L13-3 (55G6)
  _1L13_3_55G6 = 1282,                      // 1L13-3 (55G6)
  AMDR_3D = 1288,                           // AMDR 3D
  ANA_SPS_502 = 1305,                       // ANA SPS 502
  VALUE_1306 = 1306,                        //
  ANRITSU_ELECTRIC_AR_30A = 1350,           // ANRITSU Electric AR-30A
  ANTILOPE_V = 1395,                        // Antilope V
  AN_AAQ_24 = 1397,                         // AN/AAQ-24
  AN_ADM_160 = 1398,                        // AN/ADM-160
  AN_ALE_50 = 1400,                         // AN/ALE-50
  AN_ALQ_76 = 1410,                         // AN/ALQ-76
  AN_ALQ_99 = 1440,                         // AN/ALQ-99
  AN_ALQ_99_BAND_4 = 1441,                  // AN/ALQ-99 Band 4
  AN_ALQ_99_LBT = 1442,                     // AN/ALQ-99 LBT
  AN_ALQ_100 = 1485,                        // AN/ALQ-100
  AN_ALQ_101 = 1530,                        // AN/ALQ-101
  AN_ALQ_119 = 1575,                        // AN/ALQ-119
  AN_ALQ_122 = 1585,                        // AN/ALQ-122
  AN_ALQ_126A = 1620,                       // AN/ALQ-126A
  AN_ALQ_128 = 1621,                        // AN/ALQ-128
  AN_ALQ_126B = 1622,                       // AN/ALQ-126B
  AN_ALQ_131 = 1626,                        // AN/ALQ-131
  AN_ALQ_131_BLK_II = 1627,                 // AN/ALQ-131 Blk II
  AN_ALQ_135C_D = 1628,                     // AN/ALQ-135C/D
  AN_ALQ_144A_V_3 = 1630,                   // AN/ALQ-144A(V)3
  AN_ALQ_153 = 1632,                        // AN/ALQ-153
  AN_ALQ_157JAMMER = 1633,                  // AN/ALQ-157Jammer
  AN_ALQ_155 = 1634,                        // AN/ALQ-155
  AN_ALQ_156 = 1635,                        // AN/ALQ-156
  AN_ALQ_161_A = 1636,                      // AN/ALQ-161/A
  AN_ALQ_161 = 1637,                        // AN/ALQ-161
  AN_ALQ_162 = 1638,                        // AN/ALQ-162
  AN_ALQ_164 = 1639,                        // AN/ALQ-164
  AN_ALQ_165 = 1640,                        // AN/ALQ-165
  AN_ALQ_187_JAMMER = 1641,                 // AN/ALQ-187 Jammer
  AN_ALQ_167 = 1642,                        // AN/ALQ-167
  AN_ALQ_172_V_1 = 1643,                    // AN/ALQ-172(V)1
  AN_ALQ_172_V_2 = 1644,                    // AN/ALQ-172(V)2
  AN_ALQ_172_V_3 = 1645,                    // AN/ALQ-172(V)3
  AN_ALQ_176 = 1646,                        // AN/ALQ-176
  AN_ALQ_178 = 1647,                        // AN/ALQ-178
  AN_ALQ_184 = 1648,                        // AN/ALQ-184
  AN_ALQ_184_V_9 = 1649,                    // AN/ALQ-184(V)9
  AN_ALQ_188 = 1650,                        // AN/ALQ-188
  AN_ALQ_214 = 1651,                        // AN/ALQ-214
  AN_ALR_56 = 1652,                         // AN/ALR-56
  AN_ALQ_221 = 1653,                        // AN/ALQ-221
  AN_ALR_69 = 1654,                         // AN/ALR-69
  AN_ALQ_211_V = 1655,                      // AN/ALQ-211(V)
  AN_ALT_16A = 1656,                        // AN/ALT-16A
  AN_ALQ_173 = 1657,                        // AN/ALQ-173
  AN_ALT_28 = 1658,                         // AN/ALT-28
  AN_ALR_66B_JAMMER = 1659,                 // AN/ALR-66B Jammer
  AN_ALT_32A = 1660,                        // AN/ALT-32A
  AN_ALQ_196 = 1661,                        // AN/ALQ-196
  ALQ_249_NEXT_GENERATION_JAMMER = 1662,    // ALQ-249 Next Generation Jammer
  AN_ALQ_240_V_1_JAMMER = 1663,             // AN/ALQ-240(V)1 Jammer
  AN_ALR_66B_JAMMER = 1664,                 // AN/ALR-66B Jammer
  AN_APD_10 = 1665,                         // AN/APD 10
  AN_ALQ_213 = 1670,                        // AN/ALQ-213
  ALQ_214A_V_4_5_JAMMER = 1672,             // ALQ-214A(V)4/5 Jammer
  AN_ALQ_218 = 1680,                        // AN/ALQ-218
  AN_APG_50 = 1700,                         // AN/APG-50
  AN_APG_53 = 1710,                         // AN/APG-53
  AN_APG_59 = 1755,                         // AN/APG-59
  AN_APG_63 = 1800,                         // AN/APG-63
  AN_APG_63_V_1 = 1805,                     // AN/APG-63(V)1
  AN_APG_63_V_2 = 1807,                     // AN/APG-63(V)2
  AN_APG_63_V_3 = 1809,                     // AN/APG-63(V)3
  AN_APG_65 = 1845,                         // AN/APG-65
  AN_APG_66 = 1870,                         // AN/APG-66
  AN_APG_66_V = 1871,                       // AN/APG-66(V)
  AN_APG_66_V_2 = 1872,                     // AN/APG-66(V)2
  AN_APG_67 = 1880,                         // AN/APG-67
  AN_APG_68 = 1890,                         // AN/APG-68
  AN_APG_68_V_9 = 1895,                     // AN/APG-68(v)9
  AN_APG_70 = 1935,                         // AN/APG-70
  AN_APG_71 = 1940,                         // AN/APG-71
  AN_APG_73 = 1945,                         // AN/APG-73
  AN_APG_77 = 1960,                         // AN/APG-77
  AN_APG_78 = 1970,                         // AN/APG-78
  AN_APG_79 = 1971,                         // AN/APG-79
  AN_APG_80 = 1972,                         // AN/APG-80
  AN_APG_81 = 1974,                         // AN/APG-81
  AN_APG_82_V_1 = 1975,                     // AN/APG-82(V)1
  AN_APG_83 = 1976,                         // AN/APG-83
  AN_APG_502 = 1980,                        // AN/APG-502
  AN_APN_1 = 2025,                          // AN/APN-1
  AN_APN_22 = 2070,                         // AN/APN-22
  AN_APN_59 = 2115,                         // AN/APN-59
  AN_APN_69 = 2160,                         // AN/APN-69
  AN_APN_81 = 2205,                         // AN/APN-81
  AN_APN_102 = 2220,                        // AN/APN-102
  AN_APN_117 = 2250,                        // AN/APN-117
  AN_APN_118 = 2295,                        // AN/APN-118
  AN_APN_122 = 2320,                        // AN/APN-122
  AN_APN_130 = 2340,                        // AN/APN-130
  AN_APN_131 = 2385,                        // AN/APN-131
  AN_APN_133 = 2430,                        // AN/APN-133
  AN_APN_134 = 2475,                        // AN/APN-134
  AN_APN_141_V = 2476,                      // AN/APN-141(V)
  AN_APN_147 = 2520,                        // AN/APN-147
  AN_APN_150 = 2565,                        // AN/APN-150
  AN_APN_153 = 2610,                        // AN/APN-153
  AN_APN_154 = 2655,                        // AN/APN-154
  AN_APN_155 = 2700,                        // AN/APN-155
  AN_APN_159 = 2745,                        // AN/APN-159
  AN_APN_177 = 2746,                        // AN/APN-177
  AN_APN_179 = 2747,                        // AN/APN-179
  AN_APN_169 = 2748,                        // AN/APN-169
  AN_APN_182 = 2790,                        // AN/APN-182
  AN_APN_187 = 2835,                        // AN/APN-187
  AN_APN_190 = 2880,                        // AN/APN-190
  AN_APN_194 = 2925,                        // AN/APN-194
  AN_APN_195 = 2970,                        // AN/APN-195
  AN_APN_198 = 3015,                        // AN/APN-198
  AN_APN_200 = 3060,                        // AN/APN-200
  AN_APN_202 = 3105,                        // AN/APN-202
  AN_APN_215 = 3106,                        // AN/APN-215
  AN_APN_209 = 3120,                        // AN/APN-209
  AN_APN_209D = 3121,                       // AN/APN-209D
  AN_APN_209A = 3122,                       // AN/APN-209A
  AN_APN_215 = 3148,                        // AN/APN-215
  AN_APN_217 = 3150,                        // AN/APN-217
  AN_APN_218 = 3152,                        // AN/APN-218
  AN_APN_224 = 3153,                        // AN/APN-224
  AN_APN_227 = 3154,                        // AN/APN-227
  AN_APN_230 = 3155,                        // AN/APN-230
  AN_APN_232 = 3156,                        // AN/APN-232
  AN_APN_237A = 3157,                       // AN/APN-237A
  AN_APN_234 = 3158,                        // AN/APN-234
  AN_APN_235 = 3159,                        // AN/APN-235
  AN_APN_238 = 3160,                        // AN/APN-238
  AN_APN_222 = 3161,                        // AN/APN-222
  AN_APN_239 = 3162,                        // AN/APN-239
  AN_APN_241 = 3164,                        // AN/APN-241
  AN_APN_242 = 3166,                        // AN/APN-242
  AN_APN_243 = 3170,                        // AN/APN-243
  AN_APN_506 = 3195,                        // AN/APN-506
  AN_APQ_72 = 3240,                         // AN/APQ-72
  AN_APQ_99 = 3285,                         // AN/APQ-99
  AN_APQ_100 = 3330,                        // AN/APQ-100
  AN_APQ_102 = 3375,                        // AN/APQ-102
  AN_APQ_107 = 3376,                        // AN/APQ-107
  AN_APQ_109 = 3420,                        // AN/APQ-109
  AN_APQ_113 = 3465,                        // AN/APQ-113
  AN_APQ_120 = 3510,                        // AN/APQ-120
  AN_APQ_122 = 3512,                        // AN/APQ-122
  AN_APQ_126 = 3555,                        // AN/APQ-126
  AN_APQ_128 = 3600,                        // AN/APQ-128
  AN_APQ_129 = 3645,                        // AN/APQ-129
  AN_APQ_148 = 3690,                        // AN/APQ-148
  AN_APQ_150A = 3700,                       // AN/APQ-150A
  AN_APQ_153 = 3735,                        // AN/APQ-153
  AN_APQ_155 = 3770,                        // AN/APQ-155
  AN_APQ_159 = 3780,                        // AN/APQ-159
  AN_APQ_164 = 3785,                        // AN/APQ-164
  AN_APQ_166 = 3788,                        // AN/APQ-166
  AN_APQ_170 = 3790,                        // AN/APQ-170
  AN_APQ_174 = 3791,                        // AN/APQ-174
  AN_APQ_180 = 3794,                        // AN/APQ-180
  AN_APQ_181 = 3795,                        // AN/APQ-181
  AN_APQ_186 = 3800,                        // AN/APQ-186
  AN_APS_15J = 3810,                        // AN/APS-15J
  AN_APS_16_V_2 = 3813,                     // AN/APS-16(V)2
  AN_APS_31 = 3820,                         // AN/APS-31
  AN_APS_42 = 3825,                         // AN/APS-42
  AN_APS_80 = 3870,                         // AN/APS-80
  AN_APS_88 = 3915,                         // AN/APS-88
  AN_APS_88A = 3916,                        // AN/APS-88A
  AN_APS_94 = 3920,                         // AN/APS-94
  AN_APS_96 = 3922,                         // AN/APS-96
  AN_APS_113 = 3958,                        // AN/APS-113
  AN_APS_115 = 3960,                        // AN/APS-115
  AN_APS_116 = 4005,                        // AN/APS-116
  AN_APS_120 = 4050,                        // AN/APS-120
  AN_APS_121 = 4095,                        // AN/APS-121
  AN_APS_124 = 4140,                        // AN/APS-124
  AN_APS_125 = 4185,                        // AN/APS-125
  AN_APS_127 = 4190,                        // AN/APS-127
  AN_APS_128 = 4230,                        // AN/APS-128
  AN_APS_130 = 4275,                        // AN/APS-130
  AN_APS_133 = 4320,                        // AN/APS-133
  AN_APS_134 = 4365,                        // AN/APS-134
  AN_APS_137 = 4410,                        // AN/APS-137
  AN_APS_137_V_5 = 4413,                    // AN/APS-137(V)5
  AN_APS_137B = 4415,                       // AN/APS-137B
  AN_APS_137B_V_5 = 4420,                   // AN/APS-137B(V)5
  AN_APS_137D_V_5_ELTA = 4425,              // AN/APS-137D(V)5 Elta
  AN_APS_138 = 4455,                        // AN/APS-138
  AN_APS_139 = 4460,                        // AN/APS-139
  AN_APS_143 = 4464,                        // AN/APS-143
  AN_APS_143_V_1 = 4465,                    // AN/APS-143 (V) 1
  AN_APS_143B = 4466,                       // AN/APS-143B
  AN_APS_143_V_3 = 4467,                    // AN/APS-143(V)3
  AN_APS_143B_V_3 = 4468,                   // AN/APS-143B(V)3
  AN_APS_153 = 4475,                        // AN/APS-153
  AN_APS_154 = 4476,                        // AN/APS-154
  AN_APS_150 = 4480,                        // AN/APS-150
  AN_APS_145 = 4482,                        // AN/APS-145
  AN_APS_147 = 4485,                        // AN/APS-147
  AN_APS_149 = 4486,                        // AN/APS-149
  AN_APS_503 = 4489,                        // AN/APS-503
  AN_APS_504 = 4490,                        // AN/APS-504
  AN_APS_705 = 4491,                        // AN/APS-705
  AN_APW_22 = 4500,                         // AN/APW-22
  AN_APW_23 = 4545,                         // AN/APW-23
  AN_APX_6 = 4590,                          // AN/APX-6
  AN_APX_7 = 4635,                          // AN/APX-7
  AN_APX_39 = 4680,                         // AN/APX-39
  AN_APX_64_V = 4681,                       // AN/APX-64(V)
  AN_APX_72 = 4725,                         // AN/APX-72
  AN_APX_76 = 4770,                         // AN/APX-76
  AN_APX_78 = 4815,                         // AN/APX-78
  AN_APX_100 = 4816,                        // AN/APX-100
  AN_APX_101 = 4860,                        // AN/APX-101
  AN_APX_113_AIFF = 4870,                   // AN/APX-113 AIFF
  AN_APY_1 = 4900,                          // AN/APY-1
  AN_APY_2 = 4905,                          // AN/APY-2
  AN_APY_3 = 4950,                          // AN/APY-3
  AN_APY_7 = 4952,                          // AN/APY-7
  AN_APY_8 = 4953,                          // AN/APY-8
  AN_APY_9 = 4954,                          // AN/APY-9
  AN_APY_10 = 4955,                         // AN/APY-10
  AN_ARN_21 = 4995,                         // AN/ARN-21
  AN_ARN_52 = 5040,                         // AN/ARN-52
  AN_ARN_84 = 5085,                         // AN/ARN-84
  AN_ARN_118 = 5130,                        // AN/ARN-118
  AN_ARN_153_V = 5131,                      // AN/ARN-153(V)
  AN_ARN_153 = 5165,                        // AN/ARN-153
  AN_ARW_73 = 5175,                         // AN/ARW 73
  AN_ASB_1 = 5220,                          // AN/ASB 1
  AN_ASG_21 = 5265,                         // AN/ASG 21
  AN_ASN_137 = 5266,                        // AN/ASN-137
  AN_ASN_128 = 5270,                        // AN/ASN-128
  AN_ASQ_108 = 5280,                        // AN/ASQ-108
  AN_ASQ_239 = 5285,                        // AN/ASQ-239
  AN_AST_502 = 5290,                        // AN/AST-502
  AN_AVQ_55 = 5300,                         // AN/AVQ-55
  AN_AWG_9 = 5310,                          // AN/AWG 9
  AN_BRN_1 = 5320,                          // AN/BRN-1
  AN_BPS_5 = 5325,                          // AN/BPS-5
  AN_BPS_9 = 5355,                          // AN/BPS-9
  AN_BPS_15 = 5400,                         // AN/BPS 15
  AN_BPS_15_H = 5401,                       // AN/BPS-15 H
  AN_BPS_15J = 5402,                        // AN/BPS-15J
  AN_BPS_16 = 5405,                         // AN/BPS-16
  AN_BPS_16_V_2 = 5406,                     // AN/BPS-16(V)2
  AN_CPN_4 = 5410,                          // AN/CPN-4
  AN_CPN_18 = 5415,                         // AN/CPN-18
  AN_CRM_30 = 5420,                         // AN/CRM-30
  AN_DPW_23 = 5430,                         // AN/DPW-23
  AN_DSQ_26_PHOENIX_MH = 5445,              // AN/DSQ 26 Phoenix MH
  AN_DSQ_28_HARPOON_MH = 5490,              // AN/DSQ 28 Harpoon MH
  AN_FPN_1 = 5491,                          // AN/FPN-1
  AN_FPN_28 = 5493,                         // AN/FPN-28
  AN_FPN_33 = 5494,                         // AN/FPN-33
  AN_FPN_40 = 5495,                         // AN/FPN-40
  AN_FPN_62 = 5500,                         // AN/FPN-62
  AN_FPN_66 = 5502,                         // AN/FPN-66
  AN_FPS_8 = 5503,                          // AN/FPS-8
  AN_FPN_67 = 5504,                         // AN/FPN-67
  AN_FPS_16 = 5505,                         // AN/FPS-16
  AN_FPS_5 = 5506,                          // AN/FPS-5
  AN_FPS_18 = 5507,                         // AN/FPS-18
  AN_FPS_89 = 5508,                         // AN/FPS-89
  AN_FPS_49 = 5509,                         // AN/FPS-49
  AN_FPS_117 = 5510,                        // AN/FPS-117
  AN_FPS_85 = 5511,                         // AN/FPS-85
  AN_FPS_88 = 5512,                         // AN/FPS-88
  AN_FPS_113 = 5513,                        // AN/FPS-113
  AN_FPS_115 = 5514,                        // AN/FPS-115
  AN_FPS_20R = 5515,                        // AN/FPS-20R
  AN_FPS_132 = 5516,                        // AN/FPS-132
  AN_FPS_77 = 5520,                         // AN/FPS-77
  AN_FPS_41 = 5521,                         // AN/FPS-41
  AN_FPS_100A = 5522,                       // AN/FPS-100A
  AN_FPS_103 = 5525,                        // AN/FPS-103
  AN_FPS_108 = 5526,                        // AN/FPS-108
  AN_GPN_12 = 5527,                         // AN/GPN-12
  AN_FPS_124_V = 5528,                      // AN/FPS-124(V)
  AN_FPS_129 = 5529,                        // AN/FPS-129
  AN_GPX_6 = 5530,                          // AN/GPX-6
  AN_GPX_8 = 5535,                          // AN/GPX 8
  AN_GRN_12 = 5537,                         // AN/GRN-12
  AN_MPN_14K = 5538,                        // AN/MPN-14K
  AN_MPN_14 = 5539,                         // AN/MPN-14
  AN_MPQ_10 = 5540,                         // AN/MPQ-10
  AN_MPN_17 = 5541,                         // AN/MPN-17
  AN_MPQ_33_39_46_57_61_HPIR_ILL = 5545,    // AN/MPQ-33/39/46/57/61 (HPIR) ILL
  AN_MPQ_34_48_55_62_CWAR_TA = 5550,        // AN/MPQ-34/48/55/62 (CWAR) TA
  AN_MPQ_49 = 5551,                         // AN/MPQ-49
  AN_MPQ_35_50_PAR_TA = 5555,               // AN/MPQ-35/50 (PAR) TA
  AN_MPQ_50C = 5556,                        // AN/MPQ-50C
  AN_MPQ_37_51_ROR_TT = 5560,               // AN/MPQ-37/51 (ROR) TT
  AN_MPQ_43 = 5565,                         // AN/MPQ-43
  AN_MPQ_50 = 5567,                         // AN/MPQ-50
  AN_MPQ_53 = 5570,                         // AN/MPQ-53
  AN_MPQ_63 = 5571,                         // AN/MPQ-63
  AN_MPQ_64 = 5575,                         // AN/MPQ-64
  AN_SLQ_32 = 5576,                         // AN/SLQ-32
  AN_MPQ_65 = 5577,                         // AN/MPQ-65
  AN_SLQ_32_V_4 = 5578,                     // AN/SLQ-32(V)4
  AN_SLQ_32A = 5579,                        // AN/SLQ-32A
  AN_SPG_34 = 5580,                         // AN/SPG-34
  AN_MSQ_104 = 5582,                        // AN/MSQ-104
  AN_MPS_36 = 5583,                         // AN/MPS-36
  AN_SLQ_503 = 5584,                        // AN/SLQ-503
  AN_SPG_48_MK_25_MOD_3 = 5620,             // AN/SPG-48/MK 25 MOD 3
  AN_SPG_50 = 5625,                         // AN/SPG-50
  AN_SPG_51 = 5670,                         // AN/SPG-51
  AN_PPQ_2 = 5690,                          // AN/PPQ-2
  AN_PPS_15 = 5700,                         // AN/PPS-15
  AN_PPS_5 = 5705,                          // AN/PPS-5
  AN_PPS_5D = 5710,                         // AN/PPS-5D
  AN_SPG_51_CWI_TI = 5715,                  // AN/SPG-51 CWI TI
  AN_SPG_51_FC = 5760,                      // AN/SPG-51 FC
  AN_SPG_51C_D = 5761,                      // AN/SPG-51C/D
  AN_SPG_52 = 5805,                         // AN/SPG-52
  AN_SPG_53 = 5850,                         // AN/SPG-53
  AN_SPG_55B = 5895,                        // AN/SPG-55B
  AN_SPG_60 = 5940,                         // AN/SPG-60
  AN_SPG_62 = 5985,                         // AN/SPG-62
  AN_SPG_503 = 5995,                        // AN/SPG-503
  AN_SPN_4 = 6015,                          // AN/SPN-4
  AN_SPN_11 = 6025,                         // AN/SPN-11
  AN_SPN_35 = 6030,                         // AN/SPN-35
  AN_SPN_41 = 6050,                         // AN/SPN-41
  AN_SPN_43 = 6075,                         // AN/SPN-43
  AN_SPN_43A = 6076,                        // AN/SPN-43A
  AN_SPN_43C = 6078,                        // AN/SPN-43C
  AN_SPN_46 = 6085,                         // AN/SPN-46
  AN_SPQ_2 = 6120,                          // AN/SPQ-2
  AN_SPQ_5A = 6155,                         // AN/SPQ-5A
  AN_SPQ_9A = 6165,                         // AN/SPQ-9A
  AN_SPQ_9B = 6166,                         // AN/SPQ-9B
  AN_SPQ_34 = 6190,                         // AN/SPQ-34
  AN_SPS_4 = 6210,                          // AN/SPS-4
  AN_SPS_5 = 6255,                          // AN/SPS-5
  AN_SPS_5C = 6300,                         // AN/SPS-5C
  AN_SPS_6 = 6345,                          // AN/SPS-6
  AN_SPS_10 = 6390,                         // AN/SPS-10
  AN_SPS_21 = 6435,                         // AN/SPS-21
  AN_SPS_28 = 6480,                         // AN/SPS-28
  AN_SPS_37 = 6525,                         // AN/SPS-37
  AN_SPS_39A = 6570,                        // AN/SPS-39A
  AN_SPS_40 = 6615,                         // AN/SPS-40
  AN_SPS_41 = 6660,                         // AN/SPS-41
  AN_SPS_48 = 6705,                         // AN/SPS-48
  AN_SPS_48C = 6750,                        // AN/SPS-48C
  AN_SPS_48E = 6752,                        // AN/SPS-48E
  AN_SPS_49 = 6795,                         // AN/SPS-49
  AN_SPS_49_V_1 = 6796,                     // AN/SPS-49(V)1
  AN_SPS_49_V_2 = 6797,                     // AN/SPS-49(V)2
  AN_SPS_49_V_3 = 6798,                     // AN/SPS-49(V)3
  AN_SPS_49_V_4 = 6799,                     // AN/SPS-49(V)4
  AN_SPS_49_V_5 = 6800,                     // AN/SPS-49(V)5
  AN_SPS_49_V_6 = 6801,                     // AN/SPS-49(V)6
  AN_SPS_49_V_7 = 6802,                     // AN/SPS-49(V)7
  AN_SPS_49_V_8 = 6803,                     // AN/SPS-49(V)8
  AN_SPS_49A_V_1 = 6804,                    // AN/SPS-49A(V)1
  AN_SPS_52 = 6840,                         // AN/SPS-52
  AN_SPS_53 = 6885,                         // AN/SPS-53
  AN_SPS_55 = 6930,                         // AN/SPS-55
  AN_SPS_52C = 6945,                        // AN/SPS-52C
  AN_SPS_55_CS = 6970,                      // AN/SPS-55 CS
  AN_SPS_55_SS = 6975,                      // AN/SPS-55 SS
  AN_SPS_58 = 7020,                         // AN/SPS-58
  AN_SPS_58C = 7025,                        // AN/SPS-58C
  AN_SPS_59 = 7065,                         // AN/SPS-59
  AN_SPS_64 = 7110,                         // AN/SPS-64
  AN_SPS_64_V_9 = 7119,                     // AN/SPS-64(V)9
  SPS64_V_12 = 7120,                        // SPS64(V)12
  AN_SPS_65 = 7155,                         // AN/SPS-65
  AN_SPS_66 = 7175,                         // AN/SPS-66
  AN_SPS_67 = 7200,                         // AN/SPS-67
  AN_SPS_73_I = 7201,                       // AN/SPS-73(I)
  AN_SPS_69 = 7210,                         // AN/SPS-69
  AN_SPS_73 = 7215,                         // AN/SPS-73
  AN_SPS_74 = 7216,                         // AN/SPS-74
  AN_SPS_88 = 7225,                         // AN/SPS-88
  AN_SPS_501 = 7226,                        // AN/SPS-501
  AN_SPS_505 = 7230,                        // AN/SPS-505
  AN_SPY_1 = 7245,                          // AN/SPY-1
  AN_SPY_1A = 7250,                         // AN/SPY-1A
  AN_SPY_1B = 7252,                         // AN/SPY-1B
  AN_SPY_1B_V = 7253,                       // AN/SPY-1B(V)
  AN_SPY_1D = 7260,                         // AN/SPY-1D
  AN_SPY_1D_V = 7261,                       // AN/SPY-1D(V)
  AN_SPY_1F = 7265,                         // AN/SPY-1F
  AN_SPY_3 = 7266,                          // AN/SPY-3
  AN_TPN_12 = 7267,                         // AN/TPN-12
  AN_SPY_4 = 7268,                          // AN/SPY-4
  AN_TLQ_32_ARM_DECOY = 7269,               // AN/TLQ-32 ARM Decoy
  AN_TPN_17 = 7270,                         // AN/TPN-17
  AN_TPN_8 = 7271,                          // AN/TPN-8
  AN_TPN_22 = 7272,                         // AN/TPN-22
  AN_TLQ_17A = 7273,                        // AN/TLQ-17A
  AN_TMS_1 = 7274,                          // AN/TMS-1
  AN_TPN_24 = 7275,                         // AN/TPN-24
  AN_TPN_25 = 7276,                         // AN/TPN-25
  AN_TMS_2 = 7277,                          // AN/TMS-2
  AN_TPN_19 = 7278,                         // AN/TPN-19
  AN_TPN_31 = 7279,                         // AN/TPN-31
  AN_TPQ_18 = 7280,                         // AN/TPQ-18
  AN_SPY_6_V = 7281,                        // AN/SPY-6(V)
  AN_TPQ_36 = 7295,                         // AN/TPQ-36
  AN_TPQ_37 = 7300,                         // AN/TPQ-37
  AN_TPQ_38_V8 = 7301,                      // AN/TPQ-38 (V8)
  AN_TPQ_39_V = 7302,                       // AN/TPQ-39(V)
  AN_TPQ_47 = 7303,                         // AN/TPQ-47
  AN_TPS_43 = 7305,                         // AN/TPS-43
  AN_TPS_43E = 7310,                        // AN/TPS-43E
  AN_TPQ_48 = 7311,                         // AN/TPQ-48
  AN_TPQ_49 = 7312,                         // AN/TPQ-49
  AN_TPQ_46A = 7313,                        // AN/TPQ-46A
  AN_TPS_34 = 7314,                         // AN/TPS-34
  AN_TPS_59 = 7315,                         // AN/TPS-59
  AN_TPS_44 = 7316,                         // AN/TPS-44
  AN_TPQ_50 = 7317,                         // AN/TPQ-50
  AN_TPS_63 = 7320,                         // AN/TPS-63
  AN_TPS_65 = 7321,                         // AN/TPS-65
  AN_TPS_70_V_1 = 7322,                     // AN/TPS-70 (V) 1
  AN_TPS_63SS = 7323,                       // AN/TPS-63SS
  AN_TPS_73 = 7324,                         // AN/TPS-73
  AN_TPS_75 = 7325,                         // AN/TPS-75
  AN_TPS_77 = 7326,                         // AN/TPS-77
  AN_TPS_78 = 7327,                         // AN/TPS-78
  AN_TPS_79 = 7328,                         // AN/TPS-79
  AN_TPS_703 = 7329,                        // AN/TPS-703
  AN_TPX_46_V_7 = 7330,                     // AN/TPX-46(V)7
  AN_TPS_80 = 7331,                         // AN/TPS-80
  AN_TPY_2 = 7333,                          // AN/TPY-2
  AN_TSQ_288 = 7334,                        // AN/TSQ-288
  AN_ULQ_6A = 7335,                         // AN/ULQ-6A
  AN_ULQ_19 = 7340,                         // AN/ULQ-19
  AN_ULQ_21 = 7345,                         // AN/ULQ-21
  AN_UPN_25 = 7380,                         // AN/UPN 25
  AN_UPS_1 = 7425,                          // AN/UPS 1
  AN_UPS_2 = 7426,                          // AN/UPS-2
  AN_UPS_3 = 7427,                          // AN/UPS-3
  AN_UPX_1 = 7470,                          // AN/UPX 1
  AN_UPX_5 = 7515,                          // AN/UPX 5
  AN_UPX_11 = 7560,                         // AN/UPX 11
  AN_UPX_12 = 7605,                         // AN/UPX 12
  AN_UPX_17 = 7650,                         // AN/UPX 17
  AN_UPX_23 = 7695,                         // AN/UPX 23
  AN_USQ_113_V_3 = 7700,                    // AN/USQ-113(V)3
  AN_VPS_2 = 7740,                          // AN/VPS 2
  AN_PLM_3 = 7750,                          // AN/PLM-3
  AN_PLM_3A = 7751,                         // AN/PLM-3A
  AN_PLM_4 = 7752,                          // AN/PLM-4
  AN_ZPY1 = 7753,                           // AN/ZPY1
  AN_ZPY_2_MP_RTIP = 7754,                  // AN/ZPY-2 MP-RTIP
  AN_ZPY_3 = 7755,                          // AN/ZPY-3
  AN_ZPY_8 = 7760,                          // AN/ZPY-8
  AORL_1AS = 7761,                          // AORL-1AS
  AORL_85K_TK_MTA = 7762,                   // AORL-85K/TK/MTA
  APAR = 7765,                              // APAR
  APARNA = 7770,                            // Aparna
  APECS_II = 7780,                          // APECS II
  VALUE_7785 = 7785,                        //
  APG_71 = 7830,                            // APG 71
  APN_148 = 7875,                           // APN 148
  APN_227 = 7920,                           // APN 227
  APQ_113 = 7965,                           // APQ 113
  APQ_120 = 8010,                           // APQ 120
  APQ_148 = 8055,                           // APQ 148
  APS_504_V3 = 8100,                        // APS 504 V3
  AQUITAINE_II = 8102,                      // AQUITAINE II
  AR_1 = 8103,                              // AR-1
  AR_3D = 8105,                             // AR 3D
  VALUE_8112 = 8112,                        //
  VALUE_8113 = 8113,                        //
  AR_15_2 = 8114,                           // AR-15/2
  AR_320 = 8115,                            // AR 320
  AR_325 = 8118,                            // AR-325
  AR_327 = 8120,                            // AR 327
  ARBALET_52 = 8121,                        // Arbalet-52
  ARBB_31 = 8122,                           // ARBB-31
  VALUE_8123 = 8123,                        //
  VALUE_8126 = 8126,                        //
  ARIES_NAV = 8127,                         // Aries-Nav
  ARIES_CS = 8128,                          // Aries-CS
  ARGS_14E = 8134,                          // ARGS-14E
  ARGS_31 = 8135,                           // ARGS 31
  ARGUS = 8140,                             // ARGUS
  AR_M31 = 8145,                            // AR M31
  ARECIBO = 8150,                           // ARECIBO
  ARED = 8160,                              // ARED
  ARI_5954 = 8190,                          // ARI 5954
  ARI_5955 = 8235,                          // ARI 5955
  ARI_5979 = 8280,                          // ARI 5979
  ARGSN_31 = 8281,                          // ARGSN-31
  ARGOS_10 = 8282,                          // ARGOS-10
  ARGOS_800 = 8283,                         // ARGOS-800
  ARI_5983 = 8284,                          // ARI 5983
  ARI_5991 = 8285,                          // ARI 5991
  ARI_5995 = 8290,                          // ARI 5995
  VALUE_8325 = 8325,                        //
  VALUE_8370 = 8370,                        //
  ARK_1 = 8375,                             // ARK-1
  VALUE_8378 = 8378,                        //
  ARMOR = 8379,                             // ARMOR
  ARSR_3 = 8380,                            // ARSR-3
  ARS_400 = 8381,                           // ARS-400
  ARSR_1 = 8382,                            // ARSR-1
  ARSR_4 = 8384,                            // ARSR-4
  ARSR_18 = 8390,                           // ARSR-18
  VALUE_8395 = 8395,                        //
  ARTHUR_MOD_B = 8400,                      // ARTHUR MOD B
  ARTHUR_MOD_C = 8405,                      // ARTHUR MOD C
  ARTISAN_3D = 8410,                        // ARTISAN 3D
  VALUE_8415 = 8415,                        //
  VALUE_8460 = 8460,                        //
  AS_3_YJ_83K_MMW_MH = 8470,                // AS 3 YJ-83K mmW MH
  AS_34_KORMORAN_SEEKER = 8480,             // AS.34 Kormoran Seeker
  VALUE_8505 = 8505,                        //
  VALUE_8550 = 8550,                        //
  VALUE_8595 = 8595,                        //
  VALUE_8640 = 8640,                        //
  VALUE_8685 = 8685,                        //
  VALUE_8730 = 8730,                        //
  VALUE_8735 = 8735,                        //
  VALUE_8736 = 8736,                        //
  VALUE_8737 = 8737,                        //
  VALUE_8750 = 8750,                        //
  AS901A = 8751,                            // AS901A
  ASARS2 = 8755,                            // ASARS2
  ASDE_KDD = 8756,                          // ASDE-KDD
  ASLESHA = 8757,                           // ASLESHA
  A_SMGCS = 8758,                           // A-SMGCS
  ASMI_18X = 8759,                          // ASMI-18X
  ASPIDE_AAM_SAM_ILL = 8760,                // Aspide AAM/SAM ILL
  ASMI_3 = 8761,                            // ASMI-3
  ASELSAN_MAR = 8762,                       // Aselsan MAR
  ASR_2000 = 8771,                          // ASR-2000
  ASR_4 = 8772,                             // ASR-4
  ASR_4D = 8773,                            // ASR-4D
  ASR_O = 8775,                             // ASR O
  ASR_12 = 8776,                            // ASR-12
  ASR_22AL = 8778,                          // ASR-22AL
  ASR_3 = 8779,                             // ASR-3
  ASR_5 = 8780,                             // ASR-5
  ASR_7 = 8782,                             // ASR-7
  ASR_8 = 8785,                             // ASR-8
  ASR_9 = 8790,                             // ASR-9
  ASR_9000 = 8791,                          // ASR-9000
  ASTI = 8792,                              // ASTI
  ASR_11_DASR = 8793,                       // ASR-11/DASR
  ASR_12 = 8795,                            // ASR-12
  VALUE_8812 = 8812,                        //
  ASR_23SS = 8816,                          // ASR-23SS
  ARABEL = 8818,                            // Arabel
  VALUE_8819 = 8819,                        //
  VALUE_8820 = 8820,                        //
  _9K114_SHTURM_MG = 8824,                  // 9K114 Shturm MG
  ASTOR = 8825,                             // ASTOR
  ASTRA_RCI = 8826,                         // ASTRA RCI
  ATCR_22 = 8830,                           // ATCR-22
  ATCR_22_M = 8831,                         // ATCR-22 M
  ATCR_2T = 8832,                           // ATCR-2T
  ATCR_33 = 8840,                           // ATCR-33
  ATCR_33_K_M = 8845,                       // ATCR 33 K/M
  ATCR_33S = 8846,                          // ATCR-33S
  ATCR_3T = 8847,                           // ATCR-3T
  ATCR_44 = 8848,                           // ATCR-44
  ATCR_44_K = 8849,                         // ATCR-44 K
  VALUE_8850 = 8850,                        //
  ATCR_44_M_S = 8851,                       // ATCR-44 M/S
  ATCR_4T = 8852,                           // ATCR-4T
  VALUE_8865 = 8865,                        //
  ATLAS_8600X = 8866,                       // ATLAS-8600X
  ATLAS_9600M = 8867,                       // Atlas-9600M
  ATLAS_9600X = 8868,                       // ATLAS-9600X
  ATLAS_9600S = 8869,                       // ATLAS-9600S
  ATLAS_9740_VTS = 8870,                    // ATLAS-9740 VTS
  ATLASS = 8871,                            // ATLASS
  ATR_500C = 8880,                          // ATR-500C
  AVG_65 = 8910,                            // AVG 65
  AVH_7 = 8955,                             // AVH 7
  AVIA_CM = 8980,                           // AVIA CM
  AVIA_D = 8985,                            // AVIA D
  VALUE_8990 = 8990,                        //
  VALUE_8993 = 8993,                        //
  VALUE_8995 = 8995,                        //
  AVQ_20 = 9000,                            // AVQ 20
  AVQ_21 = 9005,                            // AVQ-21
  AVQ30X = 9045,                            // AVQ30X
  AVQ_50_RCA = 9075,                        // AVQ-50 (RCA)
  AVQ_70 = 9090,                            // AVQ 70
  AWS_5 = 9135,                             // AWS 5
  AWS_6 = 9180,                             // AWS 6
  AWS_6B_300 = 9185,                        // AWS-6B/300
  B597Z = 9200,                             // B597Z
  B636Z = 9205,                             // B636Z
  VALUE_9215 = 9215,                        //
  VALUE_9225 = 9225,                        //
  VALUE_9270 = 9270,                        //
  VALUE_9280 = 9280,                        //
  BAES_DASS_2000_JAMMER = 9281,             // BAES DASS-2000 Jammer
  BALANCE_BEAM = 9285,                      // Balance Beam
  BALTIKA_B = 9300,                         // BALTIKA-B
  BALTYK = 9310,                            // BALTYK
  VALUE_9315 = 9315,                        //
  VALUE_9360 = 9360,                        //
  VALUE_9370 = 9370,                        //
  VALUE_9405 = 9405,                        //
  VALUE_9406 = 9406,                        //
  P_35_37_A_P_50_B = 9450,                  // P-35/37 ("A"); P-50 ("B")
  BARAX = 9475,                             // BARAX
  BASIR_110D = 9485,                        // BASIR-110D
  VALUE_9495 = 9495,                        //
  BADGER = 9505,                            // Badger
  BARRACUDA_JAMMER = 9510,                  // Barracuda Jammer
  BAYKAL_COUNTERMEASURES_SUITE = 9530,      // Baykal Countermeasures Suite
  VALUE_9540 = 9540,                        //
  VALUE_9585 = 9585,                        //
  VALUE_9630 = 9630,                        //
  BELL_NIP_JAMMER = 9638,                   // Bell Nip Jammer
  BELL_PUSH_JAMMER = 9639,                  // Bell Push Jammer
  VALUE_9640 = 9640,                        //
  VALUE_9642 = 9642,                        //
  VALUE_9643 = 9643,                        //
  VALUE_9645 = 9645,                        //
  VALUE_9659 = 9659,                        //
  VALUE_9660 = 9660,                        //
  VALUE_9661 = 9661,                        //
  VALUE_9662 = 9662,                        //
  VALUE_9675 = 9675,                        //
  VALUE_9720 = 9720,                        //
  VALUE_9765 = 9765,                        //
  VALUE_9775 = 9775,                        //
  SNAR_10 = 9780,                           // SNAR-10
  VALUE_9781 = 9781,                        //
  VALUE_9810 = 9810,                        //
  VALUE_9855 = 9855,                        //
  _9S15MT = 9885,                           // 9S15MT
  VALUE_9900 = 9900,                        //
  BLIGHTER_400 = 9903,                      // BLIGHTER 400
  BLOWPIPE_MG = 9905,                       // Blowpipe MG
  BLR = 9920,                               // BLR
  BLUE_FOX = 9930,                          // Blue Fox
  BLUE_KESTREL = 9933,                      // Blue Kestrel
  BLUE_VIXEN = 9935,                        // Blue Vixen
  BLUE_SILK = 9945,                         // Blue Silk
  BLUE_PARROT = 9990,                       // Blue Parrot
  BLUE_ORCHID = 10035,                      // Blue Orchid
  BM_DJG_8715 = 10057,                      // BM/DJG-8715
  VALUE_10080 = 10080,                      //
  BOR_A_550 = 10090,                        // BOR-A 550
  VALUE_10125 = 10125,                      //
  VALUE_10170 = 10170,                      //
  VALUE_10215 = 10215,                      //
  VALUE_10260 = 10260,                      //
  VALUE_10305 = 10305,                      //
  BM_KG300G_JAMMING_POD = 10308,            // BM/KG300G Jamming Pod
  BM_KG600_JAMMING_POD = 10310,             // BM KG600 Jamming Pod
  BM_KG800_JAMMING_POD = 10312,             // BM KG800 Jamming Pod
  BM_KG_8601_8605_8606 = 10315,             // BM/KG 8601/8605/8606
  BPS_11A = 10350,                          // BPS 11A
  BPS_14 = 10395,                           // BPS 14
  BPS_15A = 10440,                          // BPS 15A
  BR_3440CA_X57 = 10450,                    // BR-3440CA-X57
  BR_15_TOKYO_KEIKI = 10485,                // BR-15 Tokyo KEIKI
  BRAHMOS = 10500,                          // BrahMos
  VALUE_10510 = 10510,                      //
  VALUE_10511 = 10511,                      //
  VALUE_10512 = 10512,                      //
  VALUE_10513 = 10513,                      //
  BRIMSTONE_MMW_MH = 10520,                 // Brimstone mmW MH
  VALUE_10530 = 10530,                      //
  ASR = 10540,                              // Asr
  BT_271 = 10575,                           // BT 271
  BU_304 = 10595,                           // BU-304
  BX_732 = 10620,                           // BX 732
  BUK_MB = 10630,                           // BUK-MB
  BURAN_D = 10642,                          // Buran-D
  BUREVISNYK_1 = 10650,                     // BUREVISNYK-1
  VALUE_10665 = 10665,                      //
  C_5A_MULTI_MODE_RADAR = 10710,            // C 5A Multi Mode Radar
  C_802_AL = 10711,                         // C-802 AL
  VALUE_10740 = 10740,                      //
  CAIMAN = 10755,                           // Caiman
  VALUE_10800 = 10800,                      //
  CALYPSO_C61 = 10845,                      // Calypso C61
  CALYPSO_C63 = 10846,                      // Calypso C63
  CALYPSO_II = 10890,                       // Calypso Ii
  CALYPSO_III = 10891,                      // Calypso III
  CALYPSO_IV = 10892,                       // Calypso IV
  VALUE_10895 = 10895,                      //
  CASTOR_II = 10935,                        // Castor Ii
  CASTOR_2J_TT_CROTALE_NG = 10940,          // Castor 2J TT (Crotale NG)
  VALUE_10980 = 10980,                      //
  CDR_431 = 10985,                          // CDR-431
  CEAFAR = 10987,                           // CEAFAR
  CEAMOUNT = 10988,                         // CEAMOUNT
  CEAFAR2_L = 10989,                        // CEAFAR2-L
  CEROS_200 = 10990,                        // CEROS 200
  CEROS_200_CWI = 10991,                    // CEROS 200 CWI
  CEATAC = 10992,                           // CEATAC
  CEAOPS = 10993,                           // CEAOPS
  CERBERUS_III = 10994,                     // Cerberus III
  CH_SS_N_6 = 10995,                        // CH/SS-N-6
  CERBERUS_IV = 10996,                      // Cerberus IV
  VALUE_11000 = 11000,                      //
  VALUE_11010 = 11010,                      //
  LEMZ_96L6 = 11020,                        // LEMZ 96L6
  VALUE_11025 = 11025,                      //
  VALUE_11030 = 11030,                      //
  LENINETZ_OBZOR_MS = 11070,                // Leninetz Obzor MS
  VALUE_11115 = 11115,                      //
  CLC_1 = 11117,                            // CLC-1
  CLC_2 = 11118,                            // CLC-2
  CLC_3 = 11119,                            // CLC-3
  CLR_155 = 11120,                          // CLR-155
  COAST_WATCHER_100 = 11123,                // COAST WATCHER 100
  COASTAL_GIRAFFE = 11125,                  // Coastal Giraffe
  COBRA = 11130,                            // COBRA
  COBRA_SHOE = 11133,                       // Cobra Shoe
  COLIBRI = 11137,                          // Colibri
  VALUE_11155 = 11155,                      //
  VALUE_11160 = 11160,                      //
  COLLINS_TWR_850 = 11165,                  // Collins TWR-850
  VALUE_11205 = 11205,                      //
  VALUE_11230 = 11230,                      //
  CONDOR_MK_2 = 11235,                      // CONDOR MK 2
  VALUE_11240 = 11240,                      //
  VALUE_11250 = 11250,                      //
  VALUE_11260 = 11260,                      //
  COSMO_SKYMED_1 = 11265,                   // COSMO SKYMED-1
  CR_105_RMCA = 11270,                      // CR-105 RMCA
  CREW_DUKE_2 = 11280,                      // CREW Duke 2
  CREW_DUKE_3 = 11290,                      // CREW Duke 3
  VALUE_11295 = 11295,                      //
  VALUE_11340 = 11340,                      //
  VALUE_11385 = 11385,                      //
  VALUE_11430 = 11430,                      //
  VALUE_11475 = 11475,                      //
  VALUE_11520 = 11520,                      //
  VALUE_11565 = 11565,                      //
  VALUE_11610 = 11610,                      //
  CROTALE_ACQUISITION_TA = 11655,           // Crotale Acquisition TA
  CROTALE_NG_TA = 11660,                    // Crotale NG TA
  CROTALE_TT = 11665,                       // Crotale TT
  CROTALE_MGMISSILE_SYSTEM = 11700,         // Crotale MGMissile System
  CS_10_TA = 11715,                         // CS-10-TA
  CSF_VARAN = 11725,                        // CSF-Varan
  CSS_N_4_MH = 11735,                       // CSS-N-4 MH
  CSS_C_3C_CAS_1M1_M2_MH = 11745,           // CSS C 3C CAS 1M1 M2 MH
  HY_2B_MH = 11748,                         // HY-2B MH
  CSS_C_2B_HY_1A_MH = 11790,                // CSS C 2B HY 1A MH
  CSS_N_4_SARDINE = 11800,                  // CSS-N-4 Sardine
  CSS_N_8_SACCADE = 11810,                  // CSS-N-8 Saccade
  VALUE_11825 = 11825,                      //
  CWS_1 = 11830,                            // CWS-1
  CWS_2 = 11835,                            // CWS 2
  CWS_3 = 11840,                            // CWS-3
  VALUE_11860 = 11860,                      //
  VALUE_11880 = 11880,                      //
  CYMBELINE = 11902,                        // Cymbeline
  CYRANO_II = 11925,                        // Cyrano II
  CYRANO_IV = 11970,                        // Cyrano IV
  CYRANO_IV_M = 11975,                      // Cyrano IV-M
  DA_01_00 = 12010,                         // DA-01/00
  DA_05_00 = 12015,                         // DA 05 00
  DA_05_2 = 12016,                          // DA-05/2
  DA_08 = 12018,                            // DA.08
  VALUE_12060 = 12060,                      //
  DCR = 12090,                              // DCR
  VALUE_12105 = 12105,                      //
  VALUE_12110 = 12110,                      //
  VALUE_12111 = 12111,                      //
  VALUE_12150 = 12150,                      //
  VALUE_12195 = 12195,                      //
  VALUE_12196 = 12196,                      //
  DECCA_72 = 12197,                         // Decca 72
  VALUE_12240 = 12240,                      //
  VALUE_12285 = 12285,                      //
  VALUE_12292 = 12292,                      //
  VALUE_12330 = 12330,                      //
  VALUE_12375 = 12375,                      //
  VALUE_12420 = 12420,                      //
  VALUE_12430 = 12430,                      //
  VALUE_12465 = 12465,                      //
  VALUE_12510 = 12510,                      //
  VALUE_12555 = 12555,                      //
  VALUE_12600 = 12600,                      //
  VALUE_12610 = 12610,                      //
  VALUE_12615 = 12615,                      //
  VALUE_12616 = 12616,                      //
  VALUE_12645 = 12645,                      //
  VALUE_12655 = 12655,                      //
  VALUE_12690 = 12690,                      //
  VALUE_12691 = 12691,                      //
  VALUE_12694 = 12694,                      //
  VALUE_12735 = 12735,                      //
  VALUE_12780 = 12780,                      //
  VALUE_12782 = 12782,                      //
  VALUE_12785 = 12785,                      //
  VALUE_12787 = 12787,                      //
  VALUE_12800 = 12800,                      //
  VALUE_12805 = 12805,                      //
  VALUE_12825 = 12825,                      //
  DECCA_RM_970BT = 12850,                   // DECCA RM 970BT
  VALUE_12870 = 12870,                      //
  DF_21D_SEEKER = 12875,                    // DF-21D Seeker
  VALUE_12915 = 12915,                      //
  VALUE_12916 = 12916,                      //
  VALUE_12960 = 12960,                      //
  DISS_1 = 13005,                           // DISS 1
  DISS_7 = 13006,                           // DISS-7
  DISS_013 = 13007,                         // DISS-013
  DISS_15D = 13015,                         // DISS-15D
  DLD_100A = 13020,                         // DLD-100A
  RAPIER_TTDN_181 = 13050,                  // Rapier TTDN 181
  RAPIER_2000_TT = 13055,                   // Rapier 2000 TT
  VALUE_13095 = 13095,                      //
  VALUE_13140 = 13140,                      //
  DM3 = 13141,                              // DM3
  DM_3B = 13142,                            // DM-3B
  DM_5 = 13143,                             // DM-5
  DON_2 = 13185,                            // Don 2
  VALUE_13230 = 13230,                      //
  VALUE_13275 = 13275,                      //
  VALUE_13280 = 13280,                      //
  VALUE_13320 = 13320,                      //
  DR_582 = 13360,                           // DR-582
  DRAA_2A = 13365,                          // DRAA 2A
  DRAA_2B = 13410,                          // DRAA 2B
  DRAA_9A = 13415,                          // DRAA 9A
  DRAA_11A = 13420,                         // DRAA 11A
  DRAC_37B = 13450,                         // DRAC 37B
  DRAC_38 = 13452,                          // DRAC 38
  DRAC_39 = 13455,                          // DRAC 39
  DRAC_39A = 13456,                         // DRAC 39A
  DRAC_43A = 13460,                         // DRAC 43A
  DRAC_44A = 13465,                         // DRAC 44A
  VALUE_13477 = 13477,                      //
  VALUE_13480 = 13480,                      //
  VALUE_13481 = 13481,                      //
  VALUE_13485 = 13485,                      //
  DRBC_30B = 13500,                         // DRBC 30B
  DRBC_31A = 13545,                         // DRBC 31A
  DRBC_31D = 13546,                         // DRBC-31D
  DRBC_32 = 13585,                          // DRBC-32
  DRBC_32A = 13590,                         // DRBC 32A
  DRBC_32D = 13635,                         // DRBC 32D
  DRBC_33A = 13680,                         // DRBC 33A
  DRBI_10 = 13725,                          // DRBI 10
  DRBI_23 = 13770,                          // DRBI 23
  DRBJ_11B = 13815,                         // DRBJ 11B
  DRBN_30 = 13860,                          // DRBN 30
  DRBN_32 = 13905,                          // DRBN 32
  DRBN_34 = 13915,                          // DRBN 34
  DRBR_51 = 13950,                          // DRBR 51
  DRBV_20A = 13994,                         // DRBV-20A
  DRBV_20B = 13995,                         // DRBV 20B
  DRBV_21_MARS_05 = 14020,                  // DRBV-21 Mars 05
  DRBV_22 = 14040,                          // DRBV 22
  DRBV_23 = 14041,                          // DRBV-23
  DRBV_26C = 14085,                         // DRBV 26C
  DRBV_26D = 14086,                         // DRBV 26D
  DRBV_30 = 14130,                          // DRBV 30
  DRBV_31 = 14131,                          // DRBV-31
  DRBV_50 = 14175,                          // DRBV 50
  DRBV_51 = 14220,                          // DRBV 51
  DRBV_51A = 14265,                         // DRBV 51A
  DRBV_51B = 14310,                         // DRBV 51B
  DRBV_51C = 14355,                         // DRBV 51C
  DROP_KICK = 14400,                        // Drop Kick
  DRUA_31 = 14445,                          // DRUA 31
  VALUE_14490 = 14490,                      //
  VALUE_14535 = 14535,                      //
  VALUE_14545 = 14545,                      //
  DRUN_30A = 14560,                         // DRUN 30A
  VALUE_14580 = 14580,                      //
  DWSR_92 = 14583,                          // DWSR-92
  DWSR_93S = 14585,                         // DWSR-93S
  EAGLE = 14586,                            // EAGLE
  EAGLE_MK_1 = 14587,                       // EAGLE Mk 1
  EAJP_JAMMING_POD = 14588,                 // EAJP Jamming Pod
  EKCO_E390 = 14590,                        // EKCO E390
  ECR_90 = 14600,                           // ECR-90
  ECR_90_JAMMER = 14601,                    // ECR-90 Jammer
  VALUE_14625 = 14625,                      //
  EISCAT = 14640,                           // EISCAT
  EKCO_E120 = 14660,                        // EKCO E120
  EKCO_190 = 14670,                         // EKCO 190
  EKRAN_1 = 14677,                          // Ekran-1
  EL_L_8222 = 14710,                        // EL/L-8222
  VALUE_14713 = 14713,                      //
  EL_M_2001B = 14715,                       // EL M 2001B
  EL_M_2022 = 14725,                        // EL/M-2022
  EL_M_2032 = 14726,                        // EL/M-2032
  EL_M_2052 = 14727,                        // EL/M-2052
  EL_M_2055 = 14728,                        // EL/M-2055
  EL_M_2060 = 14730,                        // EL/M-2060
  EL_M_2075 = 14735,                        // EL/M-2075
  EL_M_2022U_V_3 = 14736,                   // EL/M-2022U(V)3
  EL_M_2080 = 14737,                        // EL/M-2080
  EL_M_2080S = 14738,                       // EL/M-2080S
  EL_M_2085 = 14739,                        // EL/M-2085
  EL_M_2106 = 14740,                        // EL/M-2106
  EL_M_2106NG = 14741,                      // EL/M-2106NG
  EL_M_2125 = 14742,                        // EL/M-2125
  EL_M_2129 = 14743,                        // EL/M-2129
  EL_M_2150 = 14744,                        // EL/M-2150
  EL_M_2083 = 14745,                        // EL/M-2083
  EL_M_2084 = 14746,                        // EL/M-2084
  EL_M_2160_V1 = 14747,                     // EL/M-2160-V1
  EL_M_2084_MMR = 14748,                    // EL/M-2084 MMR
  EL_M_2112 = 14749,                        // EL/M-2112
  EL_M_2200 = 14750,                        // EL/M-2200
  EL_M_2133 = 14751,                        // EL/M-2133
  EL_M_2205 = 14755,                        // EL/M-2205
  EL_M_2207 = 14760,                        // EL M 2207
  EL_M_2215 = 14765,                        // EL/M-2215
  VALUE_14770 = 14770,                      //
  EL_M_2216XH = 14772,                      // EL/M-2216XH
  EL_M_2218S = 14775,                       // EL/M-2218S
  ELT_361 = 14776,                          // ELT-361
  EL_M_2258 = 14777,                        // EL/M-2258
  ELT_553 = 14779,                          // ELT-553
  ELT_558 = 14780,                          // ELT-558
  ELT_572 = 14785,                          // ELT-572
  ELT_715 = 14790,                          // ELT 715
  ELTA_ELM_2022A = 14800,                   // Elta ELM 2022A
  ELTA_EL_M_2221_GM_STGR = 14805,           // ELTA EL/M 2221 GM STGR
  EL_M_2228S_3D = 14806,                    // EL/M-2228S/3D
  EL_M_2705 = 14807,                        // EL/M-2705
  EL_M_2226 = 14808,                        // EL/M-2226
  EL_M_2228X = 14809,                       // EL/M-2228X
  ELTA_SIS = 14810,                         // ELTA SIS
  EL_M_2238 = 14811,                        // EL/M-2238
  EL_M_2248 = 14815,                        // EL/M-2248
  EL_M_2288 = 14820,                        // EL/M-2288
  EL_M_2311 = 14821,                        // EL/M-2311
  ELM_2026 = 14822,                         // ELM-2026
  VALUE_14830 = 14830,                      //
  ELT_318 = 14831,                          // ELT/318
  ELW_2085 = 14832,                         // ELW-2085
  ELT_521 = 14833,                          // ELT/521
  ELW_2090 = 14835,                         // ELW-2090
  VALUE_14845 = 14845,                      //
  EMD_2900 = 14850,                         // EMD 2900
  EMPAR = 14851,                            // EMPAR
  VALUE_14895 = 14895,                      //
  EQ_36 = 14896,                            // EQ-36
  ERICSSON_SLAR = 14897,                    // Ericsson SLAR
  ERIEYE = 14898,                           // Erieye
  ESR_1 = 14900,                            // ESR 1
  ESR_220 = 14901,                          // ESR 220
  ESR380 = 14902,                           // ESR380
  ESTEREL = 14903,                          // ESTEREL
  ET_316 = 14905,                           // ET-316
  EXOCET_TYPE = 14935,                      // Exocet Type
  EXOCET_AL = 14936,                        // Exocet AL
  EXOCET_1 = 14940,                         // Exocet 1
  EXOCET_1_MH = 14985,                      // Exocet 1 MH
  EXOCET_2 = 15030,                         // Exocet 2
  VALUE_15075 = 15075,                      //
  VALUE_15120 = 15120,                      //
  VALUE_15140 = 15140,                      //
  VALUE_15155 = 15155,                      //
  VALUE_15156 = 15156,                      //
  FALCON = 15160,                           // FALCON
  FALCON_G = 15161,                         // FALCON-G
  VALUE_15163 = 15163,                      //
  VALUE_15165 = 15165,                      //
  VALUE_15200 = 15200,                      //
  VALUE_15210 = 15210,                      //
  VALUE_15220 = 15220,                      //
  VALUE_15230 = 15230,                      //
  VALUE_15240 = 15240,                      //
  VALUE_15255 = 15255,                      //
  VALUE_15300 = 15300,                      //
  FAR_2117 = 15301,                         // FAR-2117
  FAR_2827 = 15302,                         // FAR-2827
  FAR_2837S = 15303,                        // FAR-2837S
  VALUE_15304 = 15304,                      //
  FB_7_RADAR = 15305,                       // FB-7 Radar
  FCR_1401 = 15310,                         // FCR-1401
  FCS_2_12E = 15312,                        // FCS-2-12E
  FCS_2_12G = 15313,                        // FCS-2-12G
  FCS_2_21A = 15315,                        // FCS-2-21A
  FCS_2_21C = 15317,                        // FCS-2-21C
  FCS_2_22 = 15318,                         // FCS-2-22
  FCS_2_31 = 15319,                         // FCS-2-31
  FCS_3 = 15320,                            // FCS-3
  VALUE_15345 = 15345,                      //
  VALUE_15390 = 15390,                      //
  VALUE_15435 = 15435,                      //
  VALUE_15470 = 15470,                      //
  VALUE_15475 = 15475,                      //
  VALUE_15480 = 15480,                      //
  VALUE_15525 = 15525,                      //
  VALUE_15570 = 15570,                      //
  VALUE_15615 = 15615,                      //
  FK_3 = 15620,                             // FK-3
  FLAIR = 15650,                            // FLAIR
  VALUE_15660 = 15660,                      //
  _30N6E = 15661,                           // 30N6E
  VALUE_15705 = 15705,                      //
  VALUE_15750 = 15750,                      //
  VALUE_15795 = 15795,                      //
  VALUE_15800 = 15800,                      //
  P_15 = 15840,                             // P-15
  _35N6 = 15842,                            // 35N6
  VALUE_15885 = 15885,                      //
  VALUE_15930 = 15930,                      //
  FLAT_TRACK_JAMMER = 15970,                // Flat Track Jammer
  VALUE_15975 = 15975,                      //
  FL_400 = 15980,                           // FL-400
  FL_1800 = 15985,                          // FL 1800
  FL_1800U = 15990,                         // FL 1800U
  FL_1800S = 16000,                         // FL 1800S
  FLEDERMAUS = 16020,                       // Fledermaus
  VALUE_16030 = 16030,                      //
  FLYCATCHER_MK_2 = 16035,                  // FLYCATCHER MK 2
  VALUE_16065 = 16065,                      //
  VALUE_16110 = 16110,                      //
  VALUE_16155 = 16155,                      //
  FM_90 = 16160,                            // FM-90
  VALUE_16200 = 16200,                      //
  VALUE_16245 = 16245,                      //
  VALUE_16290 = 16290,                      //
  FOOTBALL = 16300,                         // FootBall
  FOX_HUNTER = 16335,                       // Fox Hunter
  VALUE_16380 = 16380,                      //
  VALUE_16390 = 16390,                      //
  FR_151A = 16400,                          // FR-151A
  VALUE_16405 = 16405,                      //
  FR_1505_DA = 16410,                       // FR-1505 DA
  FR_1510DS = 16412,                        // FR-1510DS
  FR_2000 = 16420,                          // FR-2000
  FURUNO_2855W = 16421,                     // Furuno-2855W
  VALUE_16422 = 16422,                      //
  VALUE_16423 = 16423,                      //
  VALUE_16424 = 16424,                      //
  VALUE_16425 = 16425,                      //
  FREGAT_MAE_5 = 16426,                     // Fregat MAE-5
  VALUE_16470 = 16470,                      //
  VALUE_16515 = 16515,                      //
  FURBY_MMW_MH = 16520,                     // Furby mmW MH
  VALUE_16550 = 16550,                      //
  FURKE_2_FURKE_E_POSITIV_ME1 = 16552,      // Furke 2 (Furke-E, Positiv-ME1)
  FURKE_4 = 16554,                          // Furke-4
  FURUNO = 16560,                           // Furuno
  FURUNO_1721 = 16561,                      // Furuno 1721
  VALUE_16564 = 16564,                      //
  VALUE_16565 = 16565,                      //
  FURUNO_1730 = 16580,                      // Furuno 1730
  FURUNO_1731_MARK_3 = 16581,               // Furuno 1731 Mark 3
  FURUNO_1832 = 16585,                      // Furuno 1832
  VALUE_16587 = 16587,                      //
  FURUNO_1932 = 16590,                      // Furuno 1932
  VALUE_16596 = 16596,                      //
  FURUNO_701 = 16605,                       // Furuno 701
  FURUNO_1940 = 16606,                      // Furuno 1940
  FURUNO_711_2 = 16650,                     // Furuno 711 2
  VALUE_16652 = 16652,                      //
  FURUNO_FAR_2137S = 16654,                 // Furuno FAR-2137S
  FURUNO_FAR_28X7 = 16655,                  // Furuno FAR-28X7
  VALUE_16658 = 16658,                      //
  FR_2110 = 16660,                          // FR-2110
  FR_2115 = 16662,                          // FR-2115
  FR_8062 = 16663,                          // FR-8062
  FURUNO_2125 = 16670,                      // Furuno 2125
  FURUNO_240 = 16690,                       // Furuno 240
  FURUNO_2400 = 16695,                      // Furuno 2400
  FR_801D = 16725,                          // FR-801D
  FURUNO_8051 = 16730,                      // Furuno 8051
  VALUE_16732 = 16732,                      //
  VALUE_16733 = 16733,                      //
  VALUE_16734 = 16734,                      //
  G030A_APD_31 = 16735,                     // G030A(APD-31)
  VALUE_16736 = 16736,                      //
  VALUE_16737 = 16737,                      //
  GA_01_00 = 16740,                         // GA 01 00
  GABBIANO = 16750,                         // Gabbiano
  VALUE_16785 = 16785,                      //
  GAOFEN_3 = 16787,                         // Gaofen-3
  GAOFEN_12 = 16789,                        // GAOFEN-12
  GAP_GATE = 16790,                         // GAP GATE
  VALUE_16800 = 16800,                      //
  VALUE_16815 = 16815,                      //
  VALUE_16820 = 16820,                      //
  GARMIN_GWX_68_WEATHER_RADAR = 16825,      // Garmin GWX 68 Weather Radar
  VALUE_16830 = 16830,                      //
  VALUE_16833 = 16833,                      //
  GARPUN_BAL_E = 16835,                     // Garpun-Bal-E
  GBS1 = 16840,                             // GBS1
  GCA_2000 = 16850,                         // GCA-2000
  VALUE_16858 = 16858,                      //
  VALUE_16870 = 16870,                      //
  VALUE_16871 = 16871,                      //
  VALUE_16872 = 16872,                      //
  GEM_BX_132 = 16875,                       // GEM BX 132
  GEM_SC_2050X = 16876,                     // GEM SC-2050X
  VALUE_16877 = 16877,                      //
  VALUE_16879 = 16879,                      //
  MPDR_12 = 16880,                          // MPDR-12
  GEN_X = 16881,                            // GEN-X
  VALUE_16884 = 16884,                      //
  GERAN_F = 16888,                          // GERAN-F
  GERFAUT = 16890,                          // GERFAUT
  GFE_L_1 = 16895,                          // GFE(L)1
  GIRAFFE = 16900,                          // GIRAFFE
  GIRAFFE_1X = 16903,                       // GIRAFFE 1X
  GIRAFFE_40 = 16905,                       // Giraffe-40
  GIRAFFE_50_AT = 16908,                    // Giraffe-50 AT
  GIRAFFE_75 = 16912,                       // Giraffe 75
  VALUE_16915 = 16915,                      //
  GIN_SLING = 16920,                        // Gin Sling
  VALUE_16925 = 16925,                      //
  GOAL_KEEPER = 16930,                      // Goal Keeper
  VALUE_16935 = 16935,                      //
  VALUE_16940 = 16940,                      //
  VALUE_16942 = 16942,                      //
  GPN_22 = 16945,                           // GPN-22
  GPSJ_10 = 16946,                          // GPSJ-10
  GPSJ_25 = 16947,                          // GPSJ-25
  GPSJ_40 = 16948,                          // GPSJ-40
  GPSJ_50 = 16949,                          // GPSJ-50
  GRN_9 = 16950,                            // GRN-9
  GRAN_K = 16951,                           // GRAN-K
  VALUE_16960 = 16960,                      //
  GRAVES = 16963,                           // GRAVES
  GREEN_STAIN = 16965,                      // Green Stain
  VALUE_17010 = 17010,                      //
  GRIFO_F = 17016,                          // Grifo-F
  _9S32 = 17025,                            // 9S32
  VALUE_17027 = 17027,                      //
  GROM_2 = 17029,                           // Grom-2
  GROUND_MASTER_400 = 17030,                // GROUND MASTER 400
  GT_4 = 17031,                             // GT-4
  GRS_440 = 17032,                          // GRS 440
  GUARDIAN = 17050,                         // GUARDIAN
  GUARDSMAN = 17055,                        // Guardsman
  RPK_2 = 17070,                            // RPK-2
  H_RJZ_726_4A_JAMMER = 17075,              // H/RJZ-726-4A Jammer
  H025_NO25E = 17079,                       // H025 (NO25E)
  HADR = 17080,                             // HADR
  VALUE_17100 = 17100,                      //
  VALUE_17145 = 17145,                      //
  VALUE_17190 = 17190,                      //
  HARD = 17220,                             // HARD
  HARPOON = 17225,                          // Harpoon
  VALUE_17230 = 17230,                      //
  VALUE_17235 = 17235,                      //
  VALUE_17250 = 17250,                      //
  VALUE_17255 = 17255,                      //
  VALUE_17280 = 17280,                      //
  VALUE_17325 = 17325,                      //
  VALUE_17370 = 17370,                      //
  VALUE_17415 = 17415,                      //
  VALUE_17460 = 17460,                      //
  VALUE_17505 = 17505,                      //
  VALUE_17550 = 17550,                      //
  VALUE_17572 = 17572,                      //
  HELLFIRE_MMW_MH = 17590,                  // Hellfire mmW MH
  VALUE_17595 = 17595,                      //
  VALUE_17640 = 17640,                      //
  VALUE_17685 = 17685,                      //
  VALUE_17730 = 17730,                      //
  VALUE_17732 = 17732,                      //
  HF_2_MG = 17735,                          // HF-2 MG
  HGR_105 = 17745,                          // HGR-105
  VALUE_17775 = 17775,                      //
  VALUE_17820 = 17820,                      //
  VALUE_17842 = 17842,                      //
  VALUE_17865 = 17865,                      //
  VALUE_17910 = 17910,                      //
  VALUE_17955 = 17955,                      //
  VALUE_18000 = 18000,                      //
  VALUE_18045 = 18045,                      //
  VALUE_18090 = 18090,                      //
  VALUE_18135 = 18135,                      //
  _9S19MT = 18150,                          // 9S19MT
  VALUE_18180 = 18180,                      //
  VALUE_18185 = 18185,                      //
  HIMALAYAS_COUNTERMEASURES_SUITE = 18189,  // Himalayas Countermeasures Suite
  VALUE_18190 = 18190,                      //
  HJ_6374 = 18193,                          // HJ-6374
  VALUE_18194 = 18194,                      //
  HLJQ_520 = 18195,                         // HLJQ-520
  HN_503 = 18200,                           // HN-503
  HN_C03_M = 18201,                         // HN-C03-M
  VALUE_18225 = 18225,                      //
  VALUE_18270 = 18270,                      //
  VALUE_18280 = 18280,                      //
  VALUE_18315 = 18315,                      //
  VALUE_18316 = 18316,                      //
  IHS_6 = 18318,                            // IHS-6
  IRL144M = 18320,                          // IRL144M
  IRL144M = 18325,                          // IRL144M
  IRL144M = 18330,                          // IRL144M
  HPS_106 = 18331,                          // HPS-106
  HPS_104 = 18332,                          // HPS-104
  HQ_9_MH = 18339,                          // HQ-9 MH
  VALUE_18340 = 18340,                      //
  HT_233 = 18348,                           // HT-233
  HQ_61 = 18350,                            // HQ-61
  HRJS = 18351,                             // HRJS
  I_DERBY_ER = 18352,                       // I-Derby ER
  IBIS_80 = 18353,                          // IBIS-80
  IBIS_150 = 18355,                         // IBIS-150
  IBIS_200 = 18357,                         // IBIS-200
  IFF_MK_XII_AIMS_UPX_29 = 18360,           // IFF MK XII AIMS UPX 29
  VALUE_18400 = 18400,                      //
  IFF_MK_XV = 18405,                        // IFF MK XV
  IFF_INT = 18406,                          // IFF INT
  VALUE_18407 = 18407,                      //
  IFF_TRSP = 18408,                         // IFF TRSP
  J_MUSIC_ELBIT_SYSTEMS_JAMMER = 18409,     // J-MUSIC Elbit Systems Jammer
  JAVELIN_MG = 18410,                       // Javelin MG
  J_ALQ_8 = 18445,                          // J/ALQ-8
  J_FPS_7 = 18449,                          // J/FPS-7
  VALUE_18450 = 18450,                      //
  J_FPS_3 = 18451,                          // J/FPS-3
  JH_10 = 18452,                            // JH-10
  J_MPQ_P7 = 18453,                         // J/MPQ-P7
  JL_7 = 18454,                             // JL-7
  JL_10B = 18455,                           // JL-10B
  JMA_1576 = 18456,                         // JMA 1576
  JRC_JMA_9252_6CA = 18457,                 // JRC JMA-9252-6CA
  JLP_40 = 18458,                           // JLP-40
  JRC_JMR_9200_SERIES_X = 18459,            // JRC JMR-9200 Series X
  JRC_NMD_401 = 18460,                      // JRC-NMD-401
  JRC_JRM_310_MK2 = 18461,                  // JRC JRM 310 MK2
  JMA_1596 = 18462,                         // JMA 1596
  JMA_7000 = 18464,                         // JMA 7000
  JRC_JMA_7700 = 18465,                     // JRC JMA 7700
  JMA_5320 = 18466,                         // JMA 5320
  JRC_JMR_9210_6XC = 18467,                 // JRC JMR-9210-6XC
  JERS_1 = 18468,                           // JERS-1
  JINDALEE = 18469,                         // JINDALEE
  JRC_JMA_9900_SERIES = 18470,              // JRC JMA-9900 series
  JLP_40D = 18471,                          // JLP-40D
  JRC_JMA_5300_SERIES = 18475,              // JRC JMA-5300 series
  JUPITER = 18495,                          // Jupiter
  JUPITER_II = 18540,                       // Jupiter II
  JY_8 = 18550,                             // JY-8
  JY_8A = 18551,                            // JY-8A
  JY_9 = 18555,                             // JY-9
  JY_9_MODIFIED = 18556,                    // JY-9 Modified
  JY_11_EW = 18557,                         // JY-11 EW
  JY_14 = 18560,                            // JY-14
  JY_14A = 18561,                           // JY-14A
  JY_16 = 18565,                            // JY-16
  JY_24 = 18570,                            // JY-24
  J_APG_1 = 18571,                          // J/APG-1
  J_APG_2 = 18572,                          // J/APG-2
  JY_29 = 18575,                            // JY-29
  JYL_1 = 18578,                            // JYL-1
  JYL_6 = 18580,                            // JYL-6
  JYL_6A = 18582,                           // JYL-6A
  JZ_QF_612 = 18583,                        // JZ/QF-612
  VALUE_18585 = 18585,                      //
  K77M = 18586,                             // K77M
  KAIGE = 18600,                            // Kaige
  KALKAN = 18610,                           // KALKAN
  KBP_AFGANIT = 18611,                      // KBP Afganit
  KALKAN_II = 18615,                        // KALKAN II
  VALUE_18630 = 18630,                      //
  VALUE_18675 = 18675,                      //
  VALUE_18700 = 18700,                      //
  KASHTAN_3_JAMMING_SYSTEM = 18710,         // Kashtan-3 Jamming System
  VALUE_18720 = 18720,                      //
  VALUE_18765 = 18765,                      //
  VALUE_18766 = 18766,                      //
  VALUE_18767 = 18767,                      //
  VALUE_18768 = 18768,                      //
  VALUE_18770 = 18770,                      //
  VALUE_18774 = 18774,                      //
  VALUE_18775 = 18775,                      //
  VALUE_18776 = 18776,                      //
  VALUE_18777 = 18777,                      //
  KH_FAMILY = 18780,                        // KH Family
  VALUE_18781 = 18781,                      //
  KH_38MAE_MH = 18782,                      // Kh-38MAE MH
  KG8605A = 18784,                          // KG8605A
  KH_902M = 18785,                          // KH-902M
  KHOROM_K = 18786,                         // KHOROM-K
  KHIBINY = 18787,                          // KHIBINY
  KG300E = 18789,                           // KG300E
  VALUE_18790 = 18790,                      //
  VALUE_18791 = 18791,                      //
  VALUE_18792 = 18792,                      //
  KH_1700 = 18795,                          // KH 1700
  VALUE_18797 = 18797,                      //
  KG_300 = 18805,                           // KG-300
  VALUE_18810 = 18810,                      //
  VALUE_18855 = 18855,                      //
  VALUE_18900 = 18900,                      //
  KLC_3B = 18930,                           // KLC-3B
  KJ_500_NANJING_RADAR = 18944,             // KJ-500 Nanjing Radar
  VALUE_18945 = 18945,                      //
  KJ_500_JAMMER = 18946,                    // KJ-500 Jammer
  KLC_1 = 18947,                            // KLC-1
  KLJ_1 = 18948,                            // KLJ-1
  KLJ_3_TYPE_1473 = 18950,                  // KLJ-3 (Type 1473)
  KLJ_4 = 18951,                            // KLJ-4
  KLJ_4B = 18952,                           // KLJ-4B
  KLJ_5 = 18955,                            // KLJ-5
  KLJ_7 = 18960,                            // KLJ-7
  KLJ_7B = 18961,                           // KLJ-7B
  KLJ_7A = 18962,                           // KLJ-7A
  VALUE_18990 = 18990,                      //
  P_10 = 19035,                             // P-10
  VALUE_19037 = 19037,                      //
  VALUE_19039 = 19039,                      //
  KJ_2000 = 19040,                          // KJ-2000
  VALUE_19041 = 19041,                      //
  KOOPOL = 19042,                           // Koopol
  KOPYO_I = 19045,                          // KOPYO-I
  KR_75 = 19050,                            // KR-75
  KRONOS = 19051,                           // KRONOS
  KREDO_1E = 19052,                         // KREDO-1E
  KRASUKHA_2 = 19053,                       // Krasukha-2
  KRONOS_GRAND_NAVAL = 19054,               // KRONOS GRAND NAVAL
  KRM_66E = 19060,                          // KRM-66E
  KSA_SRN = 19080,                          // KSA SRN
  KSA_TSR = 19125,                          // KSA TSR
  KS_1A_PHASED_ARRAY = 19127,               // KS-1A PHASED ARRAY
  KS418 = 19129,                            // KS418
  KS418E = 19130,                           // KS418E
  KZ100 = 19131,                            // KZ100
  KZ900 = 19132,                            // KZ900
  L175V = 19140,                            // L175V
  L370_5_PRESIDENT_S_JAMMER = 19142,        // L370-5 President-S Jammer
  L_415 = 19143,                            // L-415
  L_88 = 19145,                             // L-88
  LAADS = 19150,                            // LAADS
  VALUE_19170 = 19170,                      //
  VALUE_19215 = 19215,                      //
  VALUE_19260 = 19260,                      //
  VALUE_19305 = 19305,                      //
  LAZUR = 19306,                            // LAZUR
  MODEL_791_A = 19307,                      // Model 791-A
  LAP_3000 = 19309,                         // LAP-3000
  LC_150 = 19310,                           // LC-150
  LEER_3 = 19320,                           // LEER-3
  VALUE_19330 = 19330,                      //
  LENINETZ_V_004 = 19340,                   // Leninetz V-004
  VALUE_19350 = 19350,                      //
  LIANA = 19370,                            // LIANA
  VALUE_19395 = 19395,                      //
  LIRA_A10 = 19396,                         // LIRA-A10
  LIROD_8 = 19397,                          // LIROD 8
  LIROD_MK_II = 19398,                      // LIROD MK II
  LLX05K = 19399,                           // LLX05K
  LMT_NRAI_6A = 19400,                      // LMT NRAI-6A
  LN_55 = 19440,                            // LN 55
  VALUE_19485 = 19485,                      //
  VALUE_19500 = 19500,                      //
  VALUE_19505 = 19505,                      //
  LOCKHEED_VIGILANCE = 19520,               // Lockheed Vigilance
  VALUE_19530 = 19530,                      //
  VALUE_19575 = 19575,                      //
  VALUE_19620 = 19620,                      //
  VALUE_19665 = 19665,                      //
  VALUE_19710 = 19710,                      //
  VALUE_19755 = 19755,                      //
  VALUE_19800 = 19800,                      //
  VALUE_19845 = 19845,                      //
  VALUE_19890 = 19890,                      //
  LOPAR = 19920,                            // LOPAR
  LORAN = 19935,                            // LORAN
  VALUE_19950 = 19950,                      //
  VALUE_19955 = 19955,                      //
  VALUE_19960 = 19960,                      //
  VALUE_19970 = 19970,                      //
  VALUE_19971 = 19971,                      //
  VALUE_19980 = 19980,                      //
  VALUE_20025 = 20025,                      //
  LR66 = 20029,                             // LR66
  LRA_900 = 20030,                          // LRA-900
  TRS_2050 = 20040,                         // TRS-2050
  LW_01 = 20060,                            // LW 01
  LW_08 = 20070,                            // LW 08 [DEPRECATED]
  VALUE_20090 = 20090,                      //
  M22_40 = 20115,                           // M22-40
  M44 = 20160,                              // M44
  VALUE_20205 = 20205,                      //
  VALUE_20250 = 20250,                      //
  VALUE_20295 = 20295,                      //
  MA_1_IFF_PORTION = 20340,                 // MA 1 IFF Portion
  MAD_HACK = 20350,                         // MAD HACK
  VALUE_20360 = 20360,                      //
  VALUE_20385 = 20385,                      //
  MARC_S_152 = 20420,                       // MARC S-152
  VALUE_20430 = 20430,                      //
  VALUE_20475 = 20475,                      //
  VALUE_20495 = 20495,                      //
  VALUE_20520 = 20520,                      //
  VALUE_20530 = 20530,                      //
  VALUE_20565 = 20565,                      //
  VALUE_20585 = 20585,                      //
  MARCONI_ST801 = 20589,                    // MARCONI ST801
  VALUE_20590 = 20590,                      //
  VALUE_20610 = 20610,                      //
  VALUE_20655 = 20655,                      //
  VALUE_20700 = 20700,                      //
  VALUE_20745 = 20745,                      //
  VALUE_20790 = 20790,                      //
  VALUE_20835 = 20835,                      //
  VALUE_20880 = 20880,                      //
  MARTELLO_743D = 20890,                    // MARTELLO 743D
  MARTELLO_S_723A = 20895,                  // MARTELLO S-723A
  MASTER_A = 20897,                         // MASTER-A
  MBDA_FLAADS_M_SEA_CEPTOR_JAMMER = 20898,  // MBDA FLAADS-M (Sea Ceptor) Jammer
  MELCO_3 = 20915,                          // MELCO-3
  MELODI = 20917,                           // MELODI
  MERLIN = 20918,                           // MERLIN
  MERAJ_4_ASCENSION = 20919,                // Meraj-4 (Ascension)
  VALUE_20920 = 20920,                      //
  VALUE_20925 = 20925,                      //
  METEOR_1500S = 20927,                     // METEOR 1500S
  METEOR_200 = 20929,                       // METEOR 200
  METEOR_50DX = 20930,                      // METEOR 50DX
  METEOR_300 = 20931,                       // METEOR 300
  METEOR_BVRAAM = 20933,                    // Meteor BVRAAM
  MFR = 20935,                              // MFR
  MFSR_2100_45 = 20940,                     // MFSR 2100/45
  MICA_MH = 20942,                          // MICA MH
  MICA_RF = 20943,                          // MICA-RF
  MINERAL_ME = 20945,                       // Mineral-ME
  MIRAGE_ILL = 20950,                       // Mirage ILL
  MIYSIS_JAMMER = 20955,                    // Miysis Jammer
  MK_15_PHALANX_BLK_0 = 20969,              // MK 15 (Phalanx BLK 0)
  VALUE_20970 = 20970,                      //
  MK_23 = 21015,                            // MK-23
  MK_23_TAS = 21060,                        // MK 23 TAS
  MK_25 = 21105,                            // MK 25
  MK_25_MOD_3 = 21110,                      // Mk-25 Mod-3
  MK_25_MOD_7 = 21130,                      // Mk 25 Mod 7
  MK_35_M2 = 21150,                         // MK-35 M2
  MK_92 = 21195,                            // MK 92
  MK_92_CAS = 21240,                        // MK-92 CAS
  MK_92_STIR = 21285,                       // MK-92 STIR
  MK_95 = 21330,                            // MK 95
  MKS_818 = 21332,                          // MKS-818
  MLA_1 = 21340,                            // MLA-1
  MM_APQ_706 = 21359,                       // MM/APQ-706
  MM_950 = 21360,                           // MM 950
  MM_APS_705 = 21375,                       // MM APS 705
  MM_APS_784 = 21390,                       // MM/APS-784
  MM_SPG_73_RTN_12X = 21419,                // MM/SPG-73 (RTN-12X)
  MM_SPG_74 = 21420,                        // MM SPG 74
  MM_SPG_75 = 21465,                        // MM SPG 75
  MM_SPN_703 = 21490,                       // MM SPN 703
  MM_SPN_730 = 21492,                       // MM SPN 730
  MM_SPN_753B = 21495,                      // MM SPN-753B
  MM_SPQ_3 = 21500,                         // MM/SPQ-3
  MM_SPS_702 = 21510,                       // MM SPS 702
  MM_SPS_768 = 21555,                       // MM SPS 768
  MM_SPS_774 = 21600,                       // MM SPS 774
  MM_SPS_791_RAN_30X = 21610,               // MM/SPS-791 (RAN-30X)
  MM_SPS_794_RAN_21S = 21615,               // MM SPS-794 (RAN-21S)
  MM_SPS_798_RAN_40L = 21620,               // MM/SPS-798 (RAN-40L)
  MMSR = 21623,                             // MMSR
  MODEL_17C = 21625,                        // Model-17C
  MOON_4 = 21645,                           // Moon 4
  VALUE_21646 = 21646,                      //
  MOON_CONE = 21647,                        // MOON CONE
  VALUE_21648 = 21648,                      //
  MOON_FACE = 21649,                        // MOON FACE
  VALUE_21650 = 21650,                      //
  MODEL_360 = 21655,                        // Model 360
  MODEL_378 = 21660,                        // Model 378
  MODEL_970 = 21661,                        // Model-970
  MODEL_974 = 21665,                        // Model 974
  MONOLIT_B = 21672,                        // MONOLIT-B
  VALUE_21675 = 21675,                      //
  VALUE_21680 = 21680,                      //
  MP_411_ESM = 21682,                       // MP-411 ESM
  MPDR_18_S = 21685,                        // MPDR 18/S
  MPDR_18_X = 21690,                        // MPDR 18 X
  MPDR_45_E = 21692,                        // MPDR 45/E
  MR_231_1 = 21693,                         // MR-231-1
  MPR = 21695,                              // MPR
  VALUE_21696 = 21696,                      //
  MPS_1 = 21697,                            // MPS-1
  VALUE_21698 = 21698,                      //
  VALUE_21699 = 21699,                      //
  MR_1600 = 21700,                          // MR-1600
  MRR = 21701,                              // MRR
  MR35 = 21702,                             // MR35
  MR36 = 21703,                             // MR36
  MRL_1 = 21704,                            // MRL-1
  MRL_4 = 21705,                            // MRL-4
  MRL_5 = 21706,                            // MRL-5
  MSAM = 21707,                             // MSAM
  MR_36A = 21708,                           // MR-36A
  MSTAR = 21709,                            // MSTAR
  MT_305X = 21710,                          // MT-305X
  MR_10M1E = 21711,                         // MR-10M1E
  MR_90 = 21712,                            // MR-90
  MRK_411 = 21715,                          // MRK-411
  MR_320M_TOPAZ_V = 21716,                  // MR-320M Topaz-V
  MSP_418K = 21720,                         // MSP-418K
  VALUE_21735 = 21735,                      //
  MUSHROOM = 21780,                         // Mushroom
  MUSHROOM_1 = 21825,                       // Mushroom 1
  MUSHROOM_2 = 21870,                       // Mushroom 2
  VALUE_21871 = 21871,                      //
  N_23 = 21872,                             // N-23
  N_011M_BARS = 21873,                      // N-011M Bars
  N_011M_BARS_B = 21874,                    // N-011M Bars-B
  N_011M_BARS_C = 21875,                    // N-011M Bars-C
  N_011M_BARS_R = 21876,                    // N-011M Bars-R
  N035_IRBIS_E = 21877,                     // N035 Irbis-E
  N036_BYELKA = 21878,                      // N036 Byelka
  N_25 = 21879,                             // N-25
  N920Z = 21880,                            // N920Z
  N001V = 21881,                            // N001V
  NACOS_RADARPILOT_PLATINUM = 21884,        // NACOS RADARPILOT Platinum
  VALUE_21885 = 21885,                      //
  NAGIRA = 21886,                           // NAGIRA
  VALUE_21890 = 21890,                      //
  VALUE_21895 = 21895,                      //
  NAYADA = 21915,                           // Nayada
  NAYADA_5M = 21917,                        // NAYADA-5M
  NAYADA_5PV = 21918,                       // NAYADA-5PV
  NEBO_M = 21919,                           // NEBO-M
  NEBO_SVU = 21920,                         // Nebo-SVU
  NEPTUN = 21960,                           // Neptun
  NETTUNO_4100 = 21965,                     // Nettuno 4100
  NIKE_HERCULES_MTR = 21970,                // NIKE HERCULES MTR
  VALUE_21980 = 21980,                      //
  NORTHROP_GRUMMAN_MFEW_JAMMER = 21981,     // Northrop Grumman MFEW Jammer
  NORINCO_3D = 21982,                       // NORINCO 3D
  NJ_81E = 21983,                           // NJ-81E
  NORMANDIE = 21984,                        // Normandie
  NRJ_6A = 21985,                           // NRJ-6A
  NOSTRADAMUS = 21986,                      // NOSTRADAMUS
  NPG_1240 = 21987,                         // NPG-1240
  NPG_1460 = 21988,                         // NPG-1460
  NPG_434 = 21989,                          // NPG-434
  NPG_630 = 21990,                          // NPG-630
  NPM_510 = 21991,                          // NPM-510
  VALUE_21992 = 21992,                      //
  NP_VEGA_LIANA = 21995,                    // NP Vega Liana
  NOVELLA_NV1_70 = 22000,                   // Novella NV1.70
  NRBA_50 = 22005,                          // NRBA 50
  NRBA_51 = 22050,                          // NRBA 51
  NRBF_20A = 22095,                         // NRBF 20A
  NRJ_5 = 22110,                            // NRJ-5
  VALUE_22115 = 22115,                      //
  NS_100_SERIES = 22125,                    // NS-100 Series
  NUR_31 = 22127,                           // NUR-31
  NWS_3 = 22130,                            // NWS-3
  VALUE_22140 = 22140,                      //
  VALUE_22185 = 22185,                      //
  VALUE_22230 = 22230,                      //
  VALUE_22275 = 22275,                      //
  VALUE_22320 = 22320,                      //
  OCEAN_MASTER = 22335,                     // Ocean Master
  VALUE_22340 = 22340,                      //
  VALUE_22345 = 22345,                      //
  VALUE_22365 = 22365,                      //
  VALUE_22410 = 22410,                      //
  VALUE_22411 = 22411,                      //
  VALUE_22455 = 22455,                      //
  OFOGH = 22460,                            // OFOGH
  OFOGH_3 = 22463,                          // OFOGH-3
  OKEAN = 22500,                            // OKEAN
  OKEAN_A = 22505,                          // OKEAN A
  OKINXE_12C = 22545,                       // OKINXE 12C
  OKO = 22560,                              // OKO
  OMEGA = 22590,                            // OMEGA
  OMERA_ORB32 = 22635,                      // Omera ORB32
  OMUL = 22640,                             // OMUL
  VALUE_22680 = 22680,                      //
  OP_28 = 22690,                            // OP-28
  OPRL_4 = 22695,                           // OPRL-4
  OPRM_71 = 22696,                          // OPRM-71
  OPS_9 = 22697,                            // OPS-9
  OPS_11_B_C = 22700,                       // OPS-11 B/C
  OPS_12 = 22701,                           // OPS-12
  OPS_14B = 22705,                          // OPS-14B
  OPS_14C = 22706,                          // OPS-14C
  OPS_16B = 22725,                          // OPS-16B
  OPS_18 = 22730,                           // OPS-18
  OPS_19 = 22732,                           // OPS-19
  OPS_20 = 22735,                           // OPS-20
  OPS_22 = 22736,                           // OPS-22
  OPS_24 = 22737,                           // OPS-24
  OPS_28 = 22740,                           // OPS-28
  OPS_28C = 22745,                          // OPS-28C
  OPS_39 = 22750,                           // OPS-39
  OPTIMA_3_2 = 22760,                       // OPTIMA 3.2
  VALUE_22770 = 22770,                      //
  ORB_31D = 22800,                          // ORB-31D
  ORB_31S = 22810,                          // ORB-31S
  ORB_32 = 22815,                           // ORB 32
  ORB_42 = 22830,                           // ORB-42
  ORION_RTN_10X = 22860,                    // Orion Rtn 10X
  SURFACE_WAVE_OVER_THE_HORIZON = 22890,    // Surface Wave (Over The Horizon)
  OTOMAT_MK_1 = 22900,                      // Otomat MK 1
  OTOMAT_MK_II_TESEO = 22905,               // Otomat MK II Teseo
  OTOMAT_SERIES_AL = 22906,                 // Otomat Series AL
  VALUE_22950 = 22950,                      //
  P360Z = 22955,                            // P360Z
  P_14 = 22956,                             // P-14
  P_180U = 22957,                           // P-180U
  P_18_2 = 22959,                           // P-18-2
  PA_1660 = 22960,                          // PA-1660
  P_18M = 22961,                            // P-18M
  P_190U = 22962,                           // P-190U
  P_30 = 22963,                             // P-30
  P_18_MOD = 22964,                         // P-18 MOD
  P_35M = 22965,                            // P-35M
  PAGE = 22970,                             // PAGE
  VALUE_22977 = 22977,                      //
  VALUE_22995 = 22995,                      //
  VALUE_22998 = 22998,                      //
  VALUE_23040 = 23040,                      //
  PANDORA = 23041,                          // Pandora
  PALSAR_2 = 23042,                         // PALSAR-2
  PANTSIR_SM_TAR = 23043,                   // Pantsir-SM TAR
  PAR_2 = 23045,                            // PAR-2
  PAR_2000 = 23050,                         // PAR-2000
  PAR_2090C = 23053,                        // PAR-2090C
  PAR_80 = 23055,                           // PAR-80
  VALUE_23085 = 23085,                      //
  VALUE_23095 = 23095,                      //
  PATRIOT = 23100,                          // PATRIOT
  VALUE_23130 = 23130,                      //
  VALUE_23175 = 23175,                      //
  PBR_4_RUBIN = 23220,                      // PBR 4 Rubin
  PCS_514 = 23240,                          // PCS 514
  VALUE_23265 = 23265,                      //
  PECHORA_SC = 23295,                       // Pechora SC
  VALUE_23310 = 23310,                      //
  VALUE_23355 = 23355,                      //
  VALUE_23400 = 23400,                      //
  VALUE_23445 = 23445,                      //
  VALUE_23450 = 23450,                      //
  VALUE_23490 = 23490,                      //
  VALUE_23500 = 23500,                      //
  PGZ07 = 23515,                            // PGZ07
  PHALANX = 23525,                          // Phalanx
  PHAZOTRON_GUKOL_4 = 23529,                // Phazotron Gukol-4
  PHAZOTRON_ZHUK_A_AE = 23530,              // Phazotron Zhuk-A/AE
  VALUE_23535 = 23535,                      //
  VALUE_23580 = 23580,                      //
  VALUE_23625 = 23625,                      //
  VALUE_23670 = 23670,                      //
  PHIMAT_JAMMER = 23675,                    // Phimat Jammer
  PICOSAR = 23680,                          // PICOSAR
  VALUE_23685 = 23685,                      //
  VALUE_23690 = 23690,                      //
  VALUE_23695 = 23695,                      //
  PL_11 = 23700,                            // PL-11
  PL_12 = 23701,                            // PL-12
  PL_15 = 23704,                            // PL-15
  VALUE_23710 = 23710,                      //
  VALUE_23715 = 23715,                      //
  VALUE_23760 = 23760,                      //
  VALUE_23805 = 23805,                      //
  VALUE_23850 = 23850,                      //
  VALUE_23895 = 23895,                      //
  VALUE_23925 = 23925,                      //
  VALUE_23940 = 23940,                      //
  VALUE_23985 = 23985,                      //
  VALUE_23990 = 23990,                      //
  VALUE_24020 = 24020,                      //
  VALUE_24030 = 24030,                      //
  PLESSEY_AWS_9 = 24035,                    // Plessey AWS 9
  VALUE_24075 = 24075,                      //
  VALUE_24095 = 24095,                      //
  PNA_B_RUBIN_DOWN_BEAT = 24098,            // PNA-B Rubin / Down Beat
  POHJANPALO = 24100,                       // POHJANPALO
  POLIMENT_K = 24110,                       // Poliment-K
  POLLUX = 24120,                           // POLLUX
  VALUE_24165 = 24165,                      //
  VALUE_24210 = 24210,                      //
  VALUE_24255 = 24255,                      //
  VALUE_24300 = 24300,                      //
  VALUE_24320 = 24320,                      //
  VALUE_24345 = 24345,                      //
  POZITIV_ME1_5P_26 = 24385,                // Pozitiv-ME1 5P-26
  POSITIVE_ME1_2 = 24386,                   // Positive-ME1.2
  VALUE_24390 = 24390,                      //
  VALUE_24435 = 24435,                      //
  VALUE_24480 = 24480,                      //
  VALUE_24525 = 24525,                      //
  VALUE_24535 = 24535,                      //
  PRAETORIAN_COUNTERMEASURES_SUITE = 24540,  // Praetorian Countermeasures Suite
  PRIMUS_30A = 24569,                        // PRIMUS 30A
  PRIMUS_40_WXD = 24570,                     // PRIMUS 40 WXD
  PRIMUS_400 = 24614,                        // Primus 400
  PRIMUS_300SL = 24615,                      // PRIMUS 300SL
  PRIMUS_500 = 24616,                        // Primus 500
  PRIMUS_650 = 24617,                        // Primus 650
  PRIMUS_700 = 24618,                        // Primus 700
  PRIMUS_800 = 24619,                        // PRIMUS 800
  VALUE_24620 = 24620,                       //
  PRIMUS_870 = 24622,                        // Primus 870
  PRORA = 24630,                             // PRORA
  PRS_2 = 24631,                             // PRS-2
  PRS_3_ARGON_2 = 24633,                     // PRS-3 Argon-2
  PRORA_PA_1660 = 24635,                     // PRORA PA-1660
  PS_15 = 24640,                             // PS-15
  PS_05A = 24650,                            // PS-05A
  PS_46_A = 24660,                           // PS 46 A
  PS_70_R = 24705,                           // PS 70 R
  PS_171_R = 24706,                          // PS-171/R
  PS_860 = 24707,                            // PS-860
  PS_870 = 24709,                            // PS-870
  PS_890 = 24710,                            // PS-890
  PSM_33 = 24720,                            // PSM-33
  VALUE_24750 = 24750,                       //
  QUADRADAR_VI = 24755,                      // Quadradar VI
  QW_1A = 24757,                             // QW-1A
  PHAZOTRON_1RS2_1E = 24758,                 // Phazotron 1RS2-1E
  PVS_200 = 24760,                           // PVS-200
  PVS_2000 = 24761,                          // PVS 2000
  R_330ZH = 24768,                           // R-330ZH
  R_045 = 24769,                             // R 045
  R_76 = 24770,                              // R-76
  R_934B = 24771,                            // R-934B
  RA_20 = 24772,                             // RA-20
  RA723 = 24774,                             // RA723
  R41XXX = 24775,                            // R41XXX
  RAC_3D = 24776,                            // RAC-3D
  VALUE_24780 = 24780,                       //
  R_423AM = 24781,                           // R-423AM
  VALUE_24795 = 24795,                       //
  DECCA_1230 = 24800,                        // DECCA 1230
  VALUE_24840 = 24840,                       //
  VALUE_24885 = 24885,                       //
  RACAL_DECCA_20V90_9 = 24890,               // Racal-DECCA 20V90/9
  VALUE_24930 = 24930,                       //
  VALUE_24975 = 24975,                       //
  VALUE_25020 = 25020,                       //
  VALUE_25065 = 25065,                       //
  VALUE_25110 = 25110,                       //
  RADA_MHR = 25150,                          // RADA MHR
  VALUE_25155 = 25155,                       //
  VALUE_25170 = 25170,                       //
  VALUE_25171 = 25171,                       //
  RAJENDRA = 25180,                          // RAJENDRA
  RAN_7S = 25200,                            // RAN 7S
  RAN_10S = 25205,                           // RAN 10S
  RAN_11_LX = 25245,                         // RAN 11 LX
  RANI = 25250,                              // Rani
  RAPHAEL_TH = 25259,                        // RAPHAEL-TH
  RAPIER_TA = 25260,                         // Rapier TA
  RAPIER_2000_TA = 25265,                    // Rapier 2000 TA
  RAPIER_MG = 25270,                         // Rapier MG
  RASCAR_3400C = 25273,                      // RASCAR 3400C
  RASHMI = 25275,                            // Rashmi
  RASIT = 25276,                             // Rasit
  RASIT_3190B = 25277,                       // Rasit 3190B
  RAT_31_DL_M = 25278,                       // RAT-31 DL/M
  RAT_31_DL = 25279,                         // RAT-31 DL
  RAT_31S = 25280,                           // RAT-31S
  RAT_8_S = 25281,                           // RAT-8 S
  RAT_31_SL = 25282,                         // RAT-31 SL
  RAVEN_ES_05 = 25283,                       // Raven ES-05
  RATAC_LCT = 25285,                         // RATAC (LCT)
  RAWL = 25286,                              // RAWL
  VALUE_25287 = 25287,                       //
  RAWS = 25288,                              // RAWS
  RAWL_02 = 25289,                           // RAWL-02
  VALUE_25290 = 25290,                       //
  RAWS_03 = 25291,                           // RAWS-03
  VALUE_25292 = 25292,                       //
  VALUE_25300 = 25300,                       //
  VALUE_25335 = 25335,                       //
  VALUE_25380 = 25380,                       //
  VALUE_25425 = 25425,                       //
  VALUE_25470 = 25470,                       //
  VALUE_25515 = 25515,                       //
  RAYTHEON_ANSCHUTZ_NAUTOSCAN_NX = 25530,    // Raytheon Anschutz NautoScan NX
  VALUE_25540 = 25540,                       //
  VALUE_25545 = 25545,                       //
  VALUE_25550 = 25550,                       //
  VALUE_25560 = 25560,                       //
  VALUE_25605 = 25605,                       //
  RAY_1220XR = 25630,                        // RAY-1220XR
  VALUE_25635 = 25635,                       //
  VALUE_25650 = 25650,                       //
  VALUE_25694 = 25694,                       //
  VALUE_25695 = 25695,                       //
  VALUE_25698 = 25698,                       //
  RBE2 = 25735,                              // RBE2
  RBE2_AA = 25736,                           // RBE2-AA
  RCT_180 = 25739,                           // RCT-180
  RDM = 25740,                               // RDM
  RDM_3 = 25745,                             // RDM-3
  RDI = 25750,                               // RDI
  RDY = 25760,                               // RDY
  RDY_3 = 25762,                             // RDY-3
  RDS_86 = 25770,                            // RDS-86
  RDN_72 = 25785,                            // RDN 72
  RDR_1A = 25830,                            // RDR 1A
  RDR_1E = 25835,                            // RDR 1E
  RDR_4A = 25840,                            // RDR 4A
  RDR_150 = 25845,                           // RDR-150
  RDR_160XD = 25850,                         // RDR-160XD
  RDR_230_HP = 25853,                        // RDR-230 HP
  RDR_1100 = 25855,                          // RDR 1100
  RDR_1150 = 25860,                          // RDR-1150
  RDR_1200 = 25875,                          // RDR 1200
  RDR_1400 = 25885,                          // RDR 1400
  RDR_1400_C = 25890,                        // RDR 1400 C
  RDR_4000 = 25891,                          // RDR-4000
  RDR_4000 = 25892,                          // RDR 4000
  RDR_1500 = 25895,                          // RDR 1500
  VALUE_25896 = 25896,                       //
  RDR_1600 = 25897,                          // RDR 1600
  RDR_2000 = 25898,                          // RDR 2000
  RDR_1700B = 25899,                         // RDR 1700B
  REMORA = 25900,                            // Remora
  RICE_FIELD = 25901,                        // Rice Field
  REC_1A = 25902,                            // REC-1A
  REC_1B = 25903,                            // REC-1B
  REC_1C = 25904,                            // REC-1C
  RESOLVE_EAS = 25906,                       // Resolve EAS
  VALUE_25907 = 25907,                       //
  REL_6E = 25908,                            // REL-6E
  REC_1 = 25909,                             // REC-1
  VALUE_25910 = 25910,                       //
  IMPROVED_REPORTER = 25911,                 // Improved Reporter
  VALUE_25912 = 25912,                       //
  VALUE_25915 = 25915,                       //
  VALUE_25920 = 25920,                       //
  REVATHI = 25940,                           // REVATHI
  REZONANS = 25950,                          // REZONANS
  RGM_UGM_109B = 25955,                      // RGM/UGM-109B
  RGM_UGM_109E_HOMING_RADAR = 25958,         // RGM/UGM-109E Homing Radar
  VALUE_25965 = 25965,                       //
  RKL_526 = 25966,                           // RKL-526
  RKZ_764 = 25967,                           // RKZ-764
  RKZ_766 = 25968,                           // RKZ-766
  RKL_165 = 25969,                           // RKL-165
  RKL_609 = 25970,                           // RKL-609
  RKL_800 = 25971,                           // RKL-800
  RKZ_761 = 25972,                           // RKZ-761
  RKZ_2000 = 25973,                          // RKZ-2000
  RIS_4C_A = 25974,                          // RIS-4C/A
  RL_2000 = 25975,                           // RL-2000
  RL_41 = 25976,                             // RL-41
  RIR_778 = 25977,                           // RIR 778
  RISAT = 25978,                             // RISAT
  RLM_S = 25979,                             // RLM-S
  RIM_HAT_ESM_ECM_SUITE = 25980,             // Rim Hat ESM/ECM Suite
  VALUE_26008 = 26008,                       //
  VALUE_26010 = 26010,                       //
  VALUE_26011 = 26011,                       //
  RM370BT = 26015,                           // RM370BT
  VALUE_26020 = 26020,                       //
  VALUE_26040 = 26040,                       //
  VALUE_26041 = 26041,                       //
  RMT_0100A = 26043,                         // RMT 0100A
  RN_222 = 26045,                            // RN-222
  ROLAND_2 = 26053,                          // ROLAND 2
  ROLAND_BN = 26055,                         // ROLAND BN
  ROLAND_MG = 26100,                         // ROLAND MG
  ROLAND_TA = 26145,                         // ROLAND TA
  ROLAND_TT = 26190,                         // ROLAND TT
  ROTODOME = 26210,                          // ROTODOME
  VALUE_26235 = 26235,                       //
  RP_379D_TIRADA_D = 26236,                  // RP-379D Tirada D
  RP_3 = 26237,                              // RP-3
  RP_4G = 26238,                             // RP-4G
  VALUE_26280 = 26280,                       //
  VALUE_26325 = 26325,                       //
  RPR_117 = 26326,                           // RPR-117
  RS_02_50 = 26327,                          // RS-02/50
  VALUE_26328 = 26328,                       //
  RT_02_50 = 26330,                          // RT-02/50
  RTA_4100 = 26340,                          // RTA-4100
  RTN_1A = 26350,                            // RTN-1A
  RTN_25X = 26353,                           // RTN-25X
  RTS_6400 = 26354,                          // RTS-6400
  VALUE_26355 = 26355,                       //
  VALUE_26360 = 26360,                       //
  VALUE_26361 = 26361,                       //
  VALUE_26362 = 26362,                       //
  RV2 = 26370,                               // RV2
  RV3 = 26415,                               // RV3
  RV5 = 26460,                               // RV5
  RV10 = 26505,                              // RV10
  RV_15M = 26506,                            // RV-15M
  RV17 = 26550,                              // RV17
  RV18 = 26595,                              // RV18
  RV_21 = 26596,                             // RV-21
  RV_21B = 26597,                            // RV-21B
  RV_25 = 26600,                             // RV-25
  RV_377 = 26610,                            // RV-377
  RV_UM = 26640,                             // RV UM
  RWD_8 = 26650,                             // RWD-8
  VALUE_26660 = 26660,                       //
  VALUE_26665 = 26665,                       //
  S_1810CD = 26670,                          // S-1810CD
  SAHAB = 26672,                             // Sahab
  SALAMANDRE = 26673,                        // Salamandre
  VALUE_26674 = 26674,                       //
  S1850M = 26675,                            // S1850M
  S_511 = 26676,                             // S-511
  S_512 = 26677,                             // S-512
  S_600 = 26678,                             // S-600
  S_604 = 26679,                             // S-604
  S_763_LANZA_3D = 26680,                    // S-763 LANZA 3D
  S_613 = 26681,                             // S-613
  S_631 = 26682,                             // S-631
  S_654 = 26683,                             // S-654
  S_669 = 26684,                             // S-669
  VALUE_26685 = 26685,                       //
  S_244 = 26686,                             // S-244
  S_711 = 26687,                             // S-711
  VALUE_26730 = 26730,                       //
  VALUE_26775 = 26775,                       //
  VALUE_26795 = 26795,                       //
  SA_23_TEL_ILLUMINATOR = 26797,             // SA-23 TEL Illuminator
  SABER_M60 = 26799,                         // SABER-M60
  SAMOVAR = 26805,                           // Samovar
  SAMPSON = 26810,                           // Sampson
  VALUE_26820 = 26820,                       //
  VALUE_26865 = 26865,                       //
  SACCADE_MH = 26900,                        // Saccade MH
  VALUE_26910 = 26910,                       //
  SAP_14 = 26920,                            // SAP-14
  SAP_518 = 26925,                           // SAP-518
  SAP_518M = 26926,                          // SAP-518M
  SAND_BAR = 26930,                          // Sand Bar
  SA_PECHORA_2M_TT = 26935,                  // SA Pechora 2M TT
  SAR_ON_UAVS = 26945,                       // SAR (on UAVs)
  SATRAPE = 26950,                           // SATRAPE
  SATURNE_II = 26955,                        // SATURNE II
  VALUE_27000 = 27000,                       //
  VALUE_27045 = 27045,                       //
  VALUE_27090 = 27090,                       //
  SCANTER_1002 = 27095,                      // SCANTER 1002
  VALUE_27100 = 27100,                       //
  VALUE_27101 = 27101,                       //
  VALUE_27102 = 27102,                       //
  SCANTER_4002 = 27109,                      // SCANTER 4002
  VALUE_27110 = 27110,                       //
  SCANTER_5102 = 27111,                      // SCANTER 5102
  SCANTER_5502 = 27113,                      // SCANTER 5502
  VALUE_27115 = 27115,                       //
  VALUE_27116 = 27116,                       //
  VALUE_27125 = 27125,                       //
  VALUE_27135 = 27135,                       //
  SCANTER_MIL_S = 27137,                     // SCANTER MIL S
  SCANTER_SMR = 27139,                       // Scanter SMR
  SCANTER_CSR = 27140,                       // SCANTER (CSR)
  SCORADS = 27141,                           // SCORADS
  SCIMITAR = 27142,                          // Scimitar
  STAR_2000 = 27143,                         // STAR 2000
  VALUE_27150 = 27150,                       //
  SCOOP_PAIR = 27175,                        // Scoop Pair
  VALUE_27180 = 27180,                       //
  VALUE_27183 = 27183,                       //
  SCR_584 = 27190,                           // SCR-584
  SEA_ARCHER_2 = 27225,                      // Sea Archer 2
  SEA_BASED_X_BAND = 27230,                  // Sea Based X-Band
  SEA_DRAGON = 27235,                        // Sea Dragon
  SEA_EAGLE_TYPE_381 = 27239,                // Sea Eagle (Type 381)
  SEA_EAGLE_S_C_TYPE_382 = 27240,            // Sea Eagle S/C (Type 382)
  SEA_FALCON = 27245,                        // SEA FALCON
  VALUE_27248 = 27248,                       //
  VALUE_27251 = 27251,                       //
  SEA_HAWK_SHN_X12 = 27260,                  // Sea-Hawk SHN X12
  SEA_HUNTER_4_MG = 27270,                   // Sea Hunter 4 MG
  SEA_HUNTER_4_TA = 27315,                   // Sea Hunter 4 TA
  SEA_HUNTER_4_TT = 27360,                   // Sea Hunter 4 TT
  VALUE_27405 = 27405,                       //
  VALUE_27430 = 27430,                       //
  VALUE_27450 = 27450,                       //
  SEA_SPARROW = 27451,                       // Sea Sparrow [DEPRECATED]
  SEA_SPRAY = 27495,                         // Sea Spray
  SEA_TIGER = 27540,                         // Sea Tiger
  SEA_TIGER_M = 27550,                       // Sea Tiger M
  SEASTAR = 27560,                           // Seastar
  SEARCHWATER = 27570,                       // Searchwater
  SEARCHWATER_2000 = 27575,                  // Searchwater 2000
  SEASONDE = 27580,                          // SEASONDE
  SEASPRAY_7000E = 27582,                    // SEASPRAY 7000E
  SEAVUE = 27583,                            // SeaVue
  VALUE_27584 = 27584,                       //
  VALUE_27585 = 27585,                       //
  VALUE_27630 = 27630,                       //
  VALUE_27675 = 27675,                       //
  SELENIA_RAN_20S = 27680,                   // Selenia RAN 20S
  VALUE_27720 = 27720,                       //
  VALUE_27765 = 27765,                       //
  SENTIR_M20 = 27770,                        // SENTIR-M20
  SERDAR = 27771,                            // SERDAR
  SERHAT = 27773,                            // SERHAT
  VALUE_27775 = 27775,                       //
  SERIES_52 = 27780,                         // SERIES 52
  SERIES_320 = 27790,                        // SERIES 320
  SG = 27800,                                // SG
  VALUE_27802 = 27802,                       //
  VALUE_27803 = 27803,                       //
  SGR_102_00 = 27810,                        // SGR 102 00
  SGR_103_02 = 27855,                        // SGR 103/02
  SGR_104 = 27870,                           // SGR-104
  SHAHED_129_SAR = 27873,                    // Shahed-129 SAR
  SHAHINE = 27875,                           // SHAHINE
  VALUE_27900 = 27900,                       //
  VALUE_27945 = 27945,                       //
  SHIKRA = 27980,                            // SHIKRA
  VALUE_27990 = 27990,                       //
  VALUE_28035 = 28035,                       //
  SGR_114 = 28080,                           // SGR 114
  VALUE_28125 = 28125,                       //
  VALUE_28170 = 28170,                       //
  VALUE_28215 = 28215,                       //
  VALUE_28260 = 28260,                       //
  PRV_11 = 28280,                            // PRV-11
  VALUE_28305 = 28305,                       //
  VALUE_28350 = 28350,                       //
  VALUE_28395 = 28395,                       //
  VALUE_28440 = 28440,                       //
  VALUE_28445 = 28445,                       //
  VALUE_28480 = 28480,                       //
  VALUE_28485 = 28485,                       //
  VALUE_28530 = 28530,                       //
  VALUE_28575 = 28575,                       //
  VALUE_28620 = 28620,                       //
  VALUE_28665 = 28665,                       //
  VALUE_28710 = 28710,                       //
  VALUE_28755 = 28755,                       //
  VALUE_28760 = 28760,                       //
  VALUE_28770 = 28770,                       //
  VALUE_28800 = 28800,                       //
  VALUE_28845 = 28845,                       //
  VALUE_28890 = 28890,                       //
  VALUE_28935 = 28935,                       //
  VALUE_28980 = 28980,                       //
  VALUE_29025 = 29025,                       //
  VALUE_29030 = 29030,                       //
  VALUE_29035 = 29035,                       //
  SIMRAD_3G = 29043,                         // SIMRAD 3G
  SIMRAD_4G = 29045,                         // SIMRAD 4G
  VALUE_29050 = 29050,                       //
  VALUE_29060 = 29060,                       //
  VALUE_29070 = 29070,                       //
  VALUE_29115 = 29115,                       //
  VALUE_29160 = 29160,                       //
  SKYFENDER = 29172,                         // SKYFENDER
  SKY_WAVE_OVER_THE_HORIZON = 29175,         // Sky Wave (Over The Horizon)
  SKYGUARD_B = 29180,                        // Skyguard B
  SKYGUARD_TA = 29185,                       // SKYGUARD TA
  SKYGUARD_TT = 29190,                       // SKYGUARD TT
  SKYGUARD_LR = 29191,                       // Skyguard LR
  SKYMASTER = 29200,                         // Skymaster
  VALUE_29205 = 29205,                       //
  SKY_RANGER = 29210,                        // Sky Ranger
  VALUE_29215 = 29215,                       //
  SKYSHIELD_TA = 29220,                      // SKYSHIELD TA
  SL = 29250,                                // SL
  SL_ALQ_234 = 29270,                        // SL/ALQ-234
  VALUE_29295 = 29295,                       //
  VALUE_29297 = 29297,                       //
  SLC_2 = 29300,                             // SLC-2
  SLC_2E = 29301,                            // SLC-2E
  SLC_4 = 29305,                             // SLC-4
  VALUE_29340 = 29340,                       //
  VALUE_29385 = 29385,                       //
  VALUE_29400 = 29400,                       //
  VALUE_29430 = 29430,                       //
  VALUE_29431 = 29431,                       //
  VALUE_29432 = 29432,                       //
  VALUE_29433 = 29433,                       //
  VALUE_29434 = 29434,                       //
  VALUE_29435 = 29435,                       //
  VALUE_29440 = 29440,                       //
  SM_674A_UPM = 29450,                       // SM-674A/UPM
  VALUE_29475 = 29475,                       //
  VALUE_29520 = 29520,                       //
  VALUE_29565 = 29565,                       //
  VALUE_29610 = 29610,                       //
  VALUE_29655 = 29655,                       //
  VALUE_29700 = 29700,                       //
  VALUE_29745 = 29745,                       //
  VALUE_29790 = 29790,                       //
  VALUE_29835 = 29835,                       //
  VALUE_29880 = 29880,                       //
  VALUE_29925 = 29925,                       //
  VALUE_29970 = 29970,                       //
  VALUE_30015 = 30015,                       //
  SR_47A = 30016,                            // SR-47A
  VALUE_30060 = 30060,                       //
  VALUE_30065 = 30065,                       //
  SMART_S = 30068,                           // SMART-S
  SMART_S_MK2 = 30069,                       // SMART-S Mk2
  SMART_L = 30070,                           // SMART-L
  SM_932 = 30072,                            // SM-932
  VALUE_30075 = 30075,                       //
  VALUE_30080 = 30080,                       //
  VALUE_30105 = 30105,                       //
  VALUE_30140 = 30140,                       //
  VALUE_30150 = 30150,                       //
  VALUE_30195 = 30195,                       //
  VALUE_30200 = 30200,                       //  [DEPRECATED]
  VALUE_30240 = 30240,                       //
  VALUE_30255 = 30255,                       //
  VALUE_30285 = 30285,                       //
  VALUE_30330 = 30330,                       //
  VALUE_30375 = 30375,                       //
  VALUE_30420 = 30420,                       //
  VALUE_30421 = 30421,                       //
  VALUE_30465 = 30465,                       //
  _9S18M1 = 30470,                           // 9S18M1
  _9S18M1E = 30471,                          // 9S18M1E
  SPB_7 = 30475,                             // SPB-7
  VALUE_30480 = 30480,                       //
  SNW_10 = 30490,                            // SNW-10
  SO_1 = 30510,                              // SO-1
  SO_12 = 30520,                             // SO-12
  SO_A_COMMUNIST = 30555,                    // SO A Communist
  SO_69 = 30580,                             // SO-69
  VALUE_30600 = 30600,                       //
  SOM_64 = 30645,                            // SOM 64
  SOPKA_HILL = 30650,                        // Sopka (Hill)
  VALUE_30660 = 30660,                       //
  SORBTSIYA_L005 = 30661,                    // Sorbtsiya L005
  SORBTSIYA_L005S = 30662,                   // Sorbtsiya L005S
  SPADA_SIR = 30665,                         // SPADA SIR
  VALUE_30670 = 30670,                       //
  SPARROW_AIM_RIM_7_ILL = 30690,             // Sparrow (AIM/RIM-7) ILL
  SPERRY_RASCAR = 30691,                     // SPERRY RASCAR
  SPECTRA = 30692,                           // SPECTRA
  SPEAR3_MMW = 30696,                        // SPEAR3 MMW
  VALUE_30700 = 30700,                       //
  VALUE_30701 = 30701,                       //
  SPEXER_2000 = 30710,                       // SPEXER 2000
  SPG_53F = 30735,                           // SPG 53F
  SPG_70_RTN_10X = 30780,                    // SPG 70 (RTN 10X)
  SPG_74_RTN_20X = 30825,                    // SPG 74 (RTN 20X)
  SPG_75_RTN_30X = 30870,                    // SPG 75 (RTN 30X)
  SPG_76_RTN_30X = 30915,                    // SPG 76 (RTN 30X)
  VALUE_30960 = 30960,                       //
  VALUE_31005 = 31005,                       //
  VALUE_31050 = 31050,                       //
  SPINO_D_ADDA_WTR = 31070,                  // SPINO D'ADDA WTR
  SPJ_40 = 31080,                            // SPJ-40
  VALUE_31095 = 31095,                       //
  SPN_2 = 31096,                             // SPN-2
  SPN_4 = 31097,                             // SPN-4
  SPN_30 = 31100,                            // SPN-30
  SPN_35A = 31140,                           // SPN 35A
  SPN_41 = 31185,                            // SPN 41
  SPN_42 = 31230,                            // SPN 42
  SPN_43A = 31275,                           // SPN 43A
  SPN_43B = 31320,                           // SPN 43B
  SPN_44 = 31365,                            // SPN 44
  SPN_46 = 31410,                            // SPN 46
  SPN_703 = 31455,                           // SPN 703
  SPN_720 = 31475,                           // SPN 720
  SPN_728_V_1 = 31500,                       // SPN 728 (V) 1
  SPN_748 = 31545,                           // SPN 748
  SPN_750 = 31590,                           // SPN 750
  SPO_8 = 31592,                             // SPO-8
  SPN_753G = 31593,                          // SPN 753G
  VALUE_31635 = 31635,                       //
  P_12 = 31680,                              // P-12
  P_18 = 31681,                              // P-18
  P_18 = 31682,                              // P-18
  P_18 = 31684,                              // P-18
  P_18MH2 = 31685,                           // P-18MH2
  VALUE_31700 = 31700,                       //
  SPQ_712_RAN_12_L_X = 31725,                // SPQ 712 (RAN 12 L/X)
  SPR_2 = 31730,                             // SPR-2
  SPR_51 = 31740,                            // SPR-51
  SPS_5_FASOL = 31765,                       // SPS-5 FASOL
  SPS_6 = 31766,                             // SPS-6
  SPS_6C = 31770,                            // SPS 6C
  SPS_10F = 31815,                           // SPS 10F
  SPS_12 = 31860,                            // SPS 12
  SPS_22N_BUKET = 31870,                     // SPS-22N BUKET
  SPS_33N_BUKET = 31875,                     // SPS-33N BUKET
  SPS_44N_BUKET = 31880,                     // SPS-44N BUKET
  SPS_55N_BUKET = 31890,                     // SPS-55N BUKET
  SPS_58 = 31905,                            // SPS 58
  SPS_62 = 31925,                            // SPS-62
  SPS_100K = 31935,                          // SPS-100K
  SPS_64 = 31950,                            // SPS 64
  SPS_141 = 31951,                           // SPS-141
  SPS_142 = 31952,                           // SPS-142
  SPS_143 = 31953,                           // SPS-143
  SPS_151 = 31955,                           // SPS-151
  SPS_152 = 31956,                           // SPS-152
  SPS_153 = 31957,                           // SPS-153
  SPS_160_GERAN = 31959,                     // SPS-160 Geran
  SPS_161 = 31960,                           // SPS-161
  SPS_95K = 31970,                           // SPS-95K
  SPS_171_JAMMER = 31971,                    // SPS-171 Jammer
  SPS_172_JAMMER = 31972,                    // SPS-172 Jammer
  SPS_768_RAN_EL = 31995,                    // SPS 768 (RAN EL)
  SPS_540K = 32010,                          // SPS-540K
  SPS_550K_MF = 32020,                       // SPS-550K MF
  SPS_774_RAN_10S = 32040,                   // SPS 774 (RAN 10S)
  SPY_790 = 32085,                           // SPY 790
  VALUE_32130 = 32130,                       //
  VALUE_32175 = 32175,                       //
  VALUE_32220 = 32220,                       //
  VALUE_32265 = 32265,                       //
  SHMEL = 32310,                             // Shmel
  P_15M = 32330,                             // P-15M
  VALUE_32355 = 32355,                       //
  SQUIRE = 32365,                            // SQUIRE
  SR2410C = 32373,                           // SR2410C
  SR47B_G = 32375,                           // SR47B-G
  SRE_M5 = 32385,                            // SRE-M5
  SRN_6 = 32400,                             // SRN 6
  SRN_15 = 32445,                            // SRN 15
  SRN_206 = 32455,                           // SRN 206
  SRN_745 = 32490,                           // SRN 745
  SRO_1 = 32535,                             // SRO 1
  SRO_2 = 32580,                             // SRO 2
  VALUE_32625 = 32625,                       //
  VALUE_32670 = 32670,                       //
  VALUE_32715 = 32715,                       //
  VALUE_32760 = 32760,                       //
  VALUE_32805 = 32805,                       //
  VALUE_32850 = 32850,                       //
  VALUE_32851 = 32851,                       //
  VALUE_32852 = 32852,                       //
  VALUE_32895 = 32895,                       //
  VALUE_32940 = 32940,                       //
  VALUE_32985 = 32985,                       //
  VALUE_33025 = 33025,                       //
  VALUE_33030 = 33030,                       //
  VALUE_33075 = 33075,                       //
  VALUE_33120 = 33120,                       //
  SS_N_10A_FL_10_MMW_MH = 33125,             // SS-N-10A FL-10 mmW MH
  SS_N_11_NASR_1_MMW_MH = 33140,             // SS-N-11 Nasr-1 mmW MH
  VALUE_33165 = 33165,                       //
  SS_N_12_YJ_83J_MMW_MH = 33166,             // SS-N-12 YJ-83J mmW MH
  VALUE_33210 = 33210,                       //
  VALUE_33230 = 33230,                       //
  VALUE_33231 = 33231,                       //
  VALUE_33255 = 33255,                       //
  VALUE_33300 = 33300,                       //
  VALUE_33345 = 33345,                       //
  VALUE_33390 = 33390,                       //
  VALUE_33435 = 33435,                       //
  VALUE_33480 = 33480,                       //
  VALUE_33481 = 33481,                       //
  VALUE_33483 = 33483,                       //
  SS_N_26_STROBILE_MMW_MH = 33484,           // SS-N-26 Strobile MMW MH
  VALUE_33485 = 33485,                       //
  VALUE_33486 = 33486,                       //
  VALUE_33505 = 33505,                       //
  VALUE_33510 = 33510,                       //
  VALUE_33511 = 33511,                       //
  VALUE_33525 = 33525,                       //
  STR_41 = 33570,                            // STR 41
  ST_858 = 33580,                            // ST-858
  START_1M = 33582,                          // START-1M
  STENTOR = 33584,                           // STENTOR
  STORM_SHADOW_AHR = 33585,                  // Storm Shadow AHR
  STRAIGHT_FLUSH = 33586,                    // STRAIGHT FLUSH
  VALUE_33590 = 33590,                       //
  VALUE_33595 = 33595,                       //
  VALUE_33600 = 33600,                       //
  VALUE_33615 = 33615,                       //
  VALUE_33660 = 33660,                       //
  VALUE_33705 = 33705,                       //
  VALUE_33750 = 33750,                       //
  VALUE_33795 = 33795,                       //
  VALUE_33840 = 33840,                       //
  SUPERDARN = 33850,                         // SUPERDARN
  SUPERFLEDERMAUS = 33860,                   // Superfledermaus
  SUPERSEARCHER = 33870,                     // Supersearcher
  VALUE_33885 = 33885,                       //
  VALUE_33930 = 33930,                       //
  SYMPHONY = 33933,                          // SYMPHONY
  SYNAPSIS_MK2 = 33935,                      // SYNAPSIS Mk2
  SY80 = 33950,                              // SY80
  VALUE_33975 = 33975,                       //
  VALUE_34020 = 34020,                       //
  VALUE_34040 = 34040,                       //
  VALUE_34065 = 34065,                       //
  VALUE_34110 = 34110,                       //
  VALUE_34155 = 34155,                       //
  VALUE_34200 = 34200,                       //
  VALUE_34245 = 34245,                       //
  VALUE_34290 = 34290,                       //
  VALUE_34335 = 34335,                       //
  VALUE_34380 = 34380,                       //
  VALUE_34425 = 34425,                       //
  VALUE_34470 = 34470,                       //
  TA_10K = 34480,                            // TA-10K
  JY_11B = 34500,                            // JY-11B
  TACAN_SURF = 34505,                        // TACAN/SURF
  P_14 = 34515,                              // P-14
  VALUE_34516 = 34516,                       //
  VALUE_34517 = 34517,                       //
  VALUE_34560 = 34560,                       //
  VALUE_34605 = 34605,                       //
  TDR_94_MODE_S = 34607,                     // TDR-94 (MODE S)
  VALUE_34610 = 34610,                       //
  VALUE_34620 = 34620,                       //
  TALISMAN = 34624,                          // TALISMAN
  VALUE_34625 = 34625,                       //
  T1135 = 34626,                             // T1135
  TANCAN_SURF = 34627,                       // TANCAN/SURF
  TECSAR = 34628,                            // TECSAR
  TERRASAR_X = 34629,                        // TERRASAR-X
  TESAR = 34630,                             // TESAR
  THAAD_GBR = 34640,                         // THAAD GBR
  THALES_RDY_2 = 34644,                      // Thales RDY-2
  THALES_NEDERLAND_SIGNAAL_APAR = 34645,     // Thales Nederland Signaal APAR
  THALES_SCORPION_JAMMER = 34646,            // Thales Scorpion Jammer
  THALES_VARIANT = 34647,                    // Thales Variant
  THALES_ICMS_JAMMER = 34648,                // Thales ICMS Jammer
  THALES_IMEWS_JAMMER = 34649,               // Thales IMEWS Jammer
  THD_225 = 34650,                           // THD 225
  THD_1012 = 34655,                          // THD 1012
  THD_1098 = 34660,                          // THD 1098
  THD_1213 = 34665,                          // THD 1213
  THD_1940 = 34670,                          // THD 1940
  THD_1955_PALMIER = 34680,                  // THD-1955 Palmier
  THD_5500 = 34695,                          // THD 5500
  THIRD_OF_KHORDAD = 34700,                  // Third of Khordad
  VALUE_34740 = 34740,                       //
  PRV_9 = 34785,                             // PRV-9
  PRV_16 = 34786,                            // PRV-16
  VALUE_34795 = 34795,                       //
  VALUE_34830 = 34830,                       //
  VALUE_34875 = 34875,                       //
  VALUE_34920 = 34920,                       //
  VALUE_34965 = 34965,                       //
  THOMSON_CSF_DOMINO_30 = 34966,             // Thomson-CSF Domino 30
  VALUE_35010 = 35010,                       //
  VALUE_35055 = 35055,                       //
  VALUE_35100 = 35100,                       //
  VALUE_35145 = 35145,                       //
  VALUE_35190 = 35190,                       //
  VALUE_35235 = 35235,                       //
  VALUE_35280 = 35280,                       //
  VALUE_35325 = 35325,                       //
  VALUE_35370 = 35370,                       //
  VALUE_35415 = 35415,                       //
  VALUE_35460 = 35460,                       //
  THOMSON_ENR_EUROPEAN_NAVY_RADAR = 35470,  // Thomson ENR (European Navy Radar)
  THOMSON_RDI = 35475,                      // Thomson RDI
  TIER_II_PLUS = 35477,                     // Tier II Plus
  TPS_755 = 35478,                          // TPS-755
  TPS_830K = 35479,                         // TPS-830K
  TRS_2105 = 35480,                         // TRS-2105
  TR_23K = 35481,                           // TR-23K
  TR_23MR = 35482,                          // TR-23MR
  TRAC_2100 = 35483,                        // TRAC-2100
  TRAC_2300 = 35484,                        // TRAC-2300
  HT_223 = 35485,                           // HT-223
  TRADEX = 35486,                           // TRADEX
  TRAIL_XI = 35487,                         // TRAIL XI
  TRD_1211 = 35488,                         // TRD-1211
  TRD_1235 = 35489,                         // TRD-1235
  TRS_2100 = 35490,                         // TRS-2100
  TRAC_NG = 35491,                          // TRAC NG
  VALUE_35505 = 35505,                      //
  _36D6 = 35550,                            // 36D6
  VALUE_35570 = 35570,                      //
  TIRSPONDER = 35580,                       // TIRSPONDER
  TK_25E_5 = 35583,                         // TK-25E-5
  TMK_MK2 = 35585,                          // TMK Mk2
  TMX_MK2 = 35586,                          // TMX Mk2
  VALUE_35595 = 35595,                      //
  VALUE_35640 = 35640,                      //
  VALUE_35685 = 35685,                      //
  VALUE_35730 = 35730,                      //
  VALUE_35775 = 35775,                      //
  TOKEN_B = 35785,                          // Token B
  VALUE_35800 = 35800,                      //
  TONSON = 35810,                           // Tonson
  VALUE_35820 = 35820,                      //
  VALUE_35865 = 35865,                      //
  VALUE_35910 = 35910,                      //
  VALUE_35955 = 35955,                      //
  VALUE_36000 = 36000,                      //
  VALUE_36045 = 36045,                      //
  VALUE_36046 = 36046,                      //
  VALUE_36090 = 36090,                      //
  TYPE_208 = 36120,                         // TYPE-208
  VALUE_36135 = 36135,                      //
  VALUE_36180 = 36180,                      //
  TORNADO_GMR = 36200,                      // Tornado GMR
  TORNADO_TFR = 36201,                      // Tornado TFR
  VALUE_36220 = 36220,                      //
  VALUE_36225 = 36225,                      //
  TOR_M2_TER = 36226,                       // TOR-M2 TER
  VALUE_36230 = 36230,                      //
  VALUE_36270 = 36270,                      //
  TR_47C = 36300,                           // TR-47C
  TORSO_M = 36315,                          // TORSO M
  TQN_2 = 36320,                            // TQN-2
  VALUE_36360 = 36360,                      //
  TRD_1500 = 36365,                         // TRD-1500
  VALUE_36370 = 36370,                      //
  VALUE_36371 = 36371,                      //
  TRISPONDE = 36380,                        // TRISPONDE
  TRML = 36381,                             // TRML
  TRS_2215 = 36382,                         // TRS-2215
  TRML_3D = 36383,                          // TRML-3D
  TRM_S = 36384,                            // TRM-S
  TRS_2056 = 36385,                         // TRS-2056
  TRS_3010 = 36386,                         // TRS 3010
  TRS_2060 = 36387,                         // TRS-2060
  TRS_2245 = 36388,                         // TRS-2245
  TRS_2310 = 36389,                         // TRS-2310
  TRITON_G = 36390,                         // Triton G
  TRS_22XX = 36391,                         // TRS-22XX
  TRS_3030 = 36400,                         // TRS 3030
  TRS_3033 = 36405,                         // TRS 3033
  TRS_3203 = 36417,                         // TRS 3203
  TRS_3405 = 36420,                         // TRS 3405
  TRS_3410 = 36425,                         // TRS 3410
  TRS_3415 = 36430,                         // TRS 3415
  TRS_3D = 36440,                           // TRS-3D
  TRS_3D_16 = 36441,                        // TRS-3D/16
  TRS_3D_16_ES = 36442,                     // TRS-3D/16-ES
  TRS_3D_32 = 36443,                        // TRS-3D/32
  TRS_4D = 36446,                           // TRS-4D
  TRS_C = 36447,                            // TRS-C
  TRS_N = 36450,                            // TRS-N
  TS_4478A = 36460,                         // TS-4478A
  TSE_5000 = 36495,                         // TSE 5000
  TSR_333 = 36540,                          // TSR 333
  TSR_793 = 36550,                          // TSR 793
  VALUE_36563 = 36563,                      //
  VALUE_36585 = 36585,                      //
  TW_1374 = 36590,                          // TW 1374
  TW_1378 = 36595,                          // TW 1378
  TW_1446 = 36600,                          // TW 1446
  VALUE_36630 = 36630,                      //
  VALUE_36675 = 36675,                      //
  VALUE_36720 = 36720,                      //
  VALUE_36765 = 36765,                      //
  VALUE_36810 = 36810,                      //
  TYPE_071_LPD = 36821,                     // Type 071 LPD
  TYPE_2_12_J_A = 36827,                    // Type 2-12 J/A
  TYPE_2_21_J_A = 36830,                    // Type 2-21 J/A
  TYPE_2_23 = 36835,                        // Type 2-23
  TYPE_80_ASM_1 = 36836,                    // Type 80/ASM-1
  TYPE_120 = 36838,                         // Type 120
  TYPE_208 = 36840,                         // Type 208
  TYPE_222 = 36843,                         // Type 222
  TYPE_226 = 36846,                         // Type 226
  TYPE_232H = 36850,                        // Type 232H
  TYPE_245 = 36853,                         // TYPE 245
  TYPE_262 = 36855,                         // TYPE 262
  TYPE_275 = 36900,                         // TYPE 275
  TYPE_278 = 36905,                         // TYPE 278
  TYPE_293 = 36945,                         // TYPE 293
  TYPE_341 = 36946,                         // Type 341
  TYPE_313 = 36947,                         // TYPE 313
  TYPE_305A = 36948,                        // Type 305A
  TYPE_334 = 36960,                         // Type 334
  TYPE_342 = 36985,                         // Type 342
  TYPE_343_SUN_VISOR_B = 36990,             // TYPE 343 SUN VISOR B
  TYPE_344 = 36992,                         // Type 344
  TYPE_345 = 37010,                         // Type 345
  TYPE_346 = 37011,                         // Type 346
  TYPE_349A = 37033,                        // Type 349A
  TYPE_347B = 37035,                        // TYPE 347B
  TYPE_347G = 37038,                        // Type 347G
  TYPE_359 = 37039,                         // Type 359
  TYPE_352 = 37040,                         // Type 352
  TYPE_360 = 37041,                         // Type 360
  TYPE_362_ESR_1_SR_47B = 37043,            // Type 362 ESR-1 SR-47B
  TYPE_354 = 37045,                         // Type 354
  TYPE_366 = 37047,                         // Type 366
  TYPE_363 = 37048,                         // Type 363
  TYPE_364 = 37049,                         // Type 364
  TYPE_404A_CH = 37050,                     // Type-404A(CH)
  TYPE_405 = 37052,                         // Type 405
  TYPE_405J = 37053,                        // TYPE 405J
  TYPE_408D = 37058,                        // Type 408D
  TYPE_517B = 37059,                        // Type 517B
  TYPE_518_HAI_YING_GOD_EYE_REL_2 =
      37060,                    // Type 518 (Hai Ying, God Eye, REL-2)
  TYPE_589 = 37070,             // Type 589
  TYPE_651 = 37073,             // TYPE 651
  TYPE_753 = 37075,             // Type 753
  TYPE_702 = 37077,             // Type 702
  TYPE_704 = 37078,             // Type 704
  TYPE_753 = 37079,             // Type 753
  TYPE_756 = 37080,             // Type 756
  TYPE_713 = 37081,             // TYPE 713
  TYPE_714 = 37082,             // TYPE 714
  TYPE_702_D = 37083,           // TYPE 702-D
  TYPE_760 = 37084,             // TYPE 760
  TYPE_760 = 37086,             // Type 760
  TYPE_815 = 37090,             // Type 815
  TYPE_793 = 37095,             // Type 793
  TYPE_8A_813 = 37100,          // Type 8A-813
  TYPE_901M = 37105,            // TYPE 901M
  TYPE_902 = 37110,             // TYPE 902
  TYPE_902B = 37124,            // Type 902B
  TYPE_903 = 37125,             // TYPE 903
  TYPE_909_TI = 37170,          // TYPE 909 TI
  TYPE_909_TT = 37215,          // TYPE 909 TT
  TYPE_910 = 37260,             // TYPE 910
  TYPE_931_CH = 37265,          // TYPE-931(CH)
  TYPE_965 = 37305,             // TYPE 965
  TYPE_967 = 37350,             // TYPE 967
  TYPE_968 = 37395,             // TYPE 968
  TYPE_974 = 37440,             // TYPE 974
  TYPE_975 = 37485,             // TYPE 975
  TYPE_978 = 37530,             // TYPE 978
  TYPE_981 = 37534,             // Type 981
  TYPE_981_3 = 37535,           // Type 981-3
  TYPE_982 = 37540,             // TYPE 982
  TYPE_984 = 37543,             // Type 984
  TYPE_985 = 37544,             // Type 985
  TYPE_992 = 37575,             // TYPE 992
  TYPE_993 = 37620,             // TYPE 993
  TYPE_994 = 37665,             // TYPE 994
  TYPE_996 = 37670,             // Type 996
  TYPE_997_ARTISAN = 37675,     // Type 997 Artisan
  TYPE_1006_1 = 37710,          // TYPE 1006(1)
  TYPE_1006_2 = 37755,          // TYPE 1006(2)
  TYPE_1022 = 37800,            // TYPE 1022
  TYPE_1047 = 37810,            // Type 1047
  TYPE_1048 = 37815,            // Type 1048
  TYPE_1474 = 37825,            // Type 1474
  TYPE_1493 = 37828,            // Type 1493
  ULTRA = 37840,                // ULTRA
  UK_MK_10 = 37845,             // UK MK 10
  UPS_220C = 37850,             // UPS-220C
  UPX_1_10 = 37890,             // UPX 1 10
  UPX_27 = 37935,               // UPX 27
  URN_20 = 37980,               // URN 20
  UTES_A = 37985,               // UTES-A
  UTES_T = 37990,               // UTES-T
  URN_25 = 38025,               // URN 25
  VIGILANT = 38035,             // VIGILANT
  VITEBSK_L370_JAMMER = 38038,  // Vitebsk L370 Jammer
  VOLEX_III_IV = 38045,         // VOLEX III/IV
  VOLGA = 38046,                // VOLGA
  VORONEZH_DM = 38047,          // VORONEZH-DM
  VOSTOK = 38048,               // VOSTOK
  VOSTOK_E = 38049,             // VOSTOK-E
  VSR = 38050,                  // VSR
  VOSTOK_3D = 38051,            // VOSTOK-3D
  VSTAR_PT = 38055,             // VSTAR-PT
  W_160 = 38058,                // W-160
  W1028 = 38060,                // W1028
  W8818 = 38070,                // W8818
  W8838 = 38115,                // W8838
  W8852 = 38120,                // W8852
  VALUE_38140 = 38140,          //
  VALUE_38150 = 38150,          //
  WAS_74S = 38160,              // WAS-74S
  VALUE_38205 = 38205,          //
  WATCHDOG = 38210,             // WATCHDOG
  VALUE_38250 = 38250,          //
  WATCHMAN = 38260,             // Watchman
  WAVESTORM = 38270,            // WAVESTORM
  WATCHMAN_S = 38275,           // WATCHMAN-S
  WATCHMAN_T = 38276,           // WATCHMAN-T
  WEATHER_SCOUT_2 = 38280,      // WEATHER SCOUT 2
  VALUE_38295 = 38295,          //
  VALUE_38320 = 38320,          //
  VALUE_38340 = 38340,          //
  VALUE_38385 = 38385,          //
  VALUE_38430 = 38430,          //
  VALUE_38475 = 38475,          //
  WET_EYE = 38520,              // Wet Eye
  WET_EYE_2 = 38525,            // Wet Eye 2
  WET_EYE_MOD = 38565,          // Wet Eye Mod
  WF44S = 38568,                // WF44S
  WGU_41_B = 38570,             // WGU-41/B
  WGU_44_B = 38572,             // WGU-44/B
  VALUE_38610 = 38610,          //
  VALUE_38655 = 38655,          //
  VALUE_38700 = 38700,          //
  VALUE_38715 = 38715,          //
  VALUE_38730 = 38730,          //
  WINE_GLASS_JAMMER = 38735,    // Wine Glass Jammer
  WILD_CARD = 38745,            // Wild Card
  WILDCAT = 38748,              // WILDCAT
  VALUE_38790 = 38790,          //
  VALUE_38835 = 38835,          //
  WLR = 38840,                  // WLR
  WM2X_SERIES = 38880,          // WM2X Series
  WM2X_SERIES_CAS = 38925,      // WM2X Series CAS
  WR_10X = 38930,               // WR-10X
  WR_2100 = 38935,              // WR-2100
  WSR_74C = 38950,              // WSR-74C
  WSR_74S = 38955,              // WSR-74S
  WSR_81 = 38957,               // WSR-81
  WXR_700C = 38960,             // WXR-700C
  WXR_2100 = 38965,             // WXR-2100
  WXR_2100MSTT = 38966,         // WXR-2100MSTT
  VALUE_38970 = 38970,          //
  X_TAR25 = 38990,              // X-TAR25
  X_TAR3D = 38995,              // X-TAR3D
  YAOGAN_3 = 39000,             // YAOGAN 3
  YAOGAN_29 = 39014,            // Yaogan-29
  VALUE_39015 = 39015,          //
  YH_96 = 39050,                // YH-96
  VALUE_39060 = 39060,          //
  YITIAN_ADS = 39061,           // YITIAN ADS
  YD_3 = 39062,                 // YD-3
  YJ_12_MH = 39063,             // YJ-12 MH
  YJ_62_MH = 39065,             // YJ-62 MH
  YJ_82_MH = 39066,             // YJ-82 MH
  YJ_83_MH = 39067,             // YJ-83 MH
  YLC_2 = 39070,                // YLC-2
  YLC_2A = 39071,               // YLC-2A
  YLC_4 = 39073,                // YLC-4
  YLC_6 = 39074,                // YLC-6
  YLC_6M = 39075,               // YLC-6M
  YLC_8 = 39080,                // YLC-8
  YLC_8B = 39081,               // YLC-8B
  YLC_18 = 39085,               // YLC-18
  VALUE_39105 = 39105,          //
  ZASLON_A = 39110,             // Zaslon-A
  ZASLON_MULTI_PURPOSE_X_AND_S_BAND =
      39112,               // Zaslon Multi-purpose (X- and S-band)
  ZOO_PARK_1 = 39125,      // Zoo Park 1
  ZPS_6 = 39126,           // ZPS-6
  ZOOPARK_3 = 39127,       // ZOOPARK-3
  ZD_12 = 39131,           // ZD-12
  ZW_06 = 39150,           // ZW-06
  AN_ALQ_136_V_1 = 39200,  // AN/ALQ-136(V)1
  AN_ALQ_136_V_2 = 39201,  // AN/ALQ-136(V)2
  AN_ALQ_136_V_3 = 39202,  // AN/ALQ-136(V)3
  AN_ALQ_136_V_4 = 39203,  // AN/ALQ-136(V)4
  AN_ALQ_136_V_5 = 39204,  // AN/ALQ-136(V)5
  AN_ALQ_162_V_2 = 39210,  // AN/ALQ-162(V)2
  AN_ALQ_162_V_3 = 39211,  // AN/ALQ-162(V)3
  AN_ALQ_162_V_4 = 39212,  // AN/ALQ-162(V)4
  ZHUK_M = 45300,          // Zhuk-M
  ZHUK_MAE = 45303,        // ZHUK-MAE
  ZHUK_ME = 45304,         // ZHUK-ME
  ZHUK_MME = 45305,        // ZHUK-MME
  ZHUK_MSE = 45307,        // Zhuk-MSE
};

/*
 * Source: uid=76
 */
enum class EmitterSystemFunction : uint8_t {
  OTHER = 0,                               // Other
  MULTI_FUNCTION = 1,                      // Multi-function
  EARLY_WARNING_SURVEILLANCE = 2,          // Early Warning/Surveillance
  HEIGHT_FINDER = 3,                       // Height Finder
  FIRE_CONTROL = 4,                        // Fire Control
  ACQUISITION_DETECTION = 5,               // Acquisition/Detection
  TRACKER = 6,                             // Tracker
  GUIDANCE_ILLUMINATION = 7,               // Guidance/Illumination
  FIRING_POINT_LAUNCH_POINT_LOCATION = 8,  // Firing point/launch point location
  RANGE_ONLY = 9,                          // Range-Only
  RADAR_ALTIMETER = 10,                    // Radar Altimeter
  IMAGING = 11,                            // Imaging
  MOTION_DETECTION = 12,                   // Motion Detection
  NAVIGATION = 13,                         // Navigation
  WEATHER_METEOROLOGICAL = 14,             // Weather / Meteorological
  INSTRUMENTATION = 15,                    // Instrumentation
  IDENTIFICATION_CLASSIFICATION_INCLUDING_IFF =
      16,  // Identification/Classification (including IFF)
  AAA_ANTI_AIRCRAFT_ARTILLERY_FIRE_CONTROL =
      17,                         // AAA (Anti-Aircraft Artillery) Fire Control
  AIR_SEARCH_BOMB = 18,           // Air Search/Bomb
  AIR_INTERCEPT = 19,             // Air Intercept
  ALTIMETER = 20,                 // Altimeter
  AIR_MAPPING = 21,               // Air Mapping
  AIR_TRAFFIC_CONTROL = 22,       // Air Traffic Control
  BEACON = 23,                    // Beacon
  BATTLEFIELD_SURVEILLANCE = 24,  // Battlefield Surveillance
  GROUND_CONTROL_APPROACH = 25,   // Ground Control Approach
  GROUND_CONTROL_INTERCEPT = 26,  // Ground Control Intercept
  COASTAL_SURVEILLANCE = 27,      // Coastal Surveillance
  DECOY_MIMIC = 28,               // Decoy/Mimic
  DATA_TRANSMISSION = 29,         // Data Transmission
  EARTH_SURVEILLANCE = 30,        // Earth Surveillance
  GUN_LAY_BEACON = 31,            // Gun Lay Beacon
  GROUND_MAPPING = 32,            // Ground Mapping
  HARBOR_SURVEILLANCE = 33,       // Harbor Surveillance
  IFF_IDENTIFY_FRIEND_OR_FOE = 34,     // IFF (Identify Friend or Foe)
  ILS_INSTRUMENT_LANDING_SYSTEM = 35,  // ILS (Instrument Landing System)
  IONOSPHERIC_SOUND = 36,              // Ionospheric Sound
  INTERROGATOR = 37,                   // Interrogator
  BARRAGE_JAMMING = 38,                // Barrage Jamming [DEPRECATED]
  CLICK_JAMMING = 39,                  // Click Jamming [DEPRECATED]
  DECEPTIVE_JAMMING = 40,              // Deceptive Jamming
  FREQUENCY_SWEPT_JAMMING = 41,        // Frequency Swept Jamming [DEPRECATED]
  JAMMER = 42,                         // Jammer
  NOISE_JAMMING = 43,                  // Noise Jamming
  PULSED_JAMMING = 44,                 // Pulsed Jamming [DEPRECATED]
  REPEATER_JAMMING = 45,               // Repeater Jamming [DEPRECATED]
  SPOT_NOISE_JAMMING = 46,             // Spot Noise Jamming [DEPRECATED]
  MISSILE_ACQUISITION = 47,            // Missile Acquisition
  MISSILE_DOWNLINK = 48,               // Missile Downlink
  METEOROLOGICAL = 49,                 // Meteorological
  SPACE = 50,                          // Space
  SURFACE_SEARCH = 51,                 // Surface Search
  SHELL_TRACKING = 52,                 // Shell Tracking
  TELEVISION = 56,                     // Television
  VALUE_57 = 57,                       // Unknown
  VIDEO_REMOTING = 58,                 // Video Remoting
  EXPERIMENTAL_OR_TRAINING = 59,       // Experimental or Training
  MISSILE_GUIDANCE = 60,               // Missile Guidance
  MISSILE_HOMING = 61,                 // Missile Homing
  MISSILE_TRACKING = 62,               // Missile Tracking
  JAMMING_NOISE = 64,                  // Jamming, noise [DEPRECATED]
  JAMMING_DECEPTION = 65,              // Jamming, deception [DEPRECATED]
  DECOY = 66,                          // Decoy
  NAVIGATION_DISTANCE_MEASURING_EQUIPMENT =
      71,                      // Navigation/Distance Measuring Equipment
  TERRAIN_FOLLOWING = 72,      // Terrain Following
  WEATHER_AVOIDANCE = 73,      // Weather Avoidance
  PROXIMITY_FUSE = 74,         // Proximity Fuse
  INSTRUMENTATION = 75,        // Instrumentation
  RADIOSONDE = 76,             // Radiosonde
  SONOBUOY = 77,               // Sonobuoy
  BATHYTHERMAL_SENSOR = 78,    // Bathythermal Sensor
  TOWED_COUNTER_MEASURE = 79,  // Towed Counter Measure
  DIPPING_SONAR = 80,          // Dipping Sonar
  TOWED_ACOUSTIC_SENSOR = 81,  // Towed Acoustic Sensor
  WEAPON_NON_LETHAL = 96,      // Weapon, non-lethal
  WEAPON_LETHAL = 97,          // Weapon, lethal
  TEST_EQUIPMENT = 98,         // Test Equipment
  ACQUISITION_TRACK = 99,      // Acquisition Track
  TRACK_GUIDANCE = 100,        // Track Guidance
  GUIDANCE_ILLUMINATION_TRACK_ACQUISITION =
      101,                   // Guidance Illumination Track Acquisition
  SEARCH_ACQUISITION = 102,  // Search Acquisition
  DROPSONDE = 103,           // Dropsonde
};

/*
 * Source: uid=77
 */
enum class ElectromagneticEmissionStateUpdateIndicator : uint8_t {
  HEARTBEAT_UPDATE = 0,     // Heartbeat Update
  CHANGED_DATA_UPDATE = 1,  // Changed Data Update
};

/*
 * Source: uid=78
 */
enum class ElectromagneticEmissionBeamFunction : uint8_t {
  OTHER = 0,                             // Other
  SEARCH = 1,                            // Search
  HEIGHT_FINDING = 2,                    // Height Finding
  ACQUISITION = 3,                       // Acquisition
  TRACKING = 4,                          // Tracking
  ACQUISITION_AND_TRACKING = 5,          // Acquisition and tracking
  COMMAND_GUIDANCE = 6,                  // Command guidance
  ILLUMINATION = 7,                      // Illumination
  RANGING = 8,                           // Ranging
  MISSILE_BEACON = 9,                    // Missile beacon
  MISSILE_FUSING = 10,                   // Missile Fusing
  ACTIVE_RADAR_MISSILE_SEEKER = 11,      // Active radar missile seeker
  JAMMING = 12,                          // Jamming
  IFF = 13,                              // IFF
  NAVIGATION_WEATHER = 14,               // Navigation / Weather
  METEOROLOGICAL = 15,                   // Meteorological
  DATA_TRANSMISSION = 16,                // Data transmission
  NAVIGATIONAL_DIRECTIONAL_BEACON = 17,  // Navigational directional beacon
  TIME_SHARED_SEARCH = 20,               // Time-Shared Search
  TIME_SHARED_ACQUISITION = 21,          // Time-Shared Acquisition
  TIME_SHARED_TRACK = 22,                // Time-Shared Track
  TIME_SHARED_COMMAND_GUIDANCE = 23,     // Time-Shared Command Guidance
  TIME_SHARED_ILLUMINATION = 24,         // Time-Shared Illumination
  TIME_SHARED_JAMMING = 25,              // Time-Shared Jamming
};

/*
 * Source: uid=79
 */
enum class HighDensityTrackJam : uint8_t {
  NOT_SELECTED = 0,  // Not Selected
  SELECTED = 1,      // Selected
};

/*
 * Source: uid=80
 */
enum class DesignatorSystemName : uint16_t {
  NOT_SPECIFIED = 0,                 // Not Specified
  AN_AAQ_4 = 1000,                   // AN/AAQ-4
  AN_AAQ_7 = 1100,                   // AN/AAQ-7
  AN_AAQ_8 = 1200,                   // AN/AAQ-8
  AN_AAQ_14_LANTIRN = 1300,          // AN/AAQ-14 LANTIRN
  AN_AAQ_19 = 1400,                  // AN/AAQ-19
  AN_AAQ_22A_SAFIRE = 1500,          // AN/AAQ-22A; SAFIRE
  AN_AAQ_22B_SAFIRE_LP = 1600,       // AN/AAQ-22B; SAFIRE LP
  AN_AAQ_22C_STAR_SAFIRE_I = 1700,   // AN/AAQ-22C; Star SAFIRE I
  AN_AAQ_22D_BRITE_STAR = 1800,      // AN/AAQ-22D; BRITE Star
  AN_AAQ_24_V_DIRCM_NEMESIS = 1900,  // AN/AAQ-24(V) DIRCM; Nemesis
  AN_AAQ_25_LTS = 2000,              // AN/AAQ-25 LTS
  AN_AAQ_28_V_LITENING_II = 2100,    // AN/AAQ-28(V) LITENING II
  AN_AAQ_30 = 2200,                  // AN/AAQ-30
  AN_AAQ_32 = 2300,                  // AN/AAQ-32
  AN_AAQ_33_SNIPER = 2400,           // AN/AAQ-33; Sniper
  AN_AAQ_37 = 2500,                  // AN/AAQ-37
  AN_AAQ_38 = 2600,                  // AN/AAQ-38
  AN_AAQ_40 = 2650,                  // AN/AAQ-40
  AN_AAS_32 = 2700,                  // AN/AAS-32
  AN_AAS_35V = 2800,                 // AN/AAS-35V
  AN_AAS_37 = 2900,                  // AN/AAS-37
  AN_AAS_38 = 3000,                  // AN/AAS-38
  AN_AAS_44_V = 3100,                // AN/AAS-44(V)
  AN_AAS_46 = 3200,                  // AN/AAS-46
  AN_AAS_49 = 3300,                  // AN/AAS-49
  AN_AAS_51 = 3400,                  // AN/AAS-51
  AN_AAS_52_MTS_A = 3500,            // AN/AAS-52; MTS-A
  AN_ALQ_10 = 3600,                  // AN/ALQ-10
  AN_ASQ_228 = 3700,                 // AN/ASQ-228
  AN_AVQ_25 = 4400,                  // AN/AVQ-25
  AN_AVQ_26 = 4500,                  // AN/AVQ-26
  AN_GVS_5 = 4600,                   // AN/GVS-5
  AN_PED_1_LLDR = 4700,              // AN/PED-1 LLDR
  TADS_LRF_D = 4800,                 // TADS LRF/D
  MMS_LRF_D = 4900,                  // MMS LRF/D
  AH_1_C_NITE = 5000,                // AH-1 C-NITE
  MATES = 5100,                      // MATES
  TCV_115 = 5200,                    // TCV 115
  TIM = 5300,                        // TIM
  TMS_303 = 5400,                    // TMS 303
  TMY_303 = 5500,                    // TMY 303
  ALRAD = 5600,                      // ALRAD
  RFTDL = 5700,                      // RFTDL
  VVLR = 5800,                       // VVLR
  P0705_HELL = 6000,                 // P0705 HELL
  P0708_PULSE = 6100,                // P0708 PULSE
  HELD = 6200,                       // HELD
  TYPE_105 = 6300,                   // TYPE 105
  TYPE_118 = 6400,                   // TYPE 118
  TYPE_121 = 6500,                   // TYPE 121
  TYPE_126 = 6600,                   // TYPE 126
  TYPE_629 = 6700,                   // TYPE 629
  CLDS = 6800,                       // CLDS
  TAV_38 = 6900,                     // TAV-38
  TMV_630 = 7000,                    // TMV 630
  ALTM_1020 = 7100,                  // ALTM 1020
  ALATS = 7200,                      // ALATS
  DARK_STAR_LAMPS = 7300,            // Dark Star/LAMPS
  GLTD_II = 7400,                    // GLTD II
  MBT_ELRF = 7500,                   // MBT-ELRF
  MARK_VII = 7600,                   // Mark VII
  SIRE_V = 7700,                     // SIRE V
  AN_AAQ_16B = 7800,                 // AN/AAQ-16B
  AN_AAQ_16D_AESOP = 7900,           // AN/AAQ-16D; AESOP
  AN_AAQ_21_STAR_SAFIRE_III = 8000,  // AN/AAQ-21; Star SAFIRE III
  AN_AAQ_22E_BRITE_STAR = 8100,      // AN/AAQ-22E; BRITE Star
  AN_AAQ_36_STAR_SAFIRE_II = 8200,   // AN/AAQ-36; Star SAFIRE II
  AN_AAS_38A_NITE_HAWK = 8300,       // AN/AAS-38A; Nite Hawk
  AN_AAS_38B_NITE_HAWK = 8400,       // AN/AAS-38B; Nite Hawk
  AN_AAS_44C_V = 8500,               // AN/AAS-44C(V)
  AN_AAS_53_CSP = 8600,              // AN/AAS-53; CSP
  AN_ASQ_28_ATFLIR = 8700,           // AN/ASQ-28 ATFLIR
  AN_DAS_1_MTS_B = 8800,             // AN/DAS-1; MTS-B
  AN_PAQ_1_LTD = 8900,               // AN/PAQ-1 LTD
  AN_PAQ_3_MULE = 9000,              // AN/PAQ-3 MULE
  AN_PEQ_1_SOFLAM = 9090,            // AN/PEQ-1; SOFLAM
  AN_PEQ_3 = 9100,                   // AN/PEQ-3
  AN_PEQ_15_ATPIAL = 9140,           // AN/PEQ-15; ATPIAL
  AN_PEQ_18_IZLID_1000P = 9150,      // AN/PEQ-18; IZLID 1000P
  AN_TVQ_2_G_VLLD = 9200,            // AN/TVQ-2 G/VLLD
  AN_ZSQ_2_V_1_EOS = 9300,           // AN/ZSQ-2(V)1 EOS
  AN_ZSQ_2_V_2_EOS = 9400,           // AN/ZSQ-2(V)2 EOS
  CIRCM = 9500,                      // CIRCM
  GUARDIAN = 9600,                   // Guardian
  IZLID_200P = 9700,                 // IZLID 200P
  IZLID_1000P_W = 9800,              // IZLID 1000P-W
  MMS = 9900,                        // MMS
  M_TADS_PNVS_ARROWHEAD = 10000,     // M-TADS/PNVS; Arrowhead
  RBS_70 = 10100,                    // RBS-70
  RBS_90 = 10200,                    // RBS-90
  TADS_PNVS = 10300,                 // TADS/PNVS
  COLIBRI = 10400,                   // COLIBRI
  DAMOCLES = 10500,                  // Damocles
  I_251_SHKVAL = 10600,              // I-251 Shkval
  KPS_53AV_EOTS = 10700,             // KPS-53AV EOTS
  STAR_SAFIRE_380 = 10800,           // Star SAFIRE 380
  JANUS_T_EOS = 10900,               // JANUS-T EOS
  LOTHAR_EOS = 11000,                // LOTHAR EOS
  MK46_MOD_1_EOS = 11100,            // MK46 MOD 1 EOS
  MTK_201ME_EOS = 11200,             // MTK-201ME EOS
  THALES_MIRADOR_MK2_EOS = 11300,    // Thales Mirador Mk2 EOS
  TPN_1M_49_23_EOS = 11400,          // TPN-1M-49-23 EOS
};

/*
 * Source: uid=81
 */
enum class DesignatorDesignatorCode : uint16_t {
  OTHER = 0,  // Other [DEPRECATED]
};

/*
 * Source: uid=82
 */
enum class IffSystemType : uint16_t {
  NOT_USED_INVALID_VALUE = 0,          // Not Used (Invalid Value)
  MARK_X_XII_ATCRBS_TRANSPONDER = 1,   // Mark X/XII/ATCRBS Transponder
  MARK_X_XII_ATCRBS_INTERROGATOR = 2,  // Mark X/XII/ATCRBS Interrogator
  SOVIET_TRANSPONDER = 3,              // Soviet Transponder
  SOVIET_INTERROGATOR = 4,             // Soviet Interrogator
  RRB_TRANSPONDER = 5,                 // RRB Transponder
  MARK_XIIA_INTERROGATOR = 6,          // Mark XIIA Interrogator
  MODE_5_INTERROGATOR = 7,             // Mode 5 Interrogator
  MODE_S_INTERROGATOR = 8,             // Mode S Interrogator
  MARK_XIIA_TRANSPONDER = 9,           // Mark XIIA Transponder
  MODE_5_TRANSPONDER = 10,             // Mode 5 Transponder
  MODE_S_TRANSPONDER = 11,             // Mode S Transponder
  MARK_XIIA_COMBINED_INTERROGATOR_TRANSPONDER_CIT =
      12,  // Mark XIIA Combined Interrogator/Transponder (CIT)
  MARK_XII_COMBINED_INTERROGATOR_TRANSPONDER_CIT =
      13,  // Mark XII Combined Interrogator/Transponder (CIT)
  TCAS_ACAS_TRANSCEIVER = 14,  // TCAS/ACAS Transceiver
};

/*
 * Source: uid=83
 */
enum class IffSystemName : uint16_t {
  NOT_USED_INVALID_VALUE = 0,            // Not Used (Invalid Value)
  GENERIC_MARK_X = 1,                    // Generic Mark X
  GENERIC_MARK_XII = 2,                  // Generic Mark XII
  GENERIC_ATCRBS = 3,                    // Generic ATCRBS
  GENERIC_SOVIET = 4,                    // Generic Soviet
  GENERIC_MODE_S = 5,                    // Generic Mode S
  GENERIC_MARK_X_XII_ATCRBS = 6,         // Generic Mark X/XII/ATCRBS
  GENERIC_MARK_X_XII_ATCRBS_MODE_S = 7,  // Generic Mark X/XII/ATCRBS/Mode S
  ARI_5954_RRB = 8,                      // ARI 5954 (RRB)
  ARI_5983_RRB = 9,                      // ARI 5983 (RRB)
  GENERIC_RRB = 10,                      // Generic RRB
  GENERIC_MARK_XIIA = 11,                // Generic Mark XIIA
  GENERIC_MODE_5 = 12,                   // Generic Mode 5
  GENERIC_MARK_XIIA_COMBINED_INTERROGATOR_TRANSPONDER_CIT =
      13,  // Generic Mark XIIA Combined Interrogator/Transponder (CIT)
  GENERIC_MARK_XII_COMBINED_INTERROGATOR_TRANSPONDER_CIT =
      14,  // Generic Mark XII Combined Interrogator/Transponder (CIT)
  GENERIC_TCAS_I_ACAS_I_TRANSCEIVER = 15,  // Generic TCAS I/ACAS I Transceiver
  GENERIC_TCAS_II_ACAS_II_TRANSCEIVER =
      16,                   // Generic TCAS II/ACAS II Transceiver
  GENERIC_MARK_X_A = 17,    // Generic Mark X (A)
  GENERIC_MARK_X_SIF = 18,  // Generic Mark X (SIF)
};

/*
 * Source: uid=84
 */
enum class IffSystemMode : uint8_t {
  NO_STATEMENT = 0,            // No Statement
  OFF = 1,                     // Off
  STANDBY = 2,                 // Standby
  NORMAL = 3,                  // Normal
  EMERGENCY = 4,               // Emergency
  LOW_OR_LOW_SENSITIVITY = 5,  // Low or Low Sensitivity
};

/*
 * Source: uid=87
 */
enum class IffLayerSpecificInformation : uint8_t {
  NO_LAYER_SPECIFIC_INFORMATION_IS_PRESENT =
      0,  // No Layer-Specific Information Is Present
};

/*
 * Source: uid=96
 */
enum class IffAlternateMode4ChallengeReply : uint8_t {
  NO_STATEMENT = 0,      // No Statement
  VALID = 1,             // Valid
  INVALID = 2,           // Invalid
  NO_RESPONSE = 3,       // No response
  UNABLE_TO_VERIFY = 4,  // Unable to Verify
};

/*
 * Source: uid=97
 */
enum class IffSystemType1OperationalParameter1 : uint8_t {
  NO_OPERATIONAL_PARAMETER_1_DATA = 0,  // No Operational Parameter 1 Data
};

/*
 * Source: uid=98
 */
enum class IffSystemType1OperationalParameter2 : uint8_t {
  NO_OPERATIONAL_PARAMETER_2_DATA = 0,  // No Operational Parameter 2 Data
};

/*
 * Source: uid=100
 */
enum class SubcategoriesForLandCategory200Mammal : uint8_t {
  SMALL_DOG = 1,                     // Small Dog
  CHIHUAHUA = 2,                     // Chihuahua
  MEDIUM_DOG = 10,                   // Medium Dog
  AUSTRALIAN_CATTLE_DOG = 11,        // Australian Cattle Dog
  LARGE_DOG = 20,                    // Large Dog
  GERMAN_SHEPHERD = 21,              // German Shepherd
  VERY_LARGE_DOG = 30,               // Very Large Dog
  GIANT_TURKISH_KANGAL = 31,         // Giant Turkish Kangal
  SHEEP = 40,                        // Sheep
  GOAT = 41,                         // Goat
  PIG = 50,                          // Pig
  COW = 60,                          // Cow
  OX = 61,                           // Ox
  OX_WITH_CART = 70,                 // Ox With Cart
  HORSE = 80,                        // Horse
  DONKEY = 81,                       // Donkey
  MULE = 82,                         // Mule
  HORSE_WITH_RIDER = 90,             // Horse With Rider
  HORSE_WITH_CARGO = 91,             // Horse With Cargo
  DONKEY_WITH_RIDER = 92,            // Donkey With Rider
  DONKEY_WITH_CARGO = 93,            // Donkey With Cargo
  MULE_WITH_RIDER = 94,              // Mule With Rider
  MULE_WITH_CARGO = 95,              // Mule With Cargo
  CAMEL = 100,                       // Camel
  DROMEDARY_CAMEL_ONE_HUMP = 101,    // Dromedary Camel (One Hump)
  BACTRIAN_CAMEL_TWO_HUMPS = 102,    // Bactrian Camel (Two Humps)
  DROMEDARY_CAMEL_WITH_RIDER = 110,  // Dromedary Camel With Rider
  DROMEDARY_CAMEL_WITH_CARGO = 111,  // Dromedary Camel With Cargo
  RAT = 200,                         // Rat
};

/*
 * Source: uid=101
 */
enum class SubcategoriesForLandCategory201Reptile : uint8_t {
  NEW_ZEALAND_NORTHERN_TUATARA = 1,       // New Zealand Northern Tuatara
  MONITOR = 3,                            // Monitor
  GECKO = 8,                              // Gecko
  IGUANA = 13,                            // Iguana
  CHAMELEON = 17,                         // Chameleon
  NON_VENOMOUS_SNAKE = 30,                // Non-Venomous Snake
  BOA = 31,                               // Boa
  PYTHON = 35,                            // Python
  BULLSNAKE = 39,                         // Bullsnake
  KINGSNAKE = 43,                         // Kingsnake
  VENOMOUS_SNAKE = 60,                    // Venomous Snake
  RATTLESNAKE = 61,                       // Rattlesnake
  COPPERHEAD = 62,                        // Copperhead
  COTTONMOUTH = 63,                       // Cottonmouth
  TAIPAN = 64,                            // Taipan
  VIPER = 65,                             // Viper
  COBRA = 66,                             // Cobra
  AUSTRALIAN_BROWN_SNAKE = 67,            // Australian Brown Snake
  TORTOISE = 90,                          // Tortoise
  TURTLE = 100,                           // Turtle
  AMERICAN_ALLIGATOR = 120,               // American Alligator
  CROCODILE = 121,                        // Crocodile
  AUSTRALIAN_FRESHWATER_CROCODILE = 122,  // Australian Freshwater Crocodile
};

/*
 * Source: uid=102
 */
enum class SubcategoriesForLandCategory202Amphibian : uint8_t {
  FROG = 1,          // Frog
  TOAD = 2,          // Toad
  SALAMANDER = 170,  // Salamander
  CAECILIAN = 230,   // Caecilian
};

/*
 * Source: uid=103
 */
enum class SubcategoriesForLandCategory203Insect : uint8_t {
  BEETLE = 1,        // Beetle
  MANTIS = 60,       // Mantis
  COCKROACH = 70,    // Cockroach
  ARMY_ANT = 80,     // Army Ant
  FIRE_ANT = 81,     // Fire Ant
  GRASSHOPPER = 90,  // Grasshopper
  CENTIPEDE = 100,   // Centipede
};

/*
 * Source: uid=104
 */
enum class SubcategoriesForLandCategory204Arachnid : uint8_t {
  SPIDER = 1,       // Spider
  TICK = 20,        // Tick
  SCORPION = 30,    // Scorpion
  HARVESTMEN = 40,  // Harvestmen
  MITE = 50,        // Mite
};

/*
 * Source: uid=105
 */
enum class SubcategoriesForLandCategory205Mollusk : uint8_t {
  SNAIL = 1,  // Snail
  SLUG = 50,  // Slug
};

/*
 * Source: uid=106
 */
enum class SubcategoriesForLandCategory206Marsupial : uint8_t {
  BROWN_FOUR_EYED_OPOSSUM = 1,        // Brown Four-Eyed Opossum
  BUSHY_TAILED_OPOSSUM = 2,           // Bushy-Tailed Opossum
  TATE_S_SHREW_OPOSSUM = 90,          // Tate's Shrew Opossum
  GREATER_BILBY = 100,                // Greater Bilby
  TASMANIAN_DEVIL = 110,              // Tasmanian Devil
  BRUSH_TAILED_ROCK_WALLABY = 150,    // Brush-Tailed Rock-Wallaby
  EASTERN_WALLAROO = 160,             // Eastern Wallaroo
  RED_KANGAROO = 170,                 // Red Kangaroo
  QUEENSLAND_KOALA = 200,             // Queensland Koala
  SOUTHERN_HAIRY_NOSED_WOMBAT = 205,  // Southern Hairy-Nosed Wombat
  BRUSHTAIL_POSSUM = 210,             // Brushtail Possum
  SUGAR_GLIDER = 211,                 // Sugar Glider
};

/*
 * Source: uid=110
 */
enum class SubcategoriesForAirCategory200Bird : uint8_t {
  PENGUIN = 1,               // Penguin
  SEAGULL = 2,               // Seagull
  PELICAN = 3,               // Pelican
  ALBATROSS = 4,             // Albatross
  SWAN = 5,                  // Swan
  CORMORANT = 6,             // Cormorant
  HERON = 7,                 // Heron
  CRANE = 8,                 // Crane
  OSPREY = 9,                // Osprey
  LOON = 10,                 // Loon
  STORK = 11,                // Stork
  FLAMINGO = 12,             // Flamingo
  DUCK = 13,                 // Duck
  OSTRICH = 20,              // Ostrich
  EMU = 21,                  // Emu
  CHICKEN = 22,              // Chicken
  BLACK_BIRD = 30,           // Black Bird
  STARLING = 31,             // Starling
  BUDGERIGAR_PARAKEET = 32,  // Budgerigar (Parakeet)
  CANADIAN_GOOSE = 40,       // Canadian Goose
  CROW = 41,                 // Crow
  EAGLE = 50,                // Eagle
  VULTURE = 55,              // Vulture
  FALCON = 60,               // Falcon
  HAWK = 65,                 // Hawk
  OWL = 70,                  // Owl
  KITE = 80,                 // Kite
};

/*
 * Source: uid=111
 */
enum class SubcategoriesForAirCategory201Insect : uint8_t {
  MOTH = 1,        // Moth
  BUTTERFLY = 2,   // Butterfly
  FLY = 20,        // Fly
  MOSQUITO = 30,   // Mosquito
  WASP = 40,       // Wasp
  BEE = 50,        // Bee
  BEETLE = 60,     // Beetle
  DRAGONFLY = 70,  // Dragonfly
  LOCUST = 80,     // Locust
};

/*
 * Source: uid=112
 */
enum class SubcategoriesForAirCategory202Mammal : uint8_t {
  BAT = 1,               // Bat
  FLYING_SQUIRREL = 10,  // Flying Squirrel
  GLIDING_POSSUM = 20,   // Gliding Possum
};

/*
 * Source: uid=120
 */
enum class SubcategoriesForSubsurfaceCategory200Fish : uint8_t {
  FORAGE_FISH_SMALL_SCHOOLING = 1,  // Forage Fish, Small Schooling
  HERRING = 2,                      // Herring
  SARDINES = 3,                     // Sardines
  KRILL = 4,                        // Krill
  SQUID = 5,                        // Squid
  MEDIUM_SCHOOLING_FISH = 30,       // Medium Schooling Fish
  HAKE = 31,                        // Hake
  COD = 32,                         // Cod
  HADDOCK = 33,                     // Haddock
  MACKEREL = 34,                    // Mackerel
  LARGE_SCHOOLING_FISH = 60,        // Large Schooling Fish
  TUNA = 61,                        // Tuna
  SMALL_SHARK = 90,                 // Small Shark
  DOGFISH_SHARK = 91,               // Dogfish Shark
  MEDIUM_SHARK = 120,               // Medium Shark
  MAKO_SHARK = 121,                 // Mako Shark
  HAMMERHEAD_SHARK = 122,           // Hammerhead Shark
  LARGE_SHARK = 150,                // Large Shark
  GREAT_WHITE_SHARK = 151,          // Great White Shark
  TIGER_SHARK = 152,                // Tiger Shark
  BLUE_SHARK = 153,                 // Blue Shark
  WHALE_SHARK = 154,                // Whale Shark
  SKATE = 180,                      // Skate
  STINGRAY = 181,                   // Stingray
  EEL = 190,                        // Eel
  MARLIN = 200,                     // Marlin
  SWORDFISH = 201,                  // Swordfish
};

/*
 * Source: uid=121
 */
enum class SubcategoriesForSubsurfaceCategory201Mammal : uint8_t {
  WHALE = 1,                             // Whale
  BEAKED_WHALE = 2,                      // Beaked Whale
  BELUGA_WHALE = 3,                      // Beluga Whale
  BLUE_WHALE = 4,                        // Blue Whale
  BOTTLENOSE_WHALE = 5,                  // Bottlenose Whale
  NORTHERN_BOTTLENOSE_WHALE = 6,         // Northern Bottlenose Whale
  SOUTHERN_BOTTLENOSE_WHALE = 7,         // Southern Bottlenose Whale
  BOWHEAD_WHALE = 8,                     // Bowhead Whale
  BRYDE_S_WHALE = 9,                     // Bryde's Whale
  DWARF_SPERM_WHALE = 10,                // Dwarf Sperm Whale
  FINBACK_WHALE = 11,                    // Finback Whale
  GRAY_WHALE = 12,                       // Gray Whale
  HUMPBACK_WHALE = 13,                   // Humpback Whale
  LONG_FINNED_PILOT_WHALE = 14,          // Long-Finned Pilot Whale
  MINKE_WHALE = 15,                      // Minke Whale
  NORTHERN_MINKE_WHALE = 16,             // Northern Minke Whale
  SOUTHERN_MINKE_WHALE = 17,             // Southern Minke Whale
  NARWHAL_WHALE = 18,                    // Narwhal Whale
  ORCA_WHALE = 19,                       // Orca Whale
  PYGMY_SPERM_WHALE = 20,                // Pygmy Sperm Whale
  RIGHT_WHALE = 21,                      // Right Whale
  NORTH_ATLANTIC_RIGHT_WHALE = 22,       // North Atlantic Right Whale
  NORTH_PACIFIC_RIGHT_WHALE = 23,        // North Pacific Right Whale
  SOUTHERN_RIGHT_WHALE = 24,             // Southern Right Whale
  SEI_WHALE = 25,                        // Sei Whale
  SHORT_FINNED_PILOT_WHALE = 26,         // Short-Finned Pilot Whale
  SPERM_WHALE = 27,                      // Sperm Whale
  DOLPHIN = 50,                          // Dolphin
  BOTTLENOSE_DOLPHIN = 51,               // Bottlenose Dolphin
  BOTTLENOSE_INDO_PACIFIC_DOLPHIN = 52,  // Bottlenose Indo-Pacific Dolphin
  BOTTLENOSE_BURRUNAN_DOLPHIN = 53,      // Bottlenose Burrunan Dolphin
  ATLANTIC_SPOTTED_DOLPHIN = 54,         // Atlantic Spotted Dolphin
  AUSTRALIAN_SNUBFIN_DOLPHIN = 55,       // Australian Snubfin Dolphin
  CHILEAN_BLACK_DOLPHIN = 56,            // Chilean Black Dolphin
  CHINESE_WHITE_DOLPHIN = 57,            // Chinese White Dolphin
  CLYMENE_DOLPHIN = 58,                  // Clymene Dolphin
  PORPOISE = 100,                        // Porpoise
  HARBOUR_PORPOISE = 101,                // Harbour Porpoise
  CALIFORNIAN_PORPOISE = 102,            // Californian Porpoise
  DALL_S_PORPOISE = 103,                 // Dall's Porpoise
  BURMEISTER_S_PORPOISE = 104,           // Burmeister's Porpoise
  SEAL = 120,                            // Seal
  BEARDED_SEAL = 121,                    // Bearded Seal
  HARBOR_SEAL = 122,                     // Harbor Seal
  FUR_SEAL = 123,                        // Fur Seal
  WEDDELL_SEAL = 124,                    // Weddell Seal
  ELEPHANT_SEAL = 125,                   // Elephant Seal
  SEA_LION = 130,                        // Sea Lion
  AUSTRALIAN_SEA_LION = 131,             // Australian Sea Lion
  CALIFORNIA_SEA_LION = 132,             // California Sea Lion
  WALRUS = 140,                          // Walrus
  ATLANTIC_WALRUS = 141,                 // Atlantic Walrus
  PACIFIC_WALRUS = 142,                  // Pacific Walrus
  OTTER = 150,                           // Otter
  SEA_OTTER = 151,                       // Sea Otter
  MANATEE = 160,                         // Manatee
  FLORIDA_MANATEE = 161,                 // Florida Manatee
  DUGONGS = 162,                         // Dugongs
  POLAR_BEAR = 200,                      // Polar Bear
};

/*
 * Source: uid=122
 */
enum class SubcategoriesForSubsurfaceCategory202Mollusk : uint8_t {
  SNAIL = 1,        // Snail
  SLUG = 10,        // Slug
  OCTOPUS = 20,     // Octopus
  SQUID = 30,       // Squid
  CUTTLEFISH = 40,  // Cuttlefish
  CLAM = 50,        // Clam
  MUSCLE = 60,      // Muscle
  OYSTER = 70,      // Oyster
  SCALLOP = 80,     // Scallop
};

/*
 * Source: uid=123
 */
enum class SubcategoriesForSubsurfaceCategory203Crustacean : uint8_t {
  SHRIMP = 1,           // Shrimp
  SNAPPING_SHRIMP = 2,  // Snapping Shrimp
  CRAYFISH = 10,        // Crayfish
  LOBSTER = 20,         // Lobster
  CRAB = 30,            // Crab
};

/*
 * Source: uid=124
 */
enum class SubcategoriesForSubsurfaceCategory204Insect : uint8_t {
  SEA_SKATER = 1,    // Sea Skater
  WATER_BEETLE = 2,  // Water Beetle
};

/*
 * Source: uid=130
 */
enum class AnimalLifeformGroupSizeRangeEnumerationForAllDomains : uint8_t {
  NUMBER_OF_ANIMALS_RANGE_FROM_201_TO_249 =
      201,  // Number of animals range from 201 to 249
  NUMBER_OF_ANIMALS_RANGE_FROM_250_TO_299 =
      202,  // Number of animals range from 250 to 299
  NUMBER_OF_ANIMALS_RANGE_FROM_300_TO_399 =
      203,  // Number of animals range from 300 to 399
  NUMBER_OF_ANIMALS_RANGE_FROM_400_TO_499 =
      204,  // Number of animals range from 400 to 499
  NUMBER_OF_ANIMALS_RANGE_FROM_500_TO_999 =
      205,  // Number of animals range from 500 to 999
  NUMBER_OF_ANIMALS_RANGE_FROM_1_000_TO_1_499 =
      206,  // Number of animals range from 1,000 to 1,499
  NUMBER_OF_ANIMALS_RANGE_FROM_1_500_TO_1_999 =
      207,  // Number of animals range from 1,500 to 1,999
  NUMBER_OF_ANIMALS_RANGE_FROM_2_000_TO_2_999 =
      208,  // Number of animals range from 2,000 to 2,999
  NUMBER_OF_ANIMALS_RANGE_FROM_3_000_TO_4_999 =
      210,  // Number of animals range from 3,000 to 4,999
  NUMBER_OF_ANIMALS_RANGE_FROM_5_000_TO_6_999 =
      212,  // Number of animals range from 5,000 to 6,999
  NUMBER_OF_ANIMALS_RANGE_FROM_7_000_TO_9_999 =
      214,  // Number of animals range from 7,000 to 9,999
  NUMBER_OF_ANIMALS_RANGE_FROM_10_000_TO_19_999 =
      216,  // Number of animals range from 10,000 to 19,999
  NUMBER_OF_ANIMALS_RANGE_FROM_20_000_TO_50_000 =
      218,  // Number of animals range from 20,000 to 50,000
  NUMBER_OF_ANIMALS_RANGE_GREATER_THAN_50_000 =
      220,  // Number of animals range greater than 50,000
};

/*
 * Source: uid=131
 */
enum class SpecificDimensionEnumerationsForLandAreaSize : uint8_t {
  SMALL_AREA_2_000M2_4_000M2_5_TO_1_SQ_ACRE =
      222,  // Small Area (2,000m2 - 4,000m2 / .5 to 1 sq. acre )
  SMALL_AREA_DENSE_2_000M2_4_000M2_5_TO1_SQ_ACRE =
      223,  // Small Area, Dense (2,000m2 - 4,000m2 / .5 to1 sq. acre)
  MEDIUM_AREA_20_000M2_41_000M2_10_TO_20_SQ_ACRES =
      224,  // Medium Area (20,000m2 - 41,000m2 / 10 to 20 sq. acres)
  MEDIUM_AREA_DENSE_20_000M2_41_000M2_10_TO_20_SQ_ACRES =
      225,  // Medium Area, Dense (20,000m2 - 41,000m2 / 10 to 20 sq. acres)
  LARGE_AREA_40_000M2_81_000M2_20_TO_40_SQ_ACRES =
      226,  // Large Area (40,000m2 - 81,000m2 / 20 to 40 sq. acres)
  LARGE_AREA_DENSE_40_000M2_81_000M2_20_TO_40_SQ_ACRES =
      227,  // Large Area, Dense (40,000m2 - 81,000m2 / 20 to 40 sq. acres)
};

/*
 * Source: uid=132
 */
enum class SpecificDimensionEnumerationsForAirAreaSize : uint8_t {
  SMALL_FLOCK_SWARM_5KM_LONG_X_5M_WIDE_1KM_X_5M =
      222,  // Small Flock/Swarm (.5km long x 5m wide - 1km x 5m)
  SMALL_FLOCK_SWARM_DENSE_5KM_LONG_X_5M_WIDE_1KM_X_5M =
      223,  // Small Flock/Swarm, Dense (.5km long x 5m wide - 1km x 5m)
  MEDIUM_FLOCK_SWARM_1KM_LONG_X_10M_WIDE_2KM_X_10M =
      224,  // Medium Flock/Swarm (1km long x 10m wide - 2km x 10m)
  MEDIUM_FLOCK_SWARM_DENSE_1KM_LONG_X_10M_WIDE_2KM_X_10M =
      225,  // Medium Flock/Swarm, Dense (1km long x 10m wide - 2km x 10m)
  LARGE_FLOCK_SWARM_10KM_LONG_X_100M_WIDE_20KM_X_100M =
      226,  // Large Flock/Swarm (10km long x 100m wide - 20km x 100m)
  LARGE_FLOCK_SWARM_DENSE_10KM_LONG_X_100M_WIDE_20KM_X_100M =
      227,  // Large Flock/Swarm, Dense (10km long x 100m wide - 20km x 100m)
};

/*
 * Source: uid=133
 */
enum class AddSpecificDimensionEnumerationsForSubsurfaceAreaSize : uint8_t {
  SMALL_SCHOOL_5KM_LONG_X_250M_WIDE_X_83M_DEEP_1KM_X_5KM_X_166M =
      222,  // Small School (.5km long x 250m wide x 83m deep - 1km x .5km x
            // 166m)
  SMALL_SCHOOL_DENSE_5KM_LONG_X_250M_WIDE_X_83M_DEEP_1KM_X_5KM_X_166M =
      223,  // Small School, Dense (.5km long x 250m wide x 83m deep - 1km x
            // .5km x 166m)
  MEDIUM_SCHOOL_5KM_X_1KM_X_125M_1KM_X_2KM_X_500M =
      224,  // Medium School (.5km x 1km x 125m - 1km x 2km x 500m)
  MEDIUM_SCHOOL_DENSE_5KM_X_1KM_X_125M_1KM_X_2KM_X_500M =
      225,  // Medium School, Dense (.5km x 1km x 125m - 1km x 2km x 500m)
  LARGE_SCHOOL_5KM_X_2KM_X_500M_10KM_X_4KM_X_1KM =
      226,  // Large School (5km x 2km x 500m - 10km x 4km x 1km)
  LARGE_SCHOOL_DENSE_5KM_X_2KM_X_500M_10KM_X_4KM_X_1KM =
      227,  // Large School, Dense (5km x 2km x 500m - 10km x 4km x 1km)
};

/*
 * Source: uid=134
 */
enum class AddVariantsForLandCategory200Mammal : uint8_t {
  ANIMAL_WITH_A_MALE_CHILD_RIDER = 1,     // Animal with a Male Child Rider
  ANIMAL_WITH_A_FEMALE_CHILD_RIDER = 2,   // Animal with a Female Child Rider
  ANIMAL_WITH_AN_ADULT_MALE_RIDER = 3,    // Animal with an Adult Male Rider
  ANIMAL_WITH_AN_ADULT_FEMALE_RIDER = 4,  // Animal with an Adult Female Rider
  ANIMAL_HARNESSED_TO_A_PLOW = 5,         // Animal Harnessed to a Plow
  ANIMAL_HARNESSED_TO_A_CART = 6,         // Animal Harnessed to a Cart
};

/*
 * Source: uid=135
 */
enum class
    VariantsForLandCategoriesReptilesAmphibiansInsectsAndArachnids : uint8_t {
      BLACK = 1,    // Black
      GREEN = 2,    // Green
      SPOTTED = 3,  // Spotted
      RED = 4,      // Red
      BROWN = 5,    // Brown
    };

/*
 * Source: uid=136
 */
enum class VariantsForAirCategory200Bird : uint8_t {
  BIRD_WITH_FISH = 1,         // Bird with Fish
  V_PATTERN_FLOCK_SHAPE = 2,  // V-Pattern Flock Shape
  CIRCULAR_FLOCK_SHAPE = 3,   // Circular Flock Shape
  IRREGULAR_FLOCK_SHAPE = 4,  // Irregular Flock Shape
};

/*
 * Source: uid=137
 */
enum class AddVariantsForAirCategory201Insect : uint8_t {
  VERTICAL_SHAPED_INSECT_SWARM = 1,   // Vertical Shaped Insect Swarm
  CIRCULAR_SHAPED_INSECT_SWARM = 2,   // Circular Shaped Insect Swarm
  IRREGULAR_SHAPED_INSECT_SWARM = 3,  // Irregular Shaped Insect Swarm
};

/*
 * Source: uid=138
 */
enum class
    AddVariantsForSubsurfaceCategoriesFishMolluskCrustaceanAndInsect : uint8_t {
      BLACK = 1,    // Black
      GREEN = 2,    // Green
      SPOTTED = 3,  // Spotted
      RED = 4,      // Red
      BROWN = 5,    // Brown
      BLUE = 6,     // Blue
      SILVER = 7,   // Silver
      GREY = 8,     // Grey
    };

/*
 * Source: uid=139
 */
enum class VariantsForSubsurfaceCategory201Mammal : uint8_t {
  SINGING = 1,   // Singing
  SPOUTING = 2,  // Spouting
};

/*
 * Source: uid=143
 */
enum class UaStateChangeUpdateIndicator : uint8_t {
  STATE_UPDATE = 0,         // State Update
  CHANGED_DATA_UPDATE = 1,  // Changed Data Update
};

/*
 * Source: uid=144
 */
enum class UaAcousticSystemName : uint16_t {
  OTHER = 0,       // Other
  AN_BQQ_5 = 1,    // AN/BQQ-5
  AN_SSQ_62 = 2,   // AN/SSQ-62
  AN_SQS_23 = 3,   // AN/SQS-23
  AN_SQS_26 = 4,   // AN/SQS-26
  AN_SQS_53 = 5,   // AN/SQS-53
  ALFS = 6,        // ALFS
  LFA = 7,         // LFA
  AN_AQS_901 = 8,  // AN/AQS-901
  AN_AQS_902 = 9,  // AN/AQS-902
};

/*
 * Source: uid=145
 */
enum class UaAcousticEmitterSystemFunction : uint8_t {
  OTHER = 0,                              // Other
  PLATFORM_SEARCH_DETECT_TRACK = 1,       // Platform search/detect/track
  NAVIGATION = 2,                         // Navigation
  MINE_HUNTING = 3,                       // Mine hunting
  WEAPON_SEARCH_DETECT_TRACK_DETECT = 4,  // Weapon search/detect/track/detect
};

/*
 * Source: uid=146
 */
enum class UaActiveEmissionParameterIndex : uint16_t {
  OTHER = 0,  // Other
};

/*
 * Source: uid=147
 */
enum class UaScanPattern : uint16_t {
  SCAN_PATTERN_NOT_USED = 0,  // Scan pattern not used
  CONICAL = 1,                // Conical
  HELICAL = 2,                // Helical
  RASTER = 3,                 // Raster
  SECTOR_SEARCH = 4,          // Sector search
  CONTINUOUS_SEARCH = 5,      // Continuous search
};

/*
 * Source: uid=148
 */
enum class UaPassiveParameterIndex : uint16_t {
  OTHER = 0,  // Other
};

/*
 * Source: uid=150
 */
enum class UaAdditionalPassiveActivityParameterIndex : uint16_t {
  OTHER = 0,  // Other
};

/*
 * Source: uid=155
 */
enum class TransmitterMajorModulation : uint16_t {
  NO_STATEMENT = 0,         // No Statement
  AMPLITUDE = 1,            // Amplitude
  AMPLITUDE_AND_ANGLE = 2,  // Amplitude and Angle
  ANGLE = 3,                // Angle
  COMBINATION = 4,          // Combination
  PULSE = 5,                // Pulse
  UNMODULATED = 6,          // Unmodulated
  CARRIER_PHASE_SHIFT_MODULATION_CPSM =
      7,       // Carrier Phase Shift Modulation (CPSM)
  SATCOM = 8,  // SATCOM
};

/*
 * Source: uid=156
 */
enum class TransmitterDetailAmplitudeModulation : uint16_t {
  OTHER = 0,                              // Other
  AFSK_AUDIO_FREQUENCY_SHIFT_KEYING = 1,  // AFSK (Audio Frequency Shift Keying)
  AM_AMPLITUDE_MODULATION = 2,            // AM (Amplitude Modulation)
  CW_CONTINUOUS_WAVE_MODULATION = 3,      // CW (Continuous Wave Modulation)
  DSB_DOUBLE_SIDEBAND = 4,                // DSB (Double Sideband)
  ISB_INDEPENDENT_SIDEBAND = 5,           // ISB (Independent Sideband)
  LSB_SINGLE_BAND_SUPPRESSED_CARRIER_LOWER_SIDEBAND_MODE =
      6,  // LSB (Single Band Suppressed Carrier, Lower Sideband Mode)
  SSB_FULL_SINGLE_SIDEBAND_FULL_CARRIER =
      7,  // SSB-Full (Single Sideband Full Carrier)
  SSB_REDUC_SINGLE_BAND_REDUCED_CARRIER =
      8,  // SSB-Reduc (Single Band Reduced Carrier)
  USB_SINGLE_BAND_SUPPRESSED_CARRIER_UPPER_SIDEBAND_MODE =
      9,  // USB (Single Band Suppressed Carrier, Upper Sideband Mode)
  VSB_VESTIGIAL_SIDEBAND = 10,  // VSB (Vestigial Sideband)
};

/*
 * Source: uid=157
 */
enum class TransmitterDetailAmplitudeAndAngleModulation : uint16_t {
  OTHER = 0,                // Other
  AMPLITUDE_AND_ANGLE = 1,  // Amplitude and Angle
};

/*
 * Source: uid=158
 */
enum class TransmitterDetailAngleModulation : uint16_t {
  OTHER = 0,                       // Other
  FM_FREQUENCY_MODULATION = 1,     // FM (Frequency Modulation)
  FSK_FREQUENCY_SHIFT_KEYING = 2,  // FSK (Frequency Shift Keying)
  PM_PHASE_MODULATION = 3,         // PM (Phase Modulation)
  MSK_MINIMUM_SHIFT_KEYING = 4,    // MSK (Minimum Shift Keying)
};

/*
 * Source: uid=159
 */
enum class TransmitterDetailCombinationModulation : uint16_t {
  OTHER = 0,                  // Other
  AMPLITUDE_ANGLE_PULSE = 1,  // Amplitude-Angle-Pulse
};

/*
 * Source: uid=160
 */
enum class TransmitterDetailPulseModulation : uint16_t {
  OTHER = 0,               // Other
  PULSE = 1,               // Pulse
  X_BAND_TACAN_PULSE = 2,  // X Band TACAN Pulse
  Y_BAND_TACAN_PULSE = 3,  // Y Band TACAN Pulse
};

/*
 * Source: uid=161
 */
enum class TransmitterDetailUnmodulatedModulation : uint16_t {
  OTHER = 0,  // Other
  CONTINUOUS_WAVE_EMISSION_OF_AN_UNMODULATED_CARRIER =
      1,  // Continuous Wave emission of an unmodulated carrier
};

/*
 * Source: uid=162
 */
enum class TransmitterDetailCarrierPhaseShiftModulation : uint16_t {
  OTHER = 0,  // Other
};

/*
 * Source: uid=163
 */
enum class TransmitterModulationTypeSystem : uint16_t {
  OTHER = 0,                             // Other
  GENERIC_RADIO_OR_SIMPLE_INTERCOM = 1,  // Generic Radio or Simple Intercom
  HAVE_QUICK_I = 2,                      // HAVE QUICK I
  HAVE_QUICK_II = 3,                     // HAVE QUICK II
  SATURN = 4,                            // SATURN
  SINCGARS = 5,                          // SINCGARS
  CCTT_SINCGARS = 6,                     // CCTT SINCGARS
  EPLRS_ENHANCED_POSITION_LOCATION_REPORTING_SYSTEM =
      7,               // EPLRS (Enhanced Position Location Reporting System)
  JTIDS_MIDS = 8,      // JTIDS/MIDS
  LINK_11 = 9,         // Link 11
  LINK_11B = 10,       // Link 11B
  L_BAND_SATCOM = 11,  // L-Band SATCOM
  ENHANCED_SINCGARS_7_3 = 12,  // Enhanced SINCGARS 7.3
  NAVIGATION_AID = 13,         // Navigation Aid
};

/*
 * Source: uid=164
 */
enum class TransmitterTransmitState : uint8_t {
  OFF = 0,                      // Off
  ON_BUT_NOT_TRANSMITTING = 1,  // On but not transmitting
  ON_AND_TRANSMITTING = 2,      // On and transmitting
};

/*
 * Source: uid=165
 */
enum class TransmitterInputSource : uint8_t {
  OTHER = 0,                  // Other
  PILOT = 1,                  // Pilot
  COPILOT = 2,                // Copilot
  FIRST_OFFICER = 3,          // First Officer
  DRIVER = 4,                 // Driver
  LOADER = 5,                 // Loader
  GUNNER = 6,                 // Gunner
  COMMANDER = 7,              // Commander
  DIGITAL_DATA_DEVICE = 8,    // Digital Data Device
  INTERCOM = 9,               // Intercom
  AUDIO_JAMMER = 10,          // Audio Jammer
  DATA_JAMMER = 11,           // Data Jammer
  GPS_JAMMER = 12,            // GPS Jammer
  GPS_MEACONER = 13,          // GPS Meaconer
  SATCOM_UPLINK_JAMMER = 14,  // SATCOM Uplink Jammer
};

/*
 * Source: uid=166
 */
enum class TransmitterCryptoSystem : uint16_t {
  NO_ENCRYPTION_DEVICE = 0,               // No Encryption Device
  KY_28 = 1,                              // KY-28
  KY_58 = 2,                              // KY-58
  NARROW_SPECTRUM_SECURE_VOICE_NSVE = 3,  // Narrow Spectrum Secure Voice (NSVE)
  WIDE_SPECTRUM_SECURE_VOICE_WSVE = 4,    // Wide Spectrum Secure Voice (WSVE)
  SINCGARS_ICOM = 5,                      // SINCGARS ICOM
  KY_75 = 6,                              // KY-75
  KY_100 = 7,                             // KY-100
  KY_57 = 8,                              // KY-57
  KYV_5 = 9,                              // KYV-5
  LINK_11_KG_40A_P_NTDS = 10,             // Link 11 KG-40A-P (NTDS)
  LINK_11B_KG_40A_S = 11,                 // Link 11B KG-40A-S
  LINK_11_KG_40AR = 12,                   // Link 11 KG-40AR
  KGV_135A = 13,                          // KGV-135A
  TACTICAL_SECURE_VOICE_TSV = 14,         // Tactical Secure Voice (TSV)
};

/*
 * Source: uid=167
 */
enum class TransmitterAntennaPatternType : uint16_t {
  ISOTROPIC_SPHERICAL_RADIATION_PATTERN =
      0,                             // Isotropic (Spherical Radiation Pattern)
  BEAM = 1,                          // Beam
  SPHERICAL_HARMONIC = 2,            // Spherical harmonic [DEPRECATED]
  TRANSMITTER_RADIATION_VOLUME = 4,  // Transmitter Radiation Volume
  BEAM_AND_TRANSMITTER_RADIATION_VOLUME =
      5,  // Beam and Transmitter Radiation Volume
  OMNIDIRECTIONAL_TOROIDAL_RADIATION_PATTERN =
      6,  // Omnidirectional (Toroidal Radiation Pattern)
};

/*
 * Source: uid=168
 */
enum class TransmitterAntennaPatternReferenceSystem : uint8_t {
  WORLD_COORDINATES = 1,   // World Coordinates
  ENTITY_COORDINATES = 2,  // Entity Coordinates
};

/*
 * Source: uid=170
 */
enum class CcttSincgarsStartOfMessage : uint8_t {
  NOT_START_OF_MESSAGE = 0,  // Not start of message
  START_OF_MESSAGE = 1,      // Start of Message
};

/*
 * Source: uid=171
 */
enum class CcttSincgarsClearChannel : uint8_t {
  NOT_CLEAR_CHANNEL = 0,  // Not clear channel
  CLEAR_CHANNEL = 1,      // Clear channel
};

/*
 * Source: uid=172
 */
enum class TimeSlotAllocationLevel : uint8_t {
  LOW_FIDELITY_LEVEL_0 = 0,     // Low Fidelity Level 0
  LOW_FIDELITY_LEVEL_1 = 1,     // Low Fidelity Level 1
  MEDIUM_FIDELITY_LEVEL_2 = 2,  // Medium Fidelity Level 2
  MEDIUM_FIDELITY_LEVEL_3 = 3,  // Medium Fidelity Level 3
  HIGH_FIDELITY_LEVEL_4 = 4,    // High Fidelity Level 4
};

/*
 * Source: uid=173
 */
enum class
    JtidsMidsModulationParametersTransmittingTerminalPrimaryMode : uint8_t {
      NTR = 1,                     // NTR
      JTIDS_UNIT_PARTICIPANT = 2,  // JTIDS Unit Participant
    };

/*
 * Source: uid=174
 */
enum class
    JtidsMidsModulationParametersTransmittingTerminalSecondaryMode : uint8_t {
      NONE = 0,                             // None
      NET_POSITION_REFERENCE = 1,           // Net Position Reference
      PRIMARY_NAVIGATION_CONTROLLER = 2,    // Primary Navigation Controller
      SECONDARY_NAVIGATION_CONTROLLER = 3,  // Secondary Navigation Controller
    };

/*
 * Source: uid=175
 */
enum class JtidsMidsModulationParametersSynchronizationState : uint8_t {
  NO_STATEMENT = 0,                 // No Statement
  INITIAL_NET_ENTRY = 1,            // Initial Net Entry
  COARSE_SYNCHRONIZATION = 2,       // Coarse Synchronization
  FINE_SYNCHRONIZATION = 3,         // Fine Synchronization
  SYNCHRONIZATION_MAINTENANCE = 4,  // Synchronization Maintenance [DEPRECATED]
};

/*
 * Source: uid=176
 */
enum class MessageTypeIdentifier : uint8_t {
  JTIDS_HEADER_MESSAGES = 0,  // JTIDS Header/Messages
  RTT_A_B = 1,                // RTT A/B
  RTT_REPLY = 2,              // RTT Reply
  JTIDS_VOICE_CVSD = 3,       // JTIDS Voice CVSD
  JTIDS_VOICE_LPC10 = 4,      // JTIDS Voice LPC10
  JTIDS_VOICE_LPC12 = 5,      // JTIDS Voice LPC12
  JTIDS_LET = 6,              // JTIDS LET
  VMF = 7,                    // VMF
};

/*
 * Source: uid=177
 */
enum class SignalUserProtocolIdentificationNumber : uint32_t {
  CCSIL = 1,                        // CCSIL
  A2ATD_SINCGARS_ERF = 5,           // A2ATD SINCGARS ERF
  A2ATD_CAC2 = 6,                   // A2ATD CAC2
  BATTLE_COMMAND = 20,              // Battle Command
  AFIWC_IADS_TRACK_REPORT = 30,     // AFIWC IADS Track Report
  AFIWC_IADS_COMM_C2_MESSAGE = 31,  // AFIWC IADS Comm C2 Message
  AFIWC_IADS_GROUND_CONTROL_INTERCEPTOR_GCI_COMMAND =
      32,  // AFIWC IADS Ground Control Interceptor (GCI) Command
  AFIWC_VOICE_TEXT_MESSAGE = 35,            // AFIWC Voice Text Message
  MODSAF_TEXT_RADIO = 177,                  // ModSAF Text Radio
  CCTT_SINCGARS_ERF_LOCKOUT = 200,          // CCTT SINCGARS ERF-LOCKOUT
  CCTT_SINCGARS_ERF_HOPSET = 201,           // CCTT SINCGARS ERF-HOPSET
  CCTT_SINCGARS_OTAR = 202,                 // CCTT SINCGARS OTAR
  CCTT_SINCGARS_DATA = 203,                 // CCTT SINCGARS DATA
  MODSAF_FWA_FORWARD_AIR_CONTROLLER = 546,  // ModSAF FWA Forward Air Controller
  MODSAF_THREAT_ADA_C3 = 832,               // ModSAF Threat ADA C3
  F_16_MTC_AFAPD_PROTOCOL = 1000,           // F-16 MTC AFAPD Protocol
  F_16_MTC_IDL_PROTOCOL = 1100,             // F-16 MTC IDL Protocol
  AUTOMATIC_IDENTIFICATION_SYSTEM_AIS =
      1371,  // Automatic Identification System (AIS) [DEPRECATED]
  MODSAF_ARTILLERY_FIRE_CONTROL = 4570,     // ModSAF Artillery Fire Control
  AGTS = 5361,                              // AGTS
  GC3 = 6000,                               // GC3
  WNCP_DATA = 6010,                         // WNCP data
  SPOKEN_TEXT_MESSAGE = 6020,               // Spoken text message
  LONGBOW_IDM_MESSAGE = 6661,               // Longbow IDM message
  COMANCHE_IDM_MESSAGE = 6662,              // Comanche IDM message
  LONGBOW_AIRBORNE_TACFIRE_MESSAGE = 6663,  // Longbow Airborne TACFIRE Message
  LONGBOW_GROUND_TACFIRE_MESSAGE = 6664,    // Longbow Ground TACFIRE Message
  LONGBOW_AFAPD_MESSAGE = 6665,             // Longbow AFAPD Message
  LONGBOW_ERF_MESSAGE = 6666,               // Longbow ERF message
  VMF_IDM = 7000,                           // VMF IDM
  CSAR_RADIO_SURVIVOR_MESSAGE = 7010,       // CSAR Radio Survivor Message
  CSAR_RADIO_INTERROGATOR_MESSAGE = 7020,   // CSAR Radio Interrogator Message
  IMAGE_FILE_TRANSFER_MESSAGE = 7030,       // Image File Transfer Message
  GEOTAG_DATA_MESSAGE = 7040,               // Geotag Data Message
  TACTICAL_VIDEO_REGENERATION_DATA = 7050,  // Tactical Video Regeneration Data
};

/*
 * Source: uid=178
 */
enum class SignalTdlType : uint16_t {
  OTHER = 0,             // Other
  PADIL = 1,             // PADIL
  NATO_LINK_1 = 2,       // NATO Link-1
  ATDL_1 = 3,            // ATDL-1
  LINK_11B_TADIL_B = 4,  // Link 11B (TADIL B)
  SITUATIONAL_AWARENESS_DATA_LINK_SADL =
      5,  // Situational Awareness Data Link (SADL)
  LINK_16_LEGACY_FORMAT_JTIDS_TADIL_J =
      6,  // Link 16 Legacy Format (JTIDS/TADIL-J)
  LINK_16_LEGACY_FORMAT_JTIDS_FDL_TADIL_J =
      7,                 // Link 16 Legacy Format (JTIDS/FDL/TADIL-J)
  LINK_11_TADIL_A = 8,   // Link 11 (TADIL A)
  IJMS = 9,              // IJMS
  LINK_4A_TADIL_C = 10,  // Link 4A (TADIL C)
  LINK_4C = 11,          // Link 4C
  TIBS = 12,             // TIBS
  ATL = 13,              // ATL
  CONSTANT_SOURCE = 14,  // Constant Source
  ABBREVIATED_COMMAND_AND_CONTROL = 15,  // Abbreviated Command and Control
  MILSTAR = 16,                          // MILSTAR
  ATHS = 17,                             // ATHS
  OTHGOLD = 18,                          // OTHGOLD
  TACELINT = 19,                         // TACELINT
  WEAPONS_DATA_LINK_AWW_13 = 20,         // Weapons Data Link (AWW-13)
  ABBREVIATED_COMMAND_AND_CONTROL =
      21,  // Abbreviated Command and Control [DEPRECATED]
  ENHANCED_POSITION_LOCATION_REPORTING_SYSTEM_EPLRS =
      22,  // Enhanced Position Location Reporting System (EPLRS)
  POSITION_LOCATION_REPORTING_SYSTEM_PLRS =
      23,                         // Position Location Reporting System (PLRS)
  SINCGARS = 24,                  // SINCGARS
  HAVE_QUICK_I = 25,              // HAVE QUICK I
  HAVE_QUICK_II = 26,             // HAVE QUICK II
  SATURN = 27,                    // SATURN
  INTRA_FLIGHT_DATA_LINK_1 = 28,  // Intra-Flight Data Link 1
  INTRA_FLIGHT_DATA_LINK_2 = 29,  // Intra-Flight Data Link 2
  IMPROVED_DATA_MODEM_IDM = 30,   // Improved Data Modem (IDM)
  AIR_FORCE_APPLICATION_PROGRAM_DEVELOPMENT_AFAPD =
      31,  // Air Force Application Program Development (AFAPD)
  COOPERATIVE_ENGAGEMENT_CAPABILITY_CEC =
      32,  // Cooperative Engagement Capability (CEC)
  FORWARD_AREA_AIR_DEFENSE_FAAD_DATA_LINK_FDL =
      33,  // Forward Area Air Defense (FAAD) Data Link (FDL)
  GROUND_BASED_DATA_LINK_GBDL = 34,       // Ground Based Data Link (GBDL)
  INTRA_VEHICULAR_INFO_SYSTEM_IVIS = 35,  // Intra Vehicular Info System (IVIS)
  MARINE_TACTICAL_SYSTEM_MTS = 36,        // Marine Tactical System (MTS)
  TACTICAL_FIRE_DIRECTION_SYSTEM_TACFIRE =
      37,  // Tactical Fire Direction System (TACFIRE)
  INTEGRATED_BROADCAST_SERVICE_IBS = 38,  // Integrated Broadcast Service (IBS)
  AIRBORNE_INFORMATION_TRANSFER_ABIT =
      39,  // Airborne Information Transfer (ABIT)
  ADVANCED_TACTICAL_AIRBORNE_RECONNAISSANCE_SYSTEM_ATARS_DATA_LINK =
      40,  // Advanced Tactical Airborne Reconnaissance System (ATARS) Data Link
  BATTLE_GROUP_PASSIVE_HORIZON_EXTENSION_SYSTEM_BGPHES_DATA_LINK =
      41,  // Battle Group Passive Horizon Extension System (BGPHES) Data Link
  COMMON_HIGH_BANDWIDTH_DATA_LINK_CHBDL =
      42,  // Common High Bandwidth Data Link (CHBDL)
  GUARDRAIL_INTEROPERABLE_DATA_LINK_IDL =
      43,  // Guardrail Interoperable Data Link (IDL)
  GUARDRAIL_COMMON_SENSOR_SYSTEM_ONE_CSS1_DATA_LINK =
      44,  // Guardrail Common Sensor System One (CSS1) Data Link
  GUARDRAIL_COMMON_SENSOR_SYSTEM_TWO_CSS2_DATA_LINK =
      45,  // Guardrail Common Sensor System Two (CSS2) Data Link
  GUARDRAIL_CSS2_MULTI_ROLE_DATA_LINK_MRDL =
      46,  // Guardrail CSS2 Multi-Role Data Link (MRDL)
  GUARDRAIL_CSS2_DIRECT_AIR_TO_SATELLITE_RELAY_DASR_DATA_LINK =
      47,  // Guardrail CSS2 Direct Air to Satellite Relay (DASR) Data Link
  LINE_OF_SIGHT_LOS_DATA_LINK_IMPLEMENTATION_LOS_TETHER =
      48,  // Line of Sight (LOS) Data Link Implementation (LOS tether)
  LIGHTWEIGHT_CDL_LWCDL = 49,            // Lightweight CDL (LWCDL)
  L_52M_SR_71 = 50,                      // L-52M (SR-71)
  RIVET_REACH_RIVET_OWL_DATA_LINK = 51,  // Rivet Reach/Rivet Owl Data Link
  SENIOR_SPAN = 52,                      // Senior Span
  SENIOR_SPUR = 53,                      // Senior Spur
  SENIOR_STRETCH = 54,                   // Senior Stretch.
  SENIOR_YEAR_INTEROPERABLE_DATA_LINK_IDL =
      55,          // Senior Year Interoperable Data Link (IDL)
  SPACE_CDL = 56,  // Space CDL
  TR_1_MODE_MIST_AIRBORNE_DATA_LINK = 57,  // TR-1 mode MIST Airborne Data Link
  KU_BAND_SATCOM_DATA_LINK_IMPLEMENTATION_UAV =
      58,  // Ku-band SATCOM Data Link Implementation (UAV)
  MISSION_EQUIPMENT_CONTROL_DATA_LINK_MECDL =
      59,  // Mission Equipment Control Data link (MECDL)
  RADAR_DATA_TRANSMITTING_SET_DATA_LINK =
      60,  // Radar Data Transmitting Set Data Link
  SURVEILLANCE_AND_CONTROL_DATA_LINK_SCDL =
      61,                   // Surveillance and Control Data Link (SCDL)
  TACTICAL_UAV_VIDEO = 62,  // Tactical UAV Video
  UHF_SATCOM_DATA_LINK_IMPLEMENTATION_UAV =
      63,  // UHF SATCOM Data Link Implementation (UAV)
  TACTICAL_COMMON_DATA_LINK_TCDL = 64,  // Tactical Common Data Link (TCDL)
  LOW_LEVEL_AIR_PICTURE_INTERFACE_LLAPI =
      65,                          // Low Level Air Picture Interface (LLAPI)
  WEAPONS_DATA_LINK_AGM_130 = 66,  // Weapons Data Link (AGM-130)
  AUTOMATIC_IDENTIFICATION_SYSTEM_AIS =
      67,                          // Automatic Identification System (AIS)
  WEAPONS_DATA_LINK_AIM_120 = 68,  // Weapons Data Link (AIM-120)
  WEAPONS_DATA_LINK_AIM_9 = 69,    // Weapons Data Link (AIM-9)
  WEAPONS_DATA_LINK_CAMM = 70,     // Weapons Data Link (CAMM)
  GC3 = 99,                        // GC3
  LINK_16_STANDARDIZED_FORMAT_JTIDS_MIDS_TADIL_J =
      100,  // Link 16 Standardized Format (JTIDS/MIDS/TADIL J)
  LINK_16_ENHANCED_DATA_RATE_EDR_JTIDS_MIDS_TADIL_J =
      101,  // Link 16 Enhanced Data Rate (EDR JTIDS/MIDS/TADIL-J)
  JTIDS_MIDS_NET_DATA_LOAD_TIMS_TOMS =
      102,        // JTIDS/MIDS Net Data Load (TIMS/TOMS)
  LINK_22 = 103,  // Link 22
  AFIWC_IADS_COMMUNICATIONS_LINKS = 104,   // AFIWC IADS Communications Links
  F_22_INTRA_FLIGHT_DATA_LINK_IFDL = 105,  // F-22 Intra-Flight Data Link (IFDL)
  L_BAND_SATCOM = 106,                     // L-Band SATCOM
  TSAF_COMMUNICATIONS_LINK = 107,          // TSAF Communications Link
  ENHANCED_SINCGARS_7_3 = 108,             // Enhanced SINCGARS 7.3
  F_35_MULTIFUNCTION_ADVANCED_DATA_LINK_MADL =
      109,                 // F-35 Multifunction Advanced Data Link (MADL)
  CURSOR_ON_TARGET = 110,  // Cursor on Target
  ALL_PURPOSE_STRUCTURED_EUROCONTROL_SURVEILLANCE_INFORMATION_EXCHANGE_ASTERIX =
      111,  // All Purpose Structured Eurocontrol Surveillance Information
            // Exchange (ASTERIX)
  VARIABLE_MESSAGE_FORMAT_VMF_OVER_COMBAT_NET_RADIO_VMF_OVER_CNR =
      112,  // Variable Message Format (VMF) over Combat Net Radio (VMF over
            // CNR)
  LINK_16_SURROGATE_FOR_NON_NATO_TDL =
      113,                                 // Link 16 Surrogate for Non-NATO TDL
  MQ_1_9_C_BAND_LOS_UPLINK = 114,          // MQ-1/9 C-Band LOS Uplink
  MQ_1_9_C_BAND_LOS_DOWNLINK = 115,        // MQ-1/9 C-Band LOS Downlink
  MQ_1_9_KU_BAND_SATCOM_UPLINK = 116,      // MQ-1/9 Ku-Band SATCOM Uplink
  MQ_1_9_KU_BAND_SATCOM_DOWNLINK = 117,    // MQ-1/9 Ku-Band SATCOM Downlink
  WEAPONS_DATALINK_SDB_II = 118,           // Weapons Datalink (SDB II)
  JTAC_SA_UPLINK = 119,                    // JTAC SA Uplink
  COMMON_INTERACTIVE_BROADCAST_CIB = 120,  // Common Interactive Broadcast (CIB)
  JOINT_RANGE_EXTENSION_APPLICATION_PROTOCOL_A_JREAP_A =
      121,  // Joint Range Extension Application Protocol A (JREAP A)
  JPALS_DATA_LINK = 125,                  // JPALS Data Link
  ONESAF_IADS_COMMUNICATIONS_LINK = 126,  // OneSAF IADS Communications Link
  TACTICAL_TARGETING_NETWORK_TECHNOLOGY_TTNT_APPLICATION =
      127,  // Tactical Targeting Network Technology (TTNT) Application
};

/*
 * Source: uid=179
 */
enum class ReceiverReceiverState : uint16_t {
  OFF = 0,                   // Off
  ON_BUT_NOT_RECEIVING = 1,  // On but not receiving
  ON_AND_RECEIVING = 2,      // On and receiving
};

/*
 * Source: uid=180
 */
enum class IntercomControlControlType : uint8_t {
  RESERVED = 0,                      // Reserved
  STATUS = 1,                        // Status
  REQUEST_ACKNOWLEDGE_REQUIRED = 2,  // Request - Acknowledge Required
  REQUEST_NO_ACKNOWLEDGE = 3,        // Request - No Acknowledge
  ACK_REQUEST_GRANTED = 4,           // Ack - Request Granted
  NACK_REQUEST_DENIED = 5,           // Nack - Request Denied
};

/*
 * Source: uid=181
 */
enum class IntercomControlCommunicationsType : uint8_t {
  RESERVED = 0,        // Reserved
  CONNECTION_FDX = 1,  // Connection FDX
  CONNECTION_HDX_DESTINATION_IS_RECEIVE_ONLY =
      2,  // Connection HDX - Destination is Receive Only
  CONNECTION_HDX_DESTINATION_IS_TRANSMIT_ONLY =
      3,               // Connection HDX - Destination is Transmit Only
  CONNECTION_HDX = 4,  // Connection HDX
};

/*
 * Source: uid=182
 */
enum class IntercomControlCommand : uint8_t {
  NO_COMMAND = 0,  // No Command
  STATUS = 1,      // Status
  CONNECT = 2,     // Connect
  DISCONNECT = 3,  // Disconnect
  RESET = 4,       // Reset
  ON = 5,          // On
  OFF = 6,         // Off
};

/*
 * Source: uid=183
 */
enum class IntercomControlTransmitLineState : uint8_t {
  TRANSMIT_LINE_STATE_NOT_APPLICABLE = 0,  // Transmit Line State not applicable
  NOT_TRANSMITTING = 1,                    // Not Transmitting
  TRANSMITTING = 2,                        // Transmitting
};

/*
 * Source: uid=184
 */
enum class IntercomControlDestinationLineStateCommand : uint8_t {
  NONE = 0,                                // None
  SET_LINE_STATE_TRANSMITTING = 1,         // Set Line State - Transmitting
  SET_LINE_STATE_NOT_TRANSMITTING = 2,     // Set Line State - Not Transmitting
  RETURN_TO_LOCAL_LINE_STATE_CONTROL = 3,  // Return to Local Line State Control
};

/*
 * Source: uid=185
 */
enum class IntercomControlRecordType : uint16_t {
  SPECIFIC_DESTINATION_RECORD = 1,  // Specific Destination record
  GROUP_DESTINATION_RECORD = 2,     // Group Destination record
  GROUP_ASSIGNMENT_RECORD = 3,      // Group Assignment record
};

/*
 * Source: uid=189
 */
enum class CollisionType : uint8_t {
  INELASTIC = 0,  // Inelastic
  ELASTIC = 1,    // Elastic
  BOOM_NOZZLE_HAS_CLEARED_THE_RECEIVER_S_REFUELING_RECEPTACLE =
      55,  // Boom nozzle has cleared the receiver's refueling receptacle
};

/*
 * Source: uid=193
 */
enum class MinefieldSensorTypes : uint8_t {
  OTHER = 0,          // Other
  OPTICAL = 1,        // Optical
  FLIR = 2,           // FLIR
  RADAR = 3,          // RADAR
  MAGNETIC = 4,       // Magnetic
  LASER = 5,          // Laser
  SONAR = 6,          // SONAR
  PHYSICAL = 7,       // Physical
  MULTISPECTRAL = 8,  // Multispectral
};

/*
 * Source: uid=194
 */
enum class MinefieldSensorTypesOptical : uint16_t {
  UNAIDED_EYE_ACTIVELY_SEARCHING = 0,  // Unaided Eye, Actively Searching
  UNAIDED_EYE_NOT_ACTIVELY_SEARCHING =
      1,                                  // Unaided Eye, Not Actively Searching
  BINOCULARS = 2,                         // Binoculars
  IMAGE_INTENSIFIER = 3,                  // Image Intensifier
  HMMWV_OCCUPANT_ACTIVELY_SEARCHING = 4,  // HMMWV occupant, Actively Searching
  HMMWV_OCCUPANT_NOT_ACTIVELY_SEARCHING =
      5,  // HMMWV occupant, Not Actively Searching
  TRUCK_OCCUPANT_ACTIVELY_SEARCHING = 6,  // Truck occupant, Actively Searching
  TRUCK_OCCUPANT_NOT_ACTIVELY_SEARCHING =
      7,  // Truck occupant, Not Actively Searching
  TRACKED_VEHICLE_OCCUPANT_CLOSED_HATCH_ACTIVELY_SEARCHING =
      8,  // Tracked vehicle occupant, closed hatch, Actively Searching
  TRACKED_VEHICLE_OCCUPANT_CLOSED_HATCH_NOT_ACTIVELY_SEARCHING =
      9,  // Tracked vehicle occupant, closed hatch, Not Actively Searching
  TRACKED_VEHICLE_OCCUPANT_OPEN_HATCH_ACTIVELY_SEARCHING =
      10,  // Tracked vehicle occupant, open hatch, Actively Searching
  TRACKED_VEHICLE_OCCUPANT_OPEN_HATCH_NOT_ACTIVELY_SEARCHING =
      11,  // Tracked vehicle occupant, open hatch, Not Actively Searching
};

/*
 * Source: uid=195
 */
enum class MinefieldSensorTypesFlir : uint16_t {
  GENERIC_3_5 = 0,    // Generic 3-5
  GENERIC_8_12 = 1,   // Generic 8-12
  ASTAMIDS_I = 2,     // ASTAMIDS I
  ASTAMIDS_II = 3,    // ASTAMIDS II
  GSTAMIDS_3_5 = 4,   // GSTAMIDS 3-5
  GSTAMIDS_8_12 = 5,  // GSTAMIDS 8-12
  HSTAMIDS_3_5 = 6,   // HSTAMIDS 3-5
  HSTAMIDS_8_12 = 7,  // HSTAMIDS 8-12
  COBRA_3_5 = 8,      // COBRA 3-5
  COBRA_8_12 = 9,     // COBRA 8-12
};

/*
 * Source: uid=196
 */
enum class MinefieldSensorTypesRadar : uint16_t {
  GENERIC = 0,      // Generic
  GENERIC_GPR = 1,  // Generic GPR
  GSTAMIDS_I = 2,   // GSTAMIDS I
  GSTAMIDS_II = 3,  // GSTAMIDS II
  HSTAMIDS_I = 4,   // HSTAMIDS I
  HSTAMIDS_II = 5,  // HSTAMIDS II
};

/*
 * Source: uid=197
 */
enum class MinefieldSensorTypesMagnetic : uint16_t {
  GENERIC = 0,    // Generic
  AN_PSS_11 = 1,  // AN-PSS-11
  AN_PSS_12 = 2,  // AN-PSS-12
  GSTAMIDS = 3,   // GSTAMIDS
};

/*
 * Source: uid=198
 */
enum class MinefieldSensorTypesLaser : uint16_t {
  GENERIC = 0,   // Generic
  ASTAMIDS = 1,  // ASTAMIDS
};

/*
 * Source: uid=199
 */
enum class MinefieldSensorTypesSonar : uint16_t {
  GENERIC = 0,  // Generic
};

/*
 * Source: uid=200
 */
enum class MinefieldSensorTypesPhysical : uint16_t {
  GENERIC_PROBE = 0,           // Generic Probe
  PROBE_METAL_CONTENT = 1,     // Probe, metal content
  PROBE_NO_METAL_CONTENT = 2,  // Probe, no metal content
};

/*
 * Source: uid=201
 */
enum class MinefieldSensorTypesMultispectral : uint16_t {
  GENERIC = 0,  // Generic
};

/*
 * Source: uid=204
 */
enum class AggregateStateAggregateState : uint8_t {
  OTHER = 0,                    // Other
  AGGREGATED = 1,               // Aggregated
  DISAGGREGATED = 2,            // Disaggregated
  FULLY_DISAGGREGATED = 3,      // Fully disaggregated
  PSEUDO_DISAGGREGATED = 4,     // Pseudo-disaggregated
  PARTIALLY_DISAGGREGATED = 5,  // Partially-disaggregated
};

/*
 * Source: uid=205
 */
enum class AggregateStateFormation : uint32_t {
  OTHER = 0,     // Other
  ASSEMBLY = 1,  // Assembly
  VEE = 2,       // Vee
  WEDGE = 3,     // Wedge
  LINE = 4,      // Line
  COLUMN = 5,    // Column
};

/*
 * Source: uid=206
 */
enum class AggregateStateAggregateKind : uint8_t {
  OTHER = 0,                 // Other
  MILITARY_HIERARCHY = 1,    // Military Hierarchy
  COMMON_TYPE = 2,           // Common Type
  COMMON_MISSION = 3,        // Common Mission
  SIMILAR_CAPABILITIES = 4,  // Similar Capabilities
  COMMON_LOCATION = 5,       // Common Location
};

/*
 * Source: uid=208
 */
enum class AggregateStateSubcategory : uint8_t {
  OTHER = 0,                         // Other
  CAVALRY_TROOP = 1,                 // Cavalry Troop
  ARMOR = 2,                         // Armor
  INFANTRY = 3,                      // Infantry
  MECHANIZED_INFANTRY = 4,           // Mechanized Infantry
  CAVALRY = 5,                       // Cavalry
  ARMORED_CAVALRY = 6,               // Armored Cavalry
  ARTILLERY = 7,                     // Artillery
  SELF_PROPELLED_ARTILLERY = 8,      // Self-Propelled Artillery
  CLOSE_AIR_SUPPORT = 9,             // Close Air Support
  ENGINEER = 10,                     // Engineer
  AIR_DEFENSE_ARTILLERY = 11,        // Air Defense Artillery
  ANTI_TANK = 12,                    // Anti-Tank
  ARMY_AVIATION_FIXED_WING = 13,     // Army Aviation Fixed-wing
  ARMY_AVIATION_ROTARY_WING = 14,    // Army Aviation Rotary-wing
  ARMY_ATTACK_HELICOPTER = 15,       // Army Attack Helicopter
  AIR_CAVALRY = 16,                  // Air Cavalry
  ARMOR_HEAVY_TASK_FORCE = 17,       // Armor Heavy Task Force
  MOTORIZED_RIFLE = 18,              // Motorized Rifle
  MECHANIZED_HEAVY_TASK_FORCE = 19,  // Mechanized Heavy Task Force
  COMMAND_POST = 20,                 // Command Post
  CEWI = 21,                         // CEWI
  TANK_ONLY = 22,                    // Tank only
};

/*
 * Source: uid=209
 */
enum class AggregateStateSpecific : uint8_t {
  NO_HEADQUARTERS = 0,  // No headquarters
  YES_AGGREGATE_UNIT_CONTAINS_A_HEADQUARTERS =
      1,  // Yes aggregate unit contains a headquarters
};

/*
 * Source: uid=210
 */
enum class IspartofNature : uint16_t {
  OTHER = 0,                      // Other
  HOST_FIREABLE_MUNITION = 1,     // Host-fireable munition
  MUNITION_CARRIED_AS_CARGO = 2,  // Munition carried as cargo
  FUEL_CARRIED_AS_CARGO = 3,      // Fuel carried as cargo
  GUNMOUNT_ATTACHED_TO_HOST = 4,  // Gunmount attached to host
  COMPUTER_GENERATED_FORCES_CARRIED_AS_CARGO =
      5,                         // Computer generated forces carried as cargo
  VEHICLE_CARRIED_AS_CARGO = 6,  // Vehicle carried as cargo
  EMITTER_MOUNTED_ON_HOST = 7,   // Emitter mounted on host
  MOBILE_COMMAND_AND_CONTROL_ENTITY_CARRIED_ABOARD_HOST =
      8,  // Mobile command and control entity carried aboard host
  ENTITY_STATIONED_AT_POSITION_WITH_RESPECT_TO_HOST =
      9,  // Entity stationed at position with respect to host
  TEAM_MEMBER_IN_FORMATION_WITH = 10,  // Team member in formation with
};

/*
 * Source: uid=211
 */
enum class IspartofPosition : uint16_t {
  OTHER = 0,      // Other
  ON_TOP_OF = 1,  // On top of
  INSIDE_OF = 2,  // Inside of
};

/*
 * Source: uid=212
 */
enum class IspartofStationName : uint16_t {
  OTHER = 0,                              // Other
  AIRCRAFT_WINGSTATION = 1,               // Aircraft Wingstation
  SHIP_S_FORWARD_GUNMOUNT_STARBOARD = 2,  // Ship's Forward Gunmount (Starboard)
  SHIP_S_FORWARD_GUNMOUNT_PORT = 3,       // Ship's Forward Gunmount (Port)
  SHIP_S_FORWARD_GUNMOUNT_CENTERLINE =
      4,                                 // Ship's Forward Gunmount (Centerline)
  SHIP_S_AFT_GUNMOUNT_STARBOARD = 5,     // Ship's Aft Gunmount (Starboard)
  SHIP_S_AFT_GUNMOUNT_PORT = 6,          // Ship's Aft Gunmount (Port)
  SHIP_S_AFT_GUNMOUNT_CENTERLINE = 7,    // Ship's Aft Gunmount (Centerline)
  FORWARD_TORPEDO_TUBE = 8,              // Forward Torpedo Tube
  AFT_TORPEDO_TUBE = 9,                  // Aft Torpedo Tube
  BOMB_BAY = 10,                         // Bomb Bay
  CARGO_BAY = 11,                        // Cargo Bay
  TRUCK_BED = 12,                        // Truck Bed
  TRAILER_BED = 13,                      // Trailer Bed
  WELL_DECK = 14,                        // Well Deck
  ON_STATION_RANGE_AND_BEARING = 15,     // On Station Range and Bearing
  ON_STATION_XYZ = 16,                   // On Station xyz
  AIR_TO_AIR_REFUELING_BOOM = 17,        // Air-to-Air Refueling Boom
  AERIAL_REFUELING_RECEPTACLE = 18,      // Aerial Refueling Receptacle
  PORT_SIDE_REFUELING_DROGUE = 19,       // Port Side Refueling Drogue
  STARBOARD_SIDE_REFUELING_DROGUE = 20,  // Starboard Side Refueling Drogue
  CENTER_REFUELING_DROGUE = 21,          // Center Refueling Drogue
  AIR_REFUELING_PROBE = 22,              // Air Refueling Probe
};

/*
 * Source: uid=213
 */
enum class IsgroupofGroupedEntityCategory : uint8_t {
  UNDEFINED = 0,                       // Undefined
  BASIC_GROUND_COMBAT_VEHICLE = 1,     // Basic Ground Combat Vehicle
  ENHANCED_GROUND_COMBAT_VEHICLE = 2,  // Enhanced Ground Combat Vehicle
  BASIC_GROUND_COMBAT_SOLDIER = 3,     // Basic Ground Combat Soldier
  ENHANCED_GROUND_COMBAT_SOLDIER = 4,  // Enhanced Ground Combat Soldier
  BASIC_ROTOR_WING_AIRCRAFT = 5,       // Basic Rotor Wing Aircraft
  ENHANCED_ROTOR_WING_AIRCRAFT = 6,    // Enhanced Rotor Wing Aircraft
  BASIC_FIXED_WING_AIRCRAFT = 7,       // Basic Fixed Wing Aircraft
  ENHANCED_FIXED_WING_AIRCRAFT = 8,    // Enhanced Fixed Wing Aircraft
  GROUND_LOGISTICS_VEHICLE = 9,        // Ground Logistics Vehicle
};

/*
 * Source: uid=214
 */
enum class IsgroupofRestStatus : uint8_t {
  NOT_RESTED_HAS_NOT_SLEPT_IN_THE_LAST_THREE_DAYS =
      0,  // Not rested (Has not slept in the last three days)
  HAS_SLEPT_AN_AVERAGE_OF_1_HOUR_PER_DAY_IN_THE_LAST_THREE_DAYS =
      1,  // Has slept an average of 1 hour per day in the last three days.
  HAS_SLEPT_AN_AVERAGE_OF_2_HOURS_PER_DAY_IN_THE_LAST_THREE_DAYS =
      2,  // Has slept an average of 2 hours per day in the last three days.
  HAS_SLEPT_AN_AVERAGE_OF_3_HOURS_PER_DAY_IN_THE_LAST_THREE_DAYS =
      3,  // Has slept an average of 3 hours per day in the last three days.
  HAS_SLEPT_AN_AVERAGE_OF_4_HOURS_PER_DAY_IN_THE_LAST_THREE_DAYS =
      4,  // Has slept an average of 4 hours per day in the last three days.
  HAS_SLEPT_AN_AVERAGE_OF_5_HOURS_PER_DAY_IN_THE_LAST_THREE_DAYS =
      5,  // Has slept an average of 5 hours per day in the last three days.
  HAS_SLEPT_AN_AVERAGE_OF_6_HOURS_PER_DAY_IN_THE_LAST_THREE_DAYS =
      6,  // Has slept an average of 6 hours per day in the last three days.
  HAS_SLEPT_AN_AVERAGE_OF_7_HOURS_PER_DAY_IN_THE_LAST_THREE_DAYS =
      7,  // Has slept an average of 7 hours per day in the last three days.
  FULLY_RESTED_HAS_SLEPT_AN_AVERAGE_OF_8_HOURS_PER_DAY_IN_THE_LAST_THREE_DAYS =
      8,  // Fully rested (Has slept an average of 8 hours per day in the last
          // three days)
};

/*
 * Source: uid=224
 */
enum class TransferControlTransferType : uint8_t {
  OTHER = 0,                           // Other
  PUSH_TRANSFER_ENTITY = 1,            // Push Transfer - Entity
  AUTOMATIC_PULL_TRANSFER_ENTITY = 2,  // Automatic Pull Transfer - Entity
  NOT_USED = 3,                        // Not Used
  PUSH_TRANSFER_ENVIRONMENTAL_PROCESS =
      4,  // Push Transfer - Environmental Process
  AUTOMATIC_PULL_TRANSFER_ENVIRONMENTAL_PROCESS =
      5,                // Automatic Pull Transfer - Environmental Process
  NOT_USED = 6,         // Not Used
  CANCEL_TRANSFER = 7,  // Cancel Transfer
  MANUAL_PULL_TRANSFER_ENTITY = 8,  // Manual Pull Transfer - Entity
  MANUAL_PULL_TRANSFER_ENVIRONMENTAL_PROCESS =
      9,               // Manual Pull Transfer - Environmental Process
  REMOVE_ENTITY = 10,  // Remove Entity
};

/*
 * Source: uid=225
 */
enum class ObjectKind : uint8_t {
  OTHER = 0,                 // Other
  OBSTACLE = 1,              // Obstacle
  PREPARED_POSITION = 2,     // Prepared Position
  CULTURAL_FEATURE = 3,      // Cultural Feature
  PASSAGEWAY = 4,            // Passageway
  TACTICAL_SMOKE = 5,        // Tactical Smoke
  OBSTACLE_MARKER = 6,       // Obstacle Marker
  OBSTACLE_BREACH = 7,       // Obstacle Breach
  ENVIRONMENTAL_OBJECT = 8,  // Environmental Object
};

/*
 * Source: uid=243
 */
enum class GriddedDataFieldNumber : uint16_t {
  UNSPECIFIED = 0,  // UNSPECIFIED
};

/*
 * Source: uid=244
 */
enum class GriddedDataCoordinateSystem : uint16_t {
  RIGHT_HANDED_CARTESIAN_LOCAL_TOPOGRAPHIC_PROJECTION_EAST_NORTH_UP =
      0,  // Right handed Cartesian (local topographic projection: east, north,
          // up)
  LEFT_HANDED_CARTESIAN_LOCAL_TOPOGRAPHIC_PROJECTION_EAST_NORTH_DOWN =
      1,  // Left handed Cartesian (local topographic projection: east, north,
          // down)
  LATITUDE_LONGITUDE_HEIGHT = 2,  // Latitude, Longitude, Height
  LATITUDE_LONGITUDE_DEPTH = 3,   // Latitude, Longitude, Depth
};

/*
 * Source: uid=245
 */
enum class GriddedDataConstantGrid : uint8_t {
  CONSTANT_GRID = 0,  // Constant grid
  UPDATED_GRID = 1,   // Updated grid
};

/*
 * Source: uid=246
 */
enum class GriddedDataSampleType : uint16_t {
  NOT_SPECIFIED = 0,  // Not Specified
};

/*
 * Source: uid=247
 */
enum class GriddedDataDataRepresentation : uint16_t {
  TYPE_0 = 0,  // Type 0
  TYPE_1 = 1,  // Type 1
  TYPE_2 = 2,  // Type 2
};

/*
 * Source: uid=248
 */
enum class EnvironmentalProcessModelType : uint8_t {
  NO_STATEMENT = 0,  // No Statement
};

/*
 * Source: uid=250
 */
enum class EnvironmentalProcessRecordType : uint32_t {
  COMBIC_STATE = 256,                        // COMBIC State
  FLARE_STATE = 259,                         // Flare State
  BOUNDING_SPHERE_RECORD = 65536,            // Bounding Sphere Record
  UNIFORM_GEOMETRY_RECORD = 327680,          // Uniform Geometry Record
  POINT_RECORD_1 = 655360,                   // Point Record 1
  LINE_RECORD_1 = 786432,                    // Line Record 1
  SPHERE_RECORD_1 = 851968,                  // Sphere Record 1
  ELLIPSOID_RECORD_1 = 1048576,              // Ellipsoid Record 1
  CONE_RECORD_1 = 3145728,                   // Cone Record 1
  RECTANGULAR_VOLUME_RECORD_1 = 5242880,     // Rectangular Volume Record 1
  RECTANGULAR_VOLUME_RECORD_3 = 83886080,    // Rectangular Volume Record 3
  POINT_RECORD_2 = 167772160,                // Point Record 2
  LINE_RECORD_2 = 201326592,                 // Line Record 2
  SPHERE_RECORD_2 = 218103808,               // Sphere Record 2
  ELLIPSOID_RECORD_2 = 268435456,            // Ellipsoid Record 2
  CONE_RECORD_2 = 805306368,                 // Cone Record 2
  RECTANGULAR_VOLUME_RECORD_2 = 1342177280,  // Rectangular Volume Record 2
  GAUSSIAN_PLUME_RECORD = 1610612736,        // Gaussian Plume Record
  GAUSSIAN_PUFF_RECORD = 1879048192,         // Gaussian Puff Record
};

/*
 * Source: uid=270
 */
enum class SignalEncodingClass : uint8_t {
  ENCODED_AUDIO = 0,              // Encoded audio
  RAW_BINARY_DATA = 1,            // Raw Binary Data
  APPLICATION_SPECIFIC_DATA = 2,  // Application-Specific Data
  DATABASE_INDEX = 3,             // Database index
};

/*
 * Source: uid=271
 */
enum class SignalEncodingType : uint16_t {
  _8_BIT_MU_LAW_ITU_T_G_711 = 1,  // 8-bit mu-law (ITU-T G.711)
  CVSD_MIL_STD_188_113 = 2,       // CVSD (MIL-STD-188-113)
  ADPCM_ITU_T_G_726 = 3,          // ADPCM (ITU-T G.726)
  _16_BIT_LINEAR_PCM_2S_COMPLEMENT_BIG_ENDIAN =
      4,  // 16-bit Linear PCM 2s Complement, Big Endian
  _8_BIT_LINEAR_PCM_UNSIGNED = 5,  // 8-bit Linear PCM, Unsigned
  VQ_VECTOR_QUANTIZATION = 6,      // VQ (Vector Quantization) [DEPRECATED]
  UNAVAILABLE_FOR_USE = 7,         // (unavailable for use)
  GSM_FULL_RATE_ETSI_06_10 = 8,    // GSM Full-Rate (ETSI 06.10)
  GSM_HALF_RATE_ETSI_06_20 = 9,    // GSM Half-Rate (ETSI 06.20)
  SPEEX_NARROW_BAND = 10,          // Speex Narrow Band
  OPUS = 11,                       // Opus
  LPC_10_FIPS_PUB_137 = 12,        // LPC-10 (FIPS PUB 137)
  _16_BIT_LINEAR_PCM_2S_COMPLEMENT_LITTLE_ENDIAN =
      100,                    // 16-bit Linear PCM 2s Complement, Little Endian
  UNAVAILABLE_FOR_USE = 255,  // (unavailable for use)
};

/*
 * Source: uid=272
 */
enum class RepairGroups : uint8_t {
  GENERAL_REPAIR_CODES = 0,             // General Repair Codes
  DRIVE_TRAIN = 1,                      // Drive Train
  HULL_AIRFRAME_BODY = 2,               // Hull/Airframe/Body
  INTERFACES_WITH_ENVIRONMENT = 3,      // Interfaces with Environment
  WEAPONS = 4,                          // Weapons
  FUEL_SYSTEMS = 5,                     // Fuel Systems
  ELECTRONICS = 6,                      // Electronics
  LIFE_SUPPORT_SYSTEMS = 7,             // Life Support Systems
  HYDRAULIC_SYSTEMS_AND_ACTUATORS = 8,  // Hydraulic Systems and Actuators
  AUXILIARY_CRAFT = 9,                  // Auxiliary Craft
};

/*
 * Source: uid=273
 */
enum class EnvironmentRecordTypeGroups : uint8_t {
  STATE = 0,     // State
  GEOMETRY = 1,  // Geometry
};

/*
 * Source: uid=274
 */
enum class
    PlatformAirCivilianUltralightNonRigidWingAircraftSubcategories : uint8_t {
      HANG_GLIDER_UNPOWERED = 1,  // Hang Glider, Unpowered
      HANG_GLIDER_POWERED = 2,    // Hang Glider, Powered
      PARAGLIDER_UNPOWERED = 3,   // Paraglider, Unpowered
      PARAGLIDER_POWERED = 4,     // Paraglider, Powered
      POWERED_PARACHUTE = 5,      // Powered Parachute
    };

/*
 * Source: uid=275
 */
enum class
    PlatformAirCivilianUltralightRigidWingAircraftSubcategories : uint8_t {
      WEIGHT_SHIFT_CONTROL = 1,  // Weight-shift control
      CONTROL_SURFACE_ELEVATOR_RUDDER_AILERON_CONTROL =
          2,  // Control surface (elevator, rudder, aileron) control
    };

/*
 * Source: uid=276
 */
enum class PlatformAirCivilianGliderSubcategories : uint8_t {
  SAIL_PLANE = 1,    // Sail Plane
  MOTOR_GLIDER = 2,  // Motor Glider
};

/*
 * Source: uid=277
 */
enum class PlatformAirCivilianFixedWingAircraftSubcategories : uint8_t {
  SINGLE_PISTON_ENGINE = 11,     // Single Piston Engine
  TWIN_PISTON_ENGINE = 12,       // Twin Piston Engine
  SINGLE_ENGINE_TURBOPROP = 21,  // Single Engine Turboprop
  TWIN_ENGINE_TURBOPROP = 22,    // Twin Engine Turboprop
  FOUR_ENGINE_TURBOPROP = 24,    // Four Engine Turboprop
  TWIN_JET = 32,                 // Twin Jet
  TRI_JET = 33,                  // Tri Jet
  FOUR_ENGINE_JET = 34,          // Four Engine Jet
};

/*
 * Source: uid=278
 */
enum class PlatformAirCivilianHelicopterSubcategories : uint8_t {
  SINGLE_ROTOR_PISTON_ENGINE = 11,  // Single Rotor, Piston Engine
  SINGLE_ROTOR_TURBOSHAFT_ENGINE_CONVENTIONAL_TAIL_ROTOR =
      12,  // Single Rotor, Turboshaft Engine, Conventional Tail Rotor
  SINGLE_ROTOR_TURBOSHAFT_ENGINE_SHROUDED_TAIL_ROTOR =
      13,  // Single Rotor, Turboshaft Engine, Shrouded Tail Rotor
  SINGLE_ROTOR_TURBOSHAFT_ENGINE_NO_TAIL_ROTOR =
      14,                   // Single Rotor, Turboshaft Engine, No Tail Rotor
  TANDEM_ROTOR = 21,        // Tandem Rotor
  COAXIAL_ROTOR = 22,       // Coaxial Rotor
  INTERMESHING_ROTOR = 23,  // Intermeshing Rotor
};

/*
 * Source: uid=279
 */
enum class PlatformAirCivilianLighterThanAirBalloonSubcategories : uint8_t {
  GAS_FILLED_FREE = 1,      // Gas-filled, free
  GAS_FILLED_TETHERED = 2,  // Gas-filled, tethered
  HOT_AIR = 3,              // Hot Air
  ROZIERE_BALLOON = 4,      // Roziere Balloon
  HELIKITE = 5,             // Helikite
};

/*
 * Source: uid=280
 */
enum class PlatformAirCivilianLighterThanAirAirshipSubcategories : uint8_t {
  NON_RIGID_BLIMP = 1,  // Non-rigid (blimp)
  SEMI_RIGID = 2,       // Semi-rigid
  RIGID = 3,            // Rigid
  HYBRID = 4,           // Hybrid
};

/*
 * Source: uid=281
 */
enum class ApaParameterIndexApaStatus : uint8_t {
  DESELECTED_OFF = 0,         // Deselected/Off
  APA_VALUE_CHANGE_ONLY = 1,  // APA Value Change Only
  STATE_CHANGE = 2,           // State Change
  RECORD_ACTIVATION = 3,      // Record Activation
};

/*
 * Source: uid=282
 */
enum class SeparationVpReasonForSeparation : uint8_t {
  NO_STATEMENT = 0,              // No Statement
  ATTACHED_PART_SEPARATION = 1,  // Attached Part Separation
  SUBMUNITION_SEPARATION = 2,    // Submunition Separation
};

/*
 * Source: uid=283
 */
enum class SeparationVpPreEntityIndicator : uint8_t {
  NO_STATEMENT = 0,  // No Statement
  ENTITY_ID_EXISTED_PRIOR_TO_SEPARATION_WITHOUT_ENTITY_STATE_PDU =
      1,  // Entity ID Existed Prior to Separation without Entity State PDU
  ENTITY_ID_EXISTED_PRIOR_TO_SEPARATION_WITH_ENTITY_STATE_PDU_ISSUED =
      2,  // Entity ID Existed Prior to Separation with Entity State PDU Issued
  ENTITY_INITIALLY_CREATED_AT_SEPARATION_EVENT =
      3,  // Entity Initially Created at Separation Event
};

/*
 * Source: uid=285
 */
enum class IoActionIoWarfareType : uint16_t {
  NO_STATEMENT = 0,                     // No Statement
  ELECTRONIC_WARFARE_EW = 1,            // Electronic Warfare (EW)
  COMPUTER_NETWORK_OPERATIONS_CNO = 2,  // Computer Network Operations (CNO)
  PSYCHOLOGICAL_OPERATIONS_PSYOPS = 3,  // Psychological Operations (PSYOPS)
  MILITARY_DECEPTION_MILDEC = 4,        // Military Deception (MILDEC)
  OPERATIONS_SECURITY_OPSEC = 5,        // Operations Security (OPSEC)
  PHYSICAL_ATTACK = 6,                  // Physical Attack
};

/*
 * Source: uid=286
 */
enum class IoActionIoSimulationSource : uint16_t {
  NO_STATEMENT = 0,  // No Statement
};

/*
 * Source: uid=287
 */
enum class IoActionIoActionType : uint16_t {
  NO_STATEMENT = 0,  // No Statement
  IO_ATTACK_PROFILE_DATA_PARAMETRICS =
      1,                           // IO Attack - Profile Data (Parametrics)
  IO_ATTACK_COMPUTED_EFFECTS = 2,  // IO Attack - Computed Effects
  INTENT_BASED_EW = 3,             // Intent-Based-EW
  INTENT_BASED_EW_COMPUTED_EFFECTS = 4,  // Intent-Based-EW - Computed Effects
};

/*
 * Source: uid=288
 */
enum class IoActionIoActionPhase : uint16_t {
  NO_STATEMENT = 0,          // No Statement
  START_ATTACK_PROFILE = 1,  // Start Attack Profile
  END_ATTACK_PROFILE = 2,    // End Attack Profile
  CONTINUE_ATTACK_PROFILE_WITH_CHANGES =
      3,                     // Continue Attack Profile with Changes
  START_ATTACK_EFFECTS = 4,  // Start Attack Effects
  END_ATTACKED_EFFECTS = 5,  // End Attacked Effects
  CONTINUE_ATTACK_EFFECTS_WITH_CHANGES =
      6,  // Continue Attack Effects with Changes
};

/*
 * Source: uid=289
 */
enum class IoReportIoReportType : uint8_t {
  NO_STATEMENT = 0,    // No Statement
  INITIAL_REPORT = 1,  // Initial Report
  UPDATE_REPORT = 2,   // Update Report
  FINAL_REPORT = 3,    // Final Report
};

/*
 * Source: uid=290
 */
enum class IoEffectsRecordIoStatus : uint8_t {
  NO_STATEMENT = 0,                    // No Statement
  EFFECT_ON_SENDER = 1,                // Effect on Sender
  EFFECT_ON_RECEIVER = 2,              // Effect on Receiver
  EFFECT_ON_SENDER_AND_RECEIVER = 3,   // Effect on Sender and Receiver
  EFFECT_ON_MESSAGE = 4,               // Effect on Message
  EFFECT_ON_SENDER_AND_MESSAGE = 5,    // Effect on Sender and Message
  EFFECT_ON_RECEIVER_AND_MESSAGE = 6,  // Effect on Receiver and Message
  EFFECT_ON_SENDER_RECEIVER_AND_MESSAGE =
      7,  // Effect on Sender, Receiver, and Message
};

/*
 * Source: uid=291
 */
enum class IoEffectsRecordIoLinkType : uint8_t {
  NO_STATEMENT = 0,   // No Statement
  LOGICAL_LINK = 1,   // Logical Link
  PHYSICAL_NODE = 2,  // Physical Node
  PHYSICAL_LINK = 3,  // Physical Link
};

/*
 * Source: uid=292
 */
enum class IoEffectsRecordIoEffect : uint8_t {
  NO_STATEMENT = 0,        // No Statement
  DENIAL = 1,              // Denial
  DEGRADATION = 2,         // Degradation
  DISRUPTION = 3,          // Disruption
  TERMINATE_EFFECT = 255,  // Terminate Effect
};

/*
 * Source: uid=293
 */
enum class IoEffectsRecordIoProcess : uint16_t {
  NO_STATEMENT = 0,  // No Statement
};

/*
 * Source: uid=294
 */
enum class IoCommsNodeRecordCommsNodeType : uint8_t {
  NO_STATEMENT = 0,             // No Statement
  SENDER_NODE_ID = 1,           // Sender Node ID
  RECEIVER_NODE_ID = 2,         // Receiver Node ID
  SENDER_RECEIVER_NODE_ID = 3,  // Sender/Receiver Node ID
};

/*
 * Source: uid=295
 */
enum class DisAttributeActionCode : uint8_t {
  NO_STATEMENT = 0,  // No Statement
};

/*
 * Source: uid=296
 */
enum class DrParametersType : uint8_t {
  NONE = 0,  // None
  LOCAL_EULER_ANGLES_YAW_PITCH_ROLL =
      1,                             // Local Euler Angles (Yaw, Pitch, Roll)
  WORLD_ORIENTATION_QUATERNION = 2,  // World Orientation Quaternion
};

/*
 * Source: uid=297
 */
enum class HighFidelityHaveQuickTodTransmitIndicator : uint8_t {
  NO_TOD_IS_BEING_TRANSMITTED = 0,   // No TOD Is Being Transmitted
  TOD_TRANSMISSION_IN_PROGRESS = 1,  // TOD Transmission in Progress
};

/*
 * Source: uid=298
 */
enum class NetIdRecordMode : uint8_t {
  A_HAVE_QUICK_I_OR_HAVE_QUICK_II_COMBAT =
      1,                // A - HAVE QUICK I or HAVE QUICK II COMBAT
  B_SATURN_COMBAT = 2,  // B - SATURN COMBAT
  T_TRAINING = 3,       // T - TRAINING
};

/*
 * Source: uid=299
 */
enum class NetIdRecordFrequencyTable : uint8_t {
  HQ_I_OPERATIONS = 0,                   // HQ I Operations
  HQII_NATO_EUROPE_AREA_OPERATIONS = 1,  // HQII - NATO/Europe Area Operations
  HQII_NON_NATO_EUROPE_AREA_OPERATIONS =
      2,                  // HQII - Non-NATO/Europe Area Operations
  SATURN_OPERATIONS = 3,  // SATURN Operations
};

/*
 * Source: uid=300
 */
enum class EeAttributeStateIndicator : uint8_t {
  HEARTBEAT_UPDATE = 0,  // Heartbeat Update
  CHANGED_DATA = 1,      // Changed Data
  HAS_CEASED = 2,        // Has Ceased
};

/*
 * Source: uid=301
 */
enum class DisPduStatusTransferredEntityIndicatorTei : uint8_t {
  NO_DIFFERENCE = 0,  // No Difference
  DIFFERENCE = 1,     // Difference
};

/*
 * Source: uid=302
 */
enum class LvcIndicator : uint8_t {
  NO_STATEMENT = 0,  // No Statement
  LIVE = 1,          // Live
  VIRTUAL = 2,       // Virtual
  CONSTRUCTIVE = 3,  // Constructive
};

/*
 * Source: uid=303
 */
enum class DisPduStatusCoupledExtensionIndicatorCei : uint8_t {
  NOT_COUPLED = 0,  // Not Coupled
  COUPLED = 1,      // Coupled
};

/*
 * Source: uid=304
 */
enum class DisPduStatusFireTypeIndicatorFti : uint8_t {
  MUNITION = 0,    // Munition
  EXPENDABLE = 1,  // Expendable
};

/*
 * Source: uid=305
 */
enum class DisPduStatusDetonationTypeIndicatorDti : uint8_t {
  MUNITION = 0,                // Munition
  EXPENDABLE = 1,              // Expendable
  NON_MUNITION_EXPLOSION = 2,  // Non-munition Explosion
};

/*
 * Source: uid=306
 */
enum class RadioAttachedIndicator : uint8_t {
  NO_STATEMENT = 0,  // No Statement
  UNATTACHED = 1,    // Unattached
  ATTACHED = 2,      // Attached
};

/*
 * Source: uid=307
 */
enum class DisPduStatusIntercomAttachedIndicatorIai : uint8_t {
  NO_STATEMENT = 0,  // No Statement
  UNATTACHED = 1,    // Unattached
  ATTACHED = 2,      // Attached
};

/*
 * Source: uid=308
 */
enum class DisPduStatusIffSimulationModeIsm : uint8_t {
  REGENERATION = 0,  // Regeneration
  INTERACTIVE = 1,   // Interactive
};

/*
 * Source: uid=309
 */
enum class ExplosiveMaterialGroups : uint8_t {
  GENERAL = 0,                        // General
  LIQUID_AVIATION_MISSILE_FUELS = 1,  // Liquid - Aviation/Missile Fuels
  LIQUID_OTHER_FUELS = 2,             // Liquid - Other Fuels
  LIQUID_EXPLOSIVE_MATERIAL = 3,      // Liquid Explosive Material
  SOLID = 4,                          // Solid
  GASEOUS = 5,                        // Gaseous
  DUST_MATERIAL = 6,                  // Dust Material
};

/*
 * Source: uid=310
 */
enum class ExplosiveMaterialCategories : uint16_t {
  NO_STATEMENT = 0,           // No Statement
  AVGAS_AVIATION_GAS = 10,    // AVGAS (Aviation Gas)
  JET_FUEL_UNSPECIFIED = 11,  // Jet Fuel (Unspecified)
  JP_4_F_40_JET_B = 12,       // JP-4 (F-40/JET B)
  JP_5_F_44_JET_A = 13,       // JP-5 (F-44/JET A)
  JP_7 = 14,                  // JP-7
  JP_8_F_34_JET_A_1 = 15,     // JP-8 (F-34/JET A-1)
  JP_10_MISSILE_FUEL = 16,    // JP-10 Missile Fuel
  JPTS = 17,                  // JPTS
  JET_A = 18,                 // Jet A
  JET_A_1 = 19,               // Jet A-1
  JET_B = 20,                 // Jet B
  JET_BIOFUEL = 21,           // Jet Biofuel
  GASOLINE_PETROL_UNSPECIFIED_OCTANE =
      151,                              // Gasoline/Petrol (Unspecified Octane)
  DIESEL_FUEL_UNSPECIFIED_GRADE = 152,  // Diesel Fuel (Unspecified Grade)
  ETHANOL = 153,                        // Ethanol
  E85_ETHANOL = 154,                    // E85 Ethanol
  FUEL_OIL = 155,                       // Fuel Oil
  KEROSENE = 156,                       // Kerosene
  CRUDE_OIL_UNSPECIFIED = 157,          // Crude Oil (Unspecified)
  LIGHT_CRUDE_OIL = 158,                // Light Crude Oil
  LIQUID_PETROLEUM_GAS_LPG = 159,       // Liquid Petroleum Gas (LPG)
  RP_1_ROCKET_FUEL = 160,               // RP-1 Rocket Fuel
  LH_2_ROCKET_FUEL = 161,               // LH-2 Rocket Fuel
  LOX_ROCKET_FUEL = 162,                // LOX Rocket Fuel
  ALCOHOL = 164,                        // Alcohol
  HYDROGEN_LIQUID = 166,                // Hydrogen (Liquid)
  NITROGLYCERIN_NG = 301,               // Nitroglycerin (NG)
  ANFO = 302,                           // ANFO
  DYNAMITE = 451,                       // Dynamite
  TNT = 452,                            // TNT
  RDX = 453,                            // RDX
  PETN = 454,                           // PETN
  HMX = 455,                            // HMX
  C_4 = 456,                            // C-4
  COMPOSITION_C_4 = 457,                // Composition C-4
  NATURAL_GAS_NG = 601,                 // Natural Gas (NG)
  BUTANE = 602,                         // Butane
  PROPANE = 603,                        // Propane
  HELIUM = 604,                         // Helium
  HYDROGEN_GASEOUS = 605,               // Hydrogen (Gaseous)
  DUST_UNSPECIFIED_TYPE = 801,          // Dust (Unspecified Type)
  GRAIN_DUST = 802,                     // Grain Dust
  FLOUR_DUST = 803,                     // Flour Dust
  SUGAR_DUST = 804,                     // Sugar Dust
};

/*
 * Source: uid=311
 */
enum class DePrecisionAimpointBeamSpotType : uint8_t {
  OTHER = 0,     // Other
  GAUSSIAN = 1,  // Gaussian
  TOP_HAT = 2,   // Top Hat
};

/*
 * Source: uid=312
 */
enum class DeFirePulseShape : uint8_t {
  OTHER = 0,            // Other
  SQUARE_WAVE = 1,      // Square Wave
  CONTINUOUS_WAVE = 2,  // Continuous Wave
  GAUSSIAN = 3,         // Gaussian
};

/*
 * Source: uid=314
 */
enum class EntityDamageStatusComponentIdentification : uint8_t {
  ENTITY_CENTER_NO_SPECIFIC_COMPONENT =
      0,                             // Entity Center (No Specific Component)
  ENTITY_STRUCTURE = 1,              // Entity Structure
  CONTROL_SYSTEM = 2,                // Control System
  CONTROL_SURFACE = 3,               // Control Surface
  ENGINE_PROPULSION_SYSTEM = 4,      // Engine / Propulsion System
  CREW_MEMBER = 5,                   // Crew Member
  FUSE = 6,                          // Fuse
  ACQUISITION_SENSOR = 7,            // Acquisition Sensor
  TRACKING_SENSOR = 8,               // Tracking Sensor
  FUEL_TANK_SOLID_ROCKET_MOTOR = 9,  // Fuel Tank / Solid Rocket Motor
};

/*
 * Source: uid=315
 */
enum class DeDamageDescriptionComponentDamageStatus : uint8_t {
  NO_DAMAGE = 0,      // No Damage
  MINOR_DAMAGE = 1,   // Minor Damage
  MEDIUM_DAMAGE = 2,  // Medium Damage
  MAJOR_DAMAGE = 3,   // Major Damage
  DESTROYED = 4,      // Destroyed
};

/*
 * Source: uid=316
 */
enum class DeDamageDescriptionComponentVisualSmokeColor : uint8_t {
  NO_SMOKE = 0,  // No Smoke
  WHITE = 1,     // White
  GRAY = 2,      // Gray
  BLACK = 3,     // Black
};

/*
 * Source: uid=318
 */
enum class BeamStatusBeamState : uint8_t {
  ACTIVE = 0,       // Active
  DEACTIVATED = 1,  // Deactivated
};

/*
 * Source: uid=319
 */
enum class EntityAssociationAssociationStatus : uint8_t {
  NOT_SPECIFIED = 0,  // Not Specified
  PHYSICAL_ASSOCIATION_GENERAL_OBJECT_1 =
      1,  // Physical Association (General/Object 1)
  FUNCTIONAL_ASSOCIATION_GENERAL = 2,   // Functional Association (General)
  ASSOCIATION_BROKEN = 3,               // Association Broken
  PHYSICAL_ASSOCIATION_OBJECT_2 = 4,    // Physical Association (Object 2)
  FUNCTIONAL_ASSOCIATION_OBJECT_1 = 5,  // Functional Association (Object 1)
  FUNCTIONAL_ASSOCIATION_OBJECT_2 = 6,  // Functional Association (Object 2)
};

/*
 * Source: uid=320
 */
enum class EntityVpRecordChangeIndicator : uint8_t {
  INITIAL_REPORT_OR_NO_CHANGE_SINCE_LAST_ISSUANCE =
      0,  // Initial Report or No Change Since Last Issuance
  CHANGE_SINCE_LAST_ISSUANCE = 1,  // Change Since Last Issuance
};

/*
 * Source: uid=321
 */
enum class EntityAssociationGroupMemberType : uint8_t {
  NOT_PART_OF_A_GROUP = 0,  // Not Part of a Group
  GROUP_LEADER = 1,         // Group Leader
  GROUP_MEMBER = 2,         // Group Member
  FORMATION_LEADER = 3,     // Formation Leader
  FORMATION_MEMBER = 4,     // Formation Member
  CONVOY_LEADER = 5,        // Convoy Leader
  CONVOY_MEMBER = 6,        // Convoy Member
};

/*
 * Source: uid=322
 */
enum class PhysicalAssociationTypeGroups : uint8_t {
  NOT_SPECIFIED = 0,             // Not Specified
  TOWED_MOUNTED_SLING_LOAD = 1,  // Towed / Mounted / Sling Load
  RESTRAINED = 2,                // Restrained
  MISSION = 3,                   // Mission
  OTHER_CONNECTIONS = 4,         // Other Connections
};

/*
 * Source: uid=323
 */
enum class EntityAssociationPhysicalAssociationType : uint8_t {
  NOT_SPECIFIED = 0,  // Not Specified
  TOWED_IN_AIR_SINGLE_HOOK_NOT_SPECIFIED =
      1,                       // Towed in Air (Single Hook, Not Specified)
  TOWED_ON_LAND = 2,           // Towed on Land
  TOWED_ON_WATER_SURFACE = 3,  // Towed on Water Surface
  TOWED_UNDERWATER = 4,        // Towed Underwater
  MOUNTED_ATTACHED = 5,        // Mounted Attached
  MOUNTED_UNATTACHED_AND_UNSUPPORTED = 6,  // Mounted Unattached and Unsupported
  MOUNTED_UNATTACHED_AND_SUPPORTED = 7,    // Mounted Unattached and Supported
  TOWED_IN_AIR_CENTER_HOOK = 8,            // Towed in Air (Center Hook)
  TOWED_IN_AIR_FORWARD_HOOK = 9,           // Towed in Air (Forward Hook)
  TOWED_IN_AIR_AFT_HOOK = 10,              // Towed in Air (Aft Hook)
  TOWED_IN_AIR_TANDEM_HOOK_FORE_AND_AFT =
      11,  // Towed in Air (Tandem Hook - Fore and Aft)
  TOWED_IN_AIR_MISMANAGED_TANDEM_FORE_AND_CENTER =
      12,  // Towed in Air (Mismanaged Tandem - Fore and Center)
  TOWED_IN_AIR_MISMANAGED_TANDEM_CENTER_AND_AFT =
      13,  // Towed in Air (Mismanaged Tandem - Center and Aft)
  TOWED_IN_AIR_ALL_HOOKS = 14,           // Towed in Air (All Hooks)
  HOISTED = 15,                          // Hoisted
  RESTRAINED_TO_A_LIFEFORM = 30,         // Restrained to a Lifeform
  RESTRAINED_TO_A_PLATFORM = 31,         // Restrained to a Platform
  RESTRAINED_TO_AN_OBJECT = 32,          // Restrained to an Object
  REFUELING_OPERATION = 61,              // Refueling Operation
  SEARCH_AND_RESCUE_BASKET = 62,         // Search and Rescue Basket
  SEARCH_AND_RESCUE_RESCUE_COLLAR = 63,  // Search and Rescue Rescue Collar
  ENGAGEMENT_OBJECT_2_IS_BEING_ENGAGED =
      64,  // Engagement/Object 2 is Being Engaged
  RETURN_TO_BASE_OBJECT_2_IS_THE_DESTINATION_OBJECT =
      65,  // Return To Base/Object 2 is the Destination Object
  LINE_BETWEEN_COMMUNICATION_TOWERS = 90,  // Line between Communication Towers
  LINE_BETWEEN_POWER_TOWERS = 91,          // Line Between Power Towers
  INDOORS = 92,                            // Indoors
  TOP_SURFACE = 93,                        // Top Surface
};

/*
 * Source: uid=324
 */
enum class EntityAssociationPhysicalConnectionType : uint8_t {
  NOT_SPECIFIED = 0,                 // Not Specified
  ATTACHED_DIRECTLY_TO_SURFACE = 1,  // Attached Directly to Surface
  CABLE_WIRE = 2,                    // Cable Wire
  ROPE = 3,                          // Rope
  CHAIN = 4,                         // Chain
  POWER_LINE = 5,                    // Power Line
  TELEPHONE_LINE = 6,                // Telephone Line
  CABLE_LINE = 7,                    // Cable Line
  REFUELING_DROGUE = 8,              // Refueling Drogue
  REFUELING_BOOM = 9,                // Refueling Boom
  HANDCUFFS = 10,                    // Handcuffs
  IN_CONTACT_WITH = 11,              // In Contact With
  FAST_ROPE = 12,                    // Fast Rope
};

/*
 * Source: uid=325
 */
enum class SensorRecordSensorTypeOtherActiveSensors : uint16_t {
  UNDEFINED = 0,  // Undefined
};

/*
 * Source: uid=326
 */
enum class SensorRecordSensorTypePassiveSensors : uint16_t {
  ALR_400 = 60000,                 // ALR-400
  AN_AAR_47 = 60001,               // AN/AAR-47
  AN_AAR_50 = 60002,               // AN/AAR-50
  AN_AAR_54 = 60003,               // AN/AAR-54
  AN_AAR_56 = 60004,               // AN/AAR-56
  AN_AAR_57 = 60005,               // AN/AAR-57
  AN_ALQ_142 = 60006,              // AN/ALQ-142
  AN_ALR_45 = 60007,               // AN/ALR-45
  AN_ALR_46 = 60008,               // AN/ALR-46
  AN_ALR_56 = 60009,               // AN/ALR-56
  AN_ALR_59 = 60010,               // AN/ALR-59
  AN_ALR_64 = 60011,               // AN/ALR-64
  AN_ALR_66 = 60012,               // AN/ALR-66
  AN_ALR_67 = 60013,               // AN/ALR-67
  AN_ALR_69 = 60014,               // AN/ALR-69
  AN_ALR_73 = 60015,               // AN/ALR-73
  AN_ALR_76 = 60016,               // AN/ALR-76
  AN_ALR_91 = 60017,               // AN/ALR-91
  AN_ALR_93 = 60018,               // AN/ALR-93
  AN_ALR_94 = 60019,               // AN/ALR-94
  AN_ALR_801 = 60020,              // AN/ALR-801
  AN_APR_39 = 60021,               // AN/APR-39
  AN_AYR_2 = 60022,                // AN/AYR-2
  ARI_18223 = 60023,               // ARI 18223
  BOW_21 = 60024,                  // BOW-21
  CHAPARRAL_IRST = 60025,          // Chaparral IRST
  VALUE_60026 = 60026,             //
  VALUE_60027 = 60027,             //
  VALUE_60028 = 60028,             //
  VALUE_60029 = 60029,             //
  VALUE_60030 = 60030,             //
  VALUE_60031 = 60031,             //
  KJ_200 = 60032,                  // KJ-200
  KJ_8602 = 60033,                 // KJ-8602
  L_150_PASTEL = 60034,            // L-150 Pastel
  SERVAL = 60035,                  // Serval
  SHERLOC = 60036,                 // Sherloc
  SHERLOCVF = 60037,               // Sherlocvf
  SIRENA_2 = 60038,                // Sirena-2
  SIRENA_3 = 60039,                // Sirena-3
  SIRENA_3M = 60040,               // Sirena-3M
  SKY_GUARDIAN = 60041,            // Sky Guardian
  SPO_15 = 60042,                  // SPO-15
  SPS_200 = 60043,                 // SPS-200
  TARANG = 60044,                  // Tarang
  AN_AAQ_29A = 60045,              // AN/AAQ-29A
  _101KS_U_MAW = 60046,            // 101KS-U MAW
  VALUE_60047 = 60047,             //
  VALUE_60048 = 60048,             //
  AN_AAQ_13_LANTIRN_FLIR = 60049,  // AN/AAQ-13 LANTIRN FLIR
  AN_ALR_74 = 60050,               // AN/ALR-74
  AN_ALR_90 = 60051,               // AN/ALR-90
  AN_APR_48 = 60052,               // AN/APR-48
  ELT_156X_V = 60053,              // ELT-156X(V)
  _101KS_V = 60054,                // 101KS-V
  TP_23ML = 60055,                 // TP-23ML
  VALUE_60056 = 60056,             //
  VALUE_60057 = 60057,             //
  VALUE_60058 = 60058,             //
  VALUE_60059 = 60059,             //
  L_136_MAK = 60060,               // L-136 Mak
  VALUE_60061 = 60061,             //
  VALUE_60062 = 60062,             //
  VALUE_60063 = 60063,             //
  VALUE_60064 = 60064,             //
  VALUE_60065 = 60065,             //
  TORNADO_RWR = 60066,             // Tornado RWR
  TOES_521_FLIR = 60067,           // TOES-521 FLIR
  VALUE_60068 = 60068,             //
};

/*
 * Source: uid=327
 */
enum class MunitionExpendableStatus : uint8_t {
  OTHER = 0,      // Other
  READY = 1,      // Ready
  INVENTORY = 2,  // Inventory
};

/*
 * Source: uid=328
 */
enum class FuelMeasurementUnits : uint8_t {
  OTHER = 0,     // Other
  LITER = 1,     // Liter
  KILOGRAM = 2,  // Kilogram
};

/*
 * Source: uid=329
 */
enum class FuelLocation : uint8_t {
  OTHER = 0,  // Other
};

/*
 * Source: uid=330
 */
enum class EntityAssociationAssociationType : uint8_t {
  OTHER = 0,                   // Other
  TARGET_ENTITY = 1,           // Target Entity
  TARGET_LOCATION = 2,         // Target Location
  HOME_BASE_LOCATION = 3,      // Home Base Location
  CAP_POINT_LOCATION = 4,      // CAP Point Location
  FLIGHT_LEADER = 5,           // Flight Leader
  FLIGHT_MEMBER = 6,           // Flight Member
  IP_POINT = 7,                // IP Point
  RENDEZVOUS_POINT = 8,        // Rendezvous Point
  ON_STATION_LOCATION = 9,     // On-Station Location
  LANDING_ZONE_LOCATION = 10,  // Landing Zone Location
  DOWNED_PILOT = 11,           // Downed Pilot
  TANKER_ENTITY_THAT_IS_CURRENTLY_REFUELING_THE_TRANSFERRED_ENTITY =
      12,  // Tanker Entity that Is Currently Refueling the Transferred Entity
  TANKER_ENTITY_THE_TRANSFERRED_ENTITY_IS_HEADED_TOWARDS_TO_REFUEL =
      13,  // Tanker Entity the Transferred Entity Is Headed towards to Refuel
  ENTITY_HEADED_TOWARDS_TO_JOIN_UP_WITH =
      14,  // Entity Headed towards to Join Up With
};

/*
 * Source: uid=331
 */
enum class SensorOnOffStatus : uint8_t {
  OFF = 0,  // Off
  ON = 1,   // On
};

/*
 * Source: uid=332
 */
enum class OwnershipStatus : uint8_t {
  OTHER = 0,                     // Other
  NEW_OWNER = 1,                 // New Owner
  OWNERSHIP_QUERY_RESPONSE = 2,  // Ownership Query Response
  OWNERSHIP_CONFLICT = 3,        // Ownership Conflict
  LOCAL_ENTITY_CANCELLED_AUTO_RESOLVE_CONFLICT =
      4,  // Local Entity Cancelled - Auto Resolve Conflict
  LOCAL_ENTITY_CANCELLED_MANUAL_RESOLVE_CONFLICT =
      5,  // Local Entity Cancelled - Manual Resolve Conflict
  LOCAL_ENTITY_CANCELLED_REMOVE_ENTITY_TCR_RECEIVED =
      6,  // Local Entity Cancelled - Remove Entity TCR Received
};

/*
 * Source: uid=333
 */
enum class RecordREventType : uint16_t {
  OTHER = 0,  // Other
};

/*
 * Source: uid=334
 */
enum class RecordQueryREventType : uint16_t {
  PERIODIC = 0,                    // Periodic
  INTERNAL_ENTITY_STATE_DATA = 1,  // Internal Entity State Data
};

/*
 * Source: uid=335
 */
enum class UaPropulsionPlantConfigurationConfiguration : uint8_t {
  OTHER = 0,              // Other
  DIESEL_ELECTRIC = 1,    // Diesel/Electric
  DIESEL = 2,             // Diesel
  BATTERY = 3,            // Battery
  TURBINE_REDUCTION = 4,  // Turbine Reduction
  STEAM = 6,              // Steam
  GAS_TURBINE = 7,        // Gas Turbine
};

/*
 * Source: uid=336
 */
enum class MinefieldStateProtocolMode : uint8_t {
  HEARTBEAT_MODE = 0,  // Heartbeat Mode
  QRP_MODE = 1,        // QRP Mode
};

/*
 * Source: uid=337
 */
enum class TransponderInterrogatorIndicator : uint8_t {
  TRANSPONDER = 0,   // Transponder
  INTERROGATOR = 1,  // Interrogator
};

/*
 * Source: uid=338
 */
enum class IffSimulationMode : uint8_t {
  REGENERATION = 0,  // Regeneration
  INTERACTIVE = 1,   // Interactive
};

/*
 * Source: uid=339
 */
enum class IffApplicableModes : uint8_t {
  NO_APPLICABLE_MODES_DATA = 0,  // No Applicable Modes Data
  ALL_MODES = 1,                 // All Modes
};

/*
 * Source: uid=340
 */
enum class ModeCAltitudeIndicator : uint8_t {
  POSITIVE_ALTITUDE_ABOVE_MSL = 0,  // Positive Altitude Above MSL
  NEGATIVE_ALTITUDE_BELOW_MSL_USE_ALTERNATE_MODE_C_ALTITUDE =
      1,  // Negative Altitude Below MSL/Use Alternate Mode C Altitude
};

/*
 * Source: uid=341
 */
enum class TcasAcasBasicAdvancedIndicator : uint8_t {
  BASIC = 0,     // Basic
  ADVANCED = 1,  // Advanced
};

/*
 * Source: uid=342
 */
enum class TcasAcasIndicator : uint8_t {
  TCAS = 0,  // TCAS
  ACAS = 1,  // ACAS
};

/*
 * Source: uid=343
 */
enum class TcasAcasSoftwareVersion : uint8_t {
  NO_STATEMENT = 0,  // No Statement
  _6_0_2 = 1,        // 6.0.2
  _7_0 = 2,          // 7.0
};

/*
 * Source: uid=344
 */
enum class TcasAcasType : uint8_t {
  NO_STATEMENT = 0,  // No Statement
  ACAS_I = 1,        // ACAS I
  ACAS_II = 2,       // ACAS II
};

/*
 * Source: uid=345
 */
enum class TcasIIiType : uint8_t {
  TCAS_I_OR_NO_STATEMENT = 0,  // TCAS I (or No Statement)
  TCAS_II = 1,                 // TCAS II
};

/*
 * Source: uid=346
 */
enum class Mode5IffMission : uint8_t {
  NO_STATEMENT = 0,         // No Statement
  SURVEILLANCE_SHORAD = 1,  // Surveillance SHORAD
  SHORAD_ASSOCIATED_WITH_A_WEAPONS_SYSTEM =
      2,              // SHORAD associated with a Weapons System
  WEAPON_SYSTEM = 3,  // Weapon System
  AIRBORNE_AND_SURFACE_SHIP_SURVEILLANCE_PLATFORMS =
      4,  // Airborne and Surface (Ship) Surveillance Platforms
  AIRBORNE_AND_SURFACE_SHIP_WEAPONS_PLATFORMS =
      5,                 // Airborne and Surface (Ship) Weapons Platforms
  GROUND_TO_GROUND = 6,  // Ground-to-Ground
};

/*
 * Source: uid=347
 */
enum class ModeSInterrogatorStatusTransmitState : uint8_t {
  NO_STATEMENT = 0,          // No Statement
  ROLL_CALL = 1,             // Roll-Call
  ALL_CALL = 2,              // All Call
  LOCKOUT_OVERRIDE = 3,      // Lockout Override
  TEMPORARY_LOCKOUT = 4,     // Temporary Lockout
  INTERMITTENT_LOCKOUT = 5,  // Intermittent Lockout
};

/*
 * Source: uid=348
 */
enum class ModeSInterrogatorIdentifierIcType : uint8_t {
  II = 0,  // II
  SI = 1,  // SI
};

/*
 * Source: uid=349
 */
enum class IslsAntennaType : uint8_t {
  NO_STATEMENT = 0,       // No Statement
  MONOPULSE_ANTENNA = 1,  // Monopulse Antenna
};

/*
 * Source: uid=350
 */
enum class Mode5Reply : uint8_t {
  NO_RESPONSE = 0,       // No Response
  VALID = 1,             // Valid
  INVALID = 2,           // Invalid
  UNABLE_TO_VERIFY = 3,  // Unable to Verify
};

/*
 * Source: uid=351
 */
enum class AntennaSelection : uint8_t {
  NO_STATEMENT = 0,  // No Statement
  TOP = 1,           // Top
  BOTTOM = 2,        // Bottom
  DIVERSITY = 3,     // Diversity
};

/*
 * Source: uid=352
 */
enum class Mode5SquitterType : uint8_t {
  NOT_CAPABLE = 0,  // Not Capable
  SHORT = 1,        // Short
  EXTENDED = 2,     // Extended
};

/*
 * Source: uid=353
 */
enum class Level2SquitterStatus : uint8_t {
  DISABLED = 0,  // Disabled
  ENABLED = 1,   // Enabled
};

/*
 * Source: uid=354
 */
enum class ModeSSquitterType : uint8_t {
  NOT_CAPABLE = 0,  // Not Capable
  ACQUISITION = 1,  // Acquisition
  EXTENDED = 2,     // Extended
  SHORT = 3,        // Short
};

/*
 * Source: uid=355
 */
enum class ModeSSquitterRecordSource : uint8_t {
  LAYER_4_IFF_DATA_RECORDS = 0,       // Layer 4 IFF Data Records
  LAYER_5_GICB_IFF_DATA_RECORDS = 1,  // Layer 5 GICB IFF Data Records
};

/*
 * Source: uid=356
 */
enum class AircraftPresentDomain : uint8_t {
  NO_STATEMENT = 0,       // No Statement
  AIRBORNE = 1,           // Airborne
  ON_GROUND_SURFACE = 2,  // On Ground/Surface
};

/*
 * Source: uid=357
 */
enum class AircraftIdentificationType : uint8_t {
  NO_STATEMENT = 0,   // No Statement
  FLIGHT_NUMBER = 1,  // Flight Number
  TAIL_NUMBER = 2,    // Tail Number
};

/*
 * Source: uid=358
 */
enum class CapabilityReport : uint8_t {
  NO_COMMUNICATIONS_CAPABILITY_CA = 0,  // No Communications Capability (CA)
  RESERVED = 1,                         // Reserved
  RESERVED = 2,                         // Reserved
  RESERVED = 3,                         // Reserved
  SIGNIFIES_AT_LEAST_COMM_A_AND_COMM_B_CAPABILITY_AND_ABILITY_TO_SET_CA_CODE_7_AND_ON_THE_GROUND =
      4,  // Signifies at Least Comm-A and Comm-B Capability and Ability to Set
          // CA Code 7 and on the Ground
  SIGNIFIES_AT_LEAST_COMM_A_AND_COMM_B_CAPABILITY_AND_ABILITY_TO_SET_CA_CODE_7_AND_AIRBORNE =
      5,  // Signifies at Least Comm-A and Comm-B capability and Ability to Set
          // CA Code 7 and Airborne
  SIGNIFIES_AT_LEAST_COMM_A_AND_COMM_B_CAPABILITY_AND_ABILITY_TO_SET_CA_CODE_7_AND_EITHER_AIRBORNE_OR_ON_THE_GROUND =
      6,  // Signifies at Least Comm-A and Comm-B capability and Ability to Set
          // CA Code 7 and Either Airborne or on the Ground
  SIGNIFIES_THE_DOWNLINK_REQUEST_DR_FIELD_IS_NOT_EQUAL_TO_0_AND_THE_FLIGHT_STATUS_FS_FIELD_EQUALS_2_3_4_OR_5_AND_EITHER_AIRBORNE_OR_ON_THE_GROUND =
      7,  // Signifies the Downlink Request (DR) Field Is Not Equal To 0 and The
          // Flight Status (FS) Field Equals 2, 3, 4 or 5, and Either Airborne
          // or on the Ground
  NO_STATEMENT = 255,  // No Statement
};

/*
 * Source: uid=359
 */
enum class NavigationSource : uint8_t {
  NO_STATEMENT = 0,  // No Statement
  GPS = 1,           // GPS
  INS = 2,           // INS
  INS_GPS = 3,       // INS/GPS
};

/*
 * Source: uid=360
 */
enum class IffDataRecordAvailable : uint8_t {
  COMPUTE_LOCALLY = 0,            // Compute Locally
  IFF_DATA_RECORD_AVAILABLE = 1,  // IFF Data Record Available
};

/*
 * Source: uid=361
 */
enum class Mode5SAltitudeResolution : uint8_t {
  _100_FOOT = 0,  // 100-foot
  _25_FOOT = 1,   // 25-foot
};

/*
 * Source: uid=362
 */
enum class DeltaMode5SAltitudePositiveNegativeIndicator : uint8_t {
  POSITIVE = 0,  // Positive
  NEGATIVE = 1,  // Negative
};

/*
 * Source: uid=363
 */
enum class FormatType : uint8_t {
  NO_DATA = 0,                       // No Data
  IDENTITY_FORMAT = 4,               // Identity Format
  SURFACE_FORMAT_5_METER_RNP = 5,    // Surface Format, 5 meter RNP
  SURFACE_FORMAT_100_METER_RNP = 6,  // Surface Format, 100 meter RNP
  AIRBORNE_FORMAT_5_METER_RNP_25_FOOT_BAROMETRIC_ALTITUDE =
      7,  // Airborne Format, 5 meter RNP, 25-foot Barometric Altitude
  AIRBORNE_FORMAT_100_METER_RNP_25_FOOT_BAROMETRIC_ALTITUDE =
      8,  // Airborne Format, 100 meter RNP, 25-foot Barometric Altitude
  AIRBORNE_FORMAT_0_25_NMI_RNP_25_FOOT_BAROMETRIC_ALTITUDE =
      9,  // Airborne Format, 0.25 nmi RNP, 25-foot Barometric Altitude
  AIRBORNE_FORMAT_1_0_NMI_RNP_25_FOOT_BAROMETRIC_ALTITUDE =
      10,  // Airborne Format, 1.0 nmi RNP, 25-foot Barometric Altitude
  AIRBORNE_FORMAT_5_METER_RNP_100_FOOT_BAROMETRIC_ALTITUDE =
      11,  // Airborne Format, 5 meter RNP, 100-foot Barometric Altitude
  AIRBORNE_FORMAT_100_METER_RNP_100_FOOT_BAROMETRIC_ALTITUDE =
      12,  // Airborne Format, 100 meter RNP, 100-foot Barometric Altitude
  AIRBORNE_FORMAT_0_25_NMI_RNP_100_FOOT_BAROMETRIC_ALTITUDE =
      13,  // Airborne Format, 0.25 nmi RNP, 100-foot Barometric Altitude
  AIRBORNE_FORMAT_1_0_NMI_RNP_100_FOOT_BAROMETRIC_ALTITUDE =
      14,  // Airborne Format, 1.0 nmi RNP, 100-foot Barometric Altitude
  AIRBORNE_FORMAT_5_METER_RNP_GPS_HEIGHT =
      15,  // Airborne Format, 5 meter RNP, GPS Height
  AIRBORNE_FORMAT_100_METER_RNP_GPS_HEIGHT =
      16,  // Airborne Format, 100 meter RNP, GPS Height
};

/*
 * Source: uid=364
 */
enum class AircraftAddressSource : uint8_t {
  MODE_S_AIRCRAFT_ADDRESS_FIELD_VALUE =
      0,                               // Mode S Aircraft Address Field Value
  GICB_IFF_DATA_RECORD_AVAILABLE = 1,  // GICB IFF Data Record Available
};

/*
 * Source: uid=365
 */
enum class SurveillanceStatus : uint8_t {
  NO_INFORMATION = 0,                    // No Information
  EMERGENCY_LOSS_OF_COMMUNICATIONS = 1,  // Emergency/Loss of Communications
  SPI = 2,                               // SPI
  ATCRBS_CODE_CHANGE = 3,                // ATCRBS Code Change
};

/*
 * Source: uid=366
 */
enum class TurnRateSource : uint8_t {
  COMPUTE_LOCALLY = 0,  // Compute Locally
  LESS_THAN_1_DEGREE_TURN_OR_NOT_TURNING =
      1,                               // Less Than 1-Degree Turn or Not Turning
  _1_DEGREE_OR_GREATER_TURN_RATE = 2,  // 1-Degree or Greater Turn Rate
};

/*
 * Source: uid=367
 */
enum class TimeTypeSource : uint8_t {
  COMPUTE_LOCALLY = 0,  // Compute Locally
  EVEN_SECOND = 1,      // Even Second
  ODD_SECOND = 2,       // Odd Second
};

/*
 * Source: uid=368
 */
enum class AircraftTypeWake : uint8_t {
  NO_STATEMENT = 0,  // No Statement
};

/*
 * Source: uid=369
 */
enum class DataCategory : uint8_t {
  NO_STATEMENT = 0,     // No Statement
  FUNCTIONAL_DATA = 1,  // Functional Data
  TRANSPONDER_INTERROGATOR_DATA_LINK_MESSAGES =
      2,  // Transponder/Interrogator Data Link Messages
};

/*
 * Source: uid=370
 */
enum class TILinkType : uint16_t {
  NOT_USED = 0,  // Not Used
  GROUND_INITIATED_COMMUNICATIONS_B_GICB =
      1,  // Ground Initiated Communications B (GICB)
  AUTOMATIC_DEPENDENT_SURVEILLANCE_ADS =
      2,  // Automatic Dependent Surveillance (ADS)
  GLOBAL_NAVIGATION_SATELLITE_SYSTEM_GNSS =
      3,  // Global Navigation Satellite System (GNSS)
  DATA_LINK_INITIATION_CAPABILITY_DLIC =
      4,  // Data Link Initiation Capability (DLIC)
  AIRCRAFT_COMMUNICATIONS_ADDRESSING_AND_REPORTING_SYSTEM_ACARS =
      5,  // Aircraft Communications Addressing and Reporting System (ACARS)
  ATC_COMMUNICATIONS_MANAGEMENT_ACM = 6,  // ATC Communications Management (ACM)
  VHF_DIGITAL_LINK_VDL = 7,               // VHF Digital Link (VDL)
  AERONAUTICAL_TELECOMMUNICATION_NETWORK_ATN =
      8,              // Aeronautical Telecommunication Network (ATN)
  MODE_SELECT_S = 9,  // Mode Select (S)
  AIRBORNE_COLLISION_AVOIDANCE_SYSTEMS_ACAS =
      10,  // Airborne Collision Avoidance Systems (ACAS)
  TRAFFIC_COLLISION_AVOIDANCE_SYSTEMS_TCAS =
      11,  // Traffic Collision Avoidance Systems (TCAS)
  AUTOMATIC_DEPENDENT_SURVEILLANCE_B_ADS_B =
      12,  // Automatic Dependent Surveillance-B (ADS-B)
};

/*
 * Source: uid=371
 */
enum class AntennaStatus : uint8_t {
  NO_STATEMENT = 0,      // No Statement
  NOT_ABLE_TO_EMIT = 1,  // Not Able to Emit
  ABLE_TO_EMIT = 2,      // Able to Emit
};

/*
 * Source: uid=372
 */
enum class TransmissionIndicator : uint8_t {
  NO_STATEMENT = 0,            // No Statement
  ORIGINAL_INTERROGATION = 1,  // Original Interrogation
  INTERROGATION_REPLY = 2,     // Interrogation Reply
  SQUITTER_TRANSMISSION = 3,   // Squitter Transmission
};

/*
 * Source: uid=373
 */
enum class ReplyAmplification : uint8_t {
  NO_STATEMENT = 0,       // No Statement
  COMPLETE = 1,           // Complete
  LIMTED = 2,             // Limted
  UNABLE_TO_RESPOND = 3,  // Unable to Respond
};

/*
 * Source: uid=374
 */
enum class DeFireFlagsStateUpdateFlag : uint8_t {
  UPDATE_DUE_TO_HEARTBEAT_TIMER = 0,  // Update Due to Heartbeat Timer
  STATE_CHANGE = 1,                   // State Change
};

/*
 * Source: uid=375
 */
enum class ComponentVisualDamageStatusSmoke : uint8_t {
  NO_SMOKE = 0,        // No Smoke
  LIGHT_SMOKE = 1,     // Light Smoke
  MODERATE_SMOKE = 2,  // Moderate Smoke
  HEAVY_SMOKE = 3,     // Heavy Smoke
};

/*
 * Source: uid=376
 */
enum class ComponentVisualDamageStatusSurfaceDamage : uint8_t {
  NORMAL_APPEARANCE = 0,  // Normal Appearance
  LIGHT_CHARRING = 1,     // Light Charring
  HEAVY_CHARRING = 2,     // Heavy Charring
  ONE_OR_MORE_HOLES_BURNED_COMPLETELY_THROUGH_SURFACE =
      3,  // One or More Holes Burned Completely through Surface
};

/*
 * Source: uid=377
 */
enum class GridAxisDescriptorAxisType : uint8_t {
  REGULAR_AXIS = 0,    // Regular Axis
  IRREGULAR_AXIS = 1,  // Irregular Axis
};

/*
 * Source: uid=378
 */
enum class AppearancePaintScheme : uint8_t {
  UNIFORM_COLOR = 0,  // Uniform Color
  CAMOUFLAGE = 1,     // Camouflage
};

/*
 * Source: uid=379
 */
enum class AppearanceDamage : uint8_t {
  NO_DAMAGE = 0,        // No Damage
  SLIGHT_DAMAGE = 1,    // Slight Damage
  MODERATE_DAMAGE = 2,  // Moderate Damage
  DESTROYED = 3,        // Destroyed
};

/*
 * Source: uid=380
 */
enum class Mode5MessageFormatsStatus : uint8_t {
  CAPABILITY = 0,            // Capability
  ACTIVE_INTERROGATION = 1,  // Active Interrogation
};

/*
 * Source: uid=381
 */
enum class AppearanceTrailingEffects : uint8_t {
  NONE = 0,    // None
  SMALL = 1,   // Small
  MEDIUM = 2,  // Medium
  LARGE = 3,   // Large
};

/*
 * Source: uid=382
 */
enum class AppearanceHatch : uint8_t {
  NOT_APPLICABLE = 0,                // Not Applicable
  CLOSED = 1,                        // Closed
  POPPED = 2,                        // Popped
  POPPED_AND_PERSON_IS_VISIBLE = 3,  // Popped and Person Is Visible
  OPEN = 4,                          // Open
  OPEN_AND_PERSON_IS_VISIBLE = 5,    // Open and Person Is Visible
};

/*
 * Source: uid=383
 */
enum class AppearanceLauncherOperational : uint8_t {
  NOT_RAISED_NOT_OPERATIONAL = 0,  // Not Raised/Not Operational
  RAISED_OPERATIONAL = 1,          // Raised/Operational
};

/*
 * Source: uid=384
 */
enum class AppearanceCamouflageType : uint8_t {
  DESERT_CAMOUFLAGE = 0,  // Desert Camouflage
  WINTER_CAMOUFLAGE = 1,  // Winter Camouflage
  FOREST_CAMOUFLAGE = 2,  // Forest Camouflage
  OTHER = 3,              // Other
};

/*
 * Source: uid=385
 */
enum class AppearanceConcealedPosition : uint8_t {
  NOT_CONCEALED = 0,                // Not Concealed
  PREPARED_CONCEALED_POSITION = 1,  // Prepared Concealed Position
};

/*
 * Source: uid=386
 */
enum class AppearanceEntityOrObjectState : uint8_t {
  ACTIVE = 0,       // Active
  DEACTIVATED = 1,  // Deactivated
};

/*
 * Source: uid=387
 */
enum class AppearanceCanopy : uint8_t {
  NOT_APPLICABLE = 0,  // Not Applicable
  SINGLE_CANOPY_SINGLE_TROOP_DOOR_CLOSED =
      1,  // Single Canopy/Single Troop Door Closed
  FRONT_AND_REAR_CANOPY_LEFT_AND_RIGHT_TROOP_DOOR_CLOSED =
      2,  // Front and Rear Canopy/Left and Right Troop Door Closed
  FRONT_CANOPY_LEFT_TROOP_DOOR_OPEN = 3,  // Front Canopy/Left Troop Door Open
  SINGLE_CANOPY_SINGLE_TROOP_DOOR_OPEN =
      4,  // Single Canopy/Single Troop Door Open
  REAR_CANOPY_RIGHT_TROOP_DOOR_OPEN = 5,  // Rear Canopy/Right Troop Door Open
  FRONT_AND_REAR_CANOPY_LEFT_AND_RIGHT_TROOP_DOOR_OPEN =
      6,  // Front and Rear Canopy/Left and Right Troop Door Open
};

/*
 * Source: uid=388
 */
enum class AppearanceSubsurfaceHatch : uint8_t {
  NOT_APPLICABLE = 0,   // Not Applicable
  HATCH_IS_CLOSED = 1,  // Hatch Is Closed
  HATCH_IS_OPEN = 4,    // Hatch Is Open
};

/*
 * Source: uid=389
 */
enum class DisPduStatusActiveInterrogationIndicatorAii : uint8_t {
  NOT_ACTIVE = 0,  // Not Active
  ACTIVE = 1,      // Active
};

/*
 * Source: uid=390
 */
enum class AppearanceLifeformHealth : uint8_t {
  NO_INJURY = 0,        // No Injury
  SLIGHT_INJURY = 1,    // Slight Injury
  MODERATE_INJURY = 2,  // Moderate Injury
  FATAL_INJURY = 3,     // Fatal Injury
};

/*
 * Source: uid=391
 */
enum class AppearanceLifeFormComplianceStatus : uint8_t {
  NOT_SPECIFIED = 0,               // Not Specified
  DETAINED = 1,                    // Detained
  SURRENDER = 2,                   // Surrender
  USING_FISTS = 3,                 // Using Fists
  VERBAL_ABUSE_LEVEL_1 = 4,        // Verbal Abuse Level 1
  VERBAL_ABUSE_LEVEL_2 = 5,        // Verbal Abuse Level 2
  VERBAL_ABUSE_LEVEL_3 = 6,        // Verbal Abuse Level 3
  PASSIVE_RESISTANCE_LEVEL_1 = 7,  // Passive Resistance Level 1
  PASSIVE_RESISTANCE_LEVEL_2 = 8,  // Passive Resistance Level 2
  PASSIVE_RESISTANCE_LEVEL_3 = 9,  // Passive Resistance Level 3
  USING_NON_LETHAL_WEAPON_1 = 10,  // Using Non-Lethal Weapon 1
  USING_NON_LETHAL_WEAPON_2 = 11,  // Using Non-Lethal Weapon 2
  USING_NON_LETHAL_WEAPON_3 = 12,  // Using Non-Lethal Weapon 3
  USING_NON_LETHAL_WEAPON_4 = 13,  // Using Non-Lethal Weapon 4
  USING_NON_LETHAL_WEAPON_5 = 14,  // Using Non-Lethal Weapon 5
  USING_NON_LETHAL_WEAPON_6 = 15,  // Using Non-Lethal Weapon 6
};

/*
 * Source: uid=392
 */
enum class AppearanceLifeFormPosture : uint8_t {
  NOT_SPECIFIED = 0,           // Not Specified
  UPRIGHT_STANDING_STILL = 1,  // Upright, Standing Still
  UPRIGHT_WALKING = 2,         // Upright, Walking
  UPRIGHT_RUNNING = 3,         // Upright, Running
  KNEELING = 4,                // Kneeling
  PRONE = 5,                   // Prone
  CRAWLING = 6,                // Crawling
  SWIMMING = 7,                // Swimming
  PARACHUTING = 8,             // Parachuting
  JUMPING = 9,                 // Jumping
  SITTING = 10,                // Sitting
  SQUATTING = 11,              // Squatting
  CROUCHING = 12,              // Crouching
  WADING = 13,                 // Wading
  SURRENDER = 14,              // Surrender
  DETAINED = 15,               // Detained
};

/*
 * Source: uid=393
 */
enum class AppearanceLifeFormWeaponImplement : uint8_t {
  NOT_PRESENT = 0,             // Not Present
  STOWED = 1,                  // Stowed
  DEPLOYED_ACTIVE = 2,         // Deployed/Active
  FIRING_POSITION_IN_USE = 3,  // Firing Position/In Use
};

/*
 * Source: uid=394
 */
enum class AppearanceConcealedMovement : uint8_t {
  OPEN_MOVEMENT = 0,                     // Open Movement
  RUSHES_BETWEEN_COVERED_POSITIONS = 1,  // Rushes Between Covered Positions
};

/*
 * Source: uid=395
 */
enum class AppearanceEnvironmentalDensity : uint8_t {
  CLEAR = 0,       // Clear
  HAZY = 1,        // Hazy
  DENSE = 2,       // Dense
  VERY_DENSE = 3,  // Very Dense
  OPAQUE = 4,      // Opaque
};

/*
 * Source: uid=396
 */
enum class Mode5PlatformType : uint8_t {
  GROUND_VEHICLE = 0,  // Ground Vehicle
  AIR_VEHICLE = 1,     // Air Vehicle
};

/*
 * Source: uid=397
 */
enum class AppearanceAntiCollisionDayNight : uint8_t {
  DAY = 0,    // Day
  NIGHT = 1,  // Night
};

/*
 * Source: uid=398
 */
enum class AppearanceNavigationPositionBrightness : uint8_t {
  DIM = 0,     // Dim
  BRIGHT = 1,  // Bright
};

/*
 * Source: uid=399
 */
enum class AppearanceSupplyDeployed : uint8_t {
  NOT_APPLICABLE = 0,       // Not Applicable
  STOWED = 1,               // Stowed
  DEPLOYED = 2,             // Deployed
  DEPLOYED_AND_ACTIVE = 3,  // Deployed and Active
};

/*
 * Source: uid=400
 */
enum class AppearanceNvgMode : uint8_t {
  OVERT_LIGHTING = 0,  // Overt Lighting
  COVERT_LIGHTING_NIGHT_VISION_GOGGLES =
      1,  // Covert Lighting (Night Vision Goggles)
};

/*
 * Source: uid=401
 */
enum class Parachute : uint8_t {
  NONE = 0,                  // None
  DEPLOYED = 1,              // Deployed
  COLLAPSED = 2,             // Collapsed
  MALFUNCTION_STREAMER = 3,  // Malfunction/Streamer
};

/*
 * Source: uid=402
 */
enum class FlareSmokeColor : uint8_t {
  WHITE = 0,  // White
  RED = 1,    // Red
  GREEN = 2,  // Green
  IR = 3,     // IR
};

/*
 * Source: uid=403
 */
enum class FlareSmokeStatus : uint8_t {
  NOT_IGNITED = 0,  // Not Ignited
  BURNING = 1,      // Burning
  BURNED_OUT = 2,   // Burned Out
};

/*
 * Source: uid=404
 */
enum class SpotChaffStatus : uint8_t {
  NONE = 0,         // None
  DEPLOYED = 1,     // Deployed
  MALFUNCTION = 2,  // Malfunction
};

/*
 * Source: uid=405
 */
enum class AppearanceObjectGeneralDamage : uint8_t {
  NO_DAMAGE = 0,  // No Damage
  DAMAGED = 1,    // Damaged
  DESTROYED = 2,  // Destroyed
};

/*
 * Source: uid=406
 */
enum class AppearanceObjectGeneralPredistributed : uint8_t {
  OBJECT_CREATED_DURING_THE_EXERCISE = 0,  // Object Created During the Exercise
  OBJECT_PREDISTRIBUTED_PRIOR_TO_EXERCISE_START =
      1,  // Object Predistributed Prior to Exercise Start
};

/*
 * Source: uid=407
 */
enum class AppearanceObjectSpecificBreachState : uint8_t {
  NO_BREACHING = 0,  // No Breaching
  BREACHED = 1,      // Breached
  CLEARED = 2,       // Cleared
};

/*
 * Source: uid=408
 */
enum class AppearanceObjectSpecificChemicalType : uint8_t {
  OTHER = 0,              // Other
  HYDROCHLORIC = 1,       // Hydrochloric
  WHITE_PHOSPHOROUS = 2,  // White Phosphorous
  RED_PHOSPHOROUS = 3,    // Red Phosphorous
};

/*
 * Source: uid=409
 */
enum class AppearanceLinearObjectTankDitchBreach : uint8_t {
  NO_BREACHING = 0,       // No Breaching
  SLIGHT_BREACHING = 1,   // Slight Breaching
  MODERATE_BREACHED = 2,  // Moderate Breached
  CLEARED = 3,            // Cleared
};

/*
 * Source: uid=410
 */
enum class AppearanceLinearObjectLaneMarkerVisible : uint8_t {
  LEFT_SIDE_IS_VISIBLE = 0,    // Left Side Is Visible
  RIGHT_SIDE_IS_VISIBLE = 1,   // Right Side Is Visible
  BOTH_SIDES_ARE_VISIBLE = 2,  // Both Sides Are Visible
};

/*
 * Source: uid=411
 */
enum class AppearanceObjectGeneralIedPresent : uint8_t {
  NONE = 0,               // None
  VISIBLE = 1,            // Visible
  PARTIALLY_HIDDEN = 2,   // Partially Hidden
  COMPLETELY_HIDDEN = 3,  // Completely Hidden
};

/*
 * Source: uid=412
 */
enum class Mode5LevelSelection : uint8_t {
  MODE_5_LEVEL_1 = 0,  // Mode 5 Level 1
  MODE_5_LEVEL_2 = 1,  // Mode 5 Level 2
};

/*
 * Source: uid=413
 */
enum class SupplyFuelType : uint8_t {
  OTHER = 0,                   // Other
  GASOLINE = 1,                // Gasoline
  DIESEL_FUEL_F_54_DF_2 = 2,   // Diesel Fuel (F-54/DF-2)
  JP_4_F_40_JET_B = 3,         // JP-4 (F-40/JET B)
  FUEL_OIL = 4,                // Fuel Oil
  JP_8_F_34_JET_A_1 = 5,       // JP-8 (F-34/JET A-1)
  FOG_OIL = 6,                 // Fog Oil
  MULTI_SPECTRAL_FOG_OIL = 7,  // Multi-Spectral Fog Oil
  JP_5_F_44_JET_A = 8,         // JP-5 (F-44/JET A)
  JPTS = 9,                    // JPTS
  TS_1_RUSSIA_RUS = 10,        // TS-1 (Russia (RUS))
};

/*
 * Source: uid=414
 */
enum class SensorTypeSource : uint8_t {
  OTHER_ACTIVE_SENSORS = 0,  // Other Active Sensors
  ELECTROMAGNETIC = 1,       // Electromagnetic
  PASSIVE_SENSORS = 2,       // Passive Sensors
  MINEFIELD_SENSORS = 3,     // Minefield Sensors
  UNDERWATER_ACOUSTICS = 4,  // Underwater Acoustics
  LASERS = 5,                // Lasers
};

/*
 * Source: uid=415
 */
enum class AttachedPartDetachedIndicator : uint8_t {
  ATTACHED = 0,  // Attached
  DETACHED = 1,  // Detached
};

/*
 * Source: uid=416
 */
enum class IntercomControlCommunicationsClass : uint8_t {
  SIMULATED_COMMUNICATIONS_CHANNEL = 0,  // Simulated Communications Channel
  SIMULATION_SUPPORT_COMMUNICATIONS_CHANNEL =
      1,  // Simulation Support Communications Channel
};

/*
 * Source: uid=417
 */
enum class DisLiveEntitySubprotocolNumber : uint8_t {
  NO_SUBPROTOCOL = 0,  // No Subprotocol
};

/*
 * Source: uid=418
 */
enum class MinefieldAppearanceMinefieldType : uint8_t {
  MIXED_ANTI_PERSONNEL_AND_ANTI_TANK_MINEFIELD =
      0,  // Mixed Anti-Personnel and Anti-Tank Minefield
  PURE_ANTI_PERSONNEL_MINEFIELD = 1,  // Pure Anti-Personnel Minefield
  PURE_ANTI_TANK_MINEFIELD = 2,       // Pure Anti-Tank Minefield
};

/*
 * Source: uid=419
 */
enum class MinefieldAppearanceActiveStatus : uint8_t {
  ACTIVE = 0,    // Active
  INACTIVE = 1,  // Inactive
};

/*
 * Source: uid=420
 */
enum class MinefieldAppearanceLane : uint8_t {
  MINEFIELD_HAS_ACTIVE_LANE = 0,       // Minefield Has Active Lane
  MINEFIELD_HAS_AN_INACTIVE_LANE = 1,  // Minefield Has an Inactive Lane
};

/*
 * Source: uid=421
 */
enum class MinefieldAppearanceState : uint8_t {
  ACTIVE = 0,       // Active
  DEACTIVATED = 1,  // Deactivated
};

/*
 * Source: uid=422
 */
enum class MinefieldFusingFuseType : uint8_t {
  NO_FUSE = 0,    // No Fuse
  OTHER = 1,      // Other
  PRESSURE = 2,   // Pressure
  MAGNETIC = 3,   // Magnetic
  TILT_ROD = 4,   // Tilt Rod
  COMMAND = 5,    // Command
  TRIP_WIRE = 6,  // Trip Wire
};

/*
 * Source: uid=423
 */
enum class Mode5LocationErrors : uint8_t {
  NO_LOCATION_ERRORS = 0,       // No Location Errors
  IFF_DATA_RECORD_PRESENT = 1,  // IFF Data Record Present
};

/*
 * Source: uid=424
 */
enum class MinefieldPaintSchemeAlgae : uint8_t {
  NONE = 0,      // None
  LIGHT = 1,     // Light
  MODERATE = 2,  // Moderate
  HEAVY = 3,     // Heavy
};

/*
 * Source: uid=425
 */
enum class MinefieldPaintSchemePaintScheme : uint8_t {
  OTHER = 0,                // Other
  STANDARD = 1,             // Standard
  CAMOUFLAGE_DESERT = 2,    // Camouflage Desert
  CAMOUFLAGE_JUNGLE = 3,    // Camouflage Jungle
  CAMOUFLAGE_SNOW = 4,      // Camouflage Snow
  CAMOUFLAGE_GRAVEL = 5,    // Camouflage Gravel
  CAMOUFLAGE_PAVEMENT = 6,  // Camouflage Pavement
  CAMOUFLAGE_SAND = 7,      // Camouflage Sand
  NATURAL_WOOD = 8,         // Natural Wood
  CLEAR = 9,                // Clear
  RED = 10,                 // Red
  BLUE = 11,                // Blue
  GREEN = 12,               // Green
  OLIVE = 13,               // Olive
  WHITE = 14,               // White
  TAN = 15,                 // Tan
  BLACK = 16,               // Black
  YELLOW = 17,              // Yellow
  BROWN = 18,               // Brown
};

/*
 * Source: uid=426
 */
enum class CoverShroudStatus : uint8_t {
  CLOSED = 0,                       // Closed
  OPENING = 1,                      // Opening
  COVER_SHROUD_BLOWN_DETACHED = 2,  // Cover/Shroud Blown/Detached
  OPEN_ATTACHED = 3,                // Open/Attached
};

/*
 * Source: uid=427
 */
enum class PlatformLandMotorcycleSubcategories : uint8_t {
  OTHER = 0,                  // Other
  SCOOTER_SMALL = 1,          // Scooter (Small)
  SPORT_STREET_MID_SIZE = 2,  // Sport/Street (Mid-Size)
  CRUISER_LARGE = 3,          // Cruiser (Large)
  DIRT_BIKE = 4,              // Dirt Bike
  STANDARD = 5,               // Standard
  TOURING = 6,                // Touring
  DUAL_PURPOSE = 7,           // Dual Purpose
};

/*
 * Source: uid=428
 */
enum class PlatformLandCarSubcategories : uint8_t {
  OTHER = 0,                           // Other
  GENERIC = 10,                        // Generic
  GENERIC_MINI_MICROCAR_TINY = 11,     // Generic, Mini/Microcar (Tiny)
  GENERIC_ECONOMY_COMPACT_SMALL = 12,  // Generic, Economy/Compact (Small)
  GENERIC_INTERMEDIATE_STANDARD_MEDIUM =
      13,  // Generic, Intermediate/Standard (Medium)
  GENERIC_FULL_PREMIUM_LUXURY_LARGE =
      14,                 // Generic, Full/Premium/Luxury (Large)
  GENERIC_OVERSIZE = 15,  // Generic, Oversize
  _2_DOOR_COUPE = 20,     // 2-Door (Coupe)
  _2_DOOR_COUPE_MINI_MICROCAR_TINY =
      21,  // 2-Door (Coupe), Mini/Microcar (Tiny)
  _2_DOOR_COUPE_ECONOMY_COMPACT_SMALL =
      22,  // 2-Door (Coupe), Economy/Compact (Small)
  _2_DOOR_COUPE_INTERMEDIATE_STANDARD_MEDIUM =
      23,                  // 2-Door (Coupe), Intermediate/Standard (Medium)
  _3_DOOR_HATCHBACK = 30,  // 3-Door Hatchback
  _3_DOOR_HATCHBACK_MINI_MICROCAR_TINY =
      31,  // 3-Door Hatchback, Mini/Microcar (Tiny)
  _3_DOOR_HATCHBACK_ECONOMY_COMPACT_SMALL =
      32,              // 3-Door Hatchback, Economy/Compact (Small)
  _4_DOOR_SEDAN = 40,  // 4-Door Sedan
  _4_DOOR_SEDAN_MINI_MICROCAR_TINY = 41,  // 4-Door Sedan, Mini/Microcar (Tiny)
  _4_DOOR_SEDAN_ECONOMY_COMPACT_SMALL =
      42,  // 4-Door Sedan, Economy/Compact (Small)
  _4_DOOR_SEDAN_INTERMEDIATE_STANDARD_MEDIUM =
      43,  // 4-Door Sedan, Intermediate/Standard (Medium)
  _4_DOOR_SEDAN_FULL_PREMIUM_LUXURY_LARGE =
      44,                       // 4-Door Sedan, Full/Premium/Luxury (Large)
  _4_DOOR_SEDAN_OVERSIZE = 45,  // 4-Door Sedan, Oversize
  _5_DOOR_HATCHBACK = 50,       // 5-Door Hatchback
  _5_DOOR_HATCHBACK_MINI_MICROCAR_TINY =
      51,  // 5-Door Hatchback, Mini/Microcar (Tiny)
  _5_DOOR_HATCHBACK_ECONOMY_COMPACT_SMALL =
      52,  // 5-Door Hatchback, Economy/Compact (Small)
  _5_DOOR_HATCHBACK_INTERMEDIATE_STANDARD_MEDIUM =
      53,  // 5-Door Hatchback, Intermediate/Standard (Medium)
  _5_DOOR_HATCHBACK_FULL_PREMIUM_LUXURY_LARGE =
      54,      // 5-Door Hatchback, Full/Premium/Luxury (Large)
  WAGON = 60,  // Wagon
  WAGON_ECONOMY_COMPACT_SMALL = 62,  // Wagon, Economy/Compact (Small)
  WAGON_INTERMEDIATE_STANDARD_MEDIUM =
      63,  // Wagon, Intermediate/Standard (Medium)
  WAGON_FULL_PREMIUM_LUXURY_LARGE = 64,  // Wagon, Full/Premium/Luxury (Large)
  MINIVAN = 70,                          // Minivan
  LIMOUSINE = 80,                        // Limousine
  LIMOUSINE_FULL_PREMIUM_LUXURY_LARGE =
      84,                        // Limousine, Full/Premium/Luxury (Large)
  LIMOUSINE_OVERSIZE = 85,       // Limousine, Oversize
  SPORTS_HIGH_PERFORMANCE = 90,  // Sports (High Performance)
  CONVERTIBLE = 100,             // Convertible
  CONVERTIBLE_MINI_MICROCAR_TINY = 101,  // Convertible, Mini/Microcar (Tiny)
  CONVERTIBLE_ECONOMY_COMPACT_SMALL =
      102,  // Convertible, Economy/Compact (Small)
  CONVERTIBLE_INTERMEDIATE_STANDARD_MEDIUM =
      103,  // Convertible, Intermediate/Standard (Medium)
  CONVERTIBLE_FULL_PREMIUM_LUXURY_LARGE =
      104,                           // Convertible, Full/Premium/Luxury (Large)
  SPORTS_UTILITY_VEHICLE_SUV = 110,  // Sports Utility Vehicle (SUV)
  SPORTS_UTILITY_VEHICLE_SUV_ECONOMY_COMPACT_SMALL =
      112,  // Sports Utility Vehicle (SUV), Economy/Compact (Small)
  SPORTS_UTILITY_VEHICLE_SUV_INTERMEDIATE_STANDARD_MEDIUM =
      113,  // Sports Utility Vehicle (SUV), Intermediate/Standard (Medium)
  SPORTS_UTILITY_VEHICLE_SUV_FULL_PREMIUM_LUXURY_LARGE =
      114,  // Sports Utility Vehicle (SUV), Full/Premium/Luxury (Large)
  SPORTS_UTILITY_VEHICLE_SUV_OVERSIZE =
      115,  // Sports Utility Vehicle (SUV), Oversize
};

/*
 * Source: uid=429
 */
enum class PlatformLandBusSubcategories : uint8_t {
  OTHER = 0,                    // Other
  COMMUTER_FLAT_NOSE = 1,       // Commuter (Flat Nose)
  COMMUTER_SNOUT_NOSE = 2,      // Commuter (Snout Nose)
  SHUTTLE = 3,                  // Shuttle
  DOUBLE_DECKER = 4,            // Double Decker
  GUIDED = 5,                   // Guided
  KNEELING = 6,                 // Kneeling
  MIDIBUS = 7,                  // Midibus
  MINIBUS = 8,                  // Minibus
  MINI_WHEELCHAIR = 9,          // Mini Wheelchair
  MOTORCOACH = 10,              // Motorcoach
  PRISON_BUS = 11,              // Prison Bus
  SCHOOLBUS = 12,               // Schoolbus
  SCHOOL_WHEELCHAIR = 13,       // School Wheelchair
  TOUR = 14,                    // Tour
  TRAM_PARKING_LOT = 15,        // Tram Parking Lot
  TROLLEY = 16,                 // Trolley
  AIRPORT_TRANSPORT = 17,       // Airport Transport
  ARTICULATED_MULTI_UNIT = 18,  // Articulated (Multi-Unit)
};

/*
 * Source: uid=430
 */
enum class PlatformLandSingleUnitCargoTruckSubcategories : uint8_t {
  OTHER = 0,                          // Other
  PICKUP_TRUCK_MINI = 1,              // Pickup Truck, Mini
  PICKUP_TRUCK_MID_SIZE = 2,          // Pickup Truck, Mid-Size
  PICKUP_TRUCK_FULL_SIZE = 3,         // Pickup Truck, Full-Size
  PICKUP_TRUCK_CREW_CAB = 4,          // Pickup Truck, Crew Cab
  PICKUP_TRUCK_EXTENDED_CAB = 5,      // Pickup Truck, Extended Cab
  PICKUP_TRUCK_LONG_BED = 6,          // Pickup Truck, Long Bed
  PICKUP_TRUCK_CAB_FORWARD = 7,       // Pickup Truck, Cab Forward
  CARGO_TRUCK = 10,                   // Cargo Truck
  CARGO_TRUCK_UP_TO_2_5_TON = 11,     // Cargo Truck, up to 2.5 Ton
  CARGO_TRUCK_UP_TO_5_TON = 12,       // Cargo Truck, up to 5 Ton
  CARGO_TRUCK_UP_TO_7_5_TON = 13,     // Cargo Truck, up to 7.5 Ton
  CARGO_TRUCK_UP_TO_10_TON = 14,      // Cargo Truck, up to 10 Ton
  CARGO_TRUCK_OVER_10_TON = 15,       // Cargo Truck, over 10 Ton
  TANKER = 20,                        // Tanker
  SEMI_TRAILER_CAB_W_O_TRAILER = 30,  // Semi-Trailer Cab (w/o Trailer)
  VAN = 70,                           // Van
  VAN_EXTENDED = 71,                  // Van, Extended
  VAN_COMPACT = 72,                   // Van, Compact
  VAN_WHEELCHAIR = 73,                // Van, Wheelchair
  VAN_DELIVERY = 74,                  // Van, Delivery
  DELIVERY_TRUCK = 100,               // Delivery Truck
  DELIVERY_TRUCK_BOX = 101,           // Delivery Truck, Box
  DELIVERY_TRUCK_FLATBED = 102,       // Delivery Truck, Flatbed
  DELIVERY_TRUCK_STAKE_BED = 103,     // Delivery Truck, Stake Bed
  MESS_TRUCK = 104,                   // Mess Truck
  TRUCK_PALLETISED_LOAD_SYSTEM_PLS =
      105,  // Truck, Palletised Load System (PLS)
  TRUCK_PETROLEUM_OIL_AND_LUBRICANTS_POL_PALLETISED_LOAD_SYSTEM_PLS =
      106,  // Truck, Petroleum, Oil, and Lubricants (POL) Palletised Load
            // System (PLS)
  TRUCK_PETROLEUM_OIL_AND_LUBRICANTS_POL_SURVEILLANCE =
      107,  // Truck, Petroleum, Oil, and Lubricants (POL), Surveillance
  REFRIGERATED_TRUCK_SMALL = 108,   // Refrigerated Truck, Small
  REFRIGERATED_TRUCK_MEDIUM = 109,  // Refrigerated Truck, Medium
  REFRIGERATED_TRUCK_LARGE = 110,   // Refrigerated Truck, Large
};

/*
 * Source: uid=431
 */
enum class PlatformLandSingleUnitUtilityEmergencyTruckSubcategories : uint8_t {
  OTHER = 0,                            // Other
  AMBULANCE_TRUCK = 1,                  // Ambulance Truck
  FIRE_PARAMEDIC_TRUCK = 2,             // Fire/Paramedic Truck
  AMBULANCE_ADVANCED_LIFE_SUPPORT = 3,  // Ambulance, Advanced Life Support
  AMBULANCE_PICKUP_TRUCK = 4,           // Ambulance Pickup Truck
  FIRE_ENGINE = 10,                     // Fire Engine
  AERIAL_LADDER_FIRE_ENGINE = 11,       // Aerial Ladder Fire Engine
  AIRPORT_FIRE_ENGINE = 12,             // Airport Fire Engine
  WILDLAND_FIRE_ENGINE = 13,            // Wildland Fire Engine
  FIRE_CHIEF = 14,                      // Fire Chief
  POLICE_PADDY_WAGON = 20,              // Police Paddy Wagon
  POLICE_SWAT = 21,                     // Police, SWAT
  POLICE_BOMB_SQUAD = 22,               // Police, Bomb Squad
  POLICE_PICKUP_TRUCK = 23,             // Police, Pickup Truck
  HAZMAT = 30,                          // Hazmat
  WRECKER_NORMAL_HOOK_AND_CHAIN = 40,   // Wrecker, Normal Hook and Chain
  WRECKER_NORMAL_BOOM = 41,             // Wrecker, Normal Boom
  WRECKER_NORMAL_WHEEL_LIFT = 42,       // Wrecker, Normal Wheel Lift
  WRECKER_NORMAL_FLATBED = 43,          // Wrecker, Normal Flatbed
  WRECKER_NORMAL_INTEGRATED = 44,       // Wrecker, Normal Integrated
  WRECKER_HEAVY_HOOK_AND_CHAIN = 45,    // Wrecker, Heavy Hook and Chain
  WRECKER_HEAVY_BOOM = 46,              // Wrecker, Heavy Boom
  WRECKER_HEAVY_WHEEL_LIFT = 47,        // Wrecker, Heavy Wheel Lift
  WRECKER_HEAVY_FLATBED = 48,           // Wrecker, Heavy Flatbed
  WRECKER_HEAVY_INTEGRATED = 49,        // Wrecker, Heavy Integrated
  POSTAL_TRUCK = 60,                    // Postal Truck
  STREET_SWEEPER = 70,                  // Street Sweeper
  STREET_SWEEPER_THREE_WHEELED = 71,    // Street Sweeper, Three Wheeled
  WASTE_COLLECTION_OTHER = 80,          // Waste Collection, Other
  WASTE_COLLECTION_FRONT_LOADER = 81,   // Waste Collection, Front Loader
  WASTE_COLLECTION_REAR_LOADER = 82,    // Waste Collection, Rear Loader
  WASTE_COLLECTION_AUTOMATED_SIDE_LOADER =
      83,  // Waste Collection, Automated Side Loader
  WASTE_COLLECTION_PNEUMATIC_COLLECTION =
      84,                            // Waste Collection, Pneumatic Collection
  WASTE_COLLECTION_GRAPPLE = 85,     // Waste Collection, Grapple
  UTILITY_TRUCK = 90,                // Utility Truck
  UTILITY_TRUCK_W_BOOM = 91,         // Utility Truck w/ Boom
  AERIAL_WORK_PLATFORM_OTHER = 100,  // Aerial Work Platform, Other
  AERIAL_WORK_PLATFORM_SCISSOR_LIFT =
      101,                                 // Aerial Work Platform, Scissor Lift
  AERIAL_WORK_PLATFORM_TELESCOPING = 102,  // Aerial Work Platform, Telescoping
  MAINTENANCE_TRUCK = 120,                 // Maintenance Truck
  DECONTAMINATION_TRUCK = 121,             // Decontamination Truck
  WATER_CANNON_TRUCK = 122,                // Water Cannon Truck
  WATER_PURIFICATION_TRUCK = 123,          // Water Purification Truck
  SMOKE_GENERATOR_TRUCK = 124,             // Smoke Generator Truck
  AUTO_RICKSHAW = 150,                     // Auto Rickshaw
};

/*
 * Source: uid=432
 */
enum class PlatformLandMultipleUnitCargoTruckSubcategories : uint8_t {
  OTHER = 0,            // Other
  TRACTOR_TRAILER = 1,  // Tractor Trailer
  TANKER = 2,           // Tanker
};

/*
 * Source: uid=433
 */
enum class
    PlatformLandMultipleUnitUtilityEmergencyTruckSubcategories : uint8_t {
      OTHER = 0,                        // Other
      FIRE_ENGINE_HOOK_AND_LADDER = 1,  // Fire Engine, Hook And Ladder
    };

/*
 * Source: uid=434
 */
enum class PlatformLandConstructionSpecialtyVehicleSubcategories : uint8_t {
  OTHER = 0,                             // Other
  TUG = 1,                               // Tug
  FORKLIFT = 2,                          // Forklift
  LOADER = 3,                            // Loader
  LOADER_BACKHOE = 4,                    // Loader, Backhoe
  CRANE_TRACTOR_MOUNTED = 5,             // Crane, Tractor Mounted
  CRANE_WHEELED = 6,                     // Crane, Wheeled
  GRADER = 7,                            // Grader
  ROAD_ROLLER_OTHER = 8,                 // Road Roller, Other
  ROAD_ROLLER_DOUBLE_DRUM_SMOOTH = 9,    // Road Roller, Double Drum, Smooth
  ROAD_ROLLER_SINGLE_DRUM_SMOOTH = 10,   // Road Roller, Single Drum, Smooth
  ROAD_ROLLER_DOUBLE_DRUM_SHEEPS = 11,   // Road Roller, Double Drum, Sheeps
  ROAD_ROLLER_SINGLE_DRUM_SHEEPS = 12,   // Road Roller, Single Drum, Sheeps
  ROAD_ROLLER_PNEUMATIC_TIRED = 13,      // Road Roller, Pneumatic Tired
  EXCAVATOR_OTHER = 14,                  // Excavator, Other
  EXCAVATOR_DRAGLINE = 15,               // Excavator, Dragline
  EXCAVATOR_LONG_REACH = 16,             // Excavator, Long Reach
  EXCAVATOR_MOBILE_TIRE = 17,            // Excavator, Mobile Tire
  MINI_EXCAVATOR = 18,                   // Mini Excavator
  EXCAVATOR_GIANT = 19,                  // Excavator Giant
  BULLDOZER_TRACTOR_MOUNTED = 20,        // Bulldozer, Tractor Mounted
  BULLDOZER_TRACKED = 21,                // Bulldozer, Tracked
  SCRAPER = 22,                          // Scraper
  SKID_STEER = 23,                       // Skid Steer
  DUMP_TRUCK_OTHER = 24,                 // Dump Truck, Other
  DUMP_TRUCK_ARTICULATED = 25,           // Dump Truck, Articulated
  DUMP_TRUCK_TRANSFER = 26,              // Dump Truck, Transfer
  DUMP_TRUCK_SUPER = 27,                 // Dump Truck, Super
  DUMP_TRUCK_OFF_ROAD = 28,              // Dump Truck, Off Road
  PAVER = 29,                            // Paver
  DRILLING_MACHINE = 30,                 // Drilling Machine
  CONCRETE_MIXER_OTHER = 31,             // Concrete Mixer, Other
  CONCRETE_MIXER_REAR_DISCHARGE = 32,    // Concrete Mixer, Rear Discharge
  CONCRETE_MIXER_FRONT_DISCHARGE = 33,   // Concrete Mixer, Front Discharge
  CONCRETE_MIXER_SIX_AXLE = 34,          // Concrete Mixer, Six Axle
  CONCRETE_MIXER_LONG_REACH_BOOM = 35,   // Concrete Mixer, Long Reach Boom
  CONCRETE_MIXER_VOLUMETRIC = 36,        // Concrete Mixer, Volumetric
  TRENCHER_CHAIN = 37,                   // Trencher, Chain
  TRENCHER_ROCKWHEEL = 38,               // Trencher, Rockwheel
  SNOWCAT = 39,                          // Snowcat
  CRANE_TRACKED = 40,                    // Crane, Tracked
  CRANE_SHOVEL = 41,                     // Crane, Shovel
  SWEEPER_ROTARY = 42,                   // Sweeper, Rotary
  ROLLER_VIBRATORY_COMPACTOR = 43,       // Roller, Vibratory Compactor
  FORK_LIFT_TRUCK = 44,                  // Fork Lift, Truck
  FORK_LIFT_ROUGHT_TERRAIN = 45,         // Fork Lift, Rought Terrain
  TRANSLOADER = 46,                      // Transloader
  TRUCK_WATER_CONSTRUCTION = 47,         // Truck, Water, Construction
  TRUCK_FUEL_DELIVERY = 48,              // Truck, Fuel Delivery
  TRUCK_SAWMILL = 49,                    // Truck, Sawmill
  TRUCK_LINE_MARKING_CONSTRUCTION = 50,  // Truck, Line Marking, Construction
  TRACTOR_INDUSTRIAL = 51,               // Tractor, Industrial
  COMPACTOR_HIGH_SPEED = 52,             // Compactor, High Speed
  TRUCK_DRILLING = 53,                   // Truck, Drilling
  TRUCK_DRILLING_SUPPORT = 54,           // Truck, Drilling Support
  CRANE_CONSTRUCTION = 55,               // Crane, Construction
};

/*
 * Source: uid=435
 */
enum class PlatformLandFarmSpecialtyVehicleSubcategories : uint8_t {
  OTHER = 0,                // Other
  TRACTOR = 1,              // Tractor
  HARVESTER_REAPER = 2,     // Harvester/Reaper
  SKIDDER = 3,              // Skidder
  FORWARDER = 4,            // Forwarder
  LAWN_MOWER_OTHER = 5,     // Lawn Mower, Other
  LAWN_MOWER_RIDING = 6,    // Lawn Mower, Riding
  LAWN_MOWER_STANDING = 7,  // Lawn Mower, Standing
  LAWN_MOWER_PUSH = 8,      // Lawn Mower, Push
};

/*
 * Source: uid=436
 */
enum class PlatformLandTrailerSubcategories : uint8_t {
  OTHER = 0,                           // Other
  TRAILER_FLATBED = 1,                 // Trailer, Flatbed
  TRAILER_CONTAINER = 2,               // Trailer, Container
  TRAILER_CONTAINER_REFRIGERATED = 3,  // Trailer, Container, Refrigerated
  TRAILER_DOUBLE = 4,                  // Trailer, Double
  TRAILER_AUTO_TRANSPORT = 5,          // Trailer, Auto Transport
  TRAILER_ARTICULATED = 6,             // Trailer, Articulated
  TRAILER_TANKER = 7,                  // Trailer, Tanker
  TRAILER_TANKER_SMALL = 8,            // Trailer, Tanker, Small
  TRAILER_TANKER_LARGE = 9,            // Trailer, Tanker, Large
  TRAILER_TANKER_GASOLINE = 10,        // Trailer, Tanker, Gasoline
  TRAILER_TANKER_MILK = 11,            // Trailer, Tanker, Milk
  TRAILER_TANKER_WATER = 12,           // Trailer, Tanker, Water
  TRAILER_TANKER_SEPTIC = 13,          // Trailer, Tanker, Septic
  TRAILER_BOAT = 14,                   // Trailer, Boat
  TRAILER_BOAT_SMALL = 15,             // Trailer, Boat, Small
  TRAILER_BOAT_LARGE = 16,             // Trailer, Boat, Large
  TRAILER_RECREATIONAL = 17,           // Trailer, Recreational
  TRAILER_RECREATIONAL_CONVENTIONAL =
      18,  // Trailer, Recreational, Conventional
  TRAILER_RECREATIONAL_TRAVEL_EXPANDABLE =
      19,  // Trailer, Recreational, Travel Expandable
  TRAILER_RECREATIONAL_FIFTH_WHEEL_TRAVEL =
      20,  // Trailer, Recreational, Fifth Wheel Travel
  TRAILER_RECREATIONAL_FOLDING_CAMPING =
      21,  // Trailer, Recreational, Folding Camping
  TRAILER_RECREATIONAL_TRUCK_CAMPER =
      22,  // Trailer, Recreational, Truck Camper
  TRAILER_AEROSTAT_MOORING_PLATFORM = 23,  // Trailer, Aerostat Mooring Platform
  TRAILER_HOUSEHOLD = 24,                  // Trailer, Household
  TRAILER_KITCHEN = 25,                    // Trailer, Kitchen
  TRAILER_ULTRALIGHT_AIRCRAFT = 26,        // Trailer, UltraLight Aircraft
  TRAILER_HEAVY_EQUIPMENT = 27,            // Trailer, Heavy Equipment
};

/*
 * Source: uid=437
 */
enum class PlatformLandRecreationalSubcategories : uint8_t {
  OTHER = 0,                  // Other
  ATV_2X4 = 1,                // ATV, 2X4
  ATV_4X4 = 2,                // ATV, 4X4
  ATV_6X6 = 3,                // ATV, 6X6
  ATV_3_WHEELED = 4,          // ATV, 3-wheeled
  TOY_OTHER = 5,              // Toy, Other
  TOY_CAR = 6,                // Toy, Car
  TOY_ATV = 7,                // Toy, ATV
  GOLF_CART = 8,              // Golf Cart
  SNOWMOBILE = 9,             // Snowmobile
  RECREATIONAL_VEHICLE = 10,  // Recreational Vehicle
  RECREATIONAL_VEHICLE_TYPE_A_MOTORHOME =
      11,  // Recreational Vehicle, Type A Motorhome
  RECREATIONAL_VEHICLE_TYPE_B_MOTORHOME =
      12,  // Recreational Vehicle, Type B Motorhome
  RECREATIONAL_VEHICLE_TYPE_C_MOTORHOME =
      13,               // Recreational Vehicle, Type C Motorhome
  CONVERSION_VAN = 14,  // Conversion Van
};

/*
 * Source: uid=438
 */
enum class PlatformLandNonMotorizedSubcategories : uint8_t {
  OTHER = 0,                // Other
  UNICYCLE = 1,             // Unicycle
  BICYCLE = 2,              // Bicycle
  BICYCLE_MOUNTAIN = 3,     // Bicycle, Mountain
  BICYCLE_RACING = 4,       // Bicycle, Racing
  TRICYCLE = 5,             // Tricycle
  QUADRICYCLE = 6,          // Quadricycle
  RICKSHAW_TWO_PERSON = 7,  // Rickshaw, Two Person
  RICKSHAW_ONE_PERSON = 8,  // Rickshaw, One Person
  TANDEM_BICYCLE = 9,       // Tandem Bicycle
  CYCLE_TRAILER = 10,       // Cycle Trailer
  CYCLE_SIDECAR = 11,       // Cycle Sidecar
  SLED = 12,                // Sled
  SKIS = 13,                // Skis
  SNOWBOARD = 14,           // Snowboard
  SKATEBOARD = 15,          // Skateboard
  SKATES = 16,              // Skates
  SKATES_IN_LINE = 17,      // Skates, In-Line
  WAGON_CART = 18,          // Wagon Cart
  DOLLY = 19,               // Dolly
  HANDTRUCK = 20,           // Handtruck
  PUSH_CART = 21,           // Push Cart
  WHEELBARROW = 22,         // Wheelbarrow
  KICK_SCOOTER = 23,        // Kick Scooter
  WHEELCHAIR = 24,          // Wheelchair
};

/*
 * Source: uid=439
 */
enum class PlatformLandTrainsSubcategories : uint8_t {
  OTHER = 0,              // Other
  ENGINE_LOCOMOTIVE = 1,  // Engine (Locomotive)
  BOX_CAR = 2,            // Box Car
  TANKER = 3,             // Tanker
  FLATCAR = 4,            // Flatcar
  CABOOSE = 5,            // Caboose
  PASSENGER_CAR = 6,      // Passenger Car
  HOPPER = 7,             // Hopper
};

/*
 * Source: uid=440
 */
enum class PlatformLandUtilityEmergencyCarSubcategories : uint8_t {
  OTHER = 0,          // Other
  AMBULANCE_CAR = 1,  // Ambulance Car
  POLICE_CAR = 2,     // Police Car
  POLICE_CHIEF = 3,   // Police Chief
  HEARSE = 4,         // Hearse
  TAXI = 5,           // Taxi
};

/*
 * Source: uid=441
 */
enum class PlatformSurfacePassengerVesselSubcategories : uint8_t {
  CRUISE_SHIP = 1,       // Cruise Ship
  CRUISE_FERRY = 2,      // Cruise Ferry
  HIGH_SPEED_FERRY = 3,  // High Speed Ferry
  FERRY = 4,             // Ferry
  OCEAN_LINER = 5,       // Ocean Liner
};

/*
 * Source: uid=442
 */
enum class PlatformSurfaceDryCargoShipSubcategories : uint8_t {
  COMMON_DRY_CARGO_SHIP = 1,             // Common Dry Cargo Ship
  DRY_BULK_CARGO_SHIP = 2,               // Dry Bulk Cargo Ship
  CONTAINER_SHIP = 3,                    // Container Ship
  REEFER_SHIP_REFRIGERATOR_SHIP = 4,     // Reefer Ship (Refrigerator Ship)
  RO_RO_SHIP_ROLL_ON_ROLL_OFF_SHIP = 5,  // Ro-Ro Ship (Roll-on/Roll-off Ship)
  BARGE = 6,                             // Barge
  HEAVY_LIFT_SHIP = 7,                   // Heavy Lift Ship
};

/*
 * Source: uid=443
 */
enum class PlatformSurfaceTankerSubcategories : uint8_t {
  LIQUID_PETROLEUM_GAS_LPG_TANKER = 1,  // Liquid Petroleum Gas (LPG)Tanker
  CHEMICAL_TANKER = 2,                  // Chemical Tanker
  LIQUID_NATURAL_GAS_LNG_TANKER = 3,    // Liquid Natural Gas (LNG) Tanker
  COASTAL_TRADING_VESSEL_COASTER = 4,   // Coastal Trading Vessel (Coaster)
  CRUDE_OIL_TANKER_UP_TO_159_999_DWT =
      5,                   // Crude Oil Tanker (up to 159,999 DWT)
  LIQUID_BULK_TANKER = 6,  // Liquid Bulk Tanker
  VERY_LARGE_CRUDE_CARRIER_160_000_319_999_DWT =
      7,  // Very Large Crude Carrier (160,000–319,999 DWT)
  ULTRA_LARGE_CRUDE_CARRIER_320_000_549_999_DWT =
      8,  // Ultra Large Crude Carrier (320,000–549,999 DWT)
  CONDENSATE_STORAGE_TANKER = 9,  // Condensate Storage Tanker
};

/*
 * Source: uid=444
 */
enum class PlatformSurfaceSupportVesselSubcategories : uint8_t {
  PLATFORM_SUPPLY_VESSEL = 1,       // Platform Supply Vessel
  TENDER_VESSEL = 2,                // Tender Vessel
  TUGBOAT = 3,                      // Tugboat
  DIVE_SUPPORT_VESSEL = 4,          // Dive Support Vessel
  FIREBOAT = 5,                     // Fireboat
  WELL_STIMULATION_VESSEL_WSV = 6,  // Well Stimulation Vessel (WSV)
  ANCHOR_HANDLING_TUG_SUPPLY_VESSEL_AHTS =
      7,  // Anchor Handling Tug Supply Vessel (AHTS)
  OFFSHORE_CONSTRUCTION_VESSEL_OCV = 8,  // Offshore Construction Vessel (OCV)
  EMERGENCY_RESPONSE_AND_RESCUE_VESSEL_ERRV =
      9,  // Emergency Response and Rescue Vessel (ERRV)
};

/*
 * Source: uid=445
 */
enum class PlatformSurfacePrivateMotorboatSubcategories : uint8_t {
  SMALL_MOTORBOAT_UP_TO_26FT_7_9M = 1,    // Small Motorboat (up to 26ft/7.9m)
  MEDIUM_MOTORBOAT_UP_TO_39FT_11_9M = 2,  // Medium Motorboat (up to 39ft/11.9m)
  LARGE_MOTORBOAT_UP_TO_65FT_19_8M = 3,   // Large Motorboat (up to 65ft/19.8m)
  VERY_LARGE_MOTORBOAT_GREATER_THAN_65FT_19_8M =
      4,  // Very Large Motorboat (greater than 65ft/19.8m)
};

/*
 * Source: uid=446
 */
enum class PlatformSurfacePrivateSailboatSubcategories : uint8_t {
  SMALL_SAILBOAT_UP_TO_26FT_7_9M = 1,    // Small Sailboat (up to 26ft/7.9m)
  MEDIUM_SAILBOAT_UP_TO_39FT_11_9M = 2,  // Medium Sailboat (up to 39ft/11.9m)
  LARGE_SAILBOAT_UP_TO_65FT_19_8M = 3,   // Large Sailboat (up to 65ft/19.8m)
  VERY_LARGE_SAILBOAT_GREATER_THAN_65FT_19_8M =
      4,  // Very Large Sailboat (greater than 65ft/19.8m)
};

/*
 * Source: uid=447
 */
enum class PlatformSurfaceFishingVesselSubcategories : uint8_t {
  SMALL_FISHING_VESSEL_UP_TO_26FT_7_9M =
      1,  // Small Fishing Vessel (up to 26ft/7.9m)
  MEDIUM_FISHING_VESSEL_UP_TO_65FT_19_8M =
      2,  // Medium Fishing Vessel (up to 65ft/19.8m)
  LARGE_FISHING_VESSEL_GREATER_THAN_65FT_19_8M =
      3,                       // Large Fishing Vessel (greater than 65ft/19.8m)
  FISH_PROCESSING_VESSEL = 4,  // Fish Processing Vessel
  MASTED_FISHING_VESSEL = 5,   // Masted Fishing Vessel
};

/*
 * Source: uid=448
 */
enum class PlatformSurfaceOtherVesselsSubcategories : uint8_t {
  GO_FAST_BOAT = 1,          // Go-Fast Boat
  RESEARCH_VESSEL = 2,       // Research Vessel
  HYDROFOIL_VESSEL = 3,      // Hydrofoil Vessel
  CABLE_LAYER_VESSEL = 4,    // Cable Layer Vessel
  DREDGER_VESSEL = 5,        // Dredger Vessel
  JUNK_DHOW_VESSEL = 6,      // Junk/Dhow Vessel
  CATAMARAN = 7,             // Catamaran
  PONTOON = 8,               // Pontoon
  PERSONAL_WATER_CRAFT = 9,  // Personal Water Craft
  REFUGEE_RAFT = 10,         // Refugee Raft
};

/*
 * Source: uid=449
 */
enum class CryptoKeyIdCryptoMode : uint8_t {
  BASEBAND = 0,  // Baseband
  DIPHASE = 1,   // Diphase
};

/*
 * Source: uid=463
 */
enum class Color : uint8_t {
  NOT_SPECIFIED = 0,              // Not Specified
  WHITE_VGA = 1,                  // White VGA
  RED_VGA = 2,                    // Red VGA
  YELLOW_VGA = 3,                 // Yellow VGA
  LIME_VGA = 4,                   // Lime VGA
  CYAN_VGA = 5,                   // Cyan VGA
  BLUE_VGA = 6,                   // Blue VGA
  MAGENTA_VGA = 7,                // Magenta VGA
  GREY_VGA = 8,                   // Grey VGA
  SILVER_VGA = 9,                 // Silver VGA
  MAROON_VGA = 10,                // Maroon VGA
  OLIVE_VGA = 11,                 // Olive VGA
  GREEN_VGA = 12,                 // Green VGA
  TEAL_VGA = 13,                  // Teal VGA
  NAVY_VGA = 14,                  // Navy VGA
  PURPLE_VGA = 15,                // Purple VGA
  RESERVED = 16,                  // Reserved
  RESERVED = 17,                  // Reserved
  RESERVED = 18,                  // Reserved
  RESERVED = 19,                  // Reserved
  BLACK = 20,                     // Black
  NAVY = 21,                      // Navy
  DARK_BLUE = 22,                 // Dark Blue
  MEDIUM_BLUE = 23,               // Medium Blue
  BLUE = 24,                      // Blue
  DARK_GREEN = 25,                // Dark Green
  GREEN = 26,                     // Green
  TEAL = 27,                      // Teal
  DARK_CYAN = 28,                 // Dark Cyan
  DEEP_SKY_BLUE = 29,             // Deep Sky Blue
  DARK_TURQUOISE = 30,            // Dark Turquoise
  MEDIUM_SPRING_GREEN = 31,       // Medium Spring Green
  LIME = 32,                      // Lime
  SPRING_GREEN = 33,              // Spring Green
  CYAN = 34,                      // Cyan
  MIDNIGHT_BLUE = 35,             // Midnight Blue
  DODGER_BLUE = 36,               // Dodger Blue
  LIGHT_SEA_GREEN = 37,           // Light Sea Green
  FOREST_GREEN = 38,              // Forest Green
  SEA_GREEN = 39,                 // Sea Green
  DARK_SLATE_GRAY = 40,           // Dark Slate Gray
  LIME_GREEN = 41,                // Lime Green
  MEDIUM_SEA_GREEN = 42,          // Medium Sea Green
  TURQUOISE = 43,                 // Turquoise
  ROYAL_BLUE = 44,                // Royal Blue
  STEEL_BLUE = 45,                // Steel Blue
  DARK_SLATE_BLUE = 46,           // Dark Slate Blue
  MEDIUM_TURQUOISE = 47,          // Medium Turquoise
  INDIGO = 48,                    // Indigo
  DARK_OLIVE_GREEN = 49,          // Dark Olive Green
  CADET_BLUE = 50,                // Cadet Blue
  CORNFLOWER_BLUE = 51,           // Cornflower Blue
  MEDIUM_AQUAMARINE = 52,         // Medium Aquamarine
  DIM_GRAY = 53,                  // Dim Gray
  SLATE_BLUE = 54,                // Slate Blue
  OLIVE_DRAB = 55,                // Olive Drab
  SLATE_GRAY = 56,                // Slate Gray
  LIGHT_SLATE_GRAY = 57,          // Light Slate Gray
  MEDIUM_SLATE_BLUE = 58,         // Medium Slate Blue
  LAWN_GREEN = 59,                // Lawn Green
  CHARTREUSE = 60,                // Chartreuse
  AQUAMARINE = 61,                // Aquamarine
  MAROON = 62,                    // Maroon
  PURPLE = 63,                    // Purple
  OLIVE = 64,                     // Olive
  GRAY = 65,                      // Gray
  GREY = 66,                      // Grey
  SKY_BLUE = 67,                  // Sky Blue
  LIGHT_SKY_BLUE = 68,            // Light Sky Blue
  BLUE_VIOLET = 69,               // Blue Violet
  DARK_RED = 70,                  // Dark Red
  DARK_MAGENTA = 71,              // Dark Magenta
  SADDLE_BROWN = 72,              // Saddle Brown
  DARK_SEA_GREEN = 73,            // Dark Sea Green
  LIGHT_GREEN = 74,               // Light Green
  MEDIUM_PURPLE = 75,             // Medium Purple
  DARK_VIOLET = 76,               // Dark Violet
  PALE_GREEN = 77,                // Pale Green
  DARK_ORCHID = 78,               // Dark Orchid
  YELLOW_GREEN = 79,              // Yellow Green
  SIENNA = 80,                    // Sienna
  BROWN = 81,                     // Brown
  DARK_GRAY = 82,                 // Dark Gray
  LIGHT_BLUE = 83,                // Light Blue
  GREEN_YELLOW = 84,              // Green Yellow
  PALE_TURQUOISE = 85,            // Pale Turquoise
  LIGHT_STEEL_BLUE = 86,          // Light Steel Blue
  POWDER_BLUE = 87,               // Powder Blue
  FIRE_BRICK = 88,                // Fire Brick
  DARK_GOLDEN_ROD = 89,           // Dark Golden Rod
  MEDIUM_ORCHID = 90,             // Medium Orchid
  ROSY_BROWN = 91,                // Rosy Brown
  DARK_KHAKI = 92,                // Dark Khaki
  SILVER = 93,                    // Silver
  MEDIUM_VIOLET_RED = 94,         // Medium Violet Red
  INDIAN_RED = 95,                // Indian Red
  PERU = 96,                      // Peru
  CHOCOLATE = 97,                 // Chocolate
  TAN = 98,                       // Tan
  LIGHT_GRAY = 99,                // Light Gray
  PALE_VIOLET_RED = 100,          // Pale Violet Red
  THISTLE = 101,                  // Thistle
  ORCHID = 102,                   // Orchid
  GOLDEN_ROD = 103,               // Golden Rod
  CRIMSON = 104,                  // Crimson
  GAINSBORO = 105,                // Gainsboro
  PLUM = 106,                     // Plum
  BURLY_WOOD = 107,               // Burly Wood
  LIGHT_CYAN = 108,               // Light Cyan
  LAVENDER = 109,                 // Lavender
  DARK_SALMON = 110,              // Dark Salmon
  VIOLET = 111,                   // Violet
  PALE_GOLDEN_ROD = 112,          // Pale Golden Rod
  LIGHT_CORAL = 113,              // Light Coral
  KHAKI = 114,                    // Khaki
  ALICE_BLUE = 115,               // Alice Blue
  HONEY_DEW = 116,                // Honey Dew
  AZURE = 117,                    // Azure
  SANDY_BROWN = 118,              // Sandy Brown
  WHEAT = 119,                    // Wheat
  BEIGE = 120,                    // Beige
  WHITE_SMOKE = 121,              // White Smoke
  MINT_CREAM = 122,               // Mint Cream
  GHOST_WHITE = 123,              // Ghost White
  SALMON = 124,                   // Salmon
  ANTIQUE_WHITE = 125,            // Antique White
  LINEN = 126,                    // Linen
  LIGHT_GOLDEN_ROD_YELLOW = 127,  // Light Golden Rod Yellow
  OLD_LACE = 128,                 // Old Lace
  RED = 129,                      // Red
  FUCHSIA = 130,                  // Fuchsia
  MAGENTA = 131,                  // Magenta
  DEEP_PINK = 132,                // Deep Pink
  ORANGE_RED = 133,               // Orange Red
  TOMATO = 134,                   // Tomato
  HOT_PINK = 135,                 // Hot Pink
  CORAL = 136,                    // Coral
  DARK_ORANGE = 137,              // Dark Orange
  LIGHT_SALMON = 138,             // Light Salmon
  ORANGE = 139,                   // Orange
  LIGHT_PINK = 140,               // Light Pink
  PINK = 141,                     // Pink
  GOLD = 142,                     // Gold
  PEACH_PUFF = 143,               // Peach Puff
  NAVAJO_WHITE = 144,             // Navajo White
  MOCCASIN = 145,                 // Moccasin
  BISQUE = 146,                   // Bisque
  MISTY_ROSE = 147,               // Misty Rose
  BLANCHED_ALMOND = 148,          // Blanched Almond
  PAPAYA_WHIP = 149,              // Papaya Whip
  LAVENDER_BLUSH = 150,           // Lavender Blush
  SEA_SHELL = 151,                // Sea Shell
  CORNSILK = 152,                 // Cornsilk
  LEMON_CHIFFON = 153,            // Lemon Chiffon
  FLORAL_WHITE = 154,             // Floral White
  SNOW = 155,                     // Snow
  YELLOW = 156,                   // Yellow
  LIGHT_YELLOW = 157,             // Light Yellow
  IVORY = 158,                    // Ivory
  WHITE = 159,                    // White
};

/*
 * Source: uid=464
 */
enum class BuildingPaintScheme : uint8_t {
  DEFAULT = 0,  // Default
};

/*
 * Source: uid=465
 */
enum class Season : uint8_t {
  SUMMER = 0,  // Summer
  WINTER = 1,  // Winter
  SPRING = 2,  // Spring
  AUTUMN = 3,  // Autumn
};

/*
 * Source: uid=466
 */
enum class Material : uint8_t {
  NOT_SPECIFIED = 0,  // Not Specified
  PLASTIC = 1,        // Plastic
  RUBBER = 2,         // Rubber
  ROAD = 3,           // Road
};

/*
 * Source: uid=467
 */
enum class Link1111bFidelityLevel : uint8_t {
  FIDELITY_LEVEL_0 = 0,  // Fidelity Level 0
  FIDELITY_LEVEL_1 = 1,  // Fidelity Level 1
  FIDELITY_LEVEL_2 = 2,  // Fidelity Level 2
};

/*
 * Source: uid=468
 */
enum class Link11TerminalMode : uint8_t {
  NO_STATEMENT = 0,             // No Statement
  NETWORK_CONTROL_STATION = 1,  // Network Control Station
  PICKET = 2,                   // Picket
};

/*
 * Source: uid=469
 */
enum class Link11DataTerminalSetIndicator : uint8_t {
  NO_STATEMENT = 0,              // No Statement [DEPRECATED]
  TRANSMIT = 1,                  // Transmit [DEPRECATED]
  RECEIVE = 2,                   // Receive [DEPRECATED]
  NET_BUSY = 3,                  // Net Busy [DEPRECATED]
  TRANSMIT_DATA_ERROR = 4,       // Transmit Data Error [DEPRECATED]
  RECEIVE_DATA_ERROR = 5,        // Receive Data Error [DEPRECATED]
  CODE_ERROR = 6,                // Code Error [DEPRECATED]
  SYNCHRONIZATION_COMPLETE = 7,  // Synchronization Complete [DEPRECATED]
};

/*
 * Source: uid=470
 */
enum class Link11ModeOfOperation : uint16_t {
  NO_STATEMENT = 0,     // No Statement
  NET_SYNC = 1,         // Net Sync
  NET_TEST = 2,         // Net Test
  ROLL_CALL = 3,        // Roll Call
  SHORT_BROADCAST = 4,  // Short Broadcast
  BROADCAST = 5,        // Broadcast
};

/*
 * Source: uid=471
 */
enum class LifeFormsSubcategoryIranianWeapons : uint8_t {
  MISAGH_2 = 1,  // Misagh-2
  RBS_70 = 2,    // RBS-70
};

/*
 * Source: uid=472
 */
enum class LifeFormLandCategories : uint8_t {
  CONVENTIONAL_ARMED_FORCES = 10,      // Conventional Armed Forces
  ARMY = 11,                           // Army
  NAVAL_INFANTRY_MARINES = 12,         // Naval Infantry (Marines)
  AIR_FORCE = 13,                      // Air Force
  NAVY = 14,                           // Navy
  COAST_GUARD = 15,                    // Coast Guard
  UNITED_NATIONS = 16,                 // United Nations
  SPECIAL_OPERATIONS_FORCES_SOF = 30,  // Special Operations Forces (SOF)
  LAW_ENFORCEMENT = 50,                // Law Enforcement
  NON_MILITARY_NATIONAL_GOVERNMENT_AGENCIES =
      70,                      // Non-Military National Government Agencies
  REGIONAL_LOCAL_FORCES = 90,  // Regional / Local Forces
  IRREGULAR_FORCES = 100,      // Irregular Forces
  TERRORIST_COMBATANT = 101,   // Terrorist Combatant
  INSURGENT = 102,             // Insurgent
  PARAMILITARY_FORCES = 110,   // Paramilitary Forces
  HUMANITARIAN_ORGANIZATIONS = 120,        // Humanitarian Organizations
  CIVILIAN = 130,                          // Civilian
  EMERGENCY_MEDICAL_TECHNICIAN_EMT = 131,  // Emergency Medical Technician (EMT)
  FIREFIGHTER = 132,                       // Firefighter
  PRESS = 133,                             // Press
  MAMMAL = 200,                            // Mammal
  REPTILE = 201,                           // Reptile
  AMPHIBIAN = 202,                         // Amphibian
  INSECT = 203,                            // Insect
  ARACHNID = 204,                          // Arachnid
  MOLLUSK = 205,                           // Mollusk
  MARSUPIAL = 206,                         // Marsupial
};

/*
 * Source: uid=473
 */
enum class LifeFormHumanSubcategoryEquipmentClass : uint8_t {
  NONE = 0,                            // None
  WEAPON_NON_SPECIFIC = 1,             // Weapon, Non-specific
  ASSAULT_RIFLES = 5,                  // Assault Rifles
  HIGH_POWER_RIFLES = 10,              // High Power Rifles
  SNIPER_RIFLES = 15,                  // Sniper Rifles
  ANTI_MATERIEL_RIFLE_AMR = 17,        // Anti-Materiel Rifle (AMR)
  SUB_MACHINE_GUNS = 20,               // Sub Machine Guns
  SHOT_GUNS = 25,                      // Shot Guns
  GRENADE_LAUNCHERS = 30,              // Grenade Launchers
  MACHINE_GUNS = 35,                   // Machine Guns
  GRENADE_LAUNCHING_MACHINE_GUN = 40,  // Grenade Launching Machine Gun
  ANTI_TANK_ROCKETS = 45,              // Anti-Tank Rockets
  ANTI_TANK_MISSILES = 50,             // Anti-Tank Missiles
  ANTI_TANK_GUNS = 55,                 // Anti-Tank Guns
  FLAME_ROCKETS = 60,                  // Flame Rockets
  FLAME_THROWERS = 65,                 // Flame Throwers
  ROCKET_LAUNCHERS = 70,               // Rocket Launchers
  MORTARS = 75,                        // Mortars
  HAND_GUNS = 80,                      // Hand Guns
  MAN_PORTABLE_AIR_DEFENSE_SYSTEM_MANPADS =
      85,                        // Man-Portable Air Defense System (MANPADS)
  RECOILLESS_RIFLES = 90,        // Recoilless Rifles
  DRONE_GUNS = 95,               // Drone Guns
  EQUIPMENT_NON_SPECIFIC = 150,  // Equipment, Non-specific
  SENSORS = 151,                 // Sensors
  SIGNAL_SENSOR = 152,           // Signal Sensor
  LASERS = 153,                  // Lasers
  ANIMAL_COMPANION = 160,        // Animal Companion
  PERSONAL_ELECTRONICS = 171,    // Personal Electronics
  LOGISTICS_EQUIPMENT = 172,     // Logistics Equipment
};

/*
 * Source: uid=474
 */
enum class LifeFormHumanSpecificAssaultRifles : uint8_t {
  OTHER = 0,                            // Other
  _4_5MM_INTERDYNAMICS_MKR = 1,         // 4.5mm Interdynamics MKR
  _5_45MM_AK_74 = 10,                   // 5.45mm AK-74
  _5_45MM_AKS_74 = 11,                  // 5.45mm AKS-74
  _5_45MM_AK_74M = 12,                  // 5.45mm AK-74M
  _5_45MM_KBK_WZ_1988_TANTAL = 13,      // 5.45mm Kbk wz. 1988 Tantal
  _5_56MM_AK_101 = 30,                  // 5.56mm AK-101
  _5_56MM_DIEMACO_C7 = 31,              // 5.56mm Diemaco C7
  _5_56MM_COLT_CANADA_C8_CARBINE = 32,  // 5.56mm Colt Canada C8 Carbine
  _5_56MM_GIAT_FAMAS_G2 = 33,           // 5.56mm GIAT FAMAS G2
  _5_56MM_FN_FNC = 34,                  // 5.56mm FN FNC
  _5_56MM_HK_G36 = 35,                  // 5.56mm HK G36
  _5_56MM_IMI_GALIL = 36,               // 5.56mm IMI Galil
  _5_56MM_INSAS = 37,                   // 5.56mm INSAS
  _5_56MM_DAEWOO_K1 = 38,               // 5.56mm Daewoo K1
  _5_56MM_DAEWOO_K2 = 39,               // 5.56mm Daewoo K2
  _5_56MM_M16A1 = 40,                   // 5.56mm M16A1
  _5_56MM_M16A2_A3_A4 = 41,             // 5.56mm M16A2/A3/A4
  _5_56MM_COLT_M4 = 42,                 // 5.56mm Colt M4
  _5_56MM_COLT_M4_SPECIAL_OPERATIONS_PECULIAR_MODIFICATION_SOPMOD =
      43,  // 5.56mm Colt M4 Special Operations Peculiar Modification (SOPMOD)
  _5_56MM_RUGER_MINI_14 = 44,         // 5.56mm Ruger Mini-14
  _5_56MM_ENFIELD_SA_80A2 = 45,       // 5.56mm Enfield SA-80A2
  _5_56MM_PINDAD_SS1_V1 = 46,         // 5.56mm Pindad SS1 V1
  _5_56MM_PINDAD_SS1_V2 = 47,         // 5.56mm Pindad SS1 V2
  _5_56MM_PINDAD_SS1_V3 = 48,         // 5.56mm Pindad SS1 V3
  _5_56MM_STEYR_AUG_A1 = 49,          // 5.56mm Steyr AUG A1
  _5_56MM_T65 = 50,                   // 5.56mm T65
  _5_56MM_T91 = 51,                   // 5.56mm T91
  _5_56MM_TAVOR_TAR_21 = 52,          // 5.56mm Tavor TAR-21
  _5_56MM_TYPE_CQ_M311 = 53,          // 5.56mm Type CQ / M311
  _5_56MM_DAEWOO_K11 = 54,            // 5.56mm Daewoo K11
  _5_56MM_AUSTEYR_F88 = 55,           // 5.56mm Austeyr F88
  _5_56MM_AUSTEYR_F88_GLA = 56,       // 5.56mm Austeyr F88-GLA
  _5_56MM_AUSTEYR_F88_S_A1 = 57,      // 5.56mm Austeyr F88-S-A1
  _5_56MM_AUSTEYR_F88_S_A2 = 58,      // 5.56mm Austeyr F88-S-A2
  _5_56MM_AUSTEYR_F88_C = 59,         // 5.56mm Austeyr F88-C
  _5_56MM_AUSTEYR_F88_S_A1C = 60,     // 5.56mm Austeyr F88-S-A1C
  _5_56MM_AUSTEYR_F88_S_A1_LTR = 61,  // 5.56mm Austeyr F88-S-A1 LTR
  _5_56MM_AUSTEYR_EF88 = 62,          // 5.56mm Austeyr EF88
  _5_56MM_BUSHMASTER_XM15 = 63,       // 5.56mm Bushmaster XM15
  _5_56MM_HK416 = 64,                 // 5.56mm HK416
  _5_56MM_F90 = 65,                   // 5.56mm F90
  _5_56MM_F90_G = 66,                 // 5.56mm F90(G)
  _5_56MM_F90M = 67,                  // 5.56mm F90M
  _5_56MM_F90M_G = 68,                // 5.56mm F90M(G)
  _5_56MM_F90CQB = 69,                // 5.56mm F90CQB
  _5_56MM_MK17_SCAR_L = 70,           // 5.56mm MK17 SCAR-L
  _5_8MM_QBZ_95_TYPE_95 = 100,        // 5.8mm QBZ-95 (Type 95)
  _7_62MM_AK_103 = 110,               // 7.62mm AK-103
  _7_62MM_AK_104 = 111,               // 7.62mm AK-104
  _7_62MM_AK_47 = 112,                // 7.62mm AK-47
  _7_62MM_AKM = 113,                  // 7.62mm AKM
  _7_62MM_AKS_47 = 114,               // 7.62mm AKS-47
  _7_62MM_HK_G3A3 = 115,              // 7.62mm HK G3A3
  _7_62MM_IMI_GALIL = 116,            // 7.62mm IMI Galil
  _7_62MM_KLS = 117,                  // 7.62mm KLS
  _7_62MM_SKS = 118,                  // 7.62mm SKS
  _7_62MM_TYPE_56 = 119,              // 7.62mm Type 56
  _7_62MM_TYPE_63_68 = 120,           // 7.62mm Type 63/68
  _7_62MM_TYPE_81 = 121,              // 7.62mm Type 81
  _7_62MM_MK17_SCAR_H = 122,          // 7.62mm MK17 SCAR-H
  _8MM_LEBEL_M16 = 240,               // 8mm Lebel M16
};

/*
 * Source: uid=475
 */
enum class LifeFormHumanSpecificHighPowerRifles : uint8_t {
  OTHER = 0,                                // Other
  _7_62MM_M14 = 10,                         // 7.62mm M14
  _7_62MM_REMINGTON_700 = 11,               // 7.62mm Remington 700
  _7_62MM_SIG_SAUER_SSG_2000 = 12,          // 7.62mm SIG-Sauer SSG-2000
  _7_62MM_STONER_SR_25 = 13,                // 7.62mm Stoner SR-25
  _7_62MM_MOSIN_NAGANT_MODEL_1891_30 = 14,  // 7.62mm Mosin-Nagant Model 1891/30
  _7_62MM_HK417 = 15,                       // 7.62mm HK417
  _7_62MM_HK417_16_RECCE = 16,              // 7.62mm HK417 16" Recce
  _7_65MM_BAR_M1918 = 50,                   // 7.65mm BAR M1918
  _7_65MM_M1_GARAND = 51,                   // 7.65mm M1 Garand
};

/*
 * Source: uid=476
 */
enum class LifeFormCategoriesUS : uint8_t {
  U_S_ARMY_USA = 11,           // U.S. Army (USA)
  U_S_MARINE_CORPS_USMC = 12,  // U.S. Marine Corps (USMC)
  U_S_AIR_FORCE_USAF = 13,     // U.S. Air Force (USAF)
  U_S_NAVY_USN = 14,           // U.S. Navy (USN)
  U_S_COAST_GUARD_USCG = 15,   // U.S. Coast Guard (USCG)
  RANGERS = 31,                // Rangers
  ARSOF = 32,                  // ARSOF
  FORCE_RECONNAISSANCE = 33,   // Force Reconnaissance
  NAVY_SEAL = 34,              // Navy SEAL
  AFSOF = 35,                  // AFSOF
  DELTA_FORCE = 36,            // Delta Force
  FEDERAL_BUREAU_OF_INVESTIGATION_FBI =
      51,  // Federal Bureau of Investigation (FBI)
  CENTRAL_INTELLIGENCE_AGENCY_CIA = 52,  // Central Intelligence Agency (CIA)
  DEPARTMENT_OF_HOMELAND_SECURITY_DHS =
      53,  // Department of Homeland Security (DHS)
  BUREAU_OF_ALCOHOL_TOBACCO_FIREARMS_AND_EXPLOSIVES_ATF =
      54,  // Bureau of Alcohol, Tobacco, Firearms and Explosives (ATF)
  U_S_SECRET_SERVICE_USSS = 55,      // U.S. Secret Service (USSS)
  U_S_MARSHAL = 56,                  // U.S. Marshal
  STATE_POLICE_HIGHWAY_PATROL = 71,  // State Police (Highway Patrol)
  COUNTY_SHERIFF_POLICE = 72,        // County Sheriff/Police
  MUNICIPAL_POLICE = 73,             // Municipal Police
  RED_CROSS = 124,                   // Red Cross
};

/*
 * Source: uid=477
 */
enum class LifeFormExtraPersonalData : uint8_t {
  NOT_SPECIFIED_MALE = 0,                 // Not Specified (Male)
  ASIAN_MALE = 1,                         // Asian (Male)
  PACIFIC_ISLANDER_MALE = 2,              // Pacific Islander (Male)
  BLACK_MALE = 3,                         // Black (Male)
  EAST_ASIAN_MALE = 4,                    // East Asian (Male)
  HISPANIC_MALE = 5,                      // Hispanic (Male)
  WHITE_MALE = 6,                         // White (Male)
  ARAB_MALE = 7,                          // Arab (Male)
  HOMOGENOUS_COUNTRY_CODE_MALE = 8,       // Homogenous Country Code (Male)
  INDIGENOUS_COUNTRY_CODE_MALE = 9,       // Indigenous Country Code (Male)
  INFANT_0_MONTHS_1_YEAR_MALE = 10,       // Infant (0 months-1 year) (Male)
  TODDLER_1_3_YEARS_MALE = 20,            // Toddler (1-3 years) (Male)
  CHILD_3_10_YEARS_MALE = 30,             // Child (3-10 years) (Male)
  ADOLESCENT_10_12_YEARS_MALE = 40,       // Adolescent (10-12 years) (Male)
  TEENAGER_13_16_YEARS_MALE = 50,         // Teenager (13-16 years) (Male)
  YOUNG_ADULT_17_25_YEARS_MALE = 60,      // Young Adult (17-25 years) (Male)
  ADULT_25_55_YEARS_MALE = 70,            // Adult (25-55 years) (Male)
  SENIOR_ADULT_55_70_YEARS_MALE = 80,     // Senior Adult (55-70 years) (Male)
  ELDERLY_71_YEARS_MALE = 90,             // Elderly (71+ years) (Male)
  FEMALE = 100,                           // Female
  ASIAN_FEMALE = 101,                     // Asian (Female)
  PACIFIC_ISLANDER_FEMALE = 102,          // Pacific Islander (Female)
  BLACK_FEMALE = 103,                     // Black (Female)
  EAST_ASIAN_FEMALE = 104,                // East Asian (Female)
  HISPANIC_FEMALE = 105,                  // Hispanic (Female)
  WHITE_FEMALE = 106,                     // White (Female)
  ARAB_FEMALE = 107,                      // Arab (Female)
  HOMOGENOUS_COUNTRY_CODE_FEMALE = 108,   // Homogenous Country Code (Female)
  INDIGENOUS_COUNTRY_CODE_FEMALE = 109,   // Indigenous Country Code (Female)
  INFANT_0_MONTHS_1_YEAR_FEMALE = 110,    // Infant (0 months-1 year) (Female)
  TODDLER_1_3_YEARS_FEMALE = 120,         // Toddler (1-3 years) (Female)
  CHILD_3_10_YEARS_FEMALE = 130,          // Child (3-10 years) (Female)
  ADOLESCENT_10_12_YEARS_FEMALE = 140,    // Adolescent (10-12 years) (Female)
  TEENAGER_13_16_YEARS_FEMALE = 150,      // Teenager (13-16 years) (Female)
  YOUNG_ADULT_17_25_YEARS_FEMALE = 160,   // Young Adult (17-25 years) (Female)
  ADULT_25_55_YEARS_FEMALE = 170,         // Adult (25-55 years) (Female)
  SENIOR_ADULT_55_70_YEARS_FEMALE = 180,  // Senior Adult (55-70 years) (Female)
  ELDERLY_71_YEARS_FEMALE = 190,          // Elderly (71+ years) (Female)
};

/*
 * Source: uid=478
 */
enum class LifeFormAirCategories : uint8_t {
  BIRD = 200,    // Bird
  INSECT = 201,  // Insect
  MAMMAL = 202,  // Mammal
};

/*
 * Source: uid=479
 */
enum class LifeFormSubsurfaceCategories : uint8_t {
  FISH = 200,        // Fish
  MAMMAL = 201,      // Mammal
  MOLLUSK = 202,     // Mollusk
  CRUSTACEAN = 203,  // Crustacean
  INSECT = 204,      // Insect
};

/*
 * Source: uid=481
 */
enum class LifeFormHumanSpecificSniper : uint8_t {
  OTHER = 0,                  // Other
  _5_8MM_QBU_88_TYPE_88 = 1,  // 5.8mm QBU-88 (Type 88)
  _7_62MM_C3 = 30,            // 7.62mm C3
  _7_62MM_FR_F2 = 31,         // 7.62mm FR F2
  _7_62MM_AWM_F_G22 = 32,     // 7.62mm AWM-F (G22)
  _7_62MM_G3_SG_1 = 33,       // 7.62mm G3 SG/1
  _7_62MM_GALIL_SNIPER = 34,  // 7.62mm Galil Sniper
  _7_62MM_L96A1 = 35,         // 7.62mm L96A1
  _7_62MM_M14_DMR = 36,       // 7.62mm M14 DMR
  _7_62MM_M24_SNIPER_WEAPON_SYSTEM_SWS =
      37,                     // 7.62mm M24 Sniper Weapon System (SWS)
  _7_62MM_M40A1_A3 = 38,      // 7.62mm M40A1/A3
  _7_62MM_STEYR_SSG_69 = 39,  // 7.62mm Steyr SSG 69
  _7_62MM_SVD_DRAGUNOV = 40,  // 7.62mm SVD (Dragunov)
  _7_62MM_TYPE_79 = 41,       // 7.62mm TYPE 79
  _7_62MM_SR_25_MK11 = 42,    // 7.62mm SR-25 MK11
  _7_62MM_AW_SR_98 = 43,      // 7.62mm AW SR-98
  _7_62MM_BLASER_R93 = 44,    // 7.62mm Blaser R93
  _7_62MM_M2010_ENHANCED_SNIPER_RIFLE_ESR =
      45,  // 7.62mm M2010 Enhanced Sniper Rifle (ESR)
  _7_62MM_M110_SEMI_AUTOMATIC_SNIPER_SYSTEM_SASS =
      46,                // 7.62mm M110 Semi-Automatic Sniper System (SASS)
  _7_62MM_L129A1 = 47,   // 7.62mm L129A1
  _7_7MM_TYPE_99 = 100,  // 7.7mm TYPE 99
  _8_58MM_BLASER_R93_TACTICAL_2 = 105,  // 8.58mm Blaser R93 Tactical 2
  _9MM_VSS_VINTOREZ = 110,              // 9mm VSS Vintorez
  _12_7MM_STEYR_HS_50 = 170,            // 12.7mm Steyr HS .50
  _12_7MM_M82A1A_SPECIAL_APPLICATIONS_SCOPED_RIFLE_SASR =
      171,            // 12.7mm M82A1A Special Applications Scoped Rifle (SASR)
  _12_7MM_NSV = 172,  // 12.7mm NSV
  _12_7MM_OSV_96 = 173,          // 12.7mm OSV-96
  _12_7MM_RANGEMASTER_50 = 174,  // 12.7mm Rangemaster 50
  _12_7MM_V94 = 175,             // 12.7mm V94
  _12_7MM_M107 = 176,            // 12.7mm M107
  _20MM_DENEL_NTW_20 = 200,      // 20mm Denel NTW-20
};

/*
 * Source: uid=482
 */
enum class LifeFormHumanSpecificSubMachineGun : uint8_t {
  OTHER = 0,                        // Other
  _5_45MM_AKS_74U_AKSU_74 = 10,     // 5.45mm AKS-74U (AKSU-74)
  _5_56MM_DAEWOO_K1A = 20,          // 5.56mm Daewoo K1A
  _9MM_DAEWOO_K7 = 60,              // 9mm Daewoo K7
  _9MM_MAC_10 = 61,                 // 9mm MAC-10
  _9MM_MADSEN_MK_II = 62,           // 9mm Madsen MK II
  _9MM_MINI_UZI = 63,               // 9mm Mini-Uzi
  _9MM_MODEL_83_SKORPION_SMG = 64,  // 9mm Model 83 Skorpion SMG
  _9MM_MP5A2 = 65,                  // 9mm MP5A2
  _9MM_MP5_N = 66,                  // 9mm MP5-N
  _9MM_STERLING_SMG = 67,           // 9mm Sterling SMG
  _9MM_TYPE_CF_05 = 68,             // 9mm Type CF-05
  _9MM_UZI = 69,                    // 9mm Uzi
};

/*
 * Source: uid=500
 */
enum class AustralianCategoryOverlay : uint8_t {
  AUSTRALIAN_ARMY = 11,                  // Australian Army
  ROYAL_AUSTRALIAN_AIR_FORCE_RAAF = 13,  // Royal Australian Air Force (RAAF)
  ROYAL_AUSTRALIAN_NAVY_RAN = 14,        // Royal Australian Navy (RAN)
  AUSTRALIAN_SPECIAL_OPERATIONS_COMMAND_SOCOMD =
      30,  // Australian Special Operations Command (SOCOMD)
  AUSTRALIAN_DEPARTMENT_OF_HOME_AFFAIRS =
      51,                              // Australian Department of Home Affairs
  AUSTRALIAN_FEDERAL_POLICE_AFP = 52,  // Australian Federal Police (AFP)
};

/*
 * Source: uid=501
 */
enum class LifeFormCategoriesAfghanistan : uint8_t {
  AFGHAN_NATIONAL_ARMY_ANA = 11,  // Afghan National Army (ANA)
  AFGHAN_AIR_FORCE_AAF = 13,      // Afghan Air Force (AAF)
  NATIONAL_DIRECTORATE_OF_SECURITY_NDS =
      51,                           // National Directorate of Security (NDS)
  AFGHAN_NATIONAL_POLICE_ANP = 52,  // Afghan National Police (ANP)
  AFGHAN_BORDER_POLICE_ABP = 53,    // Afghan Border Police (ABP)
  AFGHAN_NATIONAL_CIVIL_ORDER_POLICE_ANCOP =
      54,  // Afghan National Civil Order Police (ANCOP)
  AFGHAN_PUBLIC_PROTECTION_FORCE_APPF =
      55,  // Afghan Public Protection Force (APPF)
  NON_MILITARY_NATIONAL_GOVERNMENT_AGENCIES =
      70,                     // Non-Military National Government Agencies
  TERRORIST_COMBATANT = 101,  // Terrorist Combatant
  HUMANITARIAN_ORGANIZATIONS = 120,  // Humanitarian Organizations
  RED_CRESCENT = 121,                // Red Crescent
  CIVILIAN = 130,                    // Civilian
  PRESS = 133,                       // Press
};

/*
 * Source: uid=505
 */
enum class LifeFormHumanSpecificEquipmentClass : uint8_t {
  SIGNAL_SMOKE = 1,    // Signal Smoke
  FLASH_LIGHT = 2,     // Flash Light
  SIGNAL_MIRROR = 3,   // Signal Mirror
  IR_STROBE = 4,       // IR Strobe
  IR_ILLUMINATOR = 5,  // IR Illuminator
  SPOTLIGHT = 6,       // Spotlight
};

/*
 * Source: uid=506
 */
enum class PlatformSubsurfaceCivilianSubmarineSubcategories : uint8_t {
  UNSPECIFIED = 0,  // UNSPECIFIED
};

/*
 * Source: uid=507
 */
enum class PlatformSubsurfaceCivilianSubmersibleSubcategories : uint8_t {
  UNSPECIFIED = 0,  // UNSPECIFIED
};

/*
 * Source: uid=508
 */
enum class PlatformSubsurfaceCivilianSemiSubmersiblesSubcategories : uint8_t {
  NARCO_SUBMARINE = 1,  // Narco-Submarine
};

/*
 * Source: uid=509
 */
enum class LeafCoverage : uint8_t {
  NORMAL = 0,  // Normal
  BARE = 1,    // Bare
};

/*
 * Source: uid=510
 */
enum class LifeFormHumanSpecificAntiMaterielRifles : uint8_t {
  OTHER = 0,           // Other
  _12_7MM_AW50 = 10,   // 12.7mm AW50
  _12_7MM_AW50F = 11,  // 12.7mm AW50F
};

/*
 * Source: uid=511
 */
enum class LifeFormHumanSpecificShotGuns : uint8_t {
  OTHER = 0,                     // Other
  BROWNING_SUPERPOSED_O_U = 20,  // Browning Superposed O/U
  BROWNING_CYNERGY = 21,         // Browning Cynergy
  BROWNING_AUTO_5 = 22,          // Browning Auto-5
  _18_5MM_BROWNING_CITORI_O_U_12_GAUGE =
      23,  // 18.5mm Browning Citori O/U 12 Gauge
  _16_8MM_BROWNING_CITORI_O_U_16_GAUGE =
      24,  // 16.8mm Browning Citori O/U 16 Gauge
  _15_6MM_BROWNING_CITORI_O_U_20_GAUGE =
      25,  // 15.6mm Browning Citori O/U 20 Gauge
  _14MM_BROWNING_CITORI_O_U_28_GAUGE = 26,  // 14mm Browning Citori O/U 28 Gauge
  _10_4MM_BROWNING_CITORI_O_U_410_BORE =
      27,  // 10.4mm Browning Citori O/U .410 Bore
  _18_5MM_BROWNING_DOUBLE_AUTOMATIC_12_GAUGE =
      28,                           // 18.5mm Browning Double Automatic 12 Gauge
  _18_5MM_ITHACA_37_12_GAUGE = 29,  // 18.5mm Ithaca 37 12 Gauge
  _16_8MM_ITHACA_37_16_GAUGE = 30,  // 16.8mm Ithaca 37 16 Gauge
  _15_6MM_ITHACA_37_20_GAUGE = 31,  // 15.6mm Ithaca 37 20 Gauge
  _14MM_ITHACA_37_28_GAUGE = 32,    // 14mm Ithaca 37 28 Gauge
  _19_7MM_ITHACA_MAG_10_SA_10_GAUGE = 33,  // 19.7mm Ithaca Mag-10 SA 10 Gauge
  _19_7MM_MARLIN_MODEL_55_10_GAUGE = 34,   // 19.7mm Marlin Model 55 10 Gauge
  _18_5MM_MARLIN_MODEL_55_12_GAUGE = 35,   // 18.5mm Marlin Model 55 12 Gauge
  _16_8MM_MARLIN_MODEL_55_16_GAUGE = 36,   // 16.8mm Marlin Model 55 16 Gauge
  _15_6MM_MARLIN_MODEL_55_20_GAUGE = 37,   // 15.6mm Marlin Model 55 20 Gauge
  _18_5MM_MOSSBERG_500_12_GAUGE = 38,      // 18.5mm Mossberg 500 12 Gauge
  _15_6MM_MOSSBERG_500_20_GAUGE = 39,      // 15.6mm Mossberg 500 20 Gauge
  _10_4MM_MOSSBERG_500_410_BORE = 40,      // 10.4mm Mossberg 500 .410 Bore
  _18_5MM_MOSSBERG_590_12_GAUGE = 41,      // 18.5mm Mossberg 590 12 Gauge
  _15_6MM_MOSSBERG_590_20_GAUGE = 42,      // 15.6mm Mossberg 590 20 Gauge
  _10_4MM_MOSSBERG_590_410_BORE = 43,      // 10.4mm Mossberg 590 .410 Bore
  _18_5MM_MOSSBERG_930_SA_12_GAUGE = 44,   // 18.5mm Mossberg 930 SA 12 Gauge
  REMINGTON_MODEL_11_SA = 45,              // Remington Model 11 SA
  REMINGTON_MODEL_10_12_GAUGE = 46,        // Remington Model 10 12 Gauge
  _15_6MM_REMINGTON_MODEL_17_20_GAUGE =
      47,                                  // 15.6mm Remington Model 17 20 Gauge
  REMINGTON_MODEL_31 = 48,                 // Remington Model 31
  REMINGTON_MODEL_11_48_SA = 49,           // Remington Model 11-48 SA
  _18_5MM_REMINGTON_870_12_GAUGE = 50,     // 18.5mm Remington 870 12 Gauge
  _16_8MM_REMINGTON_870_16_GAUGE = 51,     // 16.8mm Remington 870 16 Gauge
  _15_6MM_REMINGTON_870_20_GAUGE = 52,     // 15.6mm Remington 870 20 Gauge
  _14MM_REMINGTON_870_28_GAUGE = 53,       // 14mm Remington 870 28 Gauge
  _10_4MM_REMINGTON_870_410_BORE = 54,     // 10.4mm Remington 870 .410 Bore
  REMINGTON_MODEL_58_SA = 55,              // Remington Model 58 SA
  _18_5MM_REMINGTON_878_SA_12_GAUGE = 56,  // 18.5mm Remington 878 SA 12 Gauge
  _18_5MM_REMINGTON_MODEL_1100_SA_12_GAUGE =
      57,  // 18.5mm Remington Model 1100 SA 12 Gauge
  _16_8MM_REMINGTON_MODEL_1100_SA_16_GAUGE =
      58,  // 16.8mm Remington Model 1100 SA 16 Gauge
  _15_6MM_REMINGTON_MODEL_1100_SA_20_GAUGE =
      59,  // 15.6mm Remington Model 1100 SA 20 Gauge
  _14MM_REMINGTON_MODEL_1100_SA_28_GAUGE =
      60,  // 14mm Remington Model 1100 SA 28 Gauge
  _10_4MM_REMINGTON_MODEL_1100_SA_410_BORE =
      61,  // 10.4mm Remington Model 1100 SA .410 Bore
  _18_5MM_REMINGTON_11_87_SA_12_GAUGE =
      62,  // 18.5mm Remington 11-87 SA 12 Gauge
  _15_6MM_REMINGTON_11_87_SA_20_GAUGE =
      63,  // 15.6mm Remington 11-87 SA 20 Gauge
  _19_7MM_REMINGTON_MODEL_SP_10_SA_10_GAUGE =
      64,  // 19.7mm Remington Model SP-10 SA 10 Gauge
  _18_5MM_REMINGTON_887_12_GAUGE = 65,  // 18.5mm Remington 887 12 Gauge
  _18_5MM_REMINGTON_SPARTA_100_SXS_12_GAUGE =
      70,  // 18.5mm Remington Sparta 100 SxS 12 Gauge
  _15_6MM_REMINGTON_SPARTA_100_SXS_20_GAUGE =
      71,  // 15.6mm Remington Sparta 100 SxS 20 Gauge
  _10_4MM_REMINGTON_SPARTA_100_SXS_410_BORE =
      72,  // 10.4mm Remington Sparta 100 SxS .410 Bore
  _18_5MM_REMINGTON_SPARTAN_310_O_U_12_GAUGE =
      73,  // 18.5mm Remington Spartan 310 O/U 12 Gauge
  _15_6MM_REMINGTON_SPARTAN_310_O_U_20_GAUGE =
      74,  // 15.6mm Remington Spartan 310 O/U 20 Gauge
  _14MM_REMINGTON_SPARTAN_310_O_U_28_GAUGE =
      75,  // 14mm Remington Spartan 310 O/U 28 Gauge
  _10_4MM_REMINGTON_SPARTAN_310_O_U_410_BORE =
      76,  // 10.4mm Remington Spartan 310 O/U .410 Bore
  _18_5MM_REMINGTON_SPARTAN_453_SA_12_GAUGE =
      77,  // 18.5mm Remington Spartan 453 SA 12 Gauge
  _18_5MM_WINCHESTER_MODEL_1200_12_GAUGE =
      80,  // 18.5mm Winchester Model 1200 12 Gauge
  _16_8MM_WINCHESTER_MODEL_1200_16_GAUGE =
      81,  // 16.8mm Winchester Model 1200 16 Gauge
  _15_6MM_WINCHESTER_MODEL_1200_20_GAUGE =
      82,                           // 15.6mm Winchester Model 1200 20 Gauge
  WINCHESTER_MODEL_1887_1901 = 83,  // Winchester Model 1887/1901
  WINCHESTER_MODEL_1897 = 84,       // Winchester Model 1897
  WINCHESTER_MODEL_1912 = 85,       // Winchester Model 1912
  WINCHESTER_MODEL_21_SXS = 86,     // Winchester Model 21 SxS
  WINCHESTER_MODEL_37_SXS = 87,     // Winchester Model 37 SxS
  _18_5MM_HR_ULTRASLUG_SXS_12_GAUGE = 88,  // 18.5mm HR Ultraslug SxS 12 Gauge
  _15_6MM_HR_ULTRASLUG_SXS_20_GAUGE = 89,  // 15.6mm HR Ultraslug SxS 20 Gauge
  _18_5MM_CIENER_ULTIMATE_O_U_12_GAUGE =
      90,  // 18.5mm Ciener Ultimate O/U 12 Gauge
  _18_5MM_COACH_GUN_SXS_DOUBLE_BARREL_12_GAUGE =
      91,  // 18.5mm Coach Gun SxS Double Barrel 12 Gauge
  _18_5MM_RUGER_GOLD_LABEL_SXS_12_GAUGE =
      92,  // 18.5mm Ruger Gold Label SxS 12 Gauge
  _18_5MM_HIGH_STANDARD_MODEL_10_SA_12_GAUGE =
      93,  // 18.5mm High Standard Model 10 SA 12 Gauge
  _18_5MM_KEL_TEX_KSG_12_GAUGE = 94,        // 18.5mm Kel-Tex KSG 12 Gauge
  _18_5_KAC_MASTERKEY_12_GAUGE = 95,        // 18.5 KAC Masterkey 12 Gauge
  _18_5MM_M26_M_A_S_S_12_GAUGE = 96,        // 18.5mm M26 M.A.S.S. 12 Gauge
  _18_5MM_SRM_ARMS_M1216_SA_12_GAUGE = 97,  // 18.5mm SRM Arms M1216 SA 12 Gauge
  _18_5MM_AA_12_FA_ATCHISSON_ASSAULT = 98,  // 18.5mm AA-12 FA Atchisson Assault
  _18_5MM_PANCOR_JACKHAMMER_FA_12_GAUGE =
      99,                             // 18.5mm Pancor Jackhammer FA 12 Gauge
  _18_5MM_USAS_12_FA_12_GAUGE = 110,  // 18.5mm USAS-12 FA 12 Gauge
  _18_5MM_MAUL_SA_12_GAUGE = 111,     // 18.5mm MAUL SA 12 Gauge
  _18_5MM_FN_SLP_SA_12_GAUGE = 112,   // 18.5mm FN SLP SA 12 Gauge
  _18_5MM_FN_TPS_12_GAUGE = 113,      // 18.5mm FN TPS 12 Gauge
  _18_5MM_ENARM_PENTAGUN_SA_12_GAUGE =
      115,                      // 18.5mm ENARM Pentagun SA 12 Gauge
  STEVENS_MODEL_520_620 = 116,  // Stevens Model 520/620
  STOEGER_COACH_GUN_SXS = 117,  // Stoeger Coach Gun SxS
  STOEGER_CONDOR_O_U = 118,     // Stoeger Condor O/U
  _18_5MM_ARMSCOR_MODEL_30_SA_12_GAUGE =
      120,                   // 18.5mm Armscor Model 30 SA 12 Gauge
  WEATHERBY_SA_08_SA = 121,  // Weatherby SA-08 SA
  _18_5MM_FABARM_SDASS_TACTICAL_12_GAUGE =
      122,                          // 18.5mm Fabarm SDASS Tactical 12 Gauge
  _18_5MM_MAG_7_12_GAUGE = 123,     // 18.5mm MAG-7 12 Gauge
  _18_5MM_NEOSTEAD_12_GAUGE = 124,  // 18.5mm Neostead 12 Gauge
  _18_5MM_ARMSEL_STRIKER_SA_12_GAUGE =
      125,  // 18.5mm Armsel Striker SA 12 Gauge
  _18_5MM_PARKER_HALE_ROGUN_SA_12_GAUGE =
      127,                             // 18.5mm Parker Hale Rogun SA 12 Gauge
  _26MM_RGA_86_REVOLVER = 130,         // 26mm RGA-86 Revolver
  _18_5MM_SJORGREN_SA_12_GAUGE = 131,  // 18.5mm Sjorgren SA 12 Gauge
  _18_5MM_AKDAL_MKA_1919_SA_12_GAUGE =
      132,  // 18.5mm Akdal MKA 1919 SA 12 Gauge
  _18_5MM_RETAY_MASAI_MARA_SA_12_GAUGE =
      133,                               // 18.5mm Retay Masai Mara SA 12 Gauge
  _18_5MM_SAFIR_T_14_SA_12_GAUGE = 134,  // 18.5mm Safir T-14 SA 12 Gauge
  _18_5MM_BENELLI_M1_SUPER_90_SA_12_GAUGE =
      150,  // 18.5mm Benelli M1 Super 90 SA 12 Gauge
  _15_6MM_BENELLI_M1_SUPER_90_SA_20_GAUGE =
      151,  // 15.6mm Benelli M1 Super 90 SA 20 Gauge
  _18_5MM_BENELLI_M3_SUPER_90_SA_12_GAUGE =
      152,  // 18.5mm Benelli M3 Super 90 SA 12 Gauge
  _15_6MM_BENELLI_M3_SUPER_90_SA_20_GAUGE =
      153,  // 15.6mm Benelli M3 Super 90 SA 20 Gauge
  _18_5MM_BENELLI_M4_SUPER_90_SA_12_GAUGE =
      154,  // 18.5mm Benelli M4 Super 90 SA 12 Gauge
  _18_5MM_BENELLI_NOVA_12_GAUGE = 155,  // 18.5mm Benelli Nova 12 Gauge
  _15_6MM_BENELLI_NOVE_20_GAUGE = 156,  // 15.6mm Benelli Nove 20 Gauge
  _18_5MM_BENELLI_RAFFAELLO_SA_12_GAUGE =
      157,  // 18.5mm Benelli Raffaello SA 12 Gauge
  _18_5MM_BENELLI_SUPERNOVA_12_GAUGE =
      158,                                  // 18.5mm Benelli Supernova 12 Gauge
  _18_5MM_BENELLI_VINCI_SA_12_GAUGE = 159,  // 18.5mm Benelli Vinci SA 12 Gauge
  _18_5MM_BERETTA_1201FP_SA_12_GAUGE =
      160,                                  // 18.5mm Beretta 1201FP SA 12 Gauge
  _18_5MM_BERETTA_682_O_U_12_GAUGE = 161,   // 18.5mm Beretta 682 O/U 12 Gauge
  _15_6MM_BERETTA_682_O_U_20_GAUGE = 162,   // 15.6mm Beretta 682 O/U 20 Gauge
  _14MM_BERETTA_682_O_U_28_GAUGE = 163,     // 14mm Beretta 682 O/U 28 Gauge
  _10_4MM_BERETTA_682_O_U_410_BORE = 164,   // 10.4mm Beretta 682 O/U .410 Bore
  _18_5MM_BERETTA_A303_SA_12_GAUGE = 165,   // 18.5mm Beretta A303 SA 12 Gauge
  _18_5MM_BERETTA_AL391_SA_12_GAUGE = 166,  // 18.5mm Beretta AL391 SA 12 Gauge
  _15_6MM_BERETTA_AL391_SA_20_GAUGE = 167,  // 15.6mm Beretta AL391 SA 20 Gauge
  _18_5MM_BERETTA_DT_10_O_U_12_GAUGE =
      168,                          // 18.5mm Beretta DT-10 O/U 12 Gauge
  BERETTA_SILVER_PIGEON_O_U = 169,  // Beretta Silver Pigeon O/U
  _18_5MM_BERETTA_XTREMA_2_SA_12_GAUGE =
      170,  // 18.5mm Beretta Xtrema 2 SA 12 Gauge
  _15_6MM_FRANCHI_AL_48_SA_20_GAUGE = 171,  // 15.6mm Franchi AL-48 SA 20 Gauge
  _14MM_FRANCHI_AL_48_SA_28_GAUGE = 172,    // 14mm Franchi AL-48 SA 28 Gauge
  _10_4MM_FRANCHI_MOD_410_FA_410_BORE =
      173,  // 10.4mm Franchi mod .410 FA .410 Bore
  _18_5MM_FRANCHI_SPAS_12_SA_12_GAUGE =
      174,  // 18.5mm Franchi SPAS-12 SA 12 Gauge
  _18_5MM_FRANCHI_SPAS_15_SA_12_GAUGE =
      175,  // 18.5mm Franchi SPAS-15 SA 12 Gauge
  _18_5MM_VALTRO_PM_5_PM_5_350_12_GAUGE =
      176,                               // 18.5mm Valtro PM-5/PM-5-350 12 Gauge
  BLAZER_F3_O_U = 180,                   // Blazer F3 O/U
  _18_5MM_HK_FABARM_FP6_12_GAUGE = 181,  // 18.5mm HK FABARM FP6 12 Gauge
  _18_5MM_HK_CAWS_FA_12_GAUGE = 182,     // 18.5mm HK CAWS FA 12 Gauge
  _18_5MM_BAIKAL_MP_153_SA_12_GAUGE = 200,  // 18.5mm Baikal MP-153 SA 12 Gauge
  _18_5MM_BANDAYEVSKY_RB_12_12_GAUGE =
      201,                               // 18.5mm Bandayevsky RB-12 12 Gauge
  _18_5MM_MOLOT_BEKAS_M_12_GAUGE = 202,  // 18.5mm Molot Bekas-M 12 Gauge
  _16_8MM_MOLOT_BEKAS_M_16_GAUGE = 203,  // 16.8mm Molot Bekas-M 16 Gauge
  _18_5MM_TOZ_194_12_GAUGE = 204,        // 18.5mm TOZ-194 12 Gauge
  _23MM_KS_23 = 205,                     // 23mm KS-23
  MTS_255_REVOLER_12_GAUGE = 206,        // MTs-255 Revoler 12 Gauge
  _18_5MM_RMB_93_12_GAUGE = 207,         // 18.5mm RMB-93 12 Gauge
  _18_5MM_SAIGA_12_SA_12_GAUGE = 208,    // 18.5mm Saiga-12 SA 12 Gauge
  _15_6MM_SAIGA_12_SA_20_GAUGE = 209,    // 15.6mm Saiga-12 SA 20 Gauge
  _10_4MM_SAIGA_12_SA_410_BORE = 210,    // 10.4mm Saiga-12 SA .410 Bore
  _18_5MM_VEPR_12_SA_12_GAUGE = 211,     // 18.5mm Vepr-12 SA 12 Gauge
  _18_5MM_FORT_500_12_GAUGE = 212,       // 18.5mm Fort 500 12 Gauge
  _18_5MM_NORINCO_HP9_1_12_GAUGE = 220,  // 18.5mm Norinco HP9-1 12 Gauge
};

/*
 * Source: uid=512
 */
enum class LifeFormHumanSpecificMortars : uint8_t {
  OTHERS = 0,       // Others
  _60MM_M224 = 30,  // 60mm M224
  _81MM_F2 = 50,    // 81mm F2
  _81MM_L16 = 51,   // 81mm L16
  _81MM_M252 = 52,  // 81mm M252
};

/*
 * Source: uid=513
 */
enum class LifeFormHumanSpecificHandGuns : uint8_t {
  OTHER = 0,                               // Other
  _5_45MM_PSM = 1,                         // 5.45mm PSM
  _9MM_MK3_SLP = 30,                       // 9mm MK3 SLP
  _9MM_BERETTA_92S_92FS_M9 = 31,           // 9mm Beretta 92S/92FS (M9)
  _9MM_H_K_USP = 32,                       // 9mm H&K USP
  _9MM_STECHKIN_APS = 33,                  // 9mm Stechkin APS
  _9MM_MAKAROV_PM = 34,                    // 9mm Makarov PM
  _9MM_SMITH_AND_WESSON_SD_SIGMA = 35,     // 9mm Smith and Wesson SD (Sigma)
  _9MM_GLOCK_17 = 36,                      // 9mm Glock 17
  _9MM_SIG_SAUER_M17 = 37,                 // 9mm SIG Sauer M17
  _9MM_SIG_PRO = 38,                       // 9mm SIG Pro
  _9MM_SMITH_AND_WESSON_SW1911 = 39,       // 9mm Smith and Wesson SW1911
  _9MM_SMITH_AND_WESSON_5900_SERIES = 40,  // 9mm Smith and Wesson 5900-series
  _45_CAL_M1911 = 41,                      // .45 Cal M1911
  _9_07MM_RUGER_GP_100 = 50,               // 9.07mm Ruger GP 100
  _10MM_GLOCK_20 = 60,                     // 10mm Glock 20
};

/*
 * Source: uid=514
 */
enum class LifeFormHumanSpecificWeaponNonSpecific : uint8_t {
  OTHER = 0,             // Other
  KNIFE = 10,            // Knife
  MACHETE = 50,          // Machete
  EXPLOSIVE_VEST = 100,  // Explosive Vest
  M18A1_CLAYMORE = 150,  // M18A1 Claymore
};

/*
 * Source: uid=515
 */
enum class LifeFormHumanSpecificGrenadeLaunchers : uint8_t {
  OTHER = 0,                          // Other
  _40X46MM_ARSENAL_UGGL_M1 = 1,       // 40x46mm Arsenal UGGL-M1
  _40X46MM_ARSENAL_MSGL = 2,          // 40x46mm Arsenal MSGL
  _40MM_VOG_ARSENAL_MSGL = 3,         // 40mm VOG Arsenal MSGL
  _40X46MM_ARSENAL_UBGL_M16 = 4,      // 40x46mm Arsenal UBGL-M16
  _40X46MM_ARSENAL_UBGL_M8 = 5,       // 40x46mm Arsenal UBGL-M8
  _40X46MM_ARSENAL_UBGL_M7 = 6,       // 40x46mm Arsenal UBGL-M7
  _30MM_BS_1_TISHINA = 10,            // 30mm BS-1 Tishina
  _40MM_BTS_203 = 11,                 // 40mm BTS-203
  _40MM_INDUMIL_IMC_40 = 12,          // 40mm Indumil IMC-40
  _40MM_VOG_BG_15 = 20,               // 40mm VOG BG-15
  _40MM_VOG_GP_25_KOSTOYOR = 21,      // 40mm VOG GP-25 Kostoyor
  _40MM_VOG_GP_30_OBUVKA = 22,        // 40mm VOG GP-30 Obuvka
  _40MM_VOG_GP_34 = 23,               // 40mm VOG GP-34
  _40MM_VOG_RGM_40_KASTET = 24,       // 40mm VOG RGM-40 Kastet
  _40MM_VOG_RG_6 = 25,                // 40mm VOG RG-6
  _40X46MM_M79 = 30,                  // 40x46mm M79
  _40X46MM_M203 = 31,                 // 40x46mm M203
  _40X36MM_M320 = 32,                 // 40x36mm M320
  _40X46MM_CIS_40_GL = 35,            // 40x46mm CIS 40 GL
  _40X46MM_EAGLE_GL = 36,             // 40x46mm EAGLE GL
  _40X46MM_HK_AG36 = 37,              // 40x46mm HK AG36
  _40X46MM_HK_AG_C_GLM = 38,          // 40x46mm HK AG-C/GLM
  _40X46MM_HK69A1 = 39,               // 40x46mm HK69A1
  _40X46MM_BERETTA_GLX_160 = 40,      // 40x46mm Beretta GLX 160
  _40X46MM_ARDE_UBGL = 41,            // 40x46mm ARDE UBGL
  _40X46MM_XML148 = 42,               // 40x46mm XML148
  _40X46MM_CHINA_LAKE_GL = 43,        // 40x46mm China Lake GL
  _40X46MM_HAWK_MM_1 = 44,            // 40x46mm Hawk MM-1
  _25X40MM_XM25_CDTE = 50,            // 25x40mm XM25 CDTE
  _37MM_MILKOR37_38_LL_STOPPER = 60,  // 37mm Milkor37/38 LL Stopper
  _40MM_MILKOR40_GL = 61,             // 40mm Milkor40 GL
  _40MM_MILKOR_MGL = 62,              // 40mm Milkor MGL
  _40X47MM_PALLAD_WZ1974 = 65,        // 40x47mm Pallad wz1974
  _40X47MM_PALLAD_WZ1983 = 66,        // 40x47mm Pallad wz1983
  UGL_200_CANISTER_RWGL_3 = 70,       // UGL 200 Canister RWGL-3
  _20X30MM_ST_DAEWOO_K11 = 80,        // 20x30mm ST Daewoo K11
  _35MM_TYPE_91_BREECHLOAD_GL = 90,   // 35mm Type-91 BreechLoad GL
  _40X53MM_CZW_40 = 95,               // 40x53mm CZW-40
  _45MM_DP_64 = 100,                  // 45mm DP-64
  _20X42MM_NEOPUP_PAW_20 = 105,       // 20x42mm Neopup PAW-20
};

/*
 * Source: uid=516
 */
enum class LifeFormHumanSpecificMachineGuns : uint8_t {
  OTHER = 0,                                // Other
  _5_56X45MM_XM214_MICROGUN_SIX_PAK = 10,   // 5.56x45mm XM214 Microgun Six-Pak
  _7_62X51MM_M134_XM196_MINIGUN = 11,       // 7.62x51mm M134/XM196 Minigun
  _5_56X45MM_M249_FN_MINIMI_SAW_LMG = 20,   // 5.56x45mm M249/FN Minimi SAW/LMG
  _5_56X45MM_FN_MINIMI_MK3_LMG = 21,        // 5.56x45mm FN Minimi Mk3 LMG
  _7_62X51MM_FN_MINIMI_7_62_MK3_GPMG = 22,  // 7.62x51mm FN Minimi 7.62 Mk3 GPMG
  _7_62X63MM_M1941_JOHNSON = 25,            // 7.62x63mm M1941 Johnson
  _7_62X63MM_M1918_BAR = 26,                // 7.62x63mm M1918 BAR
  _7_62X51MM_M1919A4_MK_21_MOD_0_BROWNING_MMG =
      27,  // 7.62x51mm M1919A4/Mk 21 Mod 0 Browning MMG
  _7_62X63MM_M1919A6_BROWNING_MMG = 28,     // 7.62x63mm M1919A6 Browning MMG
  _7_62X51MM_M37_BROWNING_MMG = 29,         // 7.62x51mm M37 Browning MMG
  _5_56X45MM_ARES_SHRIKE_5_56_LMG = 30,     // 5.56x45mm Ares Shrike 5.56 LMG
  _5_56X45MM_LSAT_LMG = 31,                 // 5.56x45mm LSAT LMG
  _5_56X45MM_CMG_1_LMG = 32,                // 5.56x45mm CMG-1 LMG
  _5_56X45MM_CMG_2_LMG = 33,                // 5.56x45mm CMG-2 LMG
  _5_56X45MM_STONER_63A_LMG = 34,           // 5.56x45mm Stoner 63A LMG
  _5_56X45MM_ULTIMAX_100_LMG = 35,          // 5.56x45mm Ultimax 100 LMG
  _5_56X54MM_BERETTA_AS70_90_LMG = 36,      // 5.56x54mm Beretta AS70/90 LMG
  _5_56X45MM_CETME_AMELI_LMG = 37,          // 5.56x45mm CETME Ameli LMG
  _5_56X45MM_IMI_NEGEV_LMG = 38,            // 5.56x45mm IMI Negev LMG
  _5_56X45MM_INSAS_LMG = 39,                // 5.56x45mm INSAS LMG
  _5_56X45MM_AUG_LMG = 40,                  // 5.56x45mm AUG LMG
  _5_56X45MM_AUG_HBAR_LMG = 41,             // 5.56x45mm AUG HBAR LMG
  _5_56X45MM_HK_MG4_LMG = 43,               // 5.56x45mm HK MG4 LMG
  _5_56X45MM_HK23_GR_9_LMG = 44,            // 5.56x45mm HK23/GR-9 LMG
  _5_56X45MM_M27_IAR_SAW = 46,              // 5.56x45mm M27 IAR SAW
  _5_56X45MM_L86_LSW = 47,                  // 5.56x45mm L86 LSW
  _5_56X45MM_DAEWOO_K3_LMG = 48,            // 5.56x45mm Daewoo K3 LMG
  _5_56X45MM_VECTOR_MINI_SS_GPMG = 49,      // 5.56x45mm Vector Mini SS GPMG
  _7_62X51MM_M60_GPMG = 50,                 // 7.62x51mm M60 GPMG
  _7_62X51MM_M60E3_GPMG = 51,               // 7.62x51mm M60E3 GPMG
  _7_62X51MM_M60E4_GPMG = 52,               // 7.62x51mm M60E4 GPMG
  _7_62X51MM_M60E6_GPMG = 53,               // 7.62x51mm M60E6 GPMG
  _7_62X51MM_MARK_48_GMPG = 55,             // 7.62x51mm Mark 48 GMPG
  _7_62X51MM_M240_FN_MAG_58_GPMG = 58,      // 7.62x51mm M240/FN MAG 58 GPMG
  _7_62X51MM_M240E4_M240B_GPMG = 59,        // 7.62x51mm M240E4/M240B GPMG
  _7_62X51MM_M240E1_M240D_GPMG = 60,        // 7.62x51mm M240E1/M240D GPMG
  _7_62X51MM_M240G_GPMG = 61,               // 7.62x51mm M240G GPMG
  _7_62X51MM_M240E5_M240H_GPMG = 62,        // 7.62x51mm M240E5/M240H GPMG
  _7_62X51MM_M240L_GPMG = 63,               // 7.62x51mm M240L GPMG
  _7_62X39MM_KK_62_LMG = 65,                // 7.62x39mm Kk 62 LMG
  _7_62X51MM_VECTOR_SS_77_GPMG = 70,        // 7.62x51mm Vector SS-77 GPMG
  _7_62X51MM_SIG_MG_710_3_GPMG = 71,        // 7.62x51mm SIG MG 710-3 GPMG
  _7_62X51MM_STERLING_7_62_GMPG = 72,       // 7.62x51mm Sterling 7.62 GMPG
  _7_62X51MM_SUMITOMO_TYPE_62_GPMG = 73,    // 7.62x51mm Sumitomo Type-62 GPMG
  _7_62X51MM_DAEWOO_K12_GPMG = 74,          // 7.62x51mm Daewoo K12 GPMG
  _7_62X51MM_MG_51_GPMG = 75,               // 7.62x51mm MG 51 GPMG
  _7_62X51MM_RHEINMETALL_MG_3 = 76,         // 7.62x51mm Rheinmetall MG 3
  _7_62X51MM_RHEINMETALL_MG_3KWS = 77,      // 7.62x51mm Rheinmetall MG 3KWS
  _7_62X51MM_MG5_HK121_GPMG = 80,           // 7.62x51mm MG5/HK121 GPMG
  _7_62X51MM_HK21_GPMG = 81,                // 7.62x51mm HK21 GPMG
  _7_62X51MM_AA_52_GPMP = 85,               // 7.62x51mm AA-52 GPMP
  _7_62X51MM_UKM_2000_GPMG = 86,            // 7.62x51mm UKM-2000 GPMG
  _7_62X54MM_UK_VZ_59_GPMG = 88,            // 7.62x54mm Uk vz. 59 GPMG
  _7_92X57MM_MG_42_GPMG = 89,               // 7.92x57mm MG 42 GPMG
  _12_7X99MM_M2A1_BROWNING_HMG = 100,       // 12.7x99mm M2A1 Browning HMG
  _12_7X99MM_M2HB_BROWNING_HMG = 101,       // 12.7x99mm M2HB Browning HMG
  _12_7X99MM_M2HB_QCB_BROWNING_HMG = 102,   // 12.7x99mm M2HB-QCB Browning HMG
  _12_7X99MM_M85C_HMG = 105,                // 12.7x99mm M85C HMG
  _12_7X99MM_RHEINMETALL_RMG_50_HMG = 108,  // 12.7x99mm Rheinmetall RMG.50 HMG
  _12_7X99MM_HK25_HMG = 110,                // 12.7x99mm HK25 HMG
  _12_7X99MM_CIS_50MG = 112,                // 12.7x99mm CIS 50MG
  _5_45X39MM_IP_2_LMG = 120,                // 5.45x39mm IP-2 LMG
  _5_45X39MM_NIKONOV_LMG = 121,             // 5.45x39mm Nikonov LMG
  _5_45X39MM_M74_RPK = 122,                 // 5.45x39mm M74 RPK
  _7_62X39MM_M43_RPK = 125,                 // 7.62x39mm M43 RPK
  _7_62X39MM_RPD_SAW = 126,                 // 7.62x39mm RPD SAW
  _7_62X39MM_ZASTAVA_M72 = 127,             // 7.62x39mm Zastava M72
  _7_62X39MM_TYPE_81_LMG = 128,             // 7.62x39mm Type-81 LMG
  _7_62X51MM_ZASTAVA_M77 = 135,             // 7.62x51mm Zastava M77
  _7_62X54MM_PK_GPMG = 140,                 // 7.62x54mm PK GPMG
  _7_62X54MM_AEK_999_GPMP = 141,            // 7.62x54mm AEK-999 GPMP
  _7_62X54MM_PECHENEG_GPMG = 142,           // 7.62x54mm Pecheneg GPMG
  _7_62X54MM_ZASTAVA_M84 = 143,             // 7.62x54mm Zastava M84
  _7_62X54MM_TYPE_67_GPMG = 144,            // 7.62x54mm Type-67 GPMG
  _7_62X54MM_TYPE_80_GPMG = 145,            // 7.62x54mm Type-80 GPMG
  _12_7X108MM_NSV_HMG = 150,                // 12.7x108mm NSV HMG
  _12_7X108MM_KORD_HMG = 151,               // 12.7x108mm Kord HMG
  _12_7X108MM_KPD_12_7_HMG = 152,           // 12.7x108mm KPD-12.7 HMG
  _12_7X108MM_ZASTAVA_M02_COYOTOE_HMG =
      153,                           // 12.7x108mm Zastava M02 Coyotoe HMG
  _12_7X108MM_ZASTAVA_M87 = 154,     // 12.7x108mm Zastava M87
  _12_7X108MM_TYPE_77_HMG = 155,     // 12.7x108mm Type-77 HMG
  _12_7X108MM_W85_HMG = 156,         // 12.7x108mm W85 HMG
  _12_7X108MM_TYPE_90_HMG = 157,     // 12.7x108mm Type-90 HMG
  _5_8X42MM_QJY_88_LMG = 164,        // 5.8x42mm QJY-88 LMG
  _5_8X42MM_QBB_95_DBP87_LMG = 165,  // 5.8x42mm QBB-95 DBP87 LMG
  _5_56X45MM_QBB_95_1_LMG = 166,     // 5.56x45mm QBB-95-1 LMG
};

/*
 * Source: uid=517
 */
enum class LifeFormHumanSpecificGrenadeLaunchingMachineGun : uint8_t {
  OTHER = 0,                     // Other
  _40X53MM_HK_GMG = 20,          // 40x53mm HK GMG
  _40X53MM_MK47_STRIKER = 25,    // 40x53mm Mk47 Striker
  _40MM_M75 = 26,                // 40mm M75
  _40MM_M129 = 27,               // 40mm M129
  _40X46MM_XM_174 = 28,          // 40x46mm XM 174
  _40X46MM_MK18_MOD_0 = 29,      // 40x46mm Mk18 Mod 0
  _40X53MM_MK19 = 30,            // 40x53mm Mk19
  _40X46MM_MK20_MOD_0 = 31,      // 40x46mm Mk20 Mod 0
  _30X29MM_RAG_30_SAG_30 = 40,   // 30x29mm RAG-30/SAG-30
  _30X29MM_AGS_17_PLAMYA = 41,   // 30x29mm AGS-17 Plamya
  _30X29MM_AGS_30_ATLANT = 42,   // 30x29mm AGS-30 Atlant
  _40MM_VOG_AGS_40_BALKAN = 43,  // 40mm VOG AGS-40 Balkan
  _40X53MM_SB_LAG_40 = 44,       // 40x53mm SB LAG 40
  _40X53MM_VEKTOR_Y3 = 50,       // 40x53mm Vektor Y3
  _40X53MM_CIS_40 = 55,          // 40x53mm CIS 40
  _40X56MM_HOWA_TYPE_96 = 60,    // 40x56mm Howa Type-96
  _40X53MM_DAEWOO_PRECISION_INDUSTRIES_K4 =
      65,  // 40x53mm Daewoo Precision Industries K4
  _25X59MM_XM307_ADVANCED_CREW_SERVED_WEAPON =
      70,               // 25x59mm XM307 Advanced Crew Served Weapon
  _35X32MM_QLZ87 = 80,  // 35x32mm QLZ87
};

/*
 * Source: uid=518
 */
enum class LifeFormHumanSpecificAntiTankRockets : uint8_t {
  OTHER = 0,                          // Other
  _82MM_B_300 = 10,                   // 82mm B-300
  _82MM_SHIPON = 11,                  // 82mm Shipon
  _83MM_MK153_MOD_0_SMAW = 12,        // 83mm MK153 Mod 0 SMAW
  _66MM_M72_LAW = 20,                 // 66mm M72 LAW
  _66MM_M72A1_LAW = 21,               // 66mm M72A1 LAW
  _66MM_M72A2_LAW = 22,               // 66mm M72A2 LAW
  _66MM_M72A3_LAW = 23,               // 66mm M72A3 LAW
  _66MM_M72A4_LAW = 24,               // 66mm M72A4 LAW
  _66MM_M72A5_LAW = 25,               // 66mm M72A5 LAW
  _66MM_M72A6_LAW = 26,               // 66mm M72A6 LAW
  _66MM_M72A7_LAW = 27,               // 66mm M72A7 LAW
  _66MM_M72E8_LAW = 28,               // 66mm M72E8 LAW
  _66MM_M72E9_LAW = 29,               // 66mm M72E9 LAW
  _66MM_M72E10_LAW = 30,              // 66mm M72E10 LAW
  _66MM_M72AS_LAW = 31,               // 66mm M72AS LAW
  _94MM_LAW_80 = 35,                  // 94mm LAW 80
  _60MM_M1_BAZOOKA = 40,              // 60mm M1 Bazooka
  _60MM_M1A1_BAZOOKA = 41,            // 60mm M1A1 Bazooka
  _60MM_M9_BAZOOKA = 42,              // 60mm M9 Bazooka
  _60MM_M9A1_BAZOOKA = 43,            // 60mm M9A1 Bazooka
  _89MM_M20_SUPER_BAZOOKA = 44,       // 89mm M20 Super Bazooka
  _89MM_M20A1_SUPER_BAZOOKA = 45,     // 89mm M20A1 Super Bazooka
  _89MM_M20B1_SUPER_BAZOOKA = 46,     // 89mm M20B1 Super Bazooka
  _89MM_M20A1B1_SUPER_BAZOOKA = 47,   // 89mm M20A1B1 Super Bazooka
  _89MM_M25_THREE_SHOT_BAZOOKA = 48,  // 89mm M25 Three Shot Bazooka
  _89MM_INSTALAZA_M65 = 49,           // 89mm Instalaza M65
  _90MM_INSTALAZA_C90 = 50,           // 90mm Instalaza C90
  _90MM_C90_CR_M3 = 51,               // 90mm C90-CR (M3)
  _90MM_C90_CR_AM_M3 = 52,            // 90mm C90-CR-AM (M3)
  _90MM_C90_CR_BK_M3 = 53,            // 90mm C90-CR-BK (M3)
  _90MM_C90_CR_IN_M3 = 54,            // 90mm C90-CR-IN (M3)
  _60MM_PZF_3 = 60,                   // 60mm PzF 3
  _60MM_PZF_3_IT = 61,                // 60mm PzF 3-IT
  _60MM_PZF_3_BUNKERFAUST = 62,       // 60mm PzF 3 Bunkerfaust
  _44MM_PZF_44 = 65,                  // 44mm PzF 44
  _30MM_PANZERFAUST_30 = 70,          // 30mm Panzerfaust 30
  _50MM_PANZERFAUST_60 = 71,          // 50mm Panzerfaust 60
  _60MM_PANZERFAUST_100 = 72,         // 60mm Panzerfaust 100
  _60MM_PANZERFAUST_150 = 73,         // 60mm Panzerfaust 150
  _88MM_PANZERSCHRECK_RPZB = 75,      // 88mm Panzerschreck RPzB
  _83MM_RL_83_BLINDICIDE = 80,        // 83mm RL-83 Blindicide
  _100MM_RL_100_BLINDICIDE = 81,      // 100mm RL-100 Blindicide
  _90MM_M79_OSA_WASP = 85,            // 90mm M79 Osa (Wasp)
  _64MM_M80_ZOLJA_WASP = 86,          // 64mm M80 Zolja (Wasp)
  _67MM_ARMBURST_CROSSBOW = 90,       // 67mm Armburst Crossbow
  _40MM_TYPE_69_RPG = 93,             // 40mm Type-69 RPG
  _89MM_PIAT = 95,                    // 89mm PIAT
  _40MM_RPG_2 = 100,                  // 40mm RPG-2
  _64MM_RPG_18_MUKHA = 101,           // 64mm RPG-18 Mukha
  _72_5MM_RPG_22_NETTO = 102,         // 72.5mm RPG-22 Netto
  _72_5MM_RPG_26_AGLEN = 103,         // 72.5mm RPG-26 Aglen
  _105MM_RPG_29_VAMPIR = 104,         // 105mm RPG-29 Vampir
  _105MM_RPG_30_KRYUK = 105,          // 105mm RPG-30 Kryuk
  _105MM_RPG_32_NASHSHAB = 106,       // 105mm RPG-32 Nashshab
  _40MM_RPG_7 = 110,                  // 40mm RPG-7
  _40MM_PSRL_1_RPG_7USA = 111,        // 40mm PSRL-1 (RPG-7USA)
  _40MM_GS_777_PSRL_2 = 112,          // 40mm GS-777/PSRL-2
  _68MM_RPG_76_KOMAR_MOSQUITO = 120,  // 68mm RPG-76 Komar (Mosquito)
  _120MM_SEP_DARD_120 = 125,          // 120mm SEP Dard 120
  _58MM_WASP_58 = 128,                // 58mm WASP 58
  _73MM_LRAC_73_50 = 130,             // 73mm LRAC 73-50
  _89MM_LRAC_89_F1_STRIM = 131,       // 89mm LRAC 89-F1 STRIM
  _90MM_MATADOR_MAN_PORTABLE_ANTI_TANK_ANTI_DOOR =
      135,                 // 90mm MATADOR (Man-Portable Anti-Tank, Anti-DOoR)
  _90MM_MATADOR_MP = 136,  // 90mm MATADOR-MP
  _90MM_MATADOR_WB = 137,  // 90mm MATADOR-WB
  _90MM_MATADOR_AS = 138,  // 90mm MATADOR-AS
  _78MM_MARA_ANTI_TANK_ROCKET_LAUNCHER =
      140,                    // 78mm MARA Anti-Tank Rocket Launcher
  _120MM_TYPE_98_PF98 = 145,  // 120mm Type-98 PF98
};

/*
 * Source: uid=519
 */
enum class LifeFormHumanSpecificAntiTankMissiles : uint8_t {
  OTHER = 0,                             // Other
  _120MM_TYPE_64_MAT_KAM_3 = 30,         // 120mm Type 64 MAT KAM-3
  _153MM_TYPE_79_JYU_MAT_KAM_9 = 31,     // 153mm Type 79 Jyu-MAT KAM-9
  _120MM_TYPE_87_CHU_MAT = 32,           // 120mm Type 87 Chu-MAT
  _140MM_TYPE_01_LMAT = 33,              // 140mm Type 01 LMAT
  _140MM_M47_DRAGON = 58,                // 140mm M47 Dragon
  _140MM_SAEGHE_1_2 = 59,                // 140mm Saeghe 1-2
  _127MM_FGM_148_JAVELIN = 60,           // 127mm FGM-148 Javelin
  _139MM_FGM_172_SRAW = 63,              // 139mm FGM-172 SRAW
  _139MM_FGM_172B_SRAW_MPV = 64,         // 139mm FGM-172B SRAW-MPV
  _152MM_BGM_71_TOW = 68,                // 152mm BGM-71 TOW
  _152MM_OREV_TOW_II = 69,               // 152mm Orev TOW II
  _120MM_VICKERS_VIGILANT_CLEVITE = 75,  // 120mm Vickers Vigilant / Clevite
  _110MM_BANTAM_RB_53 = 80,              // 110mm Bantam (Rb 53)
  _150MM_RBS_56_BILL_1 = 81,             // 150mm RBS-56 BILL 1
  _150MM_RBS_56_2_BILL_2 = 82,           // 150mm RBS-56-2 BILL 2
  _130MM_SPIKE_SR = 85,                  // 130mm Spike SR
  _130MM_SPIKE_MR_CLU = 86,              // 130mm Spike MR (CLU)
  _130MM_SPIKE_LR_CLU = 87,              // 130mm Spike LR (CLU)
  _60MM_MOSQUITO = 95,                   // 60mm Mosquito
  _160MM_SS_10 = 98,                     // 160mm SS.10
  _103MM_MILAN = 100,                    // 103mm MILAN
  _115MM_MILAN_2 = 101,                  // 115mm MILAN 2
  _115MM_MILAN_2T = 102,                 // 115mm MILAN 2T
  _115MM_MILAN_3 = 103,                  // 115mm MILAN 3
  _115MM_MILAN_ER = 104,                 // 115mm MILAN ER
  _136MM_ERYX = 105,                     // 136mm ERYX
  _152MM_ENTAC = 107,                    // 152mm Entac
  _125MM_RAAD = 110,                     // 125mm RAAD
  _125MM_I_RAAD_T = 111,                 // 125mm I-RAAD-T
  _152MM_TOOPHAN = 112,                  // 152mm Toophan
  _152MM_TOOPHAN_2 = 113,                // 152mm Toophan 2
  _152MM_TOOPHAN_5 = 114,                // 152mm Toophan 5
  _136MM_BUMBAR = 120,                   // 136mm Bumbar
  _130MM_SHERSHEN_PK_2 = 125,            // 130mm Shershen PK-2
  _152MM_SHERSHEN_Q_P_2B = 126,          // 152mm Shershen-Q P-2B
  _130MM_MECTRON_MSS_1_2 = 130,          // 130mm Mectron MSS-1.2
  _120MM_HJ_8 = 140,                     // 120mm HJ-8
  _120MM_HJ_8A = 141,                    // 120mm HJ-8A
  _120MM_HJ_8B = 142,                    // 120mm HJ-8B
  _120MM_HJ_8C = 143,                    // 120mm HJ-8C
  _120MM_HJ_8D = 144,                    // 120mm HJ-8D
  _120MM_HJ_8E = 145,                    // 120mm HJ-8E
  _120MM_HJ_8F = 146,                    // 120mm HJ-8F
  _120MM_HJ_8FAE = 147,                  // 120mm HJ-8FAE
  _120MM_HJ_8L = 148,                    // 120mm HJ-8L
  _120MM_HJ_8H = 149,                    // 120mm HJ-8H
  _120MM_HJ_8S = 150,                    // 120mm HJ-8S
  _120MM_BAKTAR_SHIKAN = 151,            // 120mm Baktar-Shikan
  _120MM_HJ_11_AFT_11 = 152,             // 120mm HJ-11 (AFT-11)
  _152MM_HJ_9A = 153,                    // 152mm HJ-9A
  _135MM_HJ_12_RED_ARROW = 154,          // 135mm HJ-12 Red Arrow
  _125MM_HJ_73_MCLOS = 155,              // 125mm HJ-73 MCLOS
  _125MM_HJ_73B_SACLOS = 156,            // 125mm HJ-73B SACLOS
  _125MM_HJ_73C_SACLOS_ERA = 157,        // 125mm HJ-73C SACLOS ERA
  _125MM_AT_3_SAGGER_A_9M14_MALYUTKA =
      170,  // 125mm AT-3 Sagger A/9M14 Malyutka
  _125MM_AT_3B_SAGGER_B_9M14M_MALYUTKA_M =
      171,  // 125mm AT-3B Sagger B/9M14M Malyutka-M
  _125MM_AT_3C_SAGGER_C_9M14P_MALYUTKA_P =
      172,  // 125mm AT-3C Sagger C/9M14P Malyutka-P
  _125MM_AT_3D_SAGGER_D_9M14_2_MALYUTKA_2 =
      173,                    // 125mm AT-3D Sagger D/9M14-2 Malyutka-2
  _125MM_SUSONG_PO = 174,     // 125mm Susong-Po
  _125MM_AT_3C_POLK = 175,    // 125mm AT-3C POLK
  _125MM_KUN_WU_1 = 176,      // 125mm Kun Wu 1
  _125MM_MALIUTKA_M2T = 177,  // 125mm Maliutka M2T
  _120MM_AT_4A_SPIGOT_A_9M111_FAGOT = 178,  // 120mm AT-4A Spigot A/9M111 Fagot
  _120MM_AT_4B_SPIGOT_B_9M111_2_FAGOT =
      179,  // 120mm AT-4B Spigot B/9M111-2 Fagot
  _120MM_AT_4C_SPIGOT_C_9M111M_FAKTORIYA =
      180,  // 120mm AT-4C Spigot C/9M111M Faktoriya
  _135MM_AT_5A_SPANDREL_9M113_KRONKURS =
      181,  // 135mm AT-5A Spandrel/9M113 Kronkurs
  _135MM_AT_5B_SPANDREL_9M113M_KRONKURS_M =
      182,             // 135mm AT-5B Spandrel/9M113M Kronkurs-M
  _135MM_TOSAN = 183,  // 135mm Tosan
  _94MM_AT_7_SAXHORN_9K115_METIS = 184,  // 94mm AT-7 Saxhorn/9K115 Metis
  _130MM_AT_13_SAXHORN_2_9K115_2_METIS_M =
      185,  // 130mm AT-13 Saxhorn-2/9K115-2 Metis-M
  _152MM_AT_14_SPRIGGAN_9M133_KORNET =
      186,                // 152mm AT-14 Spriggan/9M133 Kornet
  _152MM_DEHLAVIE = 187,  // 152mm Dehlavie
  _102MM_MATHOGO = 200,   // 102mm Mathogo
};

/*
 * Source: uid=520
 */
enum class LifeFormHumanSpecificManPortableAirDefenseSystem : uint8_t {
  OTHER = 0,                             // Other
  _70MM_FIM_43_REDEYE = 1,               // 70mm FIM-43 Redeye
  _70MM_FIM_92_STINGER = 2,              // 70mm FIM-92 Stinger
  _76MM_BLOWPIPE = 10,                   // 76mm Blowpipe
  _76MM_STARBURST_JAVELIN_S_15 = 11,     // 76mm Starburst (Javelin S-15)
  _130MM_STARSTREAK_HVM = 12,            // 130mm Starstreak HVM
  _90MM_MISTRAL = 15,                    // 90mm Mistral
  _72MM_9K32M_STRELA_2_SA_7 = 20,        // 72mm 9K32M Strela-2 (SA-7)
  _72MM_9K36_STRELA_3_SA_14 = 21,        // 72mm 9K36 Strela-3 (SA-14)
  _72MM_9K38_IGLA_SA_18 = 22,            // 72mm 9K38 Igla (SA-18)
  _72MM_9K310_IGLA_M_SA_16 = 23,         // 72mm 9K310 Igla-M (SA-16)
  _72MM_9K333_VERBA_SA_25 = 24,          // 72mm 9K333 Verba (SA-25)
  _72MM_9K338_IGLA_S_SA_24_GRINCH = 25,  // 72mm 9K338 Igla-S (SA-24 Grinch)
  _72MM_9K32M_STRELA_2M_SA_7B = 26,      // 72mm 9K32M Strela-2M (SA-7B)
  _72MM_HN_5_HONG_YING_5 = 30,           // 72mm HN-5 Hong-Ying-5
  _72MM_QW_1_VANGUARD = 31,              // 72mm QW-1 Vanguard
  _72MM_QW_2_VANGUARD_2 = 32,            // 72mm QW-2 Vanguard 2
  _90MM_QW_3 = 33,                       // 90mm QW-3
  _72MM_FN_6 = 34,                       // 72mm FN-6
  _71MM_MISAGH_1 = 45,                   // 71mm Misagh-1
  _71MM_MISAGH_2 = 46,                   // 71mm Misagh-2
  _80MM_TYPE_91_KIN_SAM = 50,            // 80mm Type-91 Kin-SAM
  _80MM_KP_SAM_SHUN_GUNG_CHIRON = 55,    // 80mm KP-SAM Shun-Gung (Chiron)
  _106MM_RBS_70 = 60,                    // 106mm RBS-70
};

/*
 * Source: uid=521
 */
enum class LifeFormHumanSpecificRecoillessRifles : uint8_t {
  OTHER = 0,                            // Other
  _84MM_M136_AT_4_CS = 15,              // 84mm M136 AT-4 CS
  _57MM_M18_RR = 20,                    // 57mm M18 RR
  _75MM_M20_RR = 21,                    // 75mm M20 RR
  _120MM_M_28_DAVY_CROCKETT = 22,       // 120mm M-28 Davy Crockett
  _155MM_M_29_DAVY_CROCKETT = 23,       // 155mm M-29 Davy Crockett
  _106MM_M40_RECOILLESS_RIFLE = 24,     // 106mm M40 Recoilless Rifle
  _82MM_M60_RR = 25,                    // 82mm M60 RR
  _90MM_M67_RR = 26,                    // 90mm M67 RR
  _84MM_M1_CARL_GUSTAV = 30,            // 84mm M1 Carl Gustav
  _84MM_M2_CARL_GUSTAV = 31,            // 84mm M2 Carl Gustav
  _84MM_M3_CARL_GUSTAV = 32,            // 84mm M3 Carl Gustav
  _84MM_M4_CARL_GUSTAV = 33,            // 84mm M4 Carl Gustav
  _74MM_PANSARSKOTT_M_68_MINIMAN = 35,  // 74mm Pansarskott m/68 Miniman
  _84MM_ALAC = 40,                      // 84mm ALAC
  _82MM_B_10_RR = 45,                   // 82mm B-10 RR
  _107MM_B_11_RR = 46,                  // 107mm B-11 RR
  _80MM_BREDA_FOLGORE = 50,             // 80mm Breda Folgore
  _120MM_BAT_RR = 55,                   // 120mm BAT RR
  _73MM_SPG_9_KOPYE = 60,               // 73mm SPG-9 Kopye
  _88MM_RCL_3_45IN = 65,                // 88mm RCL 3.45in
  _90MM_PVPJ_110 = 70,                  // 90mm Pvpj 110
  _50MM_JAGDFAUST = 75,                 // 50mm Jagdfaust
  _30MM_RHEINMETALL_RMK30 = 80,         // 30mm Rheinmetall RMK30
  _88MM_55_S_55_RAIKKA = 90,            // 88mm 55 S 55 Raikka
  _95MM_95_S_58_61 = 91,                // 95mm 95 S 58-61
  _73MM_LG40 = 95,                      // 73mm LG40
  _105MM_LG40 = 96,                     // 105mm LG40
  _105MM_LG42 = 97,                     // 105mm LG42
};

/*
 * Source: uid=522
 */
enum class LifeFormHumanSpecificFlameRockets : uint8_t {
  OTHER = 0,                 // Other
  _66MM_M202_FLASH = 20,     // 66mm M202 Flash
  _62MM_FHJ_84 = 30,         // 62mm FHJ-84
  _90MM_C90_CR_FIM_M3 = 40,  // 90mm C90-CR-FIM (M3)
  _93MM_RPO_A_SHMEL = 50,    // 93mm RPO-A Shmel
  _93MM_RPO_Z_SHMEL = 51,    // 93mm RPO-Z Shmel
  _93MM_RPO_D_SHMEL = 52,    // 93mm RPO-D Shmel
};

/*
 * Source: uid=523
 */
enum class LifeFormHumanSpecificFlameThrowers : uint8_t {
  OTHER = 0,                    // Other
  HANDFLAMMPATRONE = 10,        // Handflammpatrone
  FMW_41 = 11,                  // FmW 41
  M1A1 = 20,                    // M1A1
  M2A1_7 = 21,                  // M2A1-7
  M9A1_7 = 22,                  // M9A1-7
  LPO_50 = 30,                  // LPO-50
  K_PATTERN = 35,               // K Pattern
  PORTABLE_NO_2_ACK_PACK = 36,  // Portable, No 2 Ack Pack
  MARSDEN = 37,                 // Marsden
  HARVEY = 38,                  // Harvey
  ROKS_2 = 45,                  // ROKS-2
  ROKS_3 = 46,                  // ROKS-3
  TYPE_93 = 50,                 // Type-93
  TYPE_100 = 51,                // Type-100
};

/*
 * Source: uid=524
 */
enum class LifeFormHumanSpecificDroneGuns : uint8_t {
  OTHER = 0,               // Other
  DRONEGUN_TACTICAL = 15,  // DroneGun Tactical
  DRONEGUN_MKII = 16,      // DroneGun MKII
};

/*
 * Source: uid=525
 */
enum class LifeFormHumanSpecificLogisticsEqClass : uint8_t {
  SLING_LOAD_PENDANT = 1,  // Sling Load Pendant
};

/*
 * Source: uid=526
 */
enum class LifeFormHumanSpecificPersonalElectronicsClass : uint8_t {
  CELL_PHONE = 1,  // Cell Phone
};

/*
 * Source: uid=527
 */
enum class LifeFormHumanSpecificLasersClass : uint8_t {
  GENERIC_LASER_DESIGNATOR = 1,  // Generic Laser Designator
  GENERIC_LASER_POINTER = 2,     // Generic Laser Pointer
};

/*
 * Source: uid=589
 */
enum class TransmitterDetailSatcomModulation : uint16_t {
  OTHER = 0,     // Other
  NO_DELAY = 1,  // No Delay
};

/*
 * Source: uid=600
 */
enum class SupplyDomain : uint8_t {
  NOT_USED = 0,             // Not Used [DEPRECATED]
  CLASS_1_SUBSISTENCE = 1,  // Class 1 - Subsistence
  CLASS_2_CLOTHING_INDIVIDUAL_EQUIPMENT_TOOLS_ADMIN_SUPPLIES =
      2,  // Class 2 - Clothing, Individual Equipment, Tools, Admin. Supplies
  CLASS_3_PETROLEUM_OILS_LUBRICANTS =
      3,                               // Class 3 - Petroleum, Oils, Lubricants
  CLASS_4_CONSTRUCTION_MATERIALS = 4,  // Class 4 - Construction Materials
  CLASS_5_AMMUNITION = 5,              // Class 5 - Ammunition [DEPRECATED]
  CLASS_6_PERSONNEL_DEMAND_ITEMS = 6,  // Class 6 - Personnel Demand Items
  CLASS_7_MAJOR_ITEMS = 7,             // Class 7 - Major Items
  CLASS_8_MEDICAL_MATERIAL = 8,        // Class 8 - Medical Material
  CLASS_9_REPAIR_PARTS_AND_COMPONENTS =
      9,  // Class 9 - Repair Parts and Components
  CLASS_10_MATERIAL_TO_SUPPORT_NON_MILITARY_PROGRAMS =
      10,  // Class 10 - Material to Support Non-Military Programs
  CLASS_11_SUPPLIES_NON_DOCTRINAL = 11,  // Class 11 - Supplies (Non Doctrinal)
  CLASS_12_SLING_LOADS_NON_DOCTRINAL =
      12,  // Class 12 - Sling Loads (Non Doctrinal)
};

/*
 * Source: uid=601
 */
enum class Class1SupplyCategorySubsistence : uint8_t {
  OTHER = 1,                     // Other
  A_NON_PERISHABLE = 2,          // A - Non-Perishable
  C_COMBAT_RATIONS = 3,          // C - Combat Rations
  R_REFRIGERATED = 4,            // R - Refrigerated
  S_OTHER_NON_REFRIGERATED = 5,  // S - Other Non-Refrigerated
  W_WATER = 6,                   // W - Water
};

/*
 * Source: uid=602
 */
enum class
    Class2SupplyCategoryClothingIndividualEquipmentToolsAdminSupplies : uint8_t {
      OTHER = 1,                      // Other
      A_AIR = 2,                      // A - Air
      B_GROUND_SUPPORT_MATERIEL = 3,  // B - Ground Support Materiel
      E_GENERAL_SUPPLIES = 4,         // E - General Supplies
      F_CLOTHING = 5,                 // F - Clothing
      G_ELECTRONICS = 6,              // G - Electronics
      M_WEAPONS_HUMANS = 7,           // M - Weapons (Humans)
      T_INDUSTRIAL_SUPPLIES = 8,      // T - Industrial Supplies
    };

/*
 * Source: uid=603
 */
enum class Class3SupplyCategoryPetroleumOilsLubricants : uint8_t {
  OTHER = 1,                    // Other
  A_POL_FOR_AIR_VEHICLES = 2,   // A - POL for Air Vehicles
  W_POL_FOR_LAND_VEHICLES = 3,  // W - POL for Land Vehicles
  P_PACKAGED_POL = 4,           // P - Packaged POL
};

/*
 * Source: uid=604
 */
enum class Class4SupplyCategoryConstructionMaterials : uint8_t {
  OTHER = 1,           // Other
  A_CONSTRUCTION = 2,  // A - Construction
  B_BARRIER = 3,       // B - Barrier
};

/*
 * Source: uid=606
 */
enum class Class6SupplyCategoryPersonnelDemandItems : uint8_t {
  OTHER = 1,  // Other
};

/*
 * Source: uid=607
 */
enum class Class7SupplyCategoryMajorItems : uint8_t {
  OTHER = 1,  // Other
  A_AIR_NOT_USED_AS_DESCRIBED_IN_AIR_DOMAIN =
      2,  // A - Air (Not used, as described in Air Domain)
  B_GROUND_SUPPORT_MATERIEL = 3,  // B - Ground Support Materiel
  D_ADMIN_VEHICLES_NOT_USED_AS_DESCRIBED_IN_LAND_DOMAIN =
      4,  // D - Admin Vehicles (Not used, as described in Land Domain)
  G_ELECTRONICS = 5,            // G - Electronics
  J_RACKS_ADAPTORS_PYLONS = 6,  // J - Racks, Adaptors, Pylons
  K_TACTICAL_VEHICLES_NOT_USED_AS_DESCRIBED_IN_LAND_DOMAIN =
      7,  // K - Tactical Vehicles (Not used, as described in Land Domain)
  L_MISSILES_NOT_USED_AS_DESCRIBED_IN_MUNITION_DOMAIN =
      8,          // L - Missiles (Not used, as described in Munition Domain)
  M_WEAPONS = 9,  // M - Weapons
  N_SPECIAL_WEAPONS = 10,    // N - Special Weapons
  X_AIRCRAFT_ENGINES = 11,   // X - Aircraft Engines
  DROP_TANK = 20,            // Drop Tank
  CONFORMAL_FUEL_TANK = 21,  // Conformal Fuel Tank
  LUGGAGE_POD = 22,          // Luggage Pod
  ECM_POD = 23,              // ECM Pod
  PARA_DROGUE = 24,          // Para-Drogue
  TARGETING_POD = 25,        // Targeting Pod
  FAIRING = 26,              // Fairing
  AIR_REFUELLING_POD = 27,   // Air Refuelling Pod
  HEAVY_AIRDROP = 28,        // Heavy Airdrop
  CONTAINER_DELIVERY_SYSTEM_CDS_AIRDROP =
      29,                    // Container Delivery System (CDS) Airdrop
  ROCKET_POD_LAUNCHER = 30,  // Rocket Pod/Launcher
  TACTICAL_POD = 31,         // Tactical Pod
  RECCE_POD = 32,            // RECCE pod
  FLIR_POD = 33,             // FLIR pod
};

/*
 * Source: uid=608
 */
enum class Class8SupplyCategoryMedicalMaterial : uint8_t {
  OTHER = 1,               // Other
  A_MEDICAL_MATERIEL = 2,  // A - Medical Materiel
  B_BLOOD_FLUIDS = 3,      // B - Blood / Fluids
};

/*
 * Source: uid=609
 */
enum class Class9SupplyCategoryRepairPartsAndComponents : uint8_t {
  OTHER = 1,                      // Other
  A_AIR = 2,                      // A - Air
  B_GROUND_SUPPORT_MATERIEL = 3,  // B - Ground Support Materiel
  D_ADMIN_VEHICLES = 4,           // D - Admin Vehicles
  G_ELECTRONICS = 5,              // G - Electronics
  K_TACTICAL_VEHICLES = 6,        // K - Tactical Vehicles
  L_MISSILES = 7,                 // L - Missiles
  M_WEAPONS = 8,                  // M - Weapons
  N_SPECIAL_WEAPONS = 9,          // N - Special Weapons
  X_AIRCRAFT_ENGINES = 10,        // X - Aircraft Engines
};

/*
 * Source: uid=610
 */
enum class Class10SupplyCategoryMaterialToSupportNonMilitaryPrograms : uint8_t {
  OTHER = 1,  // Other
};

/*
 * Source: uid=611
 */
enum class Class11SupplyCategorySuppliesNonDoctrinal : uint8_t {
  OTHER = 1,                          // Other
  PALLETS = 2,                        // Pallets
  FUEL_TANKS_DRUMS_AND_BLADDERS = 3,  // Fuel Tanks, Drums and Bladders
  CHESTS = 4,                         // Chests
  BOXES = 5,                          // Boxes
};

/*
 * Source: uid=612
 */
enum class Class12SupplyCategorySlingLoadsNonDoctrinal : uint8_t {
  OTHER = 1,                        // Other
  SLING_LOAD_BLIVET = 2,            // Sling Load, Blivet
  SLING_LOAD_CRATE = 3,             // Sling Load, Crate
  SLING_LOAD_WATER_BUCKET = 4,      // Sling Load, Water Bucket
  SLING_LOAD_VEHICLES = 5,          // Sling Load, Vehicles
  SLING_LOAD_HOWITZER = 6,          // Sling Load, Howitzer
  SLING_LOAD_COLLAPSIBLE = 7,       // Sling Load, Collapsible
  SLING_LOAD_BLADDER = 8,           // Sling Load, Bladder
  SLING_LOAD_PALLET_OF_CRATES = 9,  // Sling Load, Pallet of Crates
  SLING_LOAD_HELICOPTERS = 10,      // Sling Load, Helicopters
  SLING_LOAD_HOIST = 11,            // Sling Load, Hoist
  SLING_LOAD_CONCRETE_BLOCK = 12,   // Sling Load, Concrete Block
};

/*
 * Source: uid=633
 */
enum class LifeSavingEquipment : uint8_t {
  LIFEBOAT = 1,  // Lifeboat
  LIFERAFT = 2,  // Liferaft
  MOB_BOAT = 3,  // MOB Boat
  LIFEBUOY = 4,  // Lifebuoy
};

/*
 * Source: uid=715
 */
enum class IslandSubcategory : uint16_t {
  OTHER = 0,  // Other
  ISLANDS_1_000_2_499_KM2_386_965_SQ_MI =
      1,  // Islands 1,000-2,499 km2 (386-965 sq mi)
  ISLANDS_2_500_4_999_KM2_965_1_930_SQ_MI =
      2,  // Islands 2,500-4,999 km2 (965-1,930 sq mi)
  ISLANDS_5_000_9_999_KM2_1_931_3_861_SQ_MI =
      3,  // Islands 5,000-9,999 km2 (1,931-3,861 sq mi)
  ISLANDS_10_000_24_999_KM2_3_861_9_652_SQ_MI =
      4,  // Islands 10,000-24,999 km2 (3,861-9,652 sq mi)
  ISLANDS_25_000_99_999_KM2_9_653_38_610_SQ_MI =
      5,  // Islands 25,000-99,999 km2 (9,653-38,610 sq mi)
  ISLANDS_100_000_KM2_39_000_SQ_MI_AND_GREATER =
      6,  // Islands 100,000 km2 (39,000 sq mi) and Greater
};

/*
 * Source: uid=730
 */
enum class Link11MessageSubType : uint8_t {
  NO_STATEMENT = 0,   // No Statement
  INTERROGATION = 1,  // Interrogation
  DATA_START = 2,     // Data Start
  DATA = 3,           // Data
  DATA_STOP = 4,      // Data Stop
};

/*
 * Source: uid=731
 */
enum class Link11MessageTypeIdentifier : uint8_t {
  NO_STATEMENT = 0,     // No Statement
  NET_TEST = 1,         // Net Test
  ROLL_CALL = 2,        // Roll Call
  PICKET_REPLY = 3,     // Picket Reply
  SHORT_BROADCAST = 4,  // Short Broadcast
  BROADCAST = 5,        // Broadcast
  NET_SYNC = 6,         // Net Sync
};

/*
 * Source: uid=732
 */
enum class Link11DataSignallingRate : uint8_t {
  NO_STATEMENT = 0,  // No Statement
  _1364_BPS = 1,     // 1364 bps
  _2250_BPS = 2,     // 2250 bps
  _1200_BPS = 3,     // 1200 bps [DEPRECATED]
  _2400_BPS = 4,     // 2400 bps [DEPRECATED]
};

/*
 * Source: uid=733
 */
enum class Link11SignalIntegrationInterval : uint8_t {
  NO_STATEMENT = 0,  // No Statement [DEPRECATED]
  _9_MS = 1,         // 9 ms [DEPRECATED]
  _18_MS = 2,        // 18 ms [DEPRECATED]
};

/*
 * Source: uid=734
 */
enum class Link11SignalWaveform : uint8_t {
  NO_STATEMENT_CLEW_FORMAT = 0,  // No Statement - CLEW Format
  CONVENTIONAL_LINK_ELEVEN_WAVEFORM_CLEW =
      1,  // Conventional Link Eleven Waveform (CLEW)
  SINGLE_TONE_LINK_ELEVEN_WAVEFORM_SLEW =
      2,  // Single Tone Link Eleven Waveform (SLEW)
};

/*
 * Source: uid=735
 */
enum class Link1111bEncryptionFlag : uint8_t {
  NO_ENCRYPTION_USED = 0,  // No Encryption Used
  ENCRYPTION_USED = 1,     // Encryption Used
};

/*
 * Source: uid=736
 */
enum class SisoStd002Version : uint8_t {
  SISO_STD_002_2006 = 0,  // SISO-STD-002-2006
  SISO_STD_002_2021 = 1,  // SISO-STD-002-2021
};

/*
 * Source: uid=737
 */
enum class Link11bLinkState : uint8_t {
  NO_STATEMENT = 0,  // No Statement
  INACTIVE = 1,      // Inactive
  READY = 2,         // Ready
  ACTIVE = 3,        // Active
  OPERATIONAL = 4,   // Operational
};

/*
 * Source: uid=738
 */
enum class Link11bModeOfOperation : uint16_t {
  NO_STATEMENT = 0,                  // No Statement
  FULL_TRANSMISSION_OF_DATA = 1,     // Full Transmission of Data
  LIMITED_TRANSMISSION_OF_DATA = 2,  // Limited Transmission of Data
  RECEIVE_ONLY = 3,                  // Receive only
};

/*
 * Source: uid=739
 */
enum class Link11bMessageSubType : uint8_t {
  NO_STATEMENT = 0,        // No Statement
  TRANSMISSION_FRAME = 1,  // Transmission Frame
  STANDBY_SIGNAL = 2,      // Standby Signal
};

/*
 * Source: uid=740
 */
enum class Link11bDataSignalingRate : uint8_t {
  NO_STATEMENT = 0,  // No Statement
  NOT_USED = 1,      // Not Used
  NOT_USED = 2,      // Not Used
  _1200_BPS = 3,     // 1200 bps
  _2400_BPS = 4,     // 2400 bps
  _600_BPS = 5,      // 600 bps
};

/*
 * Source: uid=741
 */
enum class Link11bModulationStandard : uint8_t {
  NO_STATEMENT = 0,  // No Statement
  CCITT_V_23 = 1,    // CCITT V.23
};

/*
 * Source: uid=780
 */
enum class CigiExtensionPacketId : uint16_t {
  IMAGE_CAPTURE_REQUEST_PACKET_ID = 4096,   // Image Capture Request packet ID
  IMAGE_CAPTURE_RESPONSE_PACKET_ID = 4097,  // Image Capture Response packet ID
  STATE_NOTIFICATION_REQUEST_PACKET_ID =
      4098,  // State Notification Request Packet ID
  STATE_NOTIFICATION_RESPONSE_PACKET_ID =
      4099,                            // State Notification Response Packet ID
  GLOBALREFFRAMEDEF_PACKET_ID = 5000,  // GlobalRefFrameDef Packet ID
};

/*
 * Source: uid=800
 */
enum class Link16Version : uint8_t {
  NO_STATEMENT = 0,        // No Statement
  MIL_STD_6016C = 1,       // MIL-STD-6016C
  MIL_STD_6016D = 2,       // MIL-STD-6016D
  MIL_STD_6016E = 3,       // MIL-STD-6016E
  MIL_STD_6016F = 4,       // MIL-STD-6016F
  MIL_STD_6016F_C1 = 5,    // MIL-STD-6016F C1
  STANAG_5516_ED_3 = 103,  // STANAG 5516 Ed 3
  STANAG_5516_ED_4 = 104,  // STANAG 5516 Ed 4
  STANAG_5516_ED_5 = 105,  // STANAG 5516 Ed 5
  STANAG_5516_ED_6 = 106,  // STANAG 5516 Ed 6
  STANAG_5516_ED_8 = 108,  // STANAG 5516 Ed 8
};

/*
 * Source: uid=801
 */
enum class AircraftIdSource : uint8_t {
  MODE_S_AIRCRAFT_IDENTIFICATION_FIELD_VALUE =
      0,  // Mode S Aircraft Identification Field Value
  GICB_IFF_DATA_RECORD_AVAILABLE = 1,  // GICB IFF Data Record Available
};

/*
 * Source: uid=802
 */
enum class ClothingIrSignature : uint8_t {
  STANDARD_CLOTHING = 0,                 // Standard Clothing
  CAMOUFLAGE_NOT_JUST_PAINT_SCHEME = 1,  // Camouflage (not just Paint Scheme)
  THERMAL_BLANKET = 2,                   // Thermal Blanket
  OTHER = 3,                             // Other
};

/*
 * Source: uid=889
 */
enum class DamageArea : uint8_t {
  DAMAGE_AREA_1_DEFAULT_IS_SIDE_1_FRONT_SIDE_OR_NOT_APPLICABLE_IF_DAMAGE_AREAS_ARE_NOT_DEFINED =
      0,  // Damage Area 1 (default is Side 1 = Front Side) or Not Applicable if
          // Damage Areas are not defined.
  DAMAGE_AREA_2_DEFAULT_IS_SIDE_2_RIGHT_SIDE =
      1,  // Damage Area 2 (default is Side 2 = Right Side)
  DAMAGE_AREA_3_DEFAULT_IS_SIDE_3_BACK_SIDE =
      2,  // Damage Area 3 (default is Side 3 = Back Side)
  DAMAGE_AREA_4_DEFAULT_IS_SIDE_4_LEFT_SIDE =
      3,  // Damage Area 4 (default is Side 4 = Left Side)
  DAMAGE_AREA_5_DEFAULT_IS_CORNER_1_FRONT_RIGHT_CORNER =
      4,  // Damage Area 5 (default is Corner 1 = Front Right Corner)
  DAMAGE_AREA_6_DEFAULT_IS_CORNER_2_BACK_RIGHT_CORNER =
      5,  // Damage Area 6 (default is Corner 2 = Back Right Corner)
  DAMAGE_AREA_7_DEFAULT_IS_CORNER_3_BACK_LEFT_CORNER =
      6,  // Damage Area 7 (default is Corner 3 = Back Left Corner)
  DAMAGE_AREA_8_DEFAULT_IS_CORNER_4_FRONT_LEFT_CORNER =
      7,  // Damage Area 8 (default is Corner 4 = Front Left Corner)
};

/*
 * Source: uid=31
 */
struct LandPlatformAppearanceFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;

  static constexpr underlying_t PAINT_SCHEME_MASK =
      static_cast<underlying_t>(1);  // bits 0..0
  static constexpr underlying_t PAINT_SCHEME_BIT =
      static_cast<underlying_t>(1u << 0);
  // Describes the visual paint design
  static constexpr underlying_t MOBILITY_KILLED_MASK =
      static_cast<underlying_t>(2);  // bits 1..1
  static constexpr underlying_t MOBILITY_KILLED_BIT =
      static_cast<underlying_t>(1u << 1);
  // Describes whether it is capable of moving on its own power
  static constexpr underlying_t FIRE_POWER_KILLED_MASK =
      static_cast<underlying_t>(4);  // bits 2..2
  static constexpr underlying_t FIRE_POWER_KILLED_BIT =
      static_cast<underlying_t>(1u << 2);
  // Describes whether it can fire weapons
  static constexpr underlying_t DAMAGE_MASK =
      static_cast<underlying_t>(24);  // bits 3..4
  // Describes the damaged appearance
  static constexpr underlying_t IS_SMOKE_EMANATING_MASK =
      static_cast<underlying_t>(32);  // bits 5..5
  static constexpr underlying_t IS_SMOKE_EMANATING_BIT =
      static_cast<underlying_t>(1u << 5);
  // Describes whether or not smoke is emanating from the entity
  static constexpr underlying_t IS_ENGINE_EMITTING_SMOKE_MASK =
      static_cast<underlying_t>(64);  // bits 6..6
  static constexpr underlying_t IS_ENGINE_EMITTING_SMOKE_BIT =
      static_cast<underlying_t>(1u << 6);
  // Describes whether or not the engine is emitting smoke
  static constexpr underlying_t TRAILING_DUST_CLOUD_MASK =
      static_cast<underlying_t>(384);  // bits 7..8
  // Describes the size of the dust cloud trailing effect
  static constexpr underlying_t PRIMARY_HATCH_MASK =
      static_cast<underlying_t>(3584);  // bits 9..11
  // Describes whether the primary hatch is open or closed and whether someone
  // is visible
  static constexpr underlying_t HEAD_LIGHTS_ON_MASK =
      static_cast<underlying_t>(4096);  // bits 12..12
  static constexpr underlying_t HEAD_LIGHTS_ON_BIT =
      static_cast<underlying_t>(1u << 12);
  // Describes whether head lights are on or off
  static constexpr underlying_t TAIL_LIGHTS_ON_MASK =
      static_cast<underlying_t>(8192);  // bits 13..13
  static constexpr underlying_t TAIL_LIGHTS_ON_BIT =
      static_cast<underlying_t>(1u << 13);
  // Describes whether tail lights are on or off
  static constexpr underlying_t BRAKE_LIGHTS_ON_MASK =
      static_cast<underlying_t>(16384);  // bits 14..14
  static constexpr underlying_t BRAKE_LIGHTS_ON_BIT =
      static_cast<underlying_t>(1u << 14);
  // Describes whether brake lights are on or off
  static constexpr underlying_t IS_FLAMING_MASK =
      static_cast<underlying_t>(32768);  // bits 15..15
  static constexpr underlying_t IS_FLAMING_BIT =
      static_cast<underlying_t>(1u << 15);
  // Describes whether the entity is burning and flames are visible
  static constexpr underlying_t LAUNCHER_OPERATIONAL_MASK =
      static_cast<underlying_t>(65536);  // bits 16..16
  static constexpr underlying_t LAUNCHER_OPERATIONAL_BIT =
      static_cast<underlying_t>(1u << 16);
  // Describes the status of the mechanism required for the platform to be
  // operational, such as the elevated status of the primary launcher
  static constexpr underlying_t CAMOUFLAGE_TYPE_MASK =
      static_cast<underlying_t>(393216);  // bits 17..18
  // Describes the camouflage color
  static constexpr underlying_t CONCEALED_POSITION_MASK =
      static_cast<underlying_t>(524288);  // bits 19..19
  static constexpr underlying_t CONCEALED_POSITION_BIT =
      static_cast<underlying_t>(1u << 19);
  // Describes the type of concealment
  static constexpr underlying_t IS_FROZEN_MASK =
      static_cast<underlying_t>(2097152);  // bits 21..21
  static constexpr underlying_t IS_FROZEN_BIT =
      static_cast<underlying_t>(1u << 21);
  // Describes whether the entity is frozen and should not be dead reckoned
  static constexpr underlying_t POWER_PLANT_ON_MASK =
      static_cast<underlying_t>(4194304);  // bits 22..22
  static constexpr underlying_t POWER_PLANT_ON_BIT =
      static_cast<underlying_t>(1u << 22);
  // Describes whether the power plant is on or off
  static constexpr underlying_t STATE_MASK =
      static_cast<underlying_t>(8388608);  // bits 23..23
  static constexpr underlying_t STATE_BIT = static_cast<underlying_t>(1u << 23);
  // Describes whether the entity is active or deactivated
  static constexpr underlying_t TENT_EXTENDED_MASK =
      static_cast<underlying_t>(16777216);  // bits 24..24
  static constexpr underlying_t TENT_EXTENDED_BIT =
      static_cast<underlying_t>(1u << 24);
  // Describes whether or not the tent is extended
  static constexpr underlying_t RAMP_EXTENDED_MASK =
      static_cast<underlying_t>(33554432);  // bits 25..25
  static constexpr underlying_t RAMP_EXTENDED_BIT =
      static_cast<underlying_t>(1u << 25);
  // Describes whether or not the ramp is extended
  static constexpr underlying_t BLACKOUT_LIGHTS_ON_MASK =
      static_cast<underlying_t>(67108864);  // bits 26..26
  static constexpr underlying_t BLACKOUT_LIGHTS_ON_BIT =
      static_cast<underlying_t>(1u << 26);
  // Describes whether blackout lights are on or off
  static constexpr underlying_t BLACKOUT_BRAKE_LIGHTS_ON_MASK =
      static_cast<underlying_t>(134217728);  // bits 27..27
  static constexpr underlying_t BLACKOUT_BRAKE_LIGHTS_ON_BIT =
      static_cast<underlying_t>(1u << 27);
  // Describes whether blackout brake lights are on or off
  static constexpr underlying_t SPOT_SEARCH_LIGHT_1_ON_MASK =
      static_cast<underlying_t>(268435456);  // bits 28..28
  static constexpr underlying_t SPOT_SEARCH_LIGHT_1_ON_BIT =
      static_cast<underlying_t>(1u << 28);
  // Describes whether spot/search light #1 is on or off
  static constexpr underlying_t INTERIOR_LIGHTS_FORWARD_ON_MASK =
      static_cast<underlying_t>(536870912);  // bits 29..29
  static constexpr underlying_t INTERIOR_LIGHTS_FORWARD_ON_BIT =
      static_cast<underlying_t>(1u << 29);
  // Describes whether interior lights (forward) are on or off
  static constexpr underlying_t OCCUPANTS_SURRENDERED_MASK =
      static_cast<underlying_t>(1073741824);  // bits 30..30
  static constexpr underlying_t OCCUPANTS_SURRENDERED_BIT =
      static_cast<underlying_t>(1u << 30);
  // Describes whether or not the vehicle occupants have surrendered
  static constexpr underlying_t MASKED_CLOAKED_MASK =
      static_cast<underlying_t>(2147483648);  // bits 31..31
  static constexpr underlying_t MASKED_CLOAKED_BIT =
      static_cast<underlying_t>(1u << 31);
  // Describes whether or not the entity is masked or cloaked
};

/*
 * Source: uid=32
 */
struct AirPlatformAppearanceFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;

  static constexpr underlying_t PAINT_SCHEME_MASK =
      static_cast<underlying_t>(1);  // bits 0..0
  static constexpr underlying_t PAINT_SCHEME_BIT =
      static_cast<underlying_t>(1u << 0);
  // Describes the visual paint design
  static constexpr underlying_t PROPULSION_KILLED_MASK =
      static_cast<underlying_t>(2);  // bits 1..1
  static constexpr underlying_t PROPULSION_KILLED_BIT =
      static_cast<underlying_t>(1u << 1);
  // Describes whether it is capable of moving on its own power
  static constexpr underlying_t NVG_MODE_MASK =
      static_cast<underlying_t>(4);  // bits 2..2
  static constexpr underlying_t NVG_MODE_BIT =
      static_cast<underlying_t>(1u << 2);
  // Describes whether air platform lighting is in covert or overt mode
  static constexpr underlying_t DAMAGE_MASK =
      static_cast<underlying_t>(24);  // bits 3..4
  // Describes the damaged appearance
  static constexpr underlying_t IS_SMOKE_EMANATING_MASK =
      static_cast<underlying_t>(32);  // bits 5..5
  static constexpr underlying_t IS_SMOKE_EMANATING_BIT =
      static_cast<underlying_t>(1u << 5);
  // Describes whether or not smoke is emanating from the entity
  static constexpr underlying_t IS_ENGINE_EMITTING_SMOKE_MASK =
      static_cast<underlying_t>(64);  // bits 6..6
  static constexpr underlying_t IS_ENGINE_EMITTING_SMOKE_BIT =
      static_cast<underlying_t>(1u << 6);
  // Describes whether or not the engine is emitting smoke
  static constexpr underlying_t TRAILING_EFFECTS_MASK =
      static_cast<underlying_t>(384);  // bits 7..8
  // Describes the size of the contrails or ionization trailing effects
  static constexpr underlying_t CANOPY_TROOP_DOOR_MASK =
      static_cast<underlying_t>(3584);  // bits 9..11
  // Describes the state of the canopy/troop door
  static constexpr underlying_t LANDING_LIGHTS_ON_MASK =
      static_cast<underlying_t>(4096);  // bits 12..12
  static constexpr underlying_t LANDING_LIGHTS_ON_BIT =
      static_cast<underlying_t>(1u << 12);
  // Describes whether landing lights are on or off
  static constexpr underlying_t NAVIGATION_LIGHTS_ON_MASK =
      static_cast<underlying_t>(8192);  // bits 13..13
  static constexpr underlying_t NAVIGATION_LIGHTS_ON_BIT =
      static_cast<underlying_t>(1u << 13);
  // Describes whether navigation lights are on or off
  static constexpr underlying_t ANTI_COLLISION_LIGHTS_ON_MASK =
      static_cast<underlying_t>(16384);  // bits 14..14
  static constexpr underlying_t ANTI_COLLISION_LIGHTS_ON_BIT =
      static_cast<underlying_t>(1u << 14);
  // Describes whether Anti-Collision lights are on or off
  static constexpr underlying_t IS_FLAMING_MASK =
      static_cast<underlying_t>(32768);  // bits 15..15
  static constexpr underlying_t IS_FLAMING_BIT =
      static_cast<underlying_t>(1u << 15);
  // Describes whether the entity is burning and flames are visible
  static constexpr underlying_t AFTERBURNER_ON_MASK =
      static_cast<underlying_t>(65536);  // bits 16..16
  static constexpr underlying_t AFTERBURNER_ON_BIT =
      static_cast<underlying_t>(1u << 16);
  // Describes if the air platform is in afterburner
  static constexpr underlying_t LOWER_ANTI_COLLISION_LIGHT_ON_MASK =
      static_cast<underlying_t>(131072);  // bits 17..17
  static constexpr underlying_t LOWER_ANTI_COLLISION_LIGHT_ON_BIT =
      static_cast<underlying_t>(1u << 17);
  // Describes whether the lower Anti-Collision light is on or off
  static constexpr underlying_t UPPER_ANTI_COLLISION_LIGHT_ON_MASK =
      static_cast<underlying_t>(262144);  // bits 18..18
  static constexpr underlying_t UPPER_ANTI_COLLISION_LIGHT_ON_BIT =
      static_cast<underlying_t>(1u << 18);
  // Describes whether the upper Anti-Collision light is on or off
  static constexpr underlying_t ANTI_COLLISION_LIGHT_DAY_NIGHT_MASK =
      static_cast<underlying_t>(524288);  // bits 19..19
  static constexpr underlying_t ANTI_COLLISION_LIGHT_DAY_NIGHT_BIT =
      static_cast<underlying_t>(1u << 19);
  // Describes the day/night status of the Anti-Collision lights
  static constexpr underlying_t IS_BLINKING_MASK =
      static_cast<underlying_t>(1048576);  // bits 20..20
  static constexpr underlying_t IS_BLINKING_BIT =
      static_cast<underlying_t>(1u << 20);
  // Indicates whether any air platform lights are blinking or not
  static constexpr underlying_t IS_FROZEN_MASK =
      static_cast<underlying_t>(2097152);  // bits 21..21
  static constexpr underlying_t IS_FROZEN_BIT =
      static_cast<underlying_t>(1u << 21);
  // Describes whether the entity is frozen and should not be dead reckoned
  static constexpr underlying_t POWER_PLANT_ON_MASK =
      static_cast<underlying_t>(4194304);  // bits 22..22
  static constexpr underlying_t POWER_PLANT_ON_BIT =
      static_cast<underlying_t>(1u << 22);
  // Describes whether the power plant is on or off
  static constexpr underlying_t STATE_MASK =
      static_cast<underlying_t>(8388608);  // bits 23..23
  static constexpr underlying_t STATE_BIT = static_cast<underlying_t>(1u << 23);
  // Describes whether the entity is active or deactivated
  static constexpr underlying_t FORMATION_LIGHTS_ON_MASK =
      static_cast<underlying_t>(16777216);  // bits 24..24
  static constexpr underlying_t FORMATION_LIGHTS_ON_BIT =
      static_cast<underlying_t>(1u << 24);
  // Describes whether formation lights are on or off
  static constexpr underlying_t LANDING_GEAR_EXTENDED_MASK =
      static_cast<underlying_t>(33554432);  // bits 25..25
  static constexpr underlying_t LANDING_GEAR_EXTENDED_BIT =
      static_cast<underlying_t>(1u << 25);
  // Describes whether the landing gear is wholly retracted or extended
  static constexpr underlying_t CARGO_DOORS_OPENED_MASK =
      static_cast<underlying_t>(67108864);  // bits 26..26
  static constexpr underlying_t CARGO_DOORS_OPENED_BIT =
      static_cast<underlying_t>(1u << 26);
  // Describes whether the cargo doors (main door) are closed or open
  static constexpr underlying_t NAVIGATION_POSITION_BRIGHTNESS_MASK =
      static_cast<underlying_t>(134217728);  // bits 27..27
  static constexpr underlying_t NAVIGATION_POSITION_BRIGHTNESS_BIT =
      static_cast<underlying_t>(1u << 27);
  // Describes the brightness of the navigation/position lights
  static constexpr underlying_t SPOT_SEARCH_LIGHT_1_ON_MASK =
      static_cast<underlying_t>(268435456);  // bits 28..28
  static constexpr underlying_t SPOT_SEARCH_LIGHT_1_ON_BIT =
      static_cast<underlying_t>(1u << 28);
  // Describes whether spot/search light #1 is on or off
  static constexpr underlying_t INTERIOR_LIGHTS_ON_MASK =
      static_cast<underlying_t>(536870912);  // bits 29..29
  static constexpr underlying_t INTERIOR_LIGHTS_ON_BIT =
      static_cast<underlying_t>(1u << 29);
  // Describes whether interior lights are on or off
  static constexpr underlying_t REVERSE_THRUST_ENGAGED_MASK =
      static_cast<underlying_t>(1073741824);  // bits 30..30
  static constexpr underlying_t REVERSE_THRUST_ENGAGED_BIT =
      static_cast<underlying_t>(1u << 30);
  // Describes whether the air platform has engaged reverse thrust
  static constexpr underlying_t WEIGHT_ON_WHEELS_MASK =
      static_cast<underlying_t>(2147483648);  // bits 31..31
  static constexpr underlying_t WEIGHT_ON_WHEELS_BIT =
      static_cast<underlying_t>(1u << 31);
  // Describes whether the air platform has weight on its main landing gear
};

/*
 * Source: uid=33
 */
struct SurfacePlatformAppearanceFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;

  static constexpr underlying_t PAINT_SCHEME_MASK =
      static_cast<underlying_t>(1);  // bits 0..0
  static constexpr underlying_t PAINT_SCHEME_BIT =
      static_cast<underlying_t>(1u << 0);
  // Describes the visual paint design
  static constexpr underlying_t MOBILITY_KILLED_MASK =
      static_cast<underlying_t>(2);  // bits 1..1
  static constexpr underlying_t MOBILITY_KILLED_BIT =
      static_cast<underlying_t>(1u << 1);
  // Describes whether it is capable of moving on its own power
  static constexpr underlying_t DAMAGE_MASK =
      static_cast<underlying_t>(24);  // bits 3..4
  // Describes the damaged appearance
  static constexpr underlying_t IS_SMOKE_EMANATING_MASK =
      static_cast<underlying_t>(32);  // bits 5..5
  static constexpr underlying_t IS_SMOKE_EMANATING_BIT =
      static_cast<underlying_t>(1u << 5);
  // Describes whether or not smoke is emanating from the entity
  static constexpr underlying_t IS_ENGINE_EMITTING_SMOKE_MASK =
      static_cast<underlying_t>(64);  // bits 6..6
  static constexpr underlying_t IS_ENGINE_EMITTING_SMOKE_BIT =
      static_cast<underlying_t>(1u << 6);
  // Describes whether or not the engine is emitting smoke
  static constexpr underlying_t WAKE_SIZE_MASK =
      static_cast<underlying_t>(384);  // bits 7..8
  // Describes the size of the wake trailing effect
  static constexpr underlying_t RUNNING_LIGHTS_ON_MASK =
      static_cast<underlying_t>(4096);  // bits 12..12
  static constexpr underlying_t RUNNING_LIGHTS_ON_BIT =
      static_cast<underlying_t>(1u << 12);
  // Describes whether running lights are on or off
  static constexpr underlying_t IS_FLAMING_MASK =
      static_cast<underlying_t>(32768);  // bits 15..15
  static constexpr underlying_t IS_FLAMING_BIT =
      static_cast<underlying_t>(1u << 15);
  // Describes whether the entity is burning and flames are visible
  static constexpr underlying_t IS_ACCOMODATION_LADDER_LOWERED_MASK =
      static_cast<underlying_t>(65536);  // bits 16..16
  static constexpr underlying_t IS_ACCOMODATION_LADDER_LOWERED_BIT =
      static_cast<underlying_t>(1u << 16);
  // Describes if the accomodation ladder is lowered or not
  static constexpr underlying_t IS_FENCE_RAISED_MASK =
      static_cast<underlying_t>(131072);  // bits 17..17
  static constexpr underlying_t IS_FENCE_RAISED_BIT =
      static_cast<underlying_t>(1u << 17);
  // Describes whether the safety fence around a helicopter landing deck is
  // raised
  static constexpr underlying_t IS_FLAG_RAISED_MASK =
      static_cast<underlying_t>(262144);  // bits 18..18
  static constexpr underlying_t IS_FLAG_RAISED_BIT =
      static_cast<underlying_t>(1u << 18);
  // Describes whether the national identification flag is raised
  static constexpr underlying_t IS_FROZEN_MASK =
      static_cast<underlying_t>(2097152);  // bits 21..21
  static constexpr underlying_t IS_FROZEN_BIT =
      static_cast<underlying_t>(1u << 21);
  // Describes whether the entity is frozen and should not be dead reckoned
  static constexpr underlying_t POWER_PLANT_ON_MASK =
      static_cast<underlying_t>(4194304);  // bits 22..22
  static constexpr underlying_t POWER_PLANT_ON_BIT =
      static_cast<underlying_t>(1u << 22);
  // Describes whether the power plant is on or off
  static constexpr underlying_t STATE_MASK =
      static_cast<underlying_t>(8388608);  // bits 23..23
  static constexpr underlying_t STATE_BIT = static_cast<underlying_t>(1u << 23);
  // Describes whether the entity is active or deactivated
  static constexpr underlying_t SPOT_LIGHTS_ON_MASK =
      static_cast<underlying_t>(268435456);  // bits 28..28
  static constexpr underlying_t SPOT_LIGHTS_ON_BIT =
      static_cast<underlying_t>(1u << 28);
  // Describes whether spot lights are on or off
  static constexpr underlying_t INTERIOR_LIGHTS_ON_MASK =
      static_cast<underlying_t>(536870912);  // bits 29..29
  static constexpr underlying_t INTERIOR_LIGHTS_ON_BIT =
      static_cast<underlying_t>(1u << 29);
  // Describes whether interior lights are on or off
};

/*
 * Source: uid=34
 */
struct SubsurfacePlatformAppearanceFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;

  static constexpr underlying_t PAINT_SCHEME_MASK =
      static_cast<underlying_t>(1);  // bits 0..0
  static constexpr underlying_t PAINT_SCHEME_BIT =
      static_cast<underlying_t>(1u << 0);
  // Describes the visual paint design
  static constexpr underlying_t MOBILITY_KILLED_MASK =
      static_cast<underlying_t>(2);  // bits 1..1
  static constexpr underlying_t MOBILITY_KILLED_BIT =
      static_cast<underlying_t>(1u << 1);
  // Describes whether it is capable of moving on its own power
  static constexpr underlying_t DAMAGE_MASK =
      static_cast<underlying_t>(24);  // bits 3..4
  // Describes the damaged appearance
  static constexpr underlying_t IS_SMOKE_EMANATING_MASK =
      static_cast<underlying_t>(32);  // bits 5..5
  static constexpr underlying_t IS_SMOKE_EMANATING_BIT =
      static_cast<underlying_t>(1u << 5);
  // Describes whether or not smoke is emanating from the entity
  static constexpr underlying_t IS_ENGINE_EMITTING_SMOKE_MASK =
      static_cast<underlying_t>(64);  // bits 6..6
  static constexpr underlying_t IS_ENGINE_EMITTING_SMOKE_BIT =
      static_cast<underlying_t>(1u << 6);
  // Describes whether or not the engine is emitting smoke
  static constexpr underlying_t HATCH_MASK =
      static_cast<underlying_t>(3584);  // bits 9..11
  // Describes whether the hatch is open or closed
  static constexpr underlying_t RUNNING_LIGHTS_ON_MASK =
      static_cast<underlying_t>(4096);  // bits 12..12
  static constexpr underlying_t RUNNING_LIGHTS_ON_BIT =
      static_cast<underlying_t>(1u << 12);
  // Describes whether running lights are on or off
  static constexpr underlying_t IS_FLAMING_MASK =
      static_cast<underlying_t>(32768);  // bits 15..15
  static constexpr underlying_t IS_FLAMING_BIT =
      static_cast<underlying_t>(1u << 15);
  // Describes whether the entity is burning and flames are visible
  static constexpr underlying_t IS_FROZEN_MASK =
      static_cast<underlying_t>(2097152);  // bits 21..21
  static constexpr underlying_t IS_FROZEN_BIT =
      static_cast<underlying_t>(1u << 21);
  // Describes whether the entity is frozen and should not be dead reckoned
  static constexpr underlying_t POWER_PLANT_ON_MASK =
      static_cast<underlying_t>(4194304);  // bits 22..22
  static constexpr underlying_t POWER_PLANT_ON_BIT =
      static_cast<underlying_t>(1u << 22);
  // Describes whether the power plant is on or off
  static constexpr underlying_t STATE_MASK =
      static_cast<underlying_t>(8388608);  // bits 23..23
  static constexpr underlying_t STATE_BIT = static_cast<underlying_t>(1u << 23);
  // Describes whether the entity is active or deactivated
};

/*
 * Source: uid=35
 */
struct SpacePlatformAppearanceFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;

  static constexpr underlying_t PAINT_SCHEME_MASK =
      static_cast<underlying_t>(1);  // bits 0..0
  static constexpr underlying_t PAINT_SCHEME_BIT =
      static_cast<underlying_t>(1u << 0);
  // Describes the visual paint design
  static constexpr underlying_t MOBILITY_KILLED_MASK =
      static_cast<underlying_t>(2);  // bits 1..1
  static constexpr underlying_t MOBILITY_KILLED_BIT =
      static_cast<underlying_t>(1u << 1);
  // Describes whether it is capable of moving on its own power
  static constexpr underlying_t DAMAGE_MASK =
      static_cast<underlying_t>(24);  // bits 3..4
  // Describes the damaged appearance
  static constexpr underlying_t IS_SMOKE_VAPOR_EMANATING_MASK =
      static_cast<underlying_t>(32);  // bits 5..5
  static constexpr underlying_t IS_SMOKE_VAPOR_EMANATING_BIT =
      static_cast<underlying_t>(1u << 5);
  // Describes whether or not smoke or vapor is emanating from the entity
  static constexpr underlying_t IS_ENGINE_EMITTING_SMOKE_MASK =
      static_cast<underlying_t>(64);  // bits 6..6
  static constexpr underlying_t IS_ENGINE_EMITTING_SMOKE_BIT =
      static_cast<underlying_t>(1u << 6);
  // Describes whether or not the engine is emitting smoke
  static constexpr underlying_t IS_FLAMING_MASK =
      static_cast<underlying_t>(32768);  // bits 15..15
  static constexpr underlying_t IS_FLAMING_BIT =
      static_cast<underlying_t>(1u << 15);
  // Describes whether the entity is burning and flames are visible
  static constexpr underlying_t IS_FROZEN_MASK =
      static_cast<underlying_t>(2097152);  // bits 21..21
  static constexpr underlying_t IS_FROZEN_BIT =
      static_cast<underlying_t>(1u << 21);
  // Describes whether the entity is frozen and should not be dead reckoned
  static constexpr underlying_t POWER_PLANT_ON_MASK =
      static_cast<underlying_t>(4194304);  // bits 22..22
  static constexpr underlying_t POWER_PLANT_ON_BIT =
      static_cast<underlying_t>(1u << 22);
  // Describes whether the power plant is on or off
  static constexpr underlying_t STATE_MASK =
      static_cast<underlying_t>(8388608);  // bits 23..23
  static constexpr underlying_t STATE_BIT = static_cast<underlying_t>(1u << 23);
  // Describes whether the entity is active or deactivated
};

/*
 * Source: uid=36
 */
struct MunitionAppearanceFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;

  static constexpr underlying_t DAMAGE_MASK =
      static_cast<underlying_t>(24);  // bits 3..4
  // Describes the damaged appearance
  static constexpr underlying_t IS_SMOKE_VAPOR_EMANATING_MASK =
      static_cast<underlying_t>(32);  // bits 5..5
  static constexpr underlying_t IS_SMOKE_VAPOR_EMANATING_BIT =
      static_cast<underlying_t>(1u << 5);
  // Describes whether or not smoke or vapor is emanating from the entity
  static constexpr underlying_t IS_ENGINE_EMITTING_SMOKE_MASK =
      static_cast<underlying_t>(64);  // bits 6..6
  static constexpr underlying_t IS_ENGINE_EMITTING_SMOKE_BIT =
      static_cast<underlying_t>(1u << 6);
  // Describes whether or not the engine is emitting smoke
  static constexpr underlying_t VAPOR_TRAIL_SIZE_MASK =
      static_cast<underlying_t>(384);  // bits 7..8
  // Describes the size of the vapor trail
  static constexpr underlying_t IS_FLAMING_MASK =
      static_cast<underlying_t>(32768);  // bits 15..15
  static constexpr underlying_t IS_FLAMING_BIT =
      static_cast<underlying_t>(1u << 15);
  // Describes whether the entity is burning and flames are visible
  static constexpr underlying_t LAUNCH_FLASH_PRESENT_MASK =
      static_cast<underlying_t>(65536);  // bits 16..16
  static constexpr underlying_t LAUNCH_FLASH_PRESENT_BIT =
      static_cast<underlying_t>(1u << 16);
  // Describes whether or not the guided munition's launch flash is present
  static constexpr underlying_t IS_FROZEN_MASK =
      static_cast<underlying_t>(2097152);  // bits 21..21
  static constexpr underlying_t IS_FROZEN_BIT =
      static_cast<underlying_t>(1u << 21);
  // Describes whether the entity is frozen and should not be dead reckoned
  static constexpr underlying_t POWER_PLANT_ON_MASK =
      static_cast<underlying_t>(4194304);  // bits 22..22
  static constexpr underlying_t POWER_PLANT_ON_BIT =
      static_cast<underlying_t>(1u << 22);
  // Describes whether the power plant is on or off
  static constexpr underlying_t STATE_MASK =
      static_cast<underlying_t>(8388608);  // bits 23..23
  static constexpr underlying_t STATE_BIT = static_cast<underlying_t>(1u << 23);
  // Describes whether the entity is active or deactivated
  static constexpr underlying_t COVER_SHROUD_STATUS_MASK =
      static_cast<underlying_t>(50331648);  // bits 24..25
  // Describes the status of the cover or shroud
  static constexpr underlying_t MASKED_CLOAKED_MASK =
      static_cast<underlying_t>(2147483648);  // bits 31..31
  static constexpr underlying_t MASKED_CLOAKED_BIT =
      static_cast<underlying_t>(1u << 31);
  // Describes whether or not the entity is masked or cloaked
};

/*
 * Source: uid=37
 */
struct LifeFormsAppearanceFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;

  static constexpr underlying_t PAINT_SCHEME_MASK =
      static_cast<underlying_t>(1);  // bits 0..0
  static constexpr underlying_t PAINT_SCHEME_BIT =
      static_cast<underlying_t>(1u << 0);
  // Describes the visual paint design
  static constexpr underlying_t HEALTH_MASK =
      static_cast<underlying_t>(24);  // bits 3..4
  // Describes the visual appearance of the severity of any injury
  static constexpr underlying_t COMPLIANCE_STATUS_MASK =
      static_cast<underlying_t>(480);  // bits 5..8
  // Describes the manner and degree to which the life form is complying
  static constexpr underlying_t CLOTHING_IR_SIGNATURE_MASK =
      static_cast<underlying_t>(1536);  // bits 9..10
  // Describes the general nature of the IR Signature due to clothing or
  // covering.
  static constexpr underlying_t SIGNAL_SMOKE_IN_USE_MASK =
      static_cast<underlying_t>(2048);  // bits 11..11
  static constexpr underlying_t SIGNAL_SMOKE_IN_USE_BIT =
      static_cast<underlying_t>(1u << 11);
  // Describes whether signal smoke is being used or not
  static constexpr underlying_t FLASH_LIGHTS_ON_MASK =
      static_cast<underlying_t>(4096);  // bits 12..12
  static constexpr underlying_t FLASH_LIGHTS_ON_BIT =
      static_cast<underlying_t>(1u << 12);
  // Describes whether flash lights are on or off
  static constexpr underlying_t SIGNAL_MIRROR_IN_USE_MASK =
      static_cast<underlying_t>(8192);  // bits 13..13
  static constexpr underlying_t SIGNAL_MIRROR_IN_USE_BIT =
      static_cast<underlying_t>(1u << 13);
  // Describes whether a signal mirror is being used or not
  static constexpr underlying_t IR_STROBE_ON_MASK =
      static_cast<underlying_t>(16384);  // bits 14..14
  static constexpr underlying_t IR_STROBE_ON_BIT =
      static_cast<underlying_t>(1u << 14);
  // Describes whether an IR strobe is on or off
  static constexpr underlying_t IR_ILLUMINATOR_ON_MASK =
      static_cast<underlying_t>(32768);  // bits 15..15
  static constexpr underlying_t IR_ILLUMINATOR_ON_BIT =
      static_cast<underlying_t>(1u << 15);
  // Describes whether an IR illuminator (flare) is on or off
  static constexpr underlying_t LIFE_FORM_POSTURE_MASK =
      static_cast<underlying_t>(983040);  // bits 16..19
  // Describes the posture (position) of the life form
  static constexpr underlying_t IS_SMOKING_CIGARETTE_MASK =
      static_cast<underlying_t>(1048576);  // bits 20..20
  static constexpr underlying_t IS_SMOKING_CIGARETTE_BIT =
      static_cast<underlying_t>(1u << 20);
  // Describes whether the life form has a lit cigarette or not. The primary
  // purpose is for IR signature generation, so it could be a cigar or other
  // item.
  static constexpr underlying_t IS_FROZEN_MASK =
      static_cast<underlying_t>(2097152);  // bits 21..21
  static constexpr underlying_t IS_FROZEN_BIT =
      static_cast<underlying_t>(1u << 21);
  // Describes whether the entity is frozen and should not be dead reckoned
  static constexpr underlying_t MOUNTED_HOISTED_STATUS_MASK =
      static_cast<underlying_t>(4194304);  // bits 22..22
  static constexpr underlying_t MOUNTED_HOISTED_STATUS_BIT =
      static_cast<underlying_t>(1u << 22);
  // Describes whether or not the life form is mounted/hoisted on another
  // platform, such as a troop transport or helicopter hoist
  static constexpr underlying_t STATE_MASK =
      static_cast<underlying_t>(8388608);  // bits 23..23
  static constexpr underlying_t STATE_BIT = static_cast<underlying_t>(1u << 23);
  // Describes whether the entity is active or deactivated
  static constexpr underlying_t WEAPON_IMPLEMENT_1_MASK =
      static_cast<underlying_t>(50331648);  // bits 24..25
  // Describes the position of the life form's primary weapon/implement
  static constexpr underlying_t WEAPON_IMPLEMENT_2_MASK =
      static_cast<underlying_t>(201326592);  // bits 26..27
  // Describes the position of the life form's secondary weapon/implement
  static constexpr underlying_t CAMOUFLAGE_TYPE_MASK =
      static_cast<underlying_t>(805306368);  // bits 28..29
  // Describes the camouflage color
  static constexpr underlying_t CONCEALED_STATIONARY_MASK =
      static_cast<underlying_t>(1073741824);  // bits 30..30
  static constexpr underlying_t CONCEALED_STATIONARY_BIT =
      static_cast<underlying_t>(1u << 30);
  // Describes whether or not the life form is in a prepared concealed position
  static constexpr underlying_t CONCEALED_MOVEMENT_MASK =
      static_cast<underlying_t>(2147483648);  // bits 31..31
  static constexpr underlying_t CONCEALED_MOVEMENT_BIT =
      static_cast<underlying_t>(1u << 31);
  // Describes whether or not the life form uses concealment during movement
};

/*
 * Source: uid=38
 */
struct EnvironmentalAppearanceFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;

  static constexpr underlying_t DENSITY_MASK =
      static_cast<underlying_t>(983040);  // bits 16..19
  // Describes the density
  static constexpr underlying_t IS_FROZEN_MASK =
      static_cast<underlying_t>(2097152);  // bits 21..21
  static constexpr underlying_t IS_FROZEN_BIT =
      static_cast<underlying_t>(1u << 21);
  // Describes whether the entity is frozen and should not be dead reckoned
  static constexpr underlying_t STATE_MASK =
      static_cast<underlying_t>(8388608);  // bits 23..23
  static constexpr underlying_t STATE_BIT = static_cast<underlying_t>(1u << 23);
  // Describes whether the entity is active or deactivated
  static constexpr underlying_t MASKED_CLOAKED_MASK =
      static_cast<underlying_t>(2147483648);  // bits 31..31
  static constexpr underlying_t MASKED_CLOAKED_BIT =
      static_cast<underlying_t>(1u << 31);
  // Describes whether or not the entity is masked or cloaked
};

/*
 * Source: uid=39
 */
struct CulturalFeatureAppearanceFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;

  static constexpr underlying_t DAMAGE_AREA_MASK =
      static_cast<underlying_t>(7);  // bits 0..2
  // Describes the damaged area
  static constexpr underlying_t DAMAGE_MASK =
      static_cast<underlying_t>(24);  // bits 3..4
  // Describes the damaged appearance
  static constexpr underlying_t IS_SMOKE_EMANATING_MASK =
      static_cast<underlying_t>(32);  // bits 5..5
  static constexpr underlying_t IS_SMOKE_EMANATING_BIT =
      static_cast<underlying_t>(1u << 5);
  // Describes whether or not smoke is emanating from the entity
  static constexpr underlying_t IS_FLAMING_MASK =
      static_cast<underlying_t>(32768);  // bits 15..15
  static constexpr underlying_t IS_FLAMING_BIT =
      static_cast<underlying_t>(1u << 15);
  // Describes whether the entity is burning and flames are visible
  static constexpr underlying_t IS_FROZEN_MASK =
      static_cast<underlying_t>(2097152);  // bits 21..21
  static constexpr underlying_t IS_FROZEN_BIT =
      static_cast<underlying_t>(1u << 21);
  // Describes whether the entity is frozen and should not be dead reckoned
  static constexpr underlying_t INTERNAL_HEAT_ON_MASK =
      static_cast<underlying_t>(4194304);  // bits 22..22
  static constexpr underlying_t INTERNAL_HEAT_ON_BIT =
      static_cast<underlying_t>(1u << 22);
  // Describes whether the internal heat is on or off
  static constexpr underlying_t STATE_MASK =
      static_cast<underlying_t>(8388608);  // bits 23..23
  static constexpr underlying_t STATE_BIT = static_cast<underlying_t>(1u << 23);
  // Describes whether the entity is active or deactivated
  static constexpr underlying_t EXTERIOR_LIGHTS_ON_MASK =
      static_cast<underlying_t>(268435456);  // bits 28..28
  static constexpr underlying_t EXTERIOR_LIGHTS_ON_BIT =
      static_cast<underlying_t>(1u << 28);
  // Describes whether the exterior lights are on or off
  static constexpr underlying_t INTERIOR_LIGHTS_ON_MASK =
      static_cast<underlying_t>(536870912);  // bits 29..29
  static constexpr underlying_t INTERIOR_LIGHTS_ON_BIT =
      static_cast<underlying_t>(1u << 29);
  // Describes whether the interior lights are on or off
  static constexpr underlying_t MASKED_CLOAKED_MASK =
      static_cast<underlying_t>(2147483648);  // bits 31..31
  static constexpr underlying_t MASKED_CLOAKED_BIT =
      static_cast<underlying_t>(1u << 31);
  // Describes whether or not the entity is masked or cloaked
};

/*
 * Source: uid=40
 */
struct SupplyAppearanceFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;

  static constexpr underlying_t PAINT_SCHEME_MASK =
      static_cast<underlying_t>(1);  // bits 0..0
  static constexpr underlying_t PAINT_SCHEME_BIT =
      static_cast<underlying_t>(1u << 0);
  // Describes the visual paint design
  static constexpr underlying_t DAMAGE_MASK =
      static_cast<underlying_t>(24);  // bits 3..4
  // Describes the damaged appearance
  static constexpr underlying_t PARACHUTE_STATUS_MASK =
      static_cast<underlying_t>(384);  // bits 7..8
  // Describes the status of a supply's parachute
  static constexpr underlying_t IS_FLAMING_MASK =
      static_cast<underlying_t>(32768);  // bits 15..15
  static constexpr underlying_t IS_FLAMING_BIT =
      static_cast<underlying_t>(1u << 15);
  // Describes whether the entity is burning and flames are visible
  static constexpr underlying_t IS_FROZEN_MASK =
      static_cast<underlying_t>(2097152);  // bits 21..21
  static constexpr underlying_t IS_FROZEN_BIT =
      static_cast<underlying_t>(1u << 21);
  // Describes whether the entity is frozen and should not be dead reckoned
  static constexpr underlying_t STATE_MASK =
      static_cast<underlying_t>(8388608);  // bits 23..23
  static constexpr underlying_t STATE_BIT = static_cast<underlying_t>(1u << 23);
  // Describes whether the entity is active or deactivated
  static constexpr underlying_t DEPLOYED_STATUS_MASK =
      static_cast<underlying_t>(50331648);  // bits 24..25
  // Describes the deployed status
  static constexpr underlying_t MASKED_CLOAKED_MASK =
      static_cast<underlying_t>(2147483648);  // bits 31..31
  static constexpr underlying_t MASKED_CLOAKED_BIT =
      static_cast<underlying_t>(1u << 31);
  // Describes whether or not the entity is masked or cloaked
};

/*
 * Source: uid=41
 */
struct RadioAppearanceFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;

  static constexpr underlying_t IS_FROZEN_MASK =
      static_cast<underlying_t>(2097152);  // bits 21..21
  static constexpr underlying_t IS_FROZEN_BIT =
      static_cast<underlying_t>(1u << 21);
  // Describes whether the entity is frozen and should not be dead reckoned
  static constexpr underlying_t STATE_MASK =
      static_cast<underlying_t>(8388608);  // bits 23..23
  static constexpr underlying_t STATE_BIT = static_cast<underlying_t>(1u << 23);
  // Describes whether the entity is active or deactivated
};

/*
 * Source: uid=42
 */
struct ExpendableAppearanceFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;

  static constexpr underlying_t DAMAGE_MASK =
      static_cast<underlying_t>(24);  // bits 3..4
  // Describes the damaged appearance
  static constexpr underlying_t IS_SMOKE_EMANATING_MASK =
      static_cast<underlying_t>(32);  // bits 5..5
  static constexpr underlying_t IS_SMOKE_EMANATING_BIT =
      static_cast<underlying_t>(1u << 5);
  // Describes whether or not smoke is emanating from the entity
  static constexpr underlying_t PARACHUTE_STATUS_MASK =
      static_cast<underlying_t>(384);  // bits 7..8
  // Describes the status of a flare's parachute
  static constexpr underlying_t FLARE_SMOKE_COLOR_MASK =
      static_cast<underlying_t>(3584);  // bits 9..11
  // Describes the color of a flare's light output or the color of smoke
  // emanating from a smoke expendable
  static constexpr underlying_t IS_FLAMING_MASK =
      static_cast<underlying_t>(32768);  // bits 15..15
  static constexpr underlying_t IS_FLAMING_BIT =
      static_cast<underlying_t>(1u << 15);
  // Describes whether the entity is burning and flames are visible
  static constexpr underlying_t LAUNCH_FLASH_PRESENT_MASK =
      static_cast<underlying_t>(65536);  // bits 16..16
  static constexpr underlying_t LAUNCH_FLASH_PRESENT_BIT =
      static_cast<underlying_t>(1u << 16);
  // Describes whether or not launch flash is present
  static constexpr underlying_t FLARE_SMOKE_STATUS_MASK =
      static_cast<underlying_t>(393216);  // bits 17..18
  // Describes the status of a flare or smoke expendable
  static constexpr underlying_t IS_FROZEN_MASK =
      static_cast<underlying_t>(2097152);  // bits 21..21
  static constexpr underlying_t IS_FROZEN_BIT =
      static_cast<underlying_t>(1u << 21);
  // Describes whether the entity is frozen and should not be dead reckoned
  static constexpr underlying_t POWER_PLANT_ON_MASK =
      static_cast<underlying_t>(4194304);  // bits 22..22
  static constexpr underlying_t POWER_PLANT_ON_BIT =
      static_cast<underlying_t>(1u << 22);
  // Describes whether the power plant is on or off
  static constexpr underlying_t STATE_MASK =
      static_cast<underlying_t>(8388608);  // bits 23..23
  static constexpr underlying_t STATE_BIT = static_cast<underlying_t>(1u << 23);
  // Describes whether the entity is active or deactivated
  static constexpr underlying_t SPOT_CHAFF_STATUS_MASK =
      static_cast<underlying_t>(50331648);  // bits 24..25
  // Describes the status of spot chaff
  static constexpr underlying_t MASKED_CLOAKED_MASK =
      static_cast<underlying_t>(2147483648);  // bits 31..31
  static constexpr underlying_t MASKED_CLOAKED_BIT =
      static_cast<underlying_t>(1u << 31);
  // Describes whether or not the entity is masked or cloaked
};

/*
 * Source: uid=43
 */
struct SensorEmitterAppearanceFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;

  static constexpr underlying_t PAINT_SCHEME_MASK =
      static_cast<underlying_t>(1);  // bits 0..0
  static constexpr underlying_t PAINT_SCHEME_BIT =
      static_cast<underlying_t>(1u << 0);
  // Describes the visual paint design
  static constexpr underlying_t MOBILITY_KILLED_MASK =
      static_cast<underlying_t>(2);  // bits 1..1
  static constexpr underlying_t MOBILITY_KILLED_BIT =
      static_cast<underlying_t>(1u << 1);
  // Describes whether it is capable of moving on its own power
  static constexpr underlying_t MISSION_KILLED_MASK =
      static_cast<underlying_t>(4);  // bits 2..2
  static constexpr underlying_t MISSION_KILLED_BIT =
      static_cast<underlying_t>(1u << 2);
  // Describes whether it is capable of carrying out its mission (e.g., damaged
  // antenna)
  static constexpr underlying_t DAMAGE_MASK =
      static_cast<underlying_t>(24);  // bits 3..4
  // Describes the damaged appearance
  static constexpr underlying_t IS_SMOKE_EMANATING_MASK =
      static_cast<underlying_t>(32);  // bits 5..5
  static constexpr underlying_t IS_SMOKE_EMANATING_BIT =
      static_cast<underlying_t>(1u << 5);
  // Describes whether or not smoke is emanating from the entity
  static constexpr underlying_t IS_ENGINE_EMITTING_SMOKE_MASK =
      static_cast<underlying_t>(64);  // bits 6..6
  static constexpr underlying_t IS_ENGINE_EMITTING_SMOKE_BIT =
      static_cast<underlying_t>(1u << 6);
  // Describes whether or not the engine is emitting smoke
  static constexpr underlying_t TRAILING_EFFECTS_MASK =
      static_cast<underlying_t>(384);  // bits 7..8
  // Describes the size of the trailing effects
  static constexpr underlying_t LIGHTS_ON_MASK =
      static_cast<underlying_t>(4096);  // bits 12..12
  static constexpr underlying_t LIGHTS_ON_BIT =
      static_cast<underlying_t>(1u << 12);
  // Describes whether the lights are on or off
  static constexpr underlying_t IS_FLAMING_MASK =
      static_cast<underlying_t>(32768);  // bits 15..15
  static constexpr underlying_t IS_FLAMING_BIT =
      static_cast<underlying_t>(1u << 15);
  // Describes whether the entity is burning and flames are visible
  static constexpr underlying_t ANTENNA_RAISED_MASK =
      static_cast<underlying_t>(65536);  // bits 16..16
  static constexpr underlying_t ANTENNA_RAISED_BIT =
      static_cast<underlying_t>(1u << 16);
  // Describes whether the antenna is raised or not
  static constexpr underlying_t CAMOUFLAGE_TYPE_MASK =
      static_cast<underlying_t>(393216);  // bits 17..18
  // Describes the camouflage color
  static constexpr underlying_t CONCEALED_POSITION_MASK =
      static_cast<underlying_t>(524288);  // bits 19..19
  static constexpr underlying_t CONCEALED_POSITION_BIT =
      static_cast<underlying_t>(1u << 19);
  // Describes the type of concealment
  static constexpr underlying_t IS_FROZEN_MASK =
      static_cast<underlying_t>(2097152);  // bits 21..21
  static constexpr underlying_t IS_FROZEN_BIT =
      static_cast<underlying_t>(1u << 21);
  // Describes whether the entity is frozen and should not be dead reckoned
  static constexpr underlying_t POWER_PLANT_ON_MASK =
      static_cast<underlying_t>(4194304);  // bits 22..22
  static constexpr underlying_t POWER_PLANT_ON_BIT =
      static_cast<underlying_t>(1u << 22);
  // Describes whether the power plant is on or off
  static constexpr underlying_t STATE_MASK =
      static_cast<underlying_t>(8388608);  // bits 23..23
  static constexpr underlying_t STATE_BIT = static_cast<underlying_t>(1u << 23);
  // Describes whether the entity is active or deactivated
  static constexpr underlying_t TENT_EXTENDED_MASK =
      static_cast<underlying_t>(16777216);  // bits 24..24
  static constexpr underlying_t TENT_EXTENDED_BIT =
      static_cast<underlying_t>(1u << 24);
  // Describes whether or not the tent is extended
  static constexpr underlying_t BLACKOUT_LIGHTS_ON_MASK =
      static_cast<underlying_t>(67108864);  // bits 26..26
  static constexpr underlying_t BLACKOUT_LIGHTS_ON_BIT =
      static_cast<underlying_t>(1u << 26);
  // Describes whether blackout lights are on or off
  static constexpr underlying_t INTERIOR_LIGHTS_ON_MASK =
      static_cast<underlying_t>(536870912);  // bits 29..29
  static constexpr underlying_t INTERIOR_LIGHTS_ON_BIT =
      static_cast<underlying_t>(1u << 29);
  // Describes whether interior lights are on or off
};

/*
 * Source: uid=68
 */
struct StopFreezeFrozenBehaviorFlags {
  using underlying_t = uint8_t;
  underlying_t value = 0;

  static constexpr underlying_t RUN_SIMULATION_CLOCK_MASK =
      static_cast<underlying_t>(1);  // bits 0..0
  static constexpr underlying_t RUN_SIMULATION_CLOCK_BIT =
      static_cast<underlying_t>(1u << 0);
  // Describes whether a simulation application should run the internal
  // simulation clock or not
  static constexpr underlying_t TRANSMIT_UPDATES_MASK =
      static_cast<underlying_t>(2);  // bits 1..1
  static constexpr underlying_t TRANSMIT_UPDATES_BIT =
      static_cast<underlying_t>(1u << 1);
  // Describes whether a simulation application should transmit updates and
  // interactions or not
  static constexpr underlying_t PROCESS_UPDATES_MASK =
      static_cast<underlying_t>(4);  // bits 2..2
  static constexpr underlying_t PROCESS_UPDATES_BIT =
      static_cast<underlying_t>(1u << 2);
  // Describes whether a simulation application should update simulation models
  // of other entities via received updates or interactions
};

/*
 * Source: uid=149
 */
struct UaPropulsionPlantConfigurationFlags {
  using underlying_t = uint16_t;
  underlying_t value = 0;

  static constexpr underlying_t CONFIGURATION_MASK =
      static_cast<underlying_t>(127);  // bits 0..6
  // Describes the configuration of the power plant
  static constexpr underlying_t HULL_MOUNTED_MASKER_ON_MASK =
      static_cast<underlying_t>(128);  // bits 7..7
  static constexpr underlying_t HULL_MOUNTED_MASKER_ON_BIT =
      static_cast<underlying_t>(1u << 7);
  // Describes whether the hull-mounted masker is on or off
};

/*
 * Source: uid=190
 */
struct MinefieldStateAppearanceBitMapFlags {
  using underlying_t = uint16_t;
  underlying_t value = 0;

  static constexpr underlying_t MINEFIELD_TYPE_MASK =
      static_cast<underlying_t>(3);  // bits 0..1
  // Identifies the type of minefield
  static constexpr underlying_t ACTIVE_STATUS_MASK =
      static_cast<underlying_t>(4);  // bits 2..2
  static constexpr underlying_t ACTIVE_STATUS_BIT =
      static_cast<underlying_t>(1u << 2);
  // Describes whether the minefield is active or inactive
  static constexpr underlying_t LANE_MASK =
      static_cast<underlying_t>(8);  // bits 3..3
  static constexpr underlying_t LANE_BIT = static_cast<underlying_t>(1u << 3);
  // Identifies whether the minefield has an active or inactive lane
  static constexpr underlying_t STATE_MASK =
      static_cast<underlying_t>(8192);  // bits 13..13
  static constexpr underlying_t STATE_BIT = static_cast<underlying_t>(1u << 13);
  // Describes the state of the minefield
};

/*
 * Source: uid=192
 */
struct MinefieldDataFusingFlags {
  using underlying_t = uint16_t;
  underlying_t value = 0;

  static constexpr underlying_t PRIMARY_MASK =
      static_cast<underlying_t>(127);  // bits 0..6
  // Identifies the type of the primary fuse
  static constexpr underlying_t SECONDARY_MASK =
      static_cast<underlying_t>(16256);  // bits 7..13
  // Identifies the type of the secondary fuse
  static constexpr underlying_t HAS_ANTI_HANDLING_DEVICE_MASK =
      static_cast<underlying_t>(16384);  // bits 14..14
  static constexpr underlying_t HAS_ANTI_HANDLING_DEVICE_BIT =
      static_cast<underlying_t>(1u << 14);
  // Describes whether the mine has an Anti-Handling device
};

/*
 * Source: uid=202
 */
struct MinefieldDataPaintSchemeFlags {
  using underlying_t = uint8_t;
  underlying_t value = 0;

  static constexpr underlying_t ALGAE_MASK =
      static_cast<underlying_t>(3);  // bits 0..1
  // Identifies the algae build-up on the mine
  static constexpr underlying_t PAINT_SCHEME_MASK =
      static_cast<underlying_t>(252);  // bits 2..7
  // Identifies the paint scheme of the mine
};

/*
 * Source: uid=229
 */
struct ObjectStateAppearanceGeneralFlags {
  using underlying_t = uint16_t;
  underlying_t value = 0;

  static constexpr underlying_t PERCENT_COMPLETE_MASK =
      static_cast<underlying_t>(255);  // bits 0..7
  // 8-bit unsigned integer indicating the percent completion of the object
  // (0..100)
  static constexpr underlying_t DAMAGE_MASK =
      static_cast<underlying_t>(768);  // bits 8..9
  // Describes the damaged appearance
  static constexpr underlying_t PREDISTRIBUTED_MASK =
      static_cast<underlying_t>(1024);  // bits 10..10
  static constexpr underlying_t PREDISTRIBUTED_BIT =
      static_cast<underlying_t>(1u << 10);
  // Describes whether the object was predistributed
  static constexpr underlying_t STATE_MASK =
      static_cast<underlying_t>(2048);  // bits 11..11
  static constexpr underlying_t STATE_BIT = static_cast<underlying_t>(1u << 11);
  // Describes the state of the object
  static constexpr underlying_t IS_SMOKING_MASK =
      static_cast<underlying_t>(4096);  // bits 12..12
  static constexpr underlying_t IS_SMOKING_BIT =
      static_cast<underlying_t>(1u << 12);
  // Describes whether or not there is a smoke plume
  static constexpr underlying_t IS_FLAMING_MASK =
      static_cast<underlying_t>(8192);  // bits 13..13
  static constexpr underlying_t IS_FLAMING_BIT =
      static_cast<underlying_t>(1u << 13);
  // Describes whether the object is burning and flames are visible
  static constexpr underlying_t IED_PRESENT_MASK =
      static_cast<underlying_t>(49152);  // bits 14..15
  // Describes whether the object has or contains an IED
};

/*
 * Source: uid=230
 */
struct PointObjectAppearanceBuildingStructureFlags {
  using underlying_t = uint16_t;
  underlying_t value = 0;

  static constexpr underlying_t COLOR_MASK =
      static_cast<underlying_t>(255);  // bits 0..7
  // Describes the color of the building or structure
  static constexpr underlying_t PAINT_SCHEME_MASK =
      static_cast<underlying_t>(65280);  // bits 8..15
  // Describes the visual paint design
  static constexpr underlying_t IS_APERTURE_OPEN_MASK =
      static_cast<underlying_t>(65536);  // bits 16..16
  static constexpr underlying_t IS_APERTURE_OPEN_BIT =
      static_cast<underlying_t>(1u << 16);
  // Describes whether the aperture (e.g., tent) is open or closed
};

/*
 * Source: uid=231
 */
struct
    PointObjectAppearanceLogCribAbatisVehicleDefiladeAndInfantryFightingPositionFlags {
  using underlying_t = uint16_t;
  underlying_t value = 0;

  static constexpr underlying_t BREACH_STATE_MASK =
      static_cast<underlying_t>(3);  // bits 0..1
  // Describes the breached appearance of the object
};

/*
 * Source: uid=232
 */
struct PointObjectAppearanceAirGroundBurstFlags {
  using underlying_t = uint16_t;
  underlying_t value = 0;

  static constexpr underlying_t OPACITY_PERCENT_MASK =
      static_cast<underlying_t>(255);  // bits 0..7
  // 8-bit unsigned integer indicating the percent opacity of the smoke (0..100)
  static constexpr underlying_t SIZE_MASK =
      static_cast<underlying_t>(65280);  // bits 8..15
  // 8-bit unsigned integer indicating the radius in meters of the cylinder
  // which approximates an individual burst
  static constexpr underlying_t HEIGHT_MASK =
      static_cast<underlying_t>(16711680);  // bits 16..23
  // 8-bit unsigned integer indicating the height in meters of the cylinder
  // which approximates an individual burst
  static constexpr underlying_t NUMBER_OF_BURSTS_MASK =
      static_cast<underlying_t>(1056964608);  // bits 24..29
  // 6-bit unsigned integer indicating the number of bursts in the instance of
  // tactical smoke
  static constexpr underlying_t CHEMICAL_TYPE_MASK =
      static_cast<underlying_t>(3221225472);  // bits 30..31
  // Describes the chemical content of the smoke
};

/*
 * Source: uid=233
 */
struct PointObjectAppearanceCraterFlags {
  using underlying_t = uint16_t;
  underlying_t value = 0;

  static constexpr underlying_t DIAMETER_MASK =
      static_cast<underlying_t>(255);  // bits 0..7
  // 8-bit unsigned integer indicating the diameter of the crater in meters
  static constexpr underlying_t DEPTH_MASK =
      static_cast<underlying_t>(65280);  // bits 8..15
  // 8-bit unsigned integer indicating the depth of the crater in centimeters
  static constexpr underlying_t HEIGHT_MASK =
      static_cast<underlying_t>(16711680);  // bits 16..23
  // 8-bit unsigned integer indicating the height of the crater in centimeters
  static constexpr underlying_t BREACH_STATE_MASK =
      static_cast<underlying_t>(3221225472);  // bits 30..31
  // Describes the breached appearance of the object
};

/*
 * Source: uid=234
 */
struct PointObjectAppearanceRibbonBridgeFlags {
  using underlying_t = uint16_t;
  underlying_t value = 0;

  static constexpr underlying_t NUMBER_OF_SEGMENTS_MASK =
      static_cast<underlying_t>(255);  // bits 0..7
  // 8-bit unsigned integer indicating the number of segments composing the
  // ribbon bridge
};

/*
 * Source: uid=235
 */
struct LinearObjectAppearanceTankDitchAndConcertinaWireFlags {
  using underlying_t = uint16_t;
  underlying_t value = 0;

  static constexpr underlying_t BREACH_STATE_MASK =
      static_cast<underlying_t>(3);  // bits 0..1
  // Describes the breached appearance of the object
  static constexpr underlying_t BREACH_LENGTH_MASK =
      static_cast<underlying_t>(16711680);  // bits 16..23
  // 8-bit unsigned integer indicating the fixed length in meters of a breached
  // segment
  static constexpr underlying_t BREACH_LOCATION_MASK =
      static_cast<underlying_t>(4278190080);  // bits 24..31
  // 8-bit record where each bit indicates whether its associated segment is
  // breached or not, such that bit 0 of the record is the first segment
};

/*
 * Source: uid=236
 */
struct LinearObjectAppearanceExhaustSmokeFlags {
  using underlying_t = uint16_t;
  underlying_t value = 0;

  static constexpr underlying_t OPACITY_PERCENT_MASK =
      static_cast<underlying_t>(255);  // bits 0..7
  // 8-bit unsigned integer indicating the percent opacity of the smoke (0..100)
  static constexpr underlying_t SMOKE_IS_ATTACHED_MASK =
      static_cast<underlying_t>(256);  // bits 8..8
  static constexpr underlying_t SMOKE_IS_ATTACHED_BIT =
      static_cast<underlying_t>(1u << 8);
  // Describes whether or not the smoke is attached to the vehicle
  static constexpr underlying_t CHEMICAL_TYPE_MASK =
      static_cast<underlying_t>(1536);  // bits 9..10
  // Describes the chemical content of the smoke
};

/*
 * Source: uid=237
 */
struct LinearObjectAppearanceMinefieldLaneMarkerFlags {
  using underlying_t = uint16_t;
  underlying_t value = 0;

  static constexpr underlying_t VISIBLE_SIDE_MASK =
      static_cast<underlying_t>(3);  // bits 0..1
  // Describes the visible side of the lane marker
};

/*
 * Source: uid=238
 */
struct LinearObjectAppearanceBreachFlags {
  using underlying_t = uint16_t;
  underlying_t value = 0;
};

/*
 * Source: uid=239
 */
struct ArealObjectAppearanceMinefieldFlags {
  using underlying_t = uint16_t;
  underlying_t value = 0;

  static constexpr underlying_t BREACH_STATE_MASK =
      static_cast<underlying_t>(3);  // bits 0..1
  // Describes the breached appearance of the object
  static constexpr underlying_t MINE_COUNT_MASK =
      static_cast<underlying_t>(4294901760);  // bits 16..31
  // 16-bit unsigned integer indicating the number of mines in the minefield
};

/*
 * Source: uid=240
 */
struct ObjectStateModificationPointObjectFlags {
  using underlying_t = uint16_t;
  underlying_t value = 0;

  static constexpr underlying_t IS_LOCATION_MODIFIED_MASK =
      static_cast<underlying_t>(1);  // bits 0..0
  static constexpr underlying_t IS_LOCATION_MODIFIED_BIT =
      static_cast<underlying_t>(1u << 0);
  // Describes whether the point object location has been modified since the
  // last update number
  static constexpr underlying_t IS_ORIENTATION_MODIFIED_MASK =
      static_cast<underlying_t>(2);  // bits 1..1
  static constexpr underlying_t IS_ORIENTATION_MODIFIED_BIT =
      static_cast<underlying_t>(1u << 1);
  // Describes whether the point object orientation has been modified since the
  // last update number
};

/*
 * Source: uid=241
 */
struct ObjectStateModificationLinearObjectFlags {
  using underlying_t = uint16_t;
  underlying_t value = 0;

  static constexpr underlying_t IS_LOCATION_MODIFIED_MASK =
      static_cast<underlying_t>(1);  // bits 0..0
  static constexpr underlying_t IS_LOCATION_MODIFIED_BIT =
      static_cast<underlying_t>(1u << 0);
  // Describes whether the location of the linear segment has been modified
  // since the last update number
  static constexpr underlying_t IS_ORIENTATION_MODIFIED_MASK =
      static_cast<underlying_t>(2);  // bits 1..1
  static constexpr underlying_t IS_ORIENTATION_MODIFIED_BIT =
      static_cast<underlying_t>(1u << 1);
  // Describes whether the orientation of the linear segment has been modified
  // since the last update number
};

/*
 * Source: uid=242
 */
struct ObjectStateModificationArealObjectFlags {
  using underlying_t = uint16_t;
  underlying_t value = 0;

  static constexpr underlying_t IS_LOCATION_MODIFIED_MASK =
      static_cast<underlying_t>(1);  // bits 0..0
  static constexpr underlying_t IS_LOCATION_MODIFIED_BIT =
      static_cast<underlying_t>(1u << 0);
  // Describes whether any locations of the areal object have been modified
  // since the last update number
};

/*
 * Source: uid=249
 */
struct EnvironmentalProcessEnvironmentStatusFlags {
  using underlying_t = uint8_t;
  underlying_t value = 0;

  static constexpr underlying_t IS_LAST_MASK =
      static_cast<underlying_t>(1);  // bits 0..0
  static constexpr underlying_t IS_LAST_BIT =
      static_cast<underlying_t>(1u << 0);
  // Indicates that the current update shall be the last update for the
  // specified process
  static constexpr underlying_t IS_ACTIVE_MASK =
      static_cast<underlying_t>(2);  // bits 1..1
  static constexpr underlying_t IS_ACTIVE_BIT =
      static_cast<underlying_t>(1u << 1);
  // Describes whether the environmental process is active or not
};

/*
 * Source: uid=313
 */
struct DeFireFlagsFlags {
  using underlying_t = uint16_t;
  underlying_t value = 0;

  static constexpr underlying_t WEAPON_ON_MASK =
      static_cast<underlying_t>(1);  // bits 0..0
  static constexpr underlying_t WEAPON_ON_BIT =
      static_cast<underlying_t>(1u << 0);
  // Identifies the State of the DE Weapon
  static constexpr underlying_t STATE_UPDATE_FLAG_MASK =
      static_cast<underlying_t>(2);  // bits 1..1
  static constexpr underlying_t STATE_UPDATE_FLAG_BIT =
      static_cast<underlying_t>(1u << 1);
  // Identifies a DE Weapon State Change
};

/*
 * Source: uid=317
 */
struct DeDamageDescriptionComponentVisualDamageStatusFlags {
  using underlying_t = uint8_t;
  underlying_t value = 0;

  static constexpr underlying_t IS_FIRE_PRESENT_MASK =
      static_cast<underlying_t>(1);  // bits 0..0
  static constexpr underlying_t IS_FIRE_PRESENT_BIT =
      static_cast<underlying_t>(1u << 0);
  // Describes presence of fire at the damage site
  static constexpr underlying_t SMOKE_MASK =
      static_cast<underlying_t>(6);  // bits 1..2
  // Describes presence of smoke emanating from the damage site
  static constexpr underlying_t SURFACE_DAMAGE_MASK =
      static_cast<underlying_t>(24);  // bits 3..4
  // Describes general surface appearance at the damage site
};

/*
 * Source: uid=450
 */
struct LandPlatformCapabilitiesFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;

  static constexpr underlying_t AMMUNITION_SUPPLY_MASK =
      static_cast<underlying_t>(1);  // bits 0..0
  static constexpr underlying_t AMMUNITION_SUPPLY_BIT =
      static_cast<underlying_t>(1u << 0);
  // Describes whether the entity is able to supply some type of ammunition in
  // response to an appropriate service request
  static constexpr underlying_t FUEL_SUPPLY_MASK =
      static_cast<underlying_t>(2);  // bits 1..1
  static constexpr underlying_t FUEL_SUPPLY_BIT =
      static_cast<underlying_t>(1u << 1);
  // Describes whether the entity is able to supply some type of fuel in
  // response to an appropriate service request
  static constexpr underlying_t RECOVERY_MASK =
      static_cast<underlying_t>(4);  // bits 2..2
  static constexpr underlying_t RECOVERY_BIT =
      static_cast<underlying_t>(1u << 2);
  // Describes whether the entity is able to provide recovery (e.g., towing)
  // services in response to an appropriate service request
  static constexpr underlying_t REPAIR_MASK =
      static_cast<underlying_t>(8);  // bits 3..3
  static constexpr underlying_t REPAIR_BIT = static_cast<underlying_t>(1u << 3);
  // Describes whether the entity is able to supply certain repair services in
  // response to an appropriate service request
  static constexpr underlying_t RESERVED_MASK =
      static_cast<underlying_t>(16);  // bits 4..4
  static constexpr underlying_t RESERVED_BIT =
      static_cast<underlying_t>(1u << 4);
  // This entry is reserved for backward compatibility and may not be reused
  static constexpr underlying_t SLING_LOADABLE_MASK =
      static_cast<underlying_t>(64);  // bits 6..6
  static constexpr underlying_t SLING_LOADABLE_BIT =
      static_cast<underlying_t>(1u << 6);
  // The Entity is able to be carried as a sling load payload. The extended
  // appearance record (if available) will identify if it is currently sling
  // loaded and entity association and/or entity offset records (if available)
  // will provide additional sling load details (such as carrier).
  static constexpr underlying_t IED_PRESENCE_INDICATOR_MASK =
      static_cast<underlying_t>(128);  // bits 7..7
  static constexpr underlying_t IED_PRESENCE_INDICATOR_BIT =
      static_cast<underlying_t>(1u << 7);
  // The Entity is an IED or contains an IED. The extended appearance record (if
  // available) will identify how well hidden the IED is on the Entity. An
  // Attached Part (if applicable, for instance a jury-rigged munition does not
  // apply here) will identify the IED explicitly.
  static constexpr underlying_t TASK_ORGANIZABLE_MASK =
      static_cast<underlying_t>(256);  // bits 8..8
  static constexpr underlying_t TASK_ORGANIZABLE_BIT =
      static_cast<underlying_t>(1u << 8);
  // The Entity (normally a virtual manned module) can be task organized into an
  // existing mixed mode unit (where mixed mode is intended to comprise a
  // combination of computer-generated forces and virtual or even live forces).
};

/*
 * Source: uid=451
 */
struct AirPlatformCapabilitiesFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;

  static constexpr underlying_t AMMUNITION_SUPPLY_MASK =
      static_cast<underlying_t>(1);  // bits 0..0
  static constexpr underlying_t AMMUNITION_SUPPLY_BIT =
      static_cast<underlying_t>(1u << 0);
  // Describes whether the entity is able to supply some type of ammunition in
  // response to an appropriate service request
  static constexpr underlying_t FUEL_SUPPLY_MASK =
      static_cast<underlying_t>(2);  // bits 1..1
  static constexpr underlying_t FUEL_SUPPLY_BIT =
      static_cast<underlying_t>(1u << 1);
  // Describes whether the entity is able to supply some type of fuel in
  // response to an appropriate service request
  static constexpr underlying_t RECOVERY_MASK =
      static_cast<underlying_t>(4);  // bits 2..2
  static constexpr underlying_t RECOVERY_BIT =
      static_cast<underlying_t>(1u << 2);
  // Describes whether the entity is able to provide recovery (e.g., towing)
  // services in response to an appropriate service request
  static constexpr underlying_t REPAIR_MASK =
      static_cast<underlying_t>(8);  // bits 3..3
  static constexpr underlying_t REPAIR_BIT = static_cast<underlying_t>(1u << 3);
  // Describes whether the entity is able to supply certain repair services in
  // response to an appropriate service request
  static constexpr underlying_t ADS_B_MASK =
      static_cast<underlying_t>(16);  // bits 4..4
  static constexpr underlying_t ADS_B_BIT = static_cast<underlying_t>(1u << 4);
  // Describes whether the entity is equipped with Automatic Dependent
  // Surveillance - Broadcast (ADS-B)
  static constexpr underlying_t SLING_LOAD_CARRIER_MASK =
      static_cast<underlying_t>(32);  // bits 5..5
  static constexpr underlying_t SLING_LOAD_CARRIER_BIT =
      static_cast<underlying_t>(1u << 5);
  // The Entity is able to carry a payload in a sling load. The extended
  // appearance record (if available) will identify the current sling load
  // status and entity association and/or entity offset records (if available)
  // will provide additional sling load details (such as payload).
  static constexpr underlying_t SLING_LOADABLE_MASK =
      static_cast<underlying_t>(64);  // bits 6..6
  static constexpr underlying_t SLING_LOADABLE_BIT =
      static_cast<underlying_t>(1u << 6);
  // The Entity is able to be carried as a sling load payload. The extended
  // appearance record (if available) will identify if it is currently sling
  // loaded and entity association and/or entity offset records (if available)
  // will provide additional sling load details (such as carrier).
  static constexpr underlying_t IED_PRESENCE_INDICATOR_MASK =
      static_cast<underlying_t>(128);  // bits 7..7
  static constexpr underlying_t IED_PRESENCE_INDICATOR_BIT =
      static_cast<underlying_t>(1u << 7);
  // The Entity is an IED or contains an IED. The extended appearance record (if
  // available) will identify how well hidden the IED is on the Entity. An
  // Attached Part (if applicable, for instance a jury-rigged munition does not
  // apply here) will identify the IED explicitly.
  static constexpr underlying_t TASK_ORGANIZABLE_MASK =
      static_cast<underlying_t>(256);  // bits 8..8
  static constexpr underlying_t TASK_ORGANIZABLE_BIT =
      static_cast<underlying_t>(1u << 8);
  // The Entity (normally a virtual manned module) can be task organized into an
  // existing mixed mode unit (where mixed mode is intended to comprise a
  // combination of computer-generated forces and virtual or even live forces).
  static constexpr underlying_t LAIRCM_MASK =
      static_cast<underlying_t>(512);  // bits 9..9
  static constexpr underlying_t LAIRCM_BIT = static_cast<underlying_t>(1u << 9);
  // Describes whether the entity is equipped with Large Aircraft Infrared
  // Countermeasures (LAIRCM)
};

/*
 * Source: uid=452
 */
struct SurfacePlatformCapabilitiesFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;

  static constexpr underlying_t AMMUNITION_SUPPLY_MASK =
      static_cast<underlying_t>(1);  // bits 0..0
  static constexpr underlying_t AMMUNITION_SUPPLY_BIT =
      static_cast<underlying_t>(1u << 0);
  // Describes whether the entity is able to supply some type of ammunition in
  // response to an appropriate service request
  static constexpr underlying_t FUEL_SUPPLY_MASK =
      static_cast<underlying_t>(2);  // bits 1..1
  static constexpr underlying_t FUEL_SUPPLY_BIT =
      static_cast<underlying_t>(1u << 1);
  // Describes whether the entity is able to supply some type of fuel in
  // response to an appropriate service request
  static constexpr underlying_t RECOVERY_MASK =
      static_cast<underlying_t>(4);  // bits 2..2
  static constexpr underlying_t RECOVERY_BIT =
      static_cast<underlying_t>(1u << 2);
  // Describes whether the entity is able to provide recovery (e.g., towing)
  // services in response to an appropriate service request
  static constexpr underlying_t REPAIR_MASK =
      static_cast<underlying_t>(8);  // bits 3..3
  static constexpr underlying_t REPAIR_BIT = static_cast<underlying_t>(1u << 3);
  // Describes whether the entity is able to supply certain repair services in
  // response to an appropriate service request
  static constexpr underlying_t RESERVED_MASK =
      static_cast<underlying_t>(16);  // bits 4..4
  static constexpr underlying_t RESERVED_BIT =
      static_cast<underlying_t>(1u << 4);
  // This entry is reserved for backward compatibility and may not be reused
  static constexpr underlying_t SLING_LOADABLE_MASK =
      static_cast<underlying_t>(64);  // bits 6..6
  static constexpr underlying_t SLING_LOADABLE_BIT =
      static_cast<underlying_t>(1u << 6);
  // The Entity is able to be carried as a sling load payload. The extended
  // appearance record (if available) will identify if it is currently sling
  // loaded and entity association and/or entity offset records (if available)
  // will provide additional sling load details (such as carrier).
  static constexpr underlying_t IED_PRESENCE_INDICATOR_MASK =
      static_cast<underlying_t>(128);  // bits 7..7
  static constexpr underlying_t IED_PRESENCE_INDICATOR_BIT =
      static_cast<underlying_t>(1u << 7);
  // The Entity is an IED or contains an IED. The extended appearance record (if
  // available) will identify how well hidden the IED is on the Entity. An
  // Attached Part (if applicable, for instance a jury-rigged munition does not
  // apply here) will identify the IED explicitly.
  static constexpr underlying_t TASK_ORGANIZABLE_MASK =
      static_cast<underlying_t>(256);  // bits 8..8
  static constexpr underlying_t TASK_ORGANIZABLE_BIT =
      static_cast<underlying_t>(1u << 8);
  // The Entity (normally a virtual manned module) can be task organized into an
  // existing mixed mode unit (where mixed mode is intended to comprise a
  // combination of computer-generated forces and virtual or even live forces).
};

/*
 * Source: uid=453
 */
struct SubsurfacePlatformCapabilitiesFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;

  static constexpr underlying_t AMMUNITION_SUPPLY_MASK =
      static_cast<underlying_t>(1);  // bits 0..0
  static constexpr underlying_t AMMUNITION_SUPPLY_BIT =
      static_cast<underlying_t>(1u << 0);
  // Describes whether the entity is able to supply some type of ammunition in
  // response to an appropriate service request
  static constexpr underlying_t FUEL_SUPPLY_MASK =
      static_cast<underlying_t>(2);  // bits 1..1
  static constexpr underlying_t FUEL_SUPPLY_BIT =
      static_cast<underlying_t>(1u << 1);
  // Describes whether the entity is able to supply some type of fuel in
  // response to an appropriate service request
  static constexpr underlying_t RECOVERY_MASK =
      static_cast<underlying_t>(4);  // bits 2..2
  static constexpr underlying_t RECOVERY_BIT =
      static_cast<underlying_t>(1u << 2);
  // Describes whether the entity is able to provide recovery (e.g., towing)
  // services in response to an appropriate service request
  static constexpr underlying_t REPAIR_MASK =
      static_cast<underlying_t>(8);  // bits 3..3
  static constexpr underlying_t REPAIR_BIT = static_cast<underlying_t>(1u << 3);
  // Describes whether the entity is able to supply certain repair services in
  // response to an appropriate service request
  static constexpr underlying_t RESERVED_MASK =
      static_cast<underlying_t>(16);  // bits 4..4
  static constexpr underlying_t RESERVED_BIT =
      static_cast<underlying_t>(1u << 4);
  // This entry is reserved for backward compatibility and may not be reused
  static constexpr underlying_t SLING_LOADABLE_MASK =
      static_cast<underlying_t>(64);  // bits 6..6
  static constexpr underlying_t SLING_LOADABLE_BIT =
      static_cast<underlying_t>(1u << 6);
  // The Entity is able to be carried as a sling load payload. The extended
  // appearance record (if available) will identify if it is currently sling
  // loaded and entity association and/or entity offset records (if available)
  // will provide additional sling load details (such as carrier).
  static constexpr underlying_t IED_PRESENCE_INDICATOR_MASK =
      static_cast<underlying_t>(128);  // bits 7..7
  static constexpr underlying_t IED_PRESENCE_INDICATOR_BIT =
      static_cast<underlying_t>(1u << 7);
  // The Entity is an IED or contains an IED. The extended appearance record (if
  // available) will identify how well hidden the IED is on the Entity. An
  // Attached Part (if applicable, for instance a jury-rigged munition does not
  // apply here) will identify the IED explicitly.
  static constexpr underlying_t TASK_ORGANIZABLE_MASK =
      static_cast<underlying_t>(256);  // bits 8..8
  static constexpr underlying_t TASK_ORGANIZABLE_BIT =
      static_cast<underlying_t>(1u << 8);
  // The Entity (normally a virtual manned module) can be task organized into an
  // existing mixed mode unit (where mixed mode is intended to comprise a
  // combination of computer-generated forces and virtual or even live forces).
};

/*
 * Source: uid=454
 */
struct SpacePlatformCapabilitiesFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;

  static constexpr underlying_t AMMUNITION_SUPPLY_MASK =
      static_cast<underlying_t>(1);  // bits 0..0
  static constexpr underlying_t AMMUNITION_SUPPLY_BIT =
      static_cast<underlying_t>(1u << 0);
  // Describes whether the entity is able to supply some type of ammunition in
  // response to an appropriate service request
  static constexpr underlying_t FUEL_SUPPLY_MASK =
      static_cast<underlying_t>(2);  // bits 1..1
  static constexpr underlying_t FUEL_SUPPLY_BIT =
      static_cast<underlying_t>(1u << 1);
  // Describes whether the entity is able to supply some type of fuel in
  // response to an appropriate service request
  static constexpr underlying_t RECOVERY_MASK =
      static_cast<underlying_t>(4);  // bits 2..2
  static constexpr underlying_t RECOVERY_BIT =
      static_cast<underlying_t>(1u << 2);
  // Describes whether the entity is able to provide recovery (e.g., towing)
  // services in response to an appropriate service request
  static constexpr underlying_t REPAIR_MASK =
      static_cast<underlying_t>(8);  // bits 3..3
  static constexpr underlying_t REPAIR_BIT = static_cast<underlying_t>(1u << 3);
  // Describes whether the entity is able to supply certain repair services in
  // response to an appropriate service request
  static constexpr underlying_t RESERVED_MASK =
      static_cast<underlying_t>(16);  // bits 4..4
  static constexpr underlying_t RESERVED_BIT =
      static_cast<underlying_t>(1u << 4);
  // This entry is reserved for backward compatibility and may not be reused
};

/*
 * Source: uid=455
 */
struct MunitionCapabilitiesFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;

  static constexpr underlying_t RESERVED_MASK =
      static_cast<underlying_t>(31);  // bits 0..4
  // This entry is reserved for backward compatibility and may not be reused
  static constexpr underlying_t IED_PRESENCE_INDICATOR_MASK =
      static_cast<underlying_t>(128);  // bits 7..7
  static constexpr underlying_t IED_PRESENCE_INDICATOR_BIT =
      static_cast<underlying_t>(1u << 7);
  // The Entity is an IED or contains an IED. The extended appearance record (if
  // available) will identify how well hidden the IED is on the Entity. An
  // Attached Part (if applicable, for instance a jury-rigged munition does not
  // apply here) will identify the IED explicitly.
};

/*
 * Source: uid=456
 */
struct LifeFormsCapabilitiesFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;

  static constexpr underlying_t AMMUNITION_SUPPLY_MASK =
      static_cast<underlying_t>(1);  // bits 0..0
  static constexpr underlying_t AMMUNITION_SUPPLY_BIT =
      static_cast<underlying_t>(1u << 0);
  // Describes whether the entity is able to supply some type of ammunition in
  // response to an appropriate service request
  static constexpr underlying_t FUEL_SUPPLY_MASK =
      static_cast<underlying_t>(2);  // bits 1..1
  static constexpr underlying_t FUEL_SUPPLY_BIT =
      static_cast<underlying_t>(1u << 1);
  // Describes whether the entity is able to supply some type of fuel in
  // response to an appropriate service request
  static constexpr underlying_t RECOVERY_MASK =
      static_cast<underlying_t>(4);  // bits 2..2
  static constexpr underlying_t RECOVERY_BIT =
      static_cast<underlying_t>(1u << 2);
  // Describes whether the entity is able to provide recovery (e.g., towing)
  // services in response to an appropriate service request
  static constexpr underlying_t REPAIR_MASK =
      static_cast<underlying_t>(8);  // bits 3..3
  static constexpr underlying_t REPAIR_BIT = static_cast<underlying_t>(1u << 3);
  // Describes whether the entity is able to supply certain repair services in
  // response to an appropriate service request
  static constexpr underlying_t RESERVED_MASK =
      static_cast<underlying_t>(16);  // bits 4..4
  static constexpr underlying_t RESERVED_BIT =
      static_cast<underlying_t>(1u << 4);
  // This entry is reserved for backward compatibility and may not be reused
};

/*
 * Source: uid=457
 */
struct EnvironmentalCapabilitiesFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;

  static constexpr underlying_t RESERVED_MASK =
      static_cast<underlying_t>(31);  // bits 0..4
  // This entry is reserved for backward compatibility and may not be reused
  static constexpr underlying_t IED_PRESENCE_INDICATOR_MASK =
      static_cast<underlying_t>(128);  // bits 7..7
  static constexpr underlying_t IED_PRESENCE_INDICATOR_BIT =
      static_cast<underlying_t>(1u << 7);
  // The Entity is an IED or contains an IED. The extended appearance record (if
  // available) will identify how well hidden the IED is on the Entity. An
  // Attached Part (if applicable, for instance a jury-rigged munition does not
  // apply here) will identify the IED explicitly.
};

/*
 * Source: uid=458
 */
struct CulturalFeatureCapabilitiesFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;

  static constexpr underlying_t RESERVED_MASK =
      static_cast<underlying_t>(31);  // bits 0..4
  // This entry is reserved for backward compatibility and may not be reused
  static constexpr underlying_t SLING_LOADABLE_MASK =
      static_cast<underlying_t>(64);  // bits 6..6
  static constexpr underlying_t SLING_LOADABLE_BIT =
      static_cast<underlying_t>(1u << 6);
  // The Entity is able to be carried as a sling load payload. The extended
  // appearance record (if available) will identify if it is currently sling
  // loaded and entity association and/or entity offset records (if available)
  // will provide additional sling load details (such as carrier).
  static constexpr underlying_t IED_PRESENCE_INDICATOR_MASK =
      static_cast<underlying_t>(128);  // bits 7..7
  static constexpr underlying_t IED_PRESENCE_INDICATOR_BIT =
      static_cast<underlying_t>(1u << 7);
  // The Entity is an IED or contains an IED. The extended appearance record (if
  // available) will identify how well hidden the IED is on the Entity. An
  // Attached Part (if applicable, for instance a jury-rigged munition does not
  // apply here) will identify the IED explicitly.
};

/*
 * Source: uid=459
 */
struct SupplyCapabilitiesFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;

  static constexpr underlying_t AMMUNITION_SUPPLY_MASK =
      static_cast<underlying_t>(1);  // bits 0..0
  static constexpr underlying_t AMMUNITION_SUPPLY_BIT =
      static_cast<underlying_t>(1u << 0);
  // Describes whether the entity is able to supply some type of ammunition in
  // response to an appropriate service request
  static constexpr underlying_t FUEL_SUPPLY_MASK =
      static_cast<underlying_t>(2);  // bits 1..1
  static constexpr underlying_t FUEL_SUPPLY_BIT =
      static_cast<underlying_t>(1u << 1);
  // Describes whether the entity is able to supply some type of fuel in
  // response to an appropriate service request
  static constexpr underlying_t RESERVED_MASK =
      static_cast<underlying_t>(28);  // bits 2..4
  // This entry is reserved for backward compatibility and may not be reused
  static constexpr underlying_t SLING_LOADABLE_MASK =
      static_cast<underlying_t>(64);  // bits 6..6
  static constexpr underlying_t SLING_LOADABLE_BIT =
      static_cast<underlying_t>(1u << 6);
  // The Entity is able to be carried as a sling load payload. The extended
  // appearance record (if available) will identify if it is currently sling
  // loaded and entity association and/or entity offset records (if available)
  // will provide additional sling load details (such as carrier).
  static constexpr underlying_t IED_PRESENCE_INDICATOR_MASK =
      static_cast<underlying_t>(128);  // bits 7..7
  static constexpr underlying_t IED_PRESENCE_INDICATOR_BIT =
      static_cast<underlying_t>(1u << 7);
  // The Entity is an IED or contains an IED. The extended appearance record (if
  // available) will identify how well hidden the IED is on the Entity. An
  // Attached Part (if applicable, for instance a jury-rigged munition does not
  // apply here) will identify the IED explicitly.
};

/*
 * Source: uid=460
 */
struct RadioCapabilitiesFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;

  static constexpr underlying_t RESERVED_MASK =
      static_cast<underlying_t>(31);  // bits 0..4
  // This entry is reserved for backward compatibility and may not be reused
};

/*
 * Source: uid=461
 */
struct ExpendableCapabilitiesFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;

  static constexpr underlying_t RESERVED_MASK =
      static_cast<underlying_t>(31);  // bits 0..4
  // This entry is reserved for backward compatibility and may not be reused
};

/*
 * Source: uid=462
 */
struct SensorEmitterCapabilitiesFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;

  static constexpr underlying_t RESERVED_MASK =
      static_cast<underlying_t>(31);  // bits 0..4
  // This entry is reserved for backward compatibility and may not be reused
  static constexpr underlying_t SLING_LOADABLE_MASK =
      static_cast<underlying_t>(64);  // bits 6..6
  static constexpr underlying_t SLING_LOADABLE_BIT =
      static_cast<underlying_t>(1u << 6);
  // The Entity is able to be carried as a sling load payload. The extended
  // appearance record (if available) will identify if it is currently sling
  // loaded and entity association and/or entity offset records (if available)
  // will provide additional sling load details (such as carrier).
  static constexpr underlying_t IED_PRESENCE_INDICATOR_MASK =
      static_cast<underlying_t>(128);  // bits 7..7
  static constexpr underlying_t IED_PRESENCE_INDICATOR_BIT =
      static_cast<underlying_t>(1u << 7);
  // The Entity is an IED or contains an IED. The extended appearance record (if
  // available) will identify how well hidden the IED is on the Entity. An
  // Attached Part (if applicable, for instance a jury-rigged munition does not
  // apply here) will identify the IED explicitly.
  static constexpr underlying_t TASK_ORGANIZABLE_MASK =
      static_cast<underlying_t>(256);  // bits 8..8
  static constexpr underlying_t TASK_ORGANIZABLE_BIT =
      static_cast<underlying_t>(1u << 8);
  // The Entity (normally a virtual manned module) can be task organized into an
  // existing mixed mode unit (where mixed mode is intended to comprise a
  // combination of computer-generated forces and virtual or even live forces).
};

/*
 * Source: uid=480
 */
struct NonHumanLifeFormsAppearanceFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;

  static constexpr underlying_t HEALTH_MASK =
      static_cast<underlying_t>(24);  // bits 3..4
  // Describes the visual appearance of the severity of any injury
  static constexpr underlying_t IS_FROZEN_MASK =
      static_cast<underlying_t>(2097152);  // bits 21..21
  static constexpr underlying_t IS_FROZEN_BIT =
      static_cast<underlying_t>(1u << 21);
  // Describes whether the entity is frozen and should not be dead reckoned
  static constexpr underlying_t MOUNTED_HOISTED_STATUS_MASK =
      static_cast<underlying_t>(4194304);  // bits 22..22
  static constexpr underlying_t MOUNTED_HOISTED_STATUS_BIT =
      static_cast<underlying_t>(1u << 22);
  // Describes whether or not the life form is mounted/hoisted on another
  // platform, such as a troop transport or helicopter hoist
  static constexpr underlying_t STATE_MASK =
      static_cast<underlying_t>(8388608);  // bits 23..23
  static constexpr underlying_t STATE_BIT = static_cast<underlying_t>(1u << 23);
  // Describes whether the entity is active or deactivated
};

/*
 * Source: uid=483
 */
struct PointObjectAppearanceBuildingRubbleFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;
};

/*
 * Source: uid=484
 */
struct PointObjectAppearanceStationaryBridgeAndAvlbFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;
};

/*
 * Source: uid=485
 */
struct PointObjectAppearanceDisturbedEarthRoadFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;

  static constexpr underlying_t DIAMETER_MASK =
      static_cast<underlying_t>(255);  // bits 0..7
  // 8-bit unsigned integer indicating the diameter in decimeters
  static constexpr underlying_t HEIGHT_MASK =
      static_cast<underlying_t>(65280);  // bits 8..15
  // 8-bit unsigned integer indicating the height in centimeters
  static constexpr underlying_t CONTRAST_MASK =
      static_cast<underlying_t>(983040);  // bits 16..19
  // 4-bit unsigned integer indicating 16 levels of contrast (low to high)
  // distinguishing variation of object from surrounding surface
};

/*
 * Source: uid=486
 */
struct PointObjectAppearancePotholeFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;

  static constexpr underlying_t DIAMETER_MASK =
      static_cast<underlying_t>(255);  // bits 0..7
  // 8-bit unsigned integer indicating the diameter in decimeters
  static constexpr underlying_t DEPTH_MASK =
      static_cast<underlying_t>(65280);  // bits 8..15
  // 8-bit unsigned integer indicating the depth in centimeters
};

/*
 * Source: uid=487
 */
struct PointObjectAppearanceTreeFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;

  static constexpr underlying_t SEASON_MASK =
      static_cast<underlying_t>(3);  // bits 0..1
  // Indicates the visually represented season
  static constexpr underlying_t LEAF_COVERAGE_MASK =
      static_cast<underlying_t>(12);  // bits 2..3
                                      // Indicates the leaf coverage
};

/*
 * Source: uid=488
 */
struct LinearObjectAppearanceWireFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;

  static constexpr underlying_t COLOR_MASK =
      static_cast<underlying_t>(255);  // bits 0..7
  // 8-bit enumeration indicating the color
  static constexpr underlying_t CONTRAST_MASK =
      static_cast<underlying_t>(983040);  // bits 16..19
  // 4-bit unsigned integer indicating 16 levels of contrast (low to high)
  // distinguishing variation of object from surrounding surface
  static constexpr underlying_t IS_BURIED_MASK =
      static_cast<underlying_t>(1048576);  // bits 20..20
  static constexpr underlying_t IS_BURIED_BIT =
      static_cast<underlying_t>(1u << 20);
  // Describes whether the wire is buried or not
};

/*
 * Source: uid=489
 */
struct LinearObjectAppearanceSpeedBumpFlags {
  using underlying_t = uint32_t;
  underlying_t value = 0;

  static constexpr underlying_t COLOR_MASK =
      static_cast<underlying_t>(255);  // bits 0..7
  // 8-bit enumeration indicating the color
  static constexpr underlying_t CONTRAST_MASK =
      static_cast<underlying_t>(983040);  // bits 16..19
  // 4-bit unsigned integer indicating 16 levels of contrast (low to high)
  // distinguishing variation of object from surrounding surface
  static constexpr underlying_t MATERIAL_MASK =
      static_cast<underlying_t>(15728640);  // bits 20..23
  // 4-bit enumeration indicating the type of material
};
