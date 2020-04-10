#ifndef COVIDSIM_CONSTANTS_H_INCLUDED_
#define COVIDSIM_CONSTANTS_H_INCLUDED_

#define PI 3.1415926535
#define EARTHRADIUS 6366707.0

#define OUTPUT_DIST_SCALE 1000
#define MAX_PLACE_SIZE 20000
#define MAX_NUM_SEED_LOCATIONS 10000

#define CDF_RES 20
#define INFPROF_RES 56
/* Max household size of 16 */

#define NUM_AGE_GROUPS 17
#define AGE_GROUP_WIDTH 5
#define DAYS_PER_YEAR 364
#define INFECT_TYPE_MASK 16
#define MAX_GEN_REC 20
#define MAX_SEC_REC 500
#define INF_QUEUE_SCALE 5
#define MAX_TRAVEL_TIME 14

//#define MAX_INFECTIOUS_STEPS 255 //// orig
#define MAX_INFECTIOUS_STEPS 2550

// define maximum number of contacts
#define MAX_CONTACTS 250

#define MAX_DUR_IMPORT_PROFILE 10245

#define MAX_AIRPORTS 5000
#define NNA 10
#define MAX_DIST_AIRPORT_TO_HOTEL 200000.0
#define MIN_HOTELS_PER_AIRPORT 20
#define HOTELS_PER_1000PASSENGER 10
#define PLACE_CLOSE_ROUND_HOUSEHOLD 1

#endif // COVIDSIM_CONSTANTS_H_INCLUDED_
