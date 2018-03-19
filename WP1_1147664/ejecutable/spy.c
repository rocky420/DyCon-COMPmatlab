/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "spy.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "xlabel.h"

static mxChar _array1_[8] = { 'N', 'e', 'x', 't', 'P', 'l', 'o', 't' };
static mxArray * _mxarray0_;
static mxArray * _mxarray2_;
static mxArray * _mxarray3_;

static mxChar _array5_[4] = { 'n', 'o', 'n', 'e' };
static mxArray * _mxarray4_;

static mxChar _array7_[1] = { '.' };
static mxArray * _mxarray6_;

static mxChar _array9_[10] = { 'c', 'o', 'l', 'o', 'r',
                               'o', 'r', 'd', 'e', 'r' };
static mxArray * _mxarray8_;
static mxArray * _mxarray10_;

static mxChar _array12_[21] = { 'd', 'e', 'f', 'a', 'u', 'l', 't',
                                'l', 'i', 'n', 'e', 'm', 'a', 'r',
                                'k', 'e', 'r', 's', 'i', 'z', 'e' };
static mxArray * _mxarray11_;

static mxChar _array14_[5] = { 'u', 'n', 'i', 't', 's' };
static mxArray * _mxarray13_;

static mxChar _array16_[6] = { 'p', 'o', 'i', 'n', 't', 's' };
static mxArray * _mxarray15_;

static mxChar _array18_[8] = { 'p', 'o', 's', 'i', 't', 'i', 'o', 'n' };
static mxArray * _mxarray17_;
static mxArray * _mxarray19_;
static mxArray * _mxarray20_;
static mxArray * _mxarray21_;
static mxArray * _mxarray22_;
static double _ieee_nan_;
static mxArray * _mxarray23_;

static mxChar _array25_[6] = { 'm', 'a', 'r', 'k', 'e', 'r' };
static mxArray * _mxarray24_;

static mxChar _array27_[10] = { 'm', 'a', 'r', 'k', 'e',
                                'r', 's', 'i', 'z', 'e' };
static mxArray * _mxarray26_;

static mxChar _array29_[9] = { 'l', 'i', 'n', 'e', 's', 't', 'y', 'l', 'e' };
static mxArray * _mxarray28_;

