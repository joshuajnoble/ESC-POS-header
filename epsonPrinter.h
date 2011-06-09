/*
 *  epsonPrinter.h
 *  epson_print
 *
 *  Created by base on 08/06/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

namespace epsonConstants {

const char CTL_LF    = '\x0a';            // Print and line feed
const char CTL_FF    = '\x0c';            // Form feed
const char CTL_CR    = '\x0d';            // Carriage return
const char CTL_HT    = '\x09';             // Horizontal tab
const char CTL_VT    = '\x0b';            // Vertical tab
// Printer hardware
const char HW_INIT[2]   = {'\x1b', '\x40'};        // Clear data in buffer and reset modes
//const char HW_SELECT = '\x1b\x3d\x01';     // Printer select
//const char HW_RESET  = '\x1b\x3f\x0a\x00'; // Reset printer hardware
// Cash Drawer
const char CD_KICK_2[3] = {'\x1b', '\x70', '\x00'};     // Sends a pulse to pin 2 [] 
const char CD_KICK_5[3] = {'\x1b', '\x70', '\x01'};     // Sends a pulse to pin 5 [] 
// Paper
const char PAPER_FULL_CUT[3]  = {'\x1d', '\x56', '\x00'}; // Full cut paper
const char PAPER_PART_CUT[3]  = {'\x1d', '\x56', '\x01'}; // Partial cut paper
// Text format   
const char TXT_NORMAL[3]      = {'\x1b', '\x21', '\x00'}; // Normal text
const char TXT_2HEIGHT[3]     = {'\x1b', '\x21', '\x10'}; // Double height text
const char TXT_2WIDTH[3]      = {'\x1b', '\x21', '\x20'}; // Double width text
const char TXT_UNDERL_OFF[3]  = {'\x1b', '\x2d', '\x00'}; // Underline font OFF
const char TXT_UNDERL_ON[3]   = {'\x1b', '\x2d', '\x01'}; // Underline font 1-dot ON
const char TXT_UNDERL2_ON[3]  = {'\x1b', '\x2d', '\x02'}; // Underline font 2-dot ON
const char TXT_BOLD_OFF[3]    = {'\x1b', '\x45', '\x00'}; // Bold font OFF
const char TXT_BOLD_ON[3]     = { '\x1b', '\x45', '\x01'}; // Bold font ON
const char TXT_FONT_A[3]      = { '\x1b', '\x4d', '\x00'}; // Font type A
const char TXT_FONT_B[3]      = { '\x1b', '\x4d', '\x01'}; // Font type B
const char TXT_ALIGN_LT[3]    = { '\x1b', '\x61', '\x00'}; // Left justification
const char TXT_ALIGN_CT[3]    = { '\x1b', '\x61', '\x01'}; // Centering
const char TXT_ALIGN_RT[3]    = { '\x1b', '\x61', '\x02'}; // Right justification
// Barcode format
const char BARCODE_TXT_OFF[3] = { '\x1d', '\x48', '\x00'}; // HRI barcode chars OFF
const char BARCODE_TXT_ABV[3] = { '\x1d', '\x48', '\x01'}; // HRI barcode chars above
const char BARCODE_TXT_BLW[3] = { '\x1d', '\x48', '\x02'}; // HRI barcode chars below
const char BARCODE_TXT_BTH[3] = { '\x1d', '\x48', '\x03'}; // HRI barcode chars both above and below
const char BARCODE_FONT_A[3]  = { '\x1d', '\x66', '\x00'}; // Font type A for HRI barcode chars
const char BARCODE_FONT_B[3]  = { '\x1d', '\x66', '\x01'}; // Font type B for HRI barcode chars
const char BARCODE_HEIGHT[3]  = { '\x1d', '\x68', '\x64'}; // Barcode Height [1-255]
const char BARCODE_WIDTH[3]   = { '\x1d', '\x77', '\x03'}; // Barcode Width  [2-6]
const char BARCODE_UPC_A[3]   = { '\x1d', '\x6b', '\x00'}; // Barcode type UPC-A
const char BARCODE_UPC_E[3]   = { '\x1d', '\x6b', '\x01'}; // Barcode type UPC-E
const char BARCODE_EAN13[3]   = { '\x1d', '\x6b', '\x02'}; // Barcode type EAN13
const char BARCODE_EAN8[3]    = { '\x1d', '\x6b', '\x03'}; // Barcode type EAN8
const char BARCODE_CODE39[3]  = { '\x1d', '\x6b', '\x04'}; // Barcode type CODE39
const char BARCODE_ITF[3]     = { '\x1d', '\x6b', '\x05'}; // Barcode type ITF
const char BARCODE_NW7[3]     = { '\x1d', '\x6b', '\x06'}; // Barcode type NW7
// Image format  
const char S_RASTER_N[4]      = { '\x1d', '\x76', '\x30', '\x00'}; // Set raster image normal size
const char S_RASTER_2W[4]   = { '\x1d', '\x76', '\x30', '\x01'}; // Set raster image double width
const char S_RASTER_2H[4]     = { '\x1d', '\x76', '\x30', '\x02'}; // Set raster image double height
const char S_RASTER_Q[4]     = { '\x1d', '\x76', '\x30', '\x03'}; // Set raster image quadruple

};