// Copyright 2016 Silicon Laboratories, Inc.
//
//


/***************************************************************************//**
 * @file rail_config.c
 * @brief RAIL Configuration
 * @copyright Copyright 2015 Silicon Laboratories, Inc. http://www.silabs.com
 ******************************************************************************/
//=============================================================================
//
//  WARNING: Auto-Generated Radio Config  -  DO NOT EDIT
//  Radio Configurator Version: 0.61.0
//  RAIL Adapter Version: 1.2.0
//
//=============================================================================
#include "rail_config.h"




const uint32_t generated[] = {
  0x01010FF4UL, 0x00000000UL,
  0x01010FF8UL, 0x0003C002UL,
  0x01010FFCUL, 0x0003C002UL,
  0x00010004UL, 0x00000000UL,
  0x00010008UL, 0x00000000UL,
  0x00010018UL, 0x0000000FUL,
  0x0001001CUL, 0x00000000UL,
  0x00010028UL, 0x00000000UL,
  0x0001002CUL, 0x00000000UL,
  0x00010030UL, 0x00000000UL,
  0x00010034UL, 0x00000000UL,
  0x0001003CUL, 0x00000000UL,
  0x00010040UL, 0x00000700UL,
  0x00010048UL, 0x00000000UL,
  0x00010054UL, 0x00000000UL,
  0x00010058UL, 0x00000000UL,
  0x000100A0UL, 0x00004CFFUL,
  0x000100A4UL, 0x00000000UL,
  0x000100A8UL, 0x00004DFFUL,
  0x000100ACUL, 0x00000000UL,
  0x00012000UL, 0x00000744UL,
  0x00012010UL, 0x00000000UL,
  0x00012018UL, 0x0000A001UL,
  0x00013008UL, 0x0000AC3FUL,
  0x0001302CUL, 0x023BE000UL,
  0x00013030UL, 0x00104000UL,
  0x00013034UL, 0x00000003UL,
  0x0001303CUL, 0x0000A000UL,
  0x00013040UL, 0x00000000UL,
  0x000140A0UL, 0x0F00277AUL,
  0x000140F4UL, 0x00001020UL,
  0x00014134UL, 0x00000880UL,
  0x00014138UL, 0x000087F6UL,
  0x00014140UL, 0x008800E0UL,
  0x00014144UL, 0x1153E6C1UL,
  0x00016014UL, 0x00000010UL,
  0x00016018UL, 0x04000000UL,
  0x0001601CUL, 0x0002000FUL,
  0x00016020UL, 0x000030C8UL,
  0x00016024UL, 0x000CD000UL,
  0x00016028UL, 0x03000000UL,
  0x0001602CUL, 0x00000000UL,
  0x00016030UL, 0x00FF5FA0UL,
  0x00016034UL, 0x000008E2UL,
  0x00016038UL, 0x020200D8UL,
  0x0001603CUL, 0x00140092UL,
  0x00016040UL, 0x0000B16FUL,
  0x00016044UL, 0x00000000UL,
  0x00016048UL, 0x02200714UL,
  0x0001604CUL, 0x00000000UL,
  0x00016050UL, 0x00230390UL,
  0x00016054UL, 0x008E9012UL,
  0x00016058UL, 0x000004CDUL,
  0x0001605CUL, 0x22140A04UL,
  0x00016060UL, 0x504B4133UL,
  0x00016064UL, 0x00000000UL,
  0x00017014UL, 0x000270F8UL,
  0x00017018UL, 0x00000300UL,
  0x0001701CUL, 0x82210060UL,
  0x00017028UL, 0x00000000UL,
  0x00017048UL, 0x0000383EUL,
  0x0001704CUL, 0x000025BCUL,
  0x00017070UL, 0x00020105UL,
  0x00017074UL, 0x00000113UL,
  0x00017078UL, 0x006D8480UL,

  0xFFFFFFFFUL,
};


const uint32_t *configList[] = {
  
  generated,
};

const char *configNames[] = {
  
  "generated",
};


RAIL_ChannelConfigEntry_t generated_channels[] = {

  {0, 20, 1000000, 915000000},
};

const RAIL_ChannelConfig_t generated_channelConfig = {
  generated_channels,
  1,
};


const RAIL_ChannelConfig_t *channelConfigs[] = {
  
  &generated_channelConfig,
};



const RAIL_FrameType_t *frameTypeConfigList[] = {
  NULL,

};

const uint8_t irCalConfig[] = {
  16, 71, 3, 6, 4, 16, 1, 1, 1, 3, 1, 6, 0, 16, 39, 0, 0
};


//        _  _                          
//       | )/ )         Wireless        
//    \\ |//,' __       Application     
//    (")(_)-"()))=-    Software        
//       (\\            Platform        
