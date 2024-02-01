///
/// @file hV_List_Screens.h
/// @brief List of supported Pervasive Displays screens
/// @note Legacy screens are listed in the corresponding screen libraries
///
/// @details Project Pervasive Displays Library Suite
/// @n Based on highView technology
///
/// @n Content
/// * 1- List of supported Pervasive Displays screens
///
/// @author Rei Vilo
/// @date 21 Nov 2023
/// @version 702
///
/// @copyright (c) Rei Vilo, 2010-2023
/// @copyright All rights reserved
///
/// * Basic edition: for hobbyists and for basic usage
/// @n Creative Commons Attribution-ShareAlike 4.0 International (CC BY-SA 4.0)
///
/// * Evaluation edition: for professionals or organisations, evaluation only, no commercial usage
/// @n All rights reserved
///
/// * Commercial edition: for professionals or organisations, commercial usage
/// @n All rights reserved
///

// SDK
#include "stdint.h"

#ifndef hV_LIST_SCREENS_RELEASE
///
/// @brief Release
///
#define hV_LIST_SCREENS_RELEASE 702

///
/// @brief Screen type
///
#define eScreen_EPD_EXT3_t uint32_t

///
/// @name Colour black-white-red "Spectra" screens
/// @note Global update mode
/// @see https://www.pervasivedisplays.com/products/?_sft_etc_itc=itc&_sft_product_colour=black-white-red
/// @{
///
#define eScreen_EPD_EXT3_213_BWR (uint32_t)0x102100 ///< reference xE2213CSxxx
#define eScreen_EPD_EXT3_266_BWR (uint32_t)0x102600 ///< reference xE2266CSxxx
/// @}

/// @name Monochrome screens with embedded fast update
/// @note Global and fast update modes
/// @see https://www.pervasivedisplays.com/products/?_sft_etc_itc=pu+itc
/// @{
///
#define eScreen_EPD_EXT3_213_0E_Fast (uint32_t)0x01210E ///< reference xE2213PS0Ex
#define eScreen_EPD_EXT3_266_0C_Fast (uint32_t)0x01260C ///< reference xE2266PS0Cx
/// @}

/// @name Monochrome screens with embedded fast update and wide temperature
/// @note Global and fast update modes
/// @see https://www.pervasivedisplays.com/products/?_sft_etc_itc=pu+itc&_sft_temperature_range=m15c-to-p60c
/// @{
///
#define eScreen_EPD_EXT3_150_0J_Wide (uint32_t)0x49154A ///< reference xE2150KS0Jx
#define eScreen_EPD_EXT3_152_0J_Wide (uint32_t)0x49154A ///< reference xE2152KS0Jx
#define eScreen_EPD_EXT3_154_0C_Wide (uint32_t)0x09150C ///< reference xE2154KS0Cx
#define eScreen_EPD_EXT3_206_0E_Wide (uint32_t)0x09200E ///< reference xE2206KS0Ex
#define eScreen_EPD_EXT3_213_0E_Wide (uint32_t)0x09210E ///< reference xE2213KS0Ex
#define eScreen_EPD_EXT3_266_0C_Wide (uint32_t)0x09260C ///< reference xE2266KS0Cx
#define eScreen_EPD_EXT3_271_09_Wide (uint32_t)0x092709 ///< reference xE2271KS09x
/// @todo eScreen_EPD_EXT3_287_09_Wide not tested
#define eScreen_EPD_EXT3_287_09_Wide (uint32_t)0x092809 ///< reference xE2287PS09x, not tested
#define eScreen_EPD_EXT3_290_0F_Wide (uint32_t)0x09290F ///< reference xE2290KS0Fx
#define eScreen_EPD_EXT3_370_0C_Wide (uint32_t)0x09370C ///< reference xE2370KS0Cx
#define eScreen_EPD_EXT3_417_0D_Wide (uint32_t)0x09410D ///< reference xE2417KS0Dx
/// @todo eScreen_EPD_EXT3_437_0C_Wide not tested
#define eScreen_EPD_EXT3_437_0C_Wide (uint32_t)0x09430C ///< reference xE2437KS0Cx, not tested
#define eScreen_EPD_EXT3_581_06_Wide (uint32_t)0x09580B ///< reference xE2581KS0Bx
/// @todo eScreen_EPD_EXT3_741_0B_Wide not tested
#define eScreen_EPD_EXT3_741_0B_Wide (uint32_t)0x09740B ///< reference xE2741KS0Bx, not tested
/// @todo eScreen_EPD_EXT3_969_0B_Wide not tested
#define eScreen_EPD_EXT3_969_0B_Wide (uint32_t)0x09960B ///< reference xE2969KS0Bx, not tested
/// @todo eScreen_EPD_EXT3_B98_0B_Wide not tested
#define eScreen_EPD_EXT3_B98_0B_Wide (uint32_t)0x09B90B ///< reference xE2B98KS0Bx, not tested
/// @}

///
/// @name Frame-buffer sizes
/// @details
/// * Black-white-red screens and monochrome screens
/// @n Frame-buffer size = width * height / 8 * depth, uint32_t
/// @n Depth = 2
/// * Black-white-red_yellow screens
/// @n Frame-buffer size = width * height / 4 * depth, uint32_t
/// @n Depth = 1
/// @{
///
#define frameSize_EPD_EXT3_150 (uint32_t)(10000) ///< reference xE2150xS0xx
#define frameSize_EPD_EXT3_152 (uint32_t)(10000) ///< reference xE2152xS0xx
#define frameSize_EPD_EXT3_154 (uint32_t)(5776) ///< reference xE2154xS0xx
#define frameSize_EPD_EXT3_206 (uint32_t)(7936) ///< reference xE2206xS0xx
#define frameSize_EPD_EXT3_213 (uint32_t)(5512) ///< reference xE2213xS0xx
#define frameSize_EPD_EXT3_266 (uint32_t)(11248) ///< reference xE2266xS0xx
#define frameSize_EPD_EXT3_270 (uint32_t)(11616) ///< reference xE2271xS0xx, legacy name
#define frameSize_EPD_EXT3_271 (uint32_t)(11616) ///< reference xE2271xS0xx
#define frameSize_EPD_EXT3_287 (uint32_t)(9472) ///< reference xE2287xS0xx
#define frameSize_EPD_EXT3_290 (uint32_t)(16128) ///< reference xE2290xS0xx
#define frameSize_EPD_EXT3_350 (uint32_t)(24960) ///< reference xE2350xS0xx
#define frameSize_EPD_EXT3_370 (uint32_t)(24960) ///< reference xE2370xS0xx
#define frameSize_EPD_EXT3_417 (uint32_t)(30000) ///< reference xE2417xS0xx
#define frameSize_EPD_EXT3_437 (uint32_t)(21120) ///< reference xE2437xS0xx
#define frameSize_EPD_EXT3_565 (uint32_t)(33600) ///< reference xE2565xS0xx
#define frameSize_EPD_EXT3_581 (uint32_t)(46080) ///< reference xE2581xS0xx
#define frameSize_EPD_EXT3_741 (uint32_t)(96000) ///< reference xE2741xS0xx
#define frameSize_EPD_EXT3_969 (uint32_t)(161280) ///< reference xE2969xS0xx
#define frameSize_EPD_EXT3_B98 (uint32_t)(184320) ///< reference xE21198xS0xx
/// @}

#endif // hV_LIST_SCREENS_RELEASE