static mxChar _array31_[5] = { 'c', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray30_;

static mxChar _array33_[5] = { 'n', 'z', ' ', '=', ' ' };
static mxArray * _mxarray32_;

static mxChar _array35_[4] = { 'x', 'l', 'i', 'm' };
static mxArray * _mxarray34_;

static mxChar _array37_[4] = { 'y', 'l', 'i', 'm' };
static mxArray * _mxarray36_;

static mxChar _array39_[4] = { 'y', 'd', 'i', 'r' };
static mxArray * _mxarray38_;

static mxChar _array41_[7] = { 'r', 'e', 'v', 'e', 'r', 's', 'e' };
static mxArray * _mxarray40_;

static mxChar _array43_[4] = { 'g', 'r', 'i', 'd' };
static mxArray * _mxarray42_;

static mxChar _array45_[18] = { 'p', 'l', 'o', 't', 'b', 'o', 'x', 'a', 's',
                                'p', 'e', 'c', 't', 'r', 'a', 't', 'i', 'o' };
static mxArray * _mxarray44_;

static mxChar _array47_[1740] = { ';', '<', '=', ':', ';', '<', '>', '?', '@',
                                  '8', '9', ':', ';', '?', '@', '7', '8', '9',
                                  ':', ';', '?', '@', 'A', '6', '7', '8', '9',
                                  ':', ';', '@', 'A', '4', '5', '6', '8', '9',
                                  ':', ';', '@', 'A', 'B', '3', '4', '5', '9',
                                  ':', ';', 'A', 'B', 'C', '2', '3', '4', ':',
                                  ';', 'B', 'C', '2', '3', ';', 'B', 'C', 'D',
                                  '2', ';', 'C', 'D', 'E', '2', 'D', 'E', 'D',
                                  'E', 'F', '3', 'E', 'F', '3', 'E', 'F', 'G',
                                  '3', 'F', 'G', 'H', '3', 'D', 'E', 'F', 'G',
                                  'H', '3', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
                                  'I', '3', '@', 'A', 'B', 'C', 'D', 'E', 'F',
                                  'G', 'H', 'I', '3', '4', '>', '?', '@', 'A',
                                  'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
                                  '3', '4', '<', '=', '>', '?', '@', 'A', 'B',
                                  'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
                                  'L', '4', ':', ';', '<', '=', '>', '?', '@',
                                  'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'J',
                                  'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S',
                                  'T', '4', '9', ':', ';', '<', '=', '>', '?',
                                  '@', 'A', 'B', 'C', 'D', 'E', 'O', 'P', 'Q',
                                  'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
                                  '[', 0x005c, '^', '_', '`', 'a', 'b', 'c',
                                  '4', '7', '8', '9', ':', ';', '<', '=', '>',
                                  '?', '@', 'A', 'B', 'X', 'Y', 'Z', '[',
                                  0x005c, ']', '^', '_', '`', 'a', 'b', 'c',
                                  'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
                                  'm', '4', '5', '6', '7', '8', '9', ':', ';',
                                  '<', '=', '>', '?', 'a', 'b', 'c', 'd', 'e',
                                  'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
                                  'o', 'p', 'q', 'r', '4', '5', '6', '7', '8',
                                  '9', ':', ';', '<', 'j', 'k', 'l', 'm', 'n',
                                  'o', 'p', '4', '5', '6', '7', '8', '9', 'h',
                                  'i', 'j', 'k', 'l', 'm', 'n', '4', '5', '6',
                                  '7', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
                                  'j', 'k', 'l', '4', '5', '[', 0x005c, ']',
                                  '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f',
                                  'g', 'h', 'i', 'j', '3', '4', 'V', 'W', 'X',
                                  'Y', 'Z', '[', 0x005c, ']', '^', '_', '`',
                                  'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', '2',
                                  '3', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
                                  'X', 'Y', 'Z', '[', 0x005c, ']', '^', '_',
                                  '`', 'a', 'b', 'c', 'd', 'e', 'f', '0', '1',
                                  '2', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S',
                                  'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[',
                                  0x005c, ']', '^', '_', '`', 'a', 'b', 'c',
                                  'd', '/', '0', '1', 'I', 'J', 'K', 'L', 'M',
                                  'N', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
                                  'X', 'Y', 'Z', '[', 0x005c, ']', '^', '_',
                                  '`', 'a', 'b', '.', '/', 'D', 'E', 'F', 'G',
                                  'H', 'I', 'J', 'P', 'Q', 'R', 'S', 'T', 'U',
                                  'V', 'W', 'X', 'Y', 'Z', '[', 0x005c, ']',
                                  '^', '_', '-', '.', 'A', 'B', 'C', 'D', 'E',
                                  'F', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
                                  'W', 'X', 'Y', 'Z', '[', 0x005c, ',', '-',
                                  '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E',
                                  'F', 'G', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
                                  'V', 'W', 'X', 'Y', 'Z', '*', '+', ',', ':',
                                  ';', '<', '=', '>', '?', '@', 'A', 'D', 'E',
                                  'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'O',
                                  'P', 'Q', 'R', 'U', 'V', 'W', 'X', 'Y', 'Z',
                                  '[', ')', '*', '7', '8', '9', ':', ';', '<',
                                  '=', '@', 'A', 'D', 'E', 'F', 'G', 'H', 'I',
                                  'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
                                  'S', 'W', 'X', 'Y', 'Z', '[', 0x005c, '(',
                                  ')', '5', '6', '7', '8', '9', ':', ';', '<',
                                  '=', 'A', 'D', 'E', 'F', 'G', 'J', 'K', 'L',
                                  'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'X',
                                  'Y', 'Z', '[', 0x005c, ']', 0x0027, '(',
                                  '2', '3', '4', '5', '6', '7', '8', '9', ':',
                                  '=', '>', 'B', 'E', 'F', 'G', 'K', 'L', 'M',
                                  'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
                                  'X', 'Y', 'Z', '[', 0x005c, ']', '^', '&',
                                  0x0027, '/', '0', '1', '2', '3', '4', '5',
                                  '6', '7', '8', '=', '>', 'E', 'F', 'G', 'H',
                                  'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
                                  'U', 'V', 'W', 'X', 'Y', 'Z', '[', 0x005c,
                                  ']', '^', '_', '$', '%', '&', ',', '-', '.',
                                  '/', '0', '1', '2', '3', '4', '5', '6', '7',
                                  '8', '=', '>', 'F', 'G', 'H', 'I', 'J', 'L',
                                  'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'W',
                                  'X', 'Y', 'Z', '[', 0x005c, ']', '^', '_',
                                  '`', 'a', '#', '$', ')', '*', '+', ',', '-',
                                  '.', '/', '0', '1', '2', '3', '4', '5', '6',
                                  '7', '>', 'G', 'H', 'I', 'J', 'K', 'M', 'N',
                                  'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'Y', 'Z',
                                  '[', 0x005c, ']', '`', 'a', 'b', 'c', 'd',
                                  '"', '#', 0x0027, '(', ')', '*', '+', ',',
                                  '-', '.', '/', '0', '1', '2', '3', '4', '5',
                                  '6', '7', '>', 'H', 'I', 'J', 'K', 'L', 'M',
                                  'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
                                  'b', 'c', 'd', 'e', '!', '"', '%', '&',
                                  0x0027, '(', ')', '*', '+', ',', '-', '.',
                                  '/', '0', '1', '2', '3', '4', '5', '6', '>',
                                  '?', 'F', 'I', 'J', 'K', 'L', 'M', 'N', 'O',
                                  'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'c', 'd',
                                  'e', 'f', 'g', '"', '#', '$', '%', '&',
                                  0x0027, '(', ')', '*', '+', ',', '-', '.',
                                  '/', '0', '1', '2', '3', '4', '6', '>', '?',
                                  'D', 'E', 'K', 'L', 'M', 'N', 'O', 'P', 'Q',
                                  'R', 'S', 'T', 'U', 'V', 'e', 'f', 'g', 'h',
                                  '"', '#', '$', '%', '&', 0x0027, '(', ')',
                                  '*', '+', ',', '-', '.', '/', '0', '>', '?',
                                  'C', 'D', 'M', 'N', 'O', 'P', 'Q', 'R', 'S',
                                  'T', 'U', 'V', 'g', 'h', 'i', 'j', '"', '#',
                                  '$', '%', '&', 0x0027, '(', ')', '*', '+',
                                  ',', '-', '5', '?', '@', 'C', 'G', 'H', 'P',
                                  'Q', 'R', 'S', 'T', 'U', 'h', 'i', 'j', 'k',
                                  '#', '$', '%', '&', 0x0027, '(', ')', '5',
                                  '?', '@', 'C', 'H', 'I', 'j', 'k', 'l', '$',
                                  '%', '4', '@', 'C', 'I', 'J', 'l', 'm', 'n',
                                  '4', '@', 'C', 'J', 'K', 'm', 'n', 'o', '3',
                                  ';', '@', 'A', 'J', 'K', 'O', 'o', 'p', 'q',
                                  '3', ';', 'A', 'B', 'H', 'I', 'J', 'K', 'L',
                                  'M', 'N', 'O', 'P', 'q', 'r', '2', '3', ';',
                                  'A', 'B', 'C', 'D', 'E', 'F', 'G', 'Q', 'r',
                                  's', 't', '2', ';', 'A', 'B', 'C', 'D', 'E',
                                  'F', 'Q', 'R', 'S', 'T', 'U', 'V', 't', 'u',
                                  '1', '2', ':', ';', 'B', 'C', 'D', 'E', 'F',
                                  'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
                                  'Z', '[', 0x005c, ']', '^', '_', '`', 'v',
                                  '1', '2', ':', 'B', 'C', 'D', 'E', 'F', 'H',
                                  'I', 'J', 'L', 'M', 'P', 'Q', 'R', 'Z', '[',
                                  0x005c, ']', '^', '_', '`', 'a', 'b', 'c',
                                  'd', 'e', 'f', 'g', 'h', 'i', 'w', 'x', '0',
                                  '1', ':', 'C', 'D', 'E', 'I', 'J', 'N', 'P',
                                  'R', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o',
                                  'p', 'q', 'r', 's', 't', 'u', 'x', 'y', '0',
                                  '1', ':', '<', '=', 'C', 'D', 'E', 'K', 'L',
                                  'M', 'N', 'O', 'P', 'v', 'w', 'x', 'y', 'z',
                                  '{', '0', '1', ':', ';', '<', 'D', 'E', 'H',
                                  'O', 'P', 'Q', '0', '1', ':', ';', 'D', 'E',
                                  'I', 'J', 'P', 'Q', 'R', '/', '0', '9', ':',
                                  'D', 'E', 'K', 'L', 'M', 'N', 'P', 'Q', 'R',
                                  '/', '0', '9', 'E', 'N', 'O', 'P', 'Q', 'R',
                                  '/', '0', '9', 'E', 'I', 'P', 'Q', '/', '9',
                                  'E', 'J', 'K', 'P', 'Q', '.', '/', '9', 'E',
                                  'L', 'M', 'P', 'Q', '.', '/', '9', 'E', 'N',
                                  'O', 'P', 'Q', '.', '/', '9', 'E', 'F', 'J',
                                  'P', 'Q', '.', '9', 'E', 'F', 'K', 'L', 'P',
                                  'Q', '.', '9', 'E', 'F', 'K', 'P', 'Q', '-',
                                  '.', '9', 'E', 'F', 'K', 'N', 'O', 'P', '-',
                                  '.', '8', '9', 'E', 'F', 'L', 'M', 'N', 'O',
                                  '-', '.', '8', '9', 'E', 'F', 'L', 'M', 'N',
                                  'X', '-', '8', '9', 'E', 'L', 'M', 'N', 'W',
                                  'X', 'Y', 'Z', '-', '8', '9', 'E', 'L', 'M',
                                  'N', 'O', 'W', 'X', 'Y', 'Z', '[', ',', '-',
                                  '8', '9', 'E', 'L', 'M', 'N', 'O', 'P', 'V',
                                  'W', 'Z', '[', 0x005c, ',', '-', '8', '9',
                                  'E', 'L', 'N', 'O', 'P', 'U', 'V', 'Z', '[',
                                  0x005c, ']', '^', ',', '-', '8', '9', 'E',
                                  'L', 'O', 'P', 'Q', 'T', 'U', '[', 0x005c,
                                  ']', '^', '_', ',', '-', '8', '9', 'E', 'K',
                                  'L', 'P', 'Q', 'R', 'T', 'U', 'X', 'Y', '_',
                                  '+', ',', '-', '8', '9', 'D', 'J', 'K', 'L',
                                  'Q', 'R', 'S', 'T', 'W', 'X', '_', '`', '+',
                                  ',', '-', '.', '8', '9', 'C', 'D', 'H', 'I',
                                  'J', 'K', 'R', 'S', 'T', 'W', '_', '`', '+',
                                  ',', '-', '.', '8', '9', 'B', 'C', 'D', 'G',
                                  'H', 'I', 'R', 'S', 'V', '[', '_', 'a', '+',
                                  ',', '-', '.', '8', '9', 'A', 'E', 'F', 'G',
                                  'H', 'S', 'U', 'V', 'Z', '[', '`', '+', ',',
                                  '.', '8', '9', '@', 'A', 'E', 'F', 'H', 'I',
                                  'R', 'S', 'U', 'Y', 'Z', 'a', 'b', '+', ',',
                                  '.', '8', '9', '?', '@', 'A', 'F', 'I', 'S',
                                  'T', 'U', 'Y', 'a', 'b', '+', ',', '.', '8',
                                  '9', '>', '?', 'A', 'B', 'G', 'I', 'J', 'S',
                                  'T', 'X', '^', 'a', 'b', 'c', '+', ',', '.',
                                  '8', '9', '=', '>', 'B', 'G', 'J', 'S', 'T',
                                  'W', 'X', ']', 'c', '+', ',', '.', '/', '8',
                                  '9', ';', '<', 'B', 'C', 'H', 'J', 'S', 'T',
                                  'W', 0x005c, ']', 'c', 'd', '+', ',', '.',
                                  '/', '8', '9', ':', 'C', 'D', 'I', 'J', 'S',
                                  'T', 'W', '[', 0x005c, 'd', '+', ',', '/',
                                  '6', '7', 'D', 'E', 'I', 'J', 'S', 'T', 'W',
                                  'Z', '[', 'd', '+', ',', '/', 'F', 'H', 'I',
                                  'J', 'T', 'W', 'Y', 'Z', '^', '_', 'a', 'd',
                                  '+', ',', '/', '0', 'F', 'G', 'H', 'T', 'U',
                                  'W', 'Y', '^', '_', '`', 'd', '+', ',', '/',
                                  '0', 'D', 'E', 'F', 'U', 'V', 'W', 'Y', ']',
                                  '^', '_', '`', 'a', 'd', '+', ',', '0', 'B',
                                  'C', 'D', 'V', 'W', 'Y', 0x005c, ']', '_',
                                  'd', '+', ',', '0', 'A', 'B', 'C', 'V', 'W',
                                  'X', 'Y', 0x005c, ']', '_', 'd', '+', ',',
                                  '0', '1', '?', '@', 'A', 'W', 'X', 'Y',
                                  0x005c, ']', '_', 'd', 'e', '+', ',', '1',
                                  '=', '>', '?', 'W', 'X', 'Y', 0x005c, ']',
                                  '_', '`', 'a', 'b', 'c', 'd', 'e', '+', ',',
                                  '1', '2', ':', ';', '<', '=', 'W', 'X', 'Y',
                                  0x005c, ']', '_', '`', 'd', 'e', '+', ',',
                                  '1', '2', '8', '9', ':', ';', 'Y', 'Z',
                                  0x005c, ']', '_', '`', 'd', 'e', '+', ',',
                                  '2', '3', '5', '6', '7', '8', 'Z', '[',
                                  0x005c, '_', '`', 'd', 'e', '+', ',', '2',
                                  '3', '4', '5', '6', '[', 0x005c, 'a', 'b',
                                  'c', 'd', '+', ',', '_', '`', 'a', '+', ',',
                                  '^', '_', '+', ',', ']', '^', '+', ',',
                                  0x005c, ']', ',', '[', 0x005c, ',', '[',
                                  ',', 'Y', 'Z', ',', 'X', 'Y' };
static mxArray * _mxarray46_;
static mxArray * _mxarray48_;

void InitializeModule_spy(void) {
    _mxarray0_ = mclInitializeString(8, _array1_);
    _mxarray2_ = mclInitializeCharVector(0, 0, (mxChar *)NULL);
    _mxarray3_ = mclInitializeDouble(0.0);
    _mxarray4_ = mclInitializeString(4, _array5_);
    _mxarray6_ = mclInitializeString(1, _array7_);
    _mxarray8_ = mclInitializeString(10, _array9_);
    _mxarray10_ = mclInitializeDouble(1.0);
    _mxarray11_ = mclInitializeString(21, _array12_);
    _mxarray13_ = mclInitializeString(5, _array14_);
    _mxarray15_ = mclInitializeString(6, _array16_);
    _mxarray17_ = mclInitializeString(8, _array18_);
    _mxarray19_ = mclInitializeDouble(4.0);
    _mxarray20_ = mclInitializeDouble(14.0);
    _mxarray21_ = mclInitializeDouble(6.0);
    _mxarray22_ = mclInitializeDouble(3.0);
    _ieee_nan_ = mclGetNaN();
    _mxarray23_ = mclInitializeDouble(_ieee_nan_);
    _mxarray24_ = mclInitializeString(6, _array25_);
    _mxarray26_ = mclInitializeString(10, _array27_);
    _mxarray28_ = mclInitializeString(9, _array29_);
    _mxarray30_ = mclInitializeString(5, _array31_);
    _mxarray32_ = mclInitializeString(5, _array33_);
    _mxarray34_ = mclInitializeString(4, _array35_);
    _mxarray36_ = mclInitializeString(4, _array37_);
    _mxarray38_ = mclInitializeString(4, _array39_);
    _mxarray40_ = mclInitializeString(7, _array41_);
    _mxarray42_ = mclInitializeString(4, _array43_);
    _mxarray44_ = mclInitializeString(18, _array45_);
    _mxarray46_ = mclInitializeCharVector(29, 60, _array47_);
    _mxarray48_ = mclInitializeDouble(32.0);
}

void TerminateModule_spy(void) {
    mxDestroyArray(_mxarray48_);
    mxDestroyArray(_mxarray46_);
    mxDestroyArray(_mxarray44_);
    mxDestroyArray(_mxarray42_);
    mxDestroyArray(_mxarray40_);
    mxDestroyArray(_mxarray38_);
    mxDestroyArray(_mxarray36_);
    mxDestroyArray(_mxarray34_);
    mxDestroyArray(_mxarray32_);
    mxDestroyArray(_mxarray30_);
    mxDestroyArray(_mxarray28_);
    mxDestroyArray(_mxarray26_);
    mxDestroyArray(_mxarray24_);
    mxDestroyArray(_mxarray23_);
    mxDestroyArray(_mxarray22_);
    mxDestroyArray(_mxarray21_);
    mxDestroyArray(_mxarray20_);
    mxDestroyArray(_mxarray19_);
    mxDestroyArray(_mxarray17_);
    mxDestroyArray(_mxarray15_);
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * mlfSpy_defaultspy(void);
static void mlxSpy_defaultspy(int nlhs,
                              mxArray * plhs[],
                              int nrhs,
                              mxArray * prhs[]);
static void Mspy(mxArray * S, mxArray * arg2, mxArray * arg3);
static mxArray * Mspy_defaultspy(int nargout_);

static mexFunctionTableEntry local_function_table_[1]
  = { { "defaultspy", mlxSpy_defaultspy, 0, 1, NULL } };

_mexLocalFunctionTable _local_function_table_spy = { 1, local_function_table_ };

/*
 * The function "mlfSpy" contains the normal interface for the "spy" M-function
 * from file "c:\matlab6p5\toolbox\matlab\sparfun\spy.m" (lines 1-67). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
void mlfSpy(mxArray * S, mxArray * arg2, mxArray * arg3) {
    mlfEnterNewContext(0, 3, S, arg2, arg3);
    Mspy(S, arg2, arg3);
    mlfRestorePreviousContext(0, 3, S, arg2, arg3);
}

/*
 * The function "mlxSpy" contains the feval interface for the "spy" M-function
 * from file "c:\matlab6p5\toolbox\matlab\sparfun\spy.m" (lines 1-67). The
 * feval function calls the implementation version of spy through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxSpy(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[3];
    int i;
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: spy Line: 1 Column: 1 The function \"spy\""
            " was called with more than the declared number of outputs (0)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: spy Line: 1 Column: 1 The function \"spy\""
            " was called with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    Mspy(mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
}

/*
 * The function "mlfSpy_defaultspy" contains the normal interface for the
 * "spy/defaultspy" M-function from file
 * "c:\matlab6p5\toolbox\matlab\sparfun\spy.m" (lines 67-100). This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static mxArray * mlfSpy_defaultspy(void) {
    int nargout = 1;
    mxArray * S = NULL;
    mlfEnterNewContext(0, 0);
    S = Mspy_defaultspy(nargout);
    mlfRestorePreviousContext(0, 0);
    return mlfReturnValue(S);
}

/*
 * The function "mlxSpy_defaultspy" contains the feval interface for the
 * "spy/defaultspy" M-function from file
 * "c:\matlab6p5\toolbox\matlab\sparfun\spy.m" (lines 67-100). The feval
 * function calls the implementation version of spy/defaultspy through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static void mlxSpy_defaultspy(int nlhs,
                              mxArray * plhs[],
                              int nrhs,
                              mxArray * prhs[]) {
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: spy/defaultspy Line: 67 Colum"
            "n: 1 The function \"spy/defaultspy\" was called wit"
            "h more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: spy/defaultspy Line: 67 Colu"
            "mn: 1 The function \"spy/defaultspy\" was called w"
            "ith more than the declared number of inputs (0)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    mlfEnterNewContext(0, 0);
    mplhs[0] = Mspy_defaultspy(nlhs);
    mlfRestorePreviousContext(0, 0);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mspy" is the implementation version of the "spy" M-function
 * from file "c:\matlab6p5\toolbox\matlab\sparfun\spy.m" (lines 1-67). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function spy(S,arg2,arg3);
 */
static void Mspy(mxArray * S, mxArray * arg2, mxArray * arg3) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_spy);
    int nargin_ = mclNargin(3, S, arg2, arg3, NULL);
    mxArray * j = NULL;
    mxArray * i = NULL;
    mxArray * pos = NULL;
    mxArray * units = NULL;
    mxArray * n = NULL;
    mxArray * m = NULL;
    mxArray * co = NULL;
    mxArray * ans = NULL;
    mxArray * msg = NULL;
    mxArray * line = NULL;
    mxArray * linestyle = NULL;
    mxArray * markersize = NULL;
    mxArray * color = NULL;
    mxArray * marker = NULL;
    mxArray * hold_state = NULL;
    mxArray * next = NULL;
    mxArray * cax = NULL;
    mclCopyArray(&S);
    mclCopyArray(&arg2);
    mclCopyArray(&arg3);
    /*
     * %SPY Visualize sparsity pattern.
     * %   SPY(S) plots the sparsity pattern of the matrix S.
     * %
     * %   SPY(S,'LineSpec') uses the color and marker from the line
     * %   specification string 'LineSpec' (See PLOT for possibilities).
     * %
     * %   SPY(S,markersize) uses the specified marker size instead of
     * %   a size which depends upon the figure size and the matrix order.
     * %
     * %   SPY(S,'LineSpec',markersize) sets both.
     * 
     * %   SPY(S,markersize,'LineSpec') also works.
     * 
     * %   Copyright 1984-2002 The MathWorks, Inc. 
     * %   $Revision: 5.19 $  $Date: 2002/04/09 00:26:16 $
     * 
     * cax = newplot;
     */
    mlfAssign(&cax, mlfNNewplot(1, NULL));
    /*
     * next = lower(get(cax,'NextPlot'));
     */
    mlfAssign(&next, mlfLower(mlfNGet(1, mclVv(cax, "cax"), _mxarray0_, NULL)));
    /*
     * hold_state = ishold;
     */
    mlfAssign(&hold_state, mlfIshold(NULL));
    /*
     * 
     * marker = ''; color = ''; markersize = 0; linestyle = 'none';
     */
    mlfAssign(&marker, _mxarray2_);
    mlfAssign(&color, _mxarray2_);
    mlfAssign(&markersize, _mxarray3_);
    mlfAssign(&linestyle, _mxarray4_);
    /*
     * if nargin >= 2
     */
    if (nargin_ >= 2) {
        /*
         * if isstr(arg2), 
         */
        if (mlfTobool(mlfIsstr(mclVa(arg2, "arg2")))) {
            /*
             * [line,color,marker,msg] = colstyle(arg2); error(msg)
             */
            mlfAssign(
              &line, mlfColstyle(&color, &marker, &msg, mclVa(arg2, "arg2")));
            mlfError(mclVv(msg, "msg"), NULL);
        /*
         * else,
         */
        } else {
            /*
             * markersize = arg2;
             */
            mlfAssign(&markersize, mclVa(arg2, "arg2"));
        /*
         * end
         */
        }
    /*
     * end
     */
    }
    /*
     * if nargin >= 3
     */
    if (nargin_ >= 3) {
        /*
         * if isstr(arg3),
         */
        if (mlfTobool(mlfIsstr(mclVa(arg3, "arg3")))) {
            /*
             * [line,color,marker,msg] = colstyle(arg3); error(msg)
             */
            mlfAssign(
              &line, mlfColstyle(&color, &marker, &msg, mclVa(arg3, "arg3")));
            mlfError(mclVv(msg, "msg"), NULL);
        /*
         * else,
         */
        } else {
            /*
             * markersize = arg3;
             */
            mlfAssign(&markersize, mclVa(arg3, "arg3"));
        /*
         * end
         */
        }
    /*
     * end
     */
    }
    /*
     * if isempty(marker), marker = '.'; end
     */
    if (mlfTobool(mlfIsempty(mclVv(marker, "marker")))) {
        mlfAssign(&marker, _mxarray6_);
    }
    /*
     * if isempty(color), co = get(cax,'colororder'); color = co(1,:); end
     */
    if (mlfTobool(mlfIsempty(mclVv(color, "color")))) {
        mlfAssign(&co, mlfNGet(1, mclVv(cax, "cax"), _mxarray8_, NULL));
        mlfAssign(
          &color,
          mclArrayRef2(mclVv(co, "co"), _mxarray10_, mlfCreateColonIndex()));
    }
    /*
     * 
     * if nargin < 1, S = defaultspy; end
     */
    if (nargin_ < 1) {
        mlfAssign(&S, mlfSpy_defaultspy());
    }
    /*
     * [m,n] = size(S);
     */
    mlfSize(mlfVarargout(&m, &n, NULL), mclVa(S, "S"), NULL);
    /*
     * if marker~='.' & markersize==0,
     */
    {
        mxArray * a_
          = mclInitialize(mclNe(mclVv(marker, "marker"), _mxarray6_));
        if (mlfTobool(a_)
            && mlfTobool(
                 mclAnd(
                   a_, mclEq(mclVv(markersize, "markersize"), _mxarray3_)))) {
            mxDestroyArray(a_);
            /*
             * markersize = get(gcf,'defaultlinemarkersize');
             */
            mlfAssign(&markersize, mlfNGet(1, mlfGcf(), _mxarray11_, NULL));
        } else {
            mxDestroyArray(a_);
        }
    /*
     * end
     */
    }
    /*
     * if markersize == 0
     */
    if (mclEqBool(mclVv(markersize, "markersize"), _mxarray3_)) {
        /*
         * units = get(gca,'units');
         */
        mlfAssign(&units, mlfNGet(1, mlfGca(NULL), _mxarray13_, NULL));
        /*
         * set(gca,'units','points');
         */
        mclAssignAns(
          &ans, mlfNSet(0, mlfGca(NULL), _mxarray13_, _mxarray15_, NULL));
        /*
         * pos = get(gca,'position');
         */
        mlfAssign(&pos, mlfNGet(1, mlfGca(NULL), _mxarray17_, NULL));
        /*
         * markersize = max(4,min(14,round(6*min(pos(3:4))/max(m+1,n+1))));
         */
        mlfAssign(
          &markersize,
          mlfMax(
            NULL,
            _mxarray19_,
            mlfMin(
              NULL,
              _mxarray20_,
              mlfRound(
                mclMrdivide(
                  mclMtimes(
                    _mxarray21_,
                    mlfMin(
                      NULL,
                      mclArrayRef1(
                        mclVv(pos, "pos"),
                        mlfColon(_mxarray22_, _mxarray19_, NULL)),
                      NULL,
                      NULL)),
                  mlfMax(
                    NULL,
                    mclPlus(mclVv(m, "m"), _mxarray10_),
                    mclPlus(mclVv(n, "n"), _mxarray10_),
                    NULL))),
              NULL),
            NULL));
        /*
         * set(gca,'units',units);
         */
        mclAssignAns(
          &ans,
          mlfNSet(0, mlfGca(NULL), _mxarray13_, mclVv(units, "units"), NULL));
    /*
     * end
     */
    }
    /*
     * 
     * [i,j] = find(S);
     */
    mlfAssign(&i, mlfFind(&j, NULL, mclVa(S, "S")));
    /*
     * if isempty(i), i = NaN; j = NaN; end
     */
    if (mlfTobool(mlfIsempty(mclVv(i, "i")))) {
        mlfAssign(&i, _mxarray23_);
        mlfAssign(&j, _mxarray23_);
    }
    /*
     * if isempty(S), marker = 'none'; end
     */
    if (mlfTobool(mlfIsempty(mclVa(S, "S")))) {
        mlfAssign(&marker, _mxarray4_);
    }
    /*
     * plot(j,i,'marker',marker,'markersize',markersize, ...
     */
    mclAssignAns(
      &ans,
      mlfNPlot(
        0,
        mclVv(j, "j"),
        mclVv(i, "i"),
        _mxarray24_,
        mclVv(marker, "marker"),
        _mxarray26_,
        mclVv(markersize, "markersize"),
        _mxarray28_,
        mclVv(linestyle, "linestyle"),
        _mxarray30_,
        mclVv(color, "color"),
        NULL));
    /*
     * 'linestyle',linestyle,'color',color);
     * 
     * xlabel(['nz = ' int2str(nnz(S))]);
     */
    mclAssignAns(
      &ans,
      mlfNXlabel(
        0,
        mlfHorzcat(_mxarray32_, mlfInt2str(mlfNnz(mclVa(S, "S"))), NULL),
        NULL));
    /*
     * set(gca,'xlim',[0 n+1],'ylim',[0 m+1],'ydir','reverse', ...
     */
    mclAssignAns(
      &ans,
      mlfNSet(
        0,
        mlfGca(NULL),
        _mxarray34_,
        mlfHorzcat(_mxarray3_, mclPlus(mclVv(n, "n"), _mxarray10_), NULL),
        _mxarray36_,
        mlfHorzcat(_mxarray3_, mclPlus(mclVv(m, "m"), _mxarray10_), NULL),
        _mxarray38_,
        _mxarray40_,
        _mxarray42_,
        _mxarray4_,
        _mxarray44_,
        mlfHorzcat(
          mclPlus(mclVv(n, "n"), _mxarray10_),
          mclPlus(mclVv(m, "m"), _mxarray10_),
          _mxarray10_,
          NULL),
        NULL));
    /*
     * 'grid','none','plotboxaspectratio',[n+1 m+1 1]);
     * 
     * if ~hold_state, set(cax,'NextPlot',next); end
     */
    if (mclNotBool(mclVv(hold_state, "hold_state"))) {
        mclAssignAns(
          &ans,
          mlfNSet(0, mclVv(cax, "cax"), _mxarray0_, mclVv(next, "next"), NULL));
    }
    mxDestroyArray(cax);
    mxDestroyArray(next);
    mxDestroyArray(hold_state);
    mxDestroyArray(marker);
    mxDestroyArray(color);
    mxDestroyArray(markersize);
    mxDestroyArray(linestyle);
    mxDestroyArray(line);
    mxDestroyArray(msg);
    mxDestroyArray(ans);
    mxDestroyArray(co);
    mxDestroyArray(m);
    mxDestroyArray(n);
    mxDestroyArray(units);
    mxDestroyArray(pos);
    mxDestroyArray(i);
    mxDestroyArray(j);
    mxDestroyArray(arg3);
    mxDestroyArray(arg2);
    mxDestroyArray(S);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    /*
     * 
     * % ------------------------------------------------------
     * 
     */
}

