#ifndef COVIDSIM_COUNTRY_H_INCLUDED_
#define COVIDSIM_COUNTRY_H_INCLUDED_


#define MAX_HOUSEHOLD_SIZE 10
#define MAX_INTERVENTION_TYPES 1
#define MAX_INTERVENTIONS_PER_ADUNIT 10

const int ADUNIT_LOOKUP_SIZE = 1000000;
const int MAX_COUNTRIES = 100;
const int NUM_PLACE_TYPES = 4;
const int MAX_ADUNITS = 3200;

#ifdef COUNTRY_US
#define ABSENTEEISM_PLACE_CLOSURE
#define MAX_ABSENT_TIME 8
#else
/*
#define ABSENTEEISM_PLACE_CLOSURE
*/
#endif

#ifdef COUNTRY_US
#define MAX_DIST 2000
#define NK_HR 2500
#define NKR 4000000
#else
#define MAX_DIST 2000
#define NK_HR 400
#define NKR 2000000
#endif

#ifdef COUNTRY_US
#define ONE_CHILD_TWO_PERS_PROB 0.08
#define TWO_CHILD_THREE_PERS_PROB 0.11
//#define ONE_PERS_HOUSE_PROB_OLD 0.5
//#define TWO_PERS_HOUSE_PROB_OLD 0.5
//#define ONE_PERS_HOUSE_PROB_YOUNG 0.23
//#define TWO_PERS_HOUSE_PROB_YOUNG 0.23
#define ONE_PERS_HOUSE_PROB_OLD 0.55
#define TWO_PERS_HOUSE_PROB_OLD 0.6
#define ONE_PERS_HOUSE_PROB_YOUNG 0.26
#define TWO_PERS_HOUSE_PROB_YOUNG 0.24
#define ONE_CHILD_PROB_YOUNGEST_CHILD_UNDER_FIVE 0.55
#define TWO_CHILDREN_PROB_YOUNGEST_UNDER_FIVE 0.0
#define PROB_YOUNGEST_CHILD_UNDER_FIVE 0
//#define ZERO_CHILD_THREE_PERS_PROB 0.25
//#define ONE_CHILD_FOUR_PERS_PROB 0.2
#define ZERO_CHILD_THREE_PERS_PROB 0.28
#define ONE_CHILD_FOUR_PERS_PROB 0.22
#define YOUNG_AND_SINGLE_SLOPE 0.7
#define YOUNG_AND_SINGLE 36
//#define NOCHILD_PERS_AGE 44
//#define OLD_PERS_AGE 60
#define NOCHILD_PERS_AGE 46
#define OLD_PERS_AGE 62
/** From master merge conflict Neil_calib 20200401
#define ONE_PERS_HOUSE_PROB_OLD 0.42
#define TWO_PERS_HOUSE_PROB_OLD 0.42
#define ONE_PERS_HOUSE_PROB_YOUNG 0.26
#define TWO_PERS_HOUSE_PROB_YOUNG 0.26
#define ONE_CHILD_PROB_YOUNGEST_CHILD_UNDER_FIVE 0.69
#define TWO_CHILDREN_PROB_YOUNGEST_UNDER_FIVE 0.0
#define PROB_YOUNGEST_CHILD_UNDER_FIVE 0
#define ZERO_CHILD_THREE_PERS_PROB 0.15
#define ONE_CHILD_FOUR_PERS_PROB 0.12
#define YOUNG_AND_SINGLE_SLOPE 0.75
#define YOUNG_AND_SINGLE 36
#define NOCHILD_PERS_AGE 45
#define OLD_PERS_AGE 59
*/
#define THREE_CHILD_FIVE_PERS_PROB 0.5
#define OLDER_GEN_GAP 19
#else
#define ONE_CHILD_TWO_PERS_PROB 0.08
#define TWO_CHILD_THREE_PERS_PROB 0.11
#define ONE_PERS_HOUSE_PROB_OLD 0.5
#define TWO_PERS_HOUSE_PROB_OLD 0.5
#define ONE_PERS_HOUSE_PROB_YOUNG 0.23
#define TWO_PERS_HOUSE_PROB_YOUNG 0.23
#define ONE_CHILD_PROB_YOUNGEST_CHILD_UNDER_FIVE 0.5
#define TWO_CHILDREN_PROB_YOUNGEST_UNDER_FIVE 0.0
#define PROB_YOUNGEST_CHILD_UNDER_FIVE 0
#define ZERO_CHILD_THREE_PERS_PROB 0.25
#define ONE_CHILD_FOUR_PERS_PROB 0.2
#define YOUNG_AND_SINGLE_SLOPE 0.7
#define YOUNG_AND_SINGLE 36
#define NOCHILD_PERS_AGE 44
#define OLD_PERS_AGE 60
#define THREE_CHILD_FIVE_PERS_PROB 0.5
#define OLDER_GEN_GAP 19
#endif


#endif // COVIDSIM_COUNTRY_H_INCLUDED_
