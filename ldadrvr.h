// --------------------------------- lda_definitions.h -------------------------------------------
//
//  Include file for Linux LabBrick attenuator definitions
//
// (c) 2020-2021 by Vaunix Technology Corporation, all rights reserved
//
//  JA  Version 1.0 LDA Ethernet Driver Interface Definitions
//	RD	5/2024 fixes
//  NJB 5/2026 updates for new features, fixes, and consistency with Windows library
//-----------------------------------------------------------------------------
#ifndef __LDADRVR_H__
#define __LDADRVR_H__

// ---------- Include headers ----------------

//*****************************************************************************
//
// If building with a C++ compiler, make all of the definitions in this header
// have a C binding.
//
//*****************************************************************************
#ifdef __cplusplus
extern "C"
{
#endif


/// ---------- Macros ----------------
#define MAX_MODELNAME   32
#define MAX_SWVERSION   8		// RD 5/12/24 - it has to hold the terminator too, rounded up for packing
#define MAX_NETBUFF     16

// ----------- Profile Control -----------
#define PROFILE_ONCE	1		// play the profile once
#define PROFILE_REPEAT	2		// play the profile repeatedly
#define PROFILE_OFF	    0		// stop the profile

// Feature bits for the feature DWORD
#define DEFAULT_FEATURES	0x00000000
#define HAS_BIDIR_RAMPS		0x00000001
#define HAS_PROFILES		0x00000002
#define HAS_HIRES			0x00000004
#define HAS_4CHANNELS		0x00000008
#define HAS_8CHANNELS       0x00000010
#define HAS_LONG_PROFILE	0x00000020
#define HAS_MCHANNELS		0x00000040

// STATUS ENUM
typedef enum
{
    STATUS_OK,          // 0
    STATUS_ERROR,       // 1
    MAX_STATUS_REPORT
}STATUS_REPORT_T;

// Hardware type values by device name (used in lda[DeviceId].DevType)
typedef enum
{
    LDA_102=1,      // 1
    LDA_602,        // 2
    LDA_302P_H,     // 3
    LDA_302P_1,     // 4
    LDA_302P_2,     // 5
    LDA_102_75,     // 6
    LDA_102E,       // 7
    LDA_602E,       // 8
    LDA_183,        // 9
    LDA_203,        // 10
    LDA_102EH,      // 11
    LDA_602EH,      // 12
    LDA_602Q,       // 13
    LDA_906V,       // 14
    LDA_133,        // 15
    LDA_5018,       // 16
    LDA_5040,       // 17
    LDA_906V_8,     // 18
    LDA_802EH,      // 19
    LDA_802Q,       // 20
    LDA_802_8,      // 21
    LDA_906V_4,     // 22
	LDA_8X1_752,	// 23
	LDA_908V,		// 24
	LDA_908V_2,		// 25
	LDA_908V_4,		// 26
	LDA_908V_8,		// 27
	LDA_403,		// 28
	LDA_608V_4,		// 29
	LDA_608V,		// 30
	LDA_608V_2,		// 31
	LDA_303,		// 32
    MAX_LDA_DEVICEMODELS
}LDA_DEVICE_MODELS_T;

// LDA Device Response Data Structure
typedef struct
{
  //  Global device variables
  int serialnumber;
  char modelname[MAX_MODELNAME];
  char swversion[MAX_SWVERSION];
  int device_features;
  int ipmode;
  char ipaddress[MAX_NETBUFF];
  char netmask[MAX_NETBUFF];
  char gateway[MAX_NETBUFF];
  int minfrequency;
  int maxfrequency;
  int minattenuation;
  int maxattenuation;           // maximum attenuation in .05 db units
  int maxchannels;
  int rf_channel;               // the current channel number
  int rf_current_frequency;
  int rf_attenuation;           // in .05db units
  int rf_on;
  int attenuationstep;
  int rampstart_attenuation;
  int rampstop_attenuation;
  int ramp_dwelltime;
  int ramp_idletime;
  int ramp_holdtime;
  int ramp_bidirectional_dwelltime;
  int attenuationsteptwo;
  int profile_maxlength;
  int profile_count;
  int profile_dwelltime;
  int profile_idletime;
} LDADEVICE_DATA_T;

// LDA Device Init
void fnLDA_Init(void);

// Get Library Version as a string
char* fnLDA_LibVersion(void);

// Get library version as an integer with one byte each for major and minor version (e.g. 0x0101 for version 1.1)
int fnLDA_GetLibVersion(void);

// LDA Test mode
void fnLDA_SetTestMode(bool testmode);

// InitDevice
STATUS_REPORT_T fnLDA_InitDevice(char* deviceip);

// Close the Device Socket
STATUS_REPORT_T fnLDA_CloseDevice(char* deviceip);

// Device Ready
STATUS_REPORT_T fnLDA_CheckDeviceReady(char* deviceip);

// Get Number of Channels
STATUS_REPORT_T fnLDA_GetMaxChannels(char* deviceip, int* respdata);

// Get Model Name
STATUS_REPORT_T fnLDA_GetModelName(char* deviceip, char *respdata);

// Get Serial Number of the device
STATUS_REPORT_T fnLDA_GetSerialNumber(char* deviceip, int* respdata);

// Get SW Version of the device
STATUS_REPORT_T fnLDA_GetSoftwareVersion(char* deviceip, char* respdata);

// Get IP Mode of the device  0 - Static, 1 - DHCP
STATUS_REPORT_T fnLDA_GetIPMode(char* deviceip, int* respdata);

// Get IP Address of the device
STATUS_REPORT_T fnLDA_GetIPAddress(char* deviceip, char* respdata);

// Get Netmask of the device
STATUS_REPORT_T fnLDA_GetNetmask(char* deviceip, char* respdata);

// Get Gateway of the device
STATUS_REPORT_T fnLDA_GetGateway(char* deviceip, char* respdata);

// Get Current Frequency
STATUS_REPORT_T fnLDA_GetWorkingFrequency(char* deviceip, int* respdata);

// Get Mininum Frequency
STATUS_REPORT_T fnLDA_GetMinWorkingFrequency(char* deviceip, int* respdata);

// Get Maximum Frequency
STATUS_REPORT_T fnLDA_GetMaxWorkingFrequency(char* deviceip, int* respdata);

// Get Channel
STATUS_REPORT_T fnLDA_GetChannel(char* deviceip, int* respdata);

// Get Max Attenuation
STATUS_REPORT_T fnLDA_GetMaxAttenuation(char* deviceip, int* respdata);

// Get Min Attenuation
STATUS_REPORT_T  fnLDA_GetMinAttenuation(char* deviceip, int* respdata);

// Get Attenuation Data
STATUS_REPORT_T fnLDA_GetAttenuation(char* deviceip, int* respdata);

// Get Ramp Start Data
STATUS_REPORT_T fnLDA_GetRampStart(char* deviceip, int* respdata);

// Get Ramp End Data
STATUS_REPORT_T fnLDA_GetRampEnd(char* deviceip, int* respdata);

// Get Dwell Time
STATUS_REPORT_T fnLDA_GetDwellTime(char* deviceip, int* respdata);
STATUS_REPORT_T fnLDA_GetDwellTimeTwo(char* deviceip, int* respdata);

// Get Idle Time
STATUS_REPORT_T fnLDA_GetIdleTime(char* deviceip, int* respdata);

// Get Hold Time
STATUS_REPORT_T fnLDA_GetHoldTime(char* deviceip, int* respdata);

// Get Attenuation Step
STATUS_REPORT_T fnLDA_GetAttenuationStep(char* deviceip, int* respdata);
STATUS_REPORT_T fnLDA_GetAttenuationStepTwo(char* deviceip, int* respdata);

// Get RF On/Off State
STATUS_REPORT_T fnLDA_GetRF_On(char* deviceip, int* respdata);

// Get Profile MaxLength
STATUS_REPORT_T fnLDA_GetProfileMaxLength(char* deviceip, int* respdata);

// Get Profile Element
STATUS_REPORT_T fnLDA_GetProfileElement(char* deviceip, int index, int* respdata);

// Get Profile Count
STATUS_REPORT_T fnLDA_GetProfileCount(char* deviceip, int* respdata);

// Get Profile Dwell Time
STATUS_REPORT_T fnLDA_GetProfileDwellTime(char* deviceip, int* respdata);

// Get Profile Idle Time
STATUS_REPORT_T fnLDA_GetProfileIdleTime(char* deviceip, int* respdata);

// Get Features 
STATUS_REPORT_T fnLDA_GetFeatures(char* deviceip, int* respdata);

// Set Frequency  --- Frequency in 100KHz Resolution
STATUS_REPORT_T fnLDA_SetWorkingFrequency(char* deviceip, int frequency);

// Set Channel
STATUS_REPORT_T fnLDA_SetChannel(char* deviceip, int channel);

// Set Attenuation  -- Attenuation in 0.05db Resolution
STATUS_REPORT_T fnLDA_SetAttenuation(char* deviceip, int attenuation);

// Set Channel Attenuation -- Attenuation in 0.05db Resolution
STATUS_REPORT_T fnLDA_SetAttenuationQ(char* deviceip, int attenuation, int channel);

// Set Attenuatuion Step 
STATUS_REPORT_T fnLDA_SetAttenuationStep(char* deviceip, int attenuationstep);
STATUS_REPORT_T fnLDA_SetAttenuationStepTwo(char* deviceip, int attenuationstep2);

// Set Ramp Start -- Attenuation in 0.05db Resolution
STATUS_REPORT_T fnLDA_SetRampStart(char* deviceip, int rampstart);

// Set Ramp End -- Attenuation in 0.05db Resolution
STATUS_REPORT_T fnLDA_SetRampEnd(char* deviceip, int rampstop);

// Set Dwell Time -- Time in 1 msec Resolution
STATUS_REPORT_T fnLDA_SetDwellTime(char* deviceip, int dwelltime);
STATUS_REPORT_T fnLDA_SetDwellTimeTwo(char* deviceip, int dwelltime2);

// Set Idle Time -- Time in 1 msec Resolution
STATUS_REPORT_T fnLDA_SetIdleTime(char* deviceip, int idletime);

// Set Hold Time -- Time in 1 msec Resolution
STATUS_REPORT_T fnLDA_SetHoldTime(char* deviceip, int holdtime);

// Set Ramp Direction
STATUS_REPORT_T fnLDA_SetRampDirection(char* deviceip, bool up);

// Set Ramp Mode
STATUS_REPORT_T fnLDA_SetRampMode(char* deviceip, bool mode);

// Set Ramp Bidirectional
STATUS_REPORT_T fnLDA_SetRampBidirectional(char* deviceip, bool bidir_enable);

// Start Ramp
STATUS_REPORT_T fnLDA_StartRamp(char* deviceip, bool go);

// Set Profile Element
STATUS_REPORT_T fnLDA_SetProfileElement(char* deviceip, int index, int attenuation);

// Set Profile Count
STATUS_REPORT_T fnLDA_SetProfileCount(char* deviceip, int profilecount);

// Set Profile Idle Time
STATUS_REPORT_T fnLDA_SetProfileIdleTime(char* deviceip, int idletime);

// Set Profile Dwell Time
STATUS_REPORT_T fnLDA_SetProfileDwellTime(char* deviceip, int dwelltime);

// Set Profile Mode
STATUS_REPORT_T fnLDA_StartProfile(char* deviceip, int mode);

// Set RF On
STATUS_REPORT_T fnLDA_SetRFOn(char* deviceip, bool on);

// Save Settings
STATUS_REPORT_T fnLDA_SaveSettings(char* deviceip);


// ************** To Be Done

// Start RampMC
STATUS_REPORT_T fnLDA_StartRampMC(char* deviceip, int mode, int chmask, bool deferred);

// Start ProfileMC
STATUS_REPORT_T fnLDA_StartProfileMC(char* deviceip, int mode, int chmask, bool deferred);

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif // __LDADRVR_H__