/*
 * The function "Mspy_defaultspy" is the implementation version of the
 * "spy/defaultspy" M-function from file
 * "c:\matlab6p5\toolbox\matlab\sparfun\spy.m" (lines 67-100). It contains the
 * actual compiled code for that M-function. It is a static function and must
 * only be called from one of the interface functions, appearing below.
 */
/*
 * function S = defaultspy;
 */
static mxArray * Mspy_defaultspy(int nargout_) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_spy);
    mxArray * S = NULL;
    mxArray * j = NULL;
    mxArray * i = NULL;
    mxArray * c = NULL;
    /*
     * c = [';@3EA4:aei7]ced.CFHE;4\T>*Y>,dL0,HOQQMJLJE9PX[[Q.ZF.\JTCA1dd'
     */
    mlfAssign(&c, _mxarray46_);
    /*
     * '<A;FB:;bfj8^df//DGIF<5]UF+ZH-eM>-IorRPNMPIE-Y\\R8[I8]SUDW2e+'
     * '=4BGC;<cgk9_e00DEOJG=6^VG,[I.fN?5jpsSQPNQPF.Z,]S9`S9cTWVX:+,'
     * ':5CHD<=4hlh`f11EFPKHA7&WH-\J/gOC?kqtTRRORQJ8--^TB+T=dWYWY;,_'
     * ';6D3E=>7imiag2IFOQLID8''XI.]K0"PD@l32UZhP//P988_WC,U>+Z^Y\<2`'
     * '<82BF>?8jnjbhLJGPRMJE9/YJ/`L1#QMC$;;V[iv09QE99,XD.YB,[_\]=3a'
     * '>9;CG?@9kokc2MKHQSOKF:0ZL0aM2$RNG%AAW\jw9E.FEE-_G8aG.d`]_W5+'
     * '?:CDH@A:lpld3NLIRTPLG=1[M1bN3%SOH4BBX]kx:J9LLL8`H9bJ/+d_dX6,'
     * '@;DEIAB;mqmePOMJSUQMJ>2\N2cO4&TPP@HCY^lyDKEMMN9+I@+S8,+deY7^'
     * '8@EFJBC<4rnfQPNPTVRNKB3]O3dP5''UQQCIDZ_mzEPFNNOE,RA,T9/,++\8_'
     * '9A2G3CD=544gRQPQUWUOLE4^P4"Q6(VRRIJE[`n{KQKOOPK-SE.W:F/,,]Z+'
     * ':BDH4DE>655hSRQRVXVPMF5_Q5#R>)eSSJKF\ao0L.L-WUL.VF8XCH001_[,'
     * ';3EI<EO?766iTSRSWYWQNG6$R6''S?*fTTlLQ]bp1M/P.XVP8[H9]DIDA=`\]'
     * '?4D3=FP@877jUTSTXZXROK7%S7(TF+gUUmMR^cq:N9Q8YZQ9_I>cIJEB>d_^'
     * '@5E@>GQA98b3VUTUY*YSPL8&T>)UI,hVhnNS_dr;PE.9Z[RCaR?+JTFC?e`+'
     * '79FA?HRB:9c4WVUVZ+ZWQM=,WG*VJ-"gi4OT`es<QL9E[\TD+SA,SWUVW+d,'
     * '8:3B@JSX;:dVXWVW[,[XRN>-XH+bK.#hj@PUvftDRMEF,]UH,UB.TYVWX,e\'
     * '9;ECAKTY<;eWYXWX\:)YSOE.YI,cL/$ikCqV1guE/PFL-^XI-YG/WZWXY1+]'
     * ':AFDBLUZ=<fXZYXY,;*ZTPF/ZJ-dM0%j#Jrt2hxH0QKM8,YJ.ZI8[^YY\2,,'
     * ';B3ECMV[>jgY[ZYZ-<7[XQG0[K.eN1&"$K2u:iyO9.PN9-_K8aJ9\_]\]82['
     * '?CEFDNW\?khZ\[Z[==8\YRH1\M/!O2''#%m31Bw0PE/QXE8+R9bS;da^]_93\'
     * '@2FGEOX]ali[]\[\>>9(ZSL2]N0"P3($&n;2Cx1QN9--L9,SA+T<+d__`:4,'
     * 'A3GHFPY^bmj\^]\]??:)[TM3^O1%Q4)%''oA:D0:0OE.8ME-TE,XB,+`da;5['
     * '643IGQZ_cnk]_^]^@@;5\UN4_P2&R6*&(3B;E1<1PN99NL8WF.^C/,a+bY6,'
     * '7:F3HR[`dol^`_^_AA<6]VO5`Q3''S>+'');CBF:=:QOEEOO9_G8aH6/d,cZ[Y'
     * '8;G4IS\aep4_a`_-BD=7''XP6aR4(T?,(5@DCHCC;RPFLPPD`H9bJ70+0d\\Z'
     * '9BH>JT^bf45`ba`.CE@8(YQ7#S5)UD-)?AEDIDDD/QKMVQJ+S?cSDF,1e]a,'
     * ':C3?K4_cg5[acbaADFA92ZR8$T6*VE.*@JFEJEEE0.NNWTK,U@+TEG0?+_bX'
     * ';2D@L9`dh6\bdcbBEGD:3[S=)U7+cK/+CKGFLIKI9/OWZUL-VA,WIHB@,`cY'];
     * i = double(c(:)-32);
     */
    mlfAssign(
      &i,
      mlfDouble(
        mclMinus(
          mclArrayRef1(mclVv(c, "c"), mlfCreateColonIndex()), _mxarray48_)));
    /*
     * j = cumsum(diff([0; i])<=0) + 1;
     */
    mlfAssign(
      &j,
      mclPlus(
        mlfCumsum(
          mclLe(
            mlfDiff(mlfVertcat(_mxarray3_, mclVv(i, "i"), NULL), NULL, NULL),
            _mxarray3_),
          NULL),
        _mxarray10_));
    /*
     * S = sparse(i,j,1)';
     */
    mlfAssign(
      &S,
      mlfCtranspose(
        mlfSparse(
          mclVv(i, "i"), mclVv(j, "j"), _mxarray10_, NULL, NULL, NULL)));
    mclValidateOutput(S, 1, nargout_, "S", "spy/defaultspy");
    mxDestroyArray(c);
    mxDestroyArray(i);
    mxDestroyArray(j);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return S;
}
