/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "iskeyword.h"
#include "libmatlbm.h"

static mxChar _array3_[5] = { 'b', 'r', 'e', 'a', 'k' };
static mxArray * _mxarray2_;

static mxChar _array5_[4] = { 'c', 'a', 's', 'e' };
static mxArray * _mxarray4_;

static mxChar _array7_[5] = { 'c', 'a', 't', 'c', 'h' };
static mxArray * _mxarray6_;

static mxChar _array9_[8] = { 'c', 'o', 'n', 't', 'i', 'n', 'u', 'e' };
static mxArray * _mxarray8_;

static mxChar _array11_[4] = { 'e', 'l', 's', 'e' };
static mxArray * _mxarray10_;

static mxChar _array13_[6] = { 'e', 'l', 's', 'e', 'i', 'f' };
static mxArray * _mxarray12_;

static mxChar _array15_[3] = { 'e', 'n', 'd' };
static mxArray * _mxarray14_;

static mxChar _array17_[3] = { 'f', 'o', 'r' };
static mxArray * _mxarray16_;

static mxChar _array19_[8] = { 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n' };
static mxArray * _mxarray18_;

static mxChar _array21_[6] = { 'g', 'l', 'o', 'b', 'a', 'l' };
static mxArray * _mxarray20_;

static mxChar _array23_[2] = { 'i', 'f' };
static mxArray * _mxarray22_;

static mxChar _array25_[9] = { 'o', 't', 'h', 'e', 'r', 'w', 'i', 's', 'e' };
static mxArray * _mxarray24_;

static mxChar _array27_[10] = { 'p', 'e', 'r', 's', 'i',
                                's', 't', 'e', 'n', 't' };
static mxArray * _mxarray26_;

static mxChar _array29_[6] = { 'r', 'e', 't', 'u', 'r', 'n' };
static mxArray * _mxarray28_;

static mxChar _array31_[6] = { 's', 'w', 'i', 't', 'c', 'h' };
static mxArray * _mxarray30_;

static mxChar _array33_[3] = { 't', 'r', 'y' };
static mxArray * _mxarray32_;

static mxChar _array35_[5] = { 'w', 'h', 'i', 'l', 'e' };
static mxArray * _mxarray34_;

static mxArray * _array1_[17] = { NULL /*_mxarray2_*/, NULL /*_mxarray4_*/,
                                  NULL /*_mxarray6_*/, NULL /*_mxarray8_*/,
                                  NULL /*_mxarray10_*/, NULL /*_mxarray12_*/,
                                  NULL /*_mxarray14_*/, NULL /*_mxarray16_*/,
                                  NULL /*_mxarray18_*/, NULL /*_mxarray20_*/,
                                  NULL /*_mxarray22_*/, NULL /*_mxarray24_*/,
                                  NULL /*_mxarray26_*/, NULL /*_mxarray28_*/,
                                  NULL /*_mxarray30_*/, NULL /*_mxarray32_*/,
                                  NULL /*_mxarray34_*/ };
static mxArray * _mxarray0_;

void InitializeModule_iskeyword(void) {
    _mxarray2_ = mclInitializeString(5, _array3_);
    _array1_[0] = _mxarray2_;
    _mxarray4_ = mclInitializeString(4, _array5_);
    _array1_[1] = _mxarray4_;
    _mxarray6_ = mclInitializeString(5, _array7_);
    _array1_[2] = _mxarray6_;
    _mxarray8_ = mclInitializeString(8, _array9_);
    _array1_[3] = _mxarray8_;
    _mxarray10_ = mclInitializeString(4, _array11_);
    _array1_[4] = _mxarray10_;
    _mxarray12_ = mclInitializeString(6, _array13_);
    _array1_[5] = _mxarray12_;
    _mxarray14_ = mclInitializeString(3, _array15_);
    _array1_[6] = _mxarray14_;
    _mxarray16_ = mclInitializeString(3, _array17_);
    _array1_[7] = _mxarray16_;
    _mxarray18_ = mclInitializeString(8, _array19_);
    _array1_[8] = _mxarray18_;
    _mxarray20_ = mclInitializeString(6, _array21_);
    _array1_[9] = _mxarray20_;
    _mxarray22_ = mclInitializeString(2, _array23_);
    _array1_[10] = _mxarray22_;
    _mxarray24_ = mclInitializeString(9, _array25_);
    _array1_[11] = _mxarray24_;
    _mxarray26_ = mclInitializeString(10, _array27_);
    _array1_[12] = _mxarray26_;
    _mxarray28_ = mclInitializeString(6, _array29_);
    _array1_[13] = _mxarray28_;
    _mxarray30_ = mclInitializeString(6, _array31_);
    _array1_[14] = _mxarray30_;
    _mxarray32_ = mclInitializeString(3, _array33_);
    _array1_[15] = _mxarray32_;
    _mxarray34_ = mclInitializeString(5, _array35_);
    _array1_[16] = _mxarray34_;
    _mxarray0_ = mclInitializeCellVector(17, 1, _array1_);
}

void TerminateModule_iskeyword(void) {
    mxDestroyArray(_mxarray0_);
    mxDestroyArray(_mxarray34_);
    mxDestroyArray(_mxarray32_);
    mxDestroyArray(_mxarray30_);
    mxDestroyArray(_mxarray28_);
    mxDestroyArray(_mxarray26_);
    mxDestroyArray(_mxarray24_);
    mxDestroyArray(_mxarray22_);
    mxDestroyArray(_mxarray20_);
    mxDestroyArray(_mxarray18_);
    mxDestroyArray(_mxarray16_);
    mxDestroyArray(_mxarray14_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
}

static mxArray * Miskeyword(int nargout_, mxArray * s);

_mexLocalFunctionTable _local_function_table_iskeyword
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfIskeyword" contains the normal interface for the
 * "iskeyword" M-function from file
 * "c:\matlab6p5\toolbox\matlab\lang\iskeyword.m" (lines 1-41). This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
mxArray * mlfIskeyword(mxArray * s) {
    int nargout = 1;
    mxArray * L = NULL;
    mlfEnterNewContext(0, 1, s);
    L = Miskeyword(nargout, s);
    mlfRestorePreviousContext(0, 1, s);
    return mlfReturnValue(L);
}

/*
 * The function "mlxIskeyword" contains the feval interface for the "iskeyword"
 * M-function from file "c:\matlab6p5\toolbox\matlab\lang\iskeyword.m" (lines
 * 1-41). The feval function calls the implementation version of iskeyword
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxIskeyword(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: iskeyword Line: 1 Column:"
            " 1 The function \"iskeyword\" was called with m"
            "ore than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: iskeyword Line: 1 Column:"
            " 1 The function \"iskeyword\" was called with m"
            "ore than the declared number of inputs (1)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 1 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 1; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 1, mprhs[0]);
    mplhs[0] = Miskeyword(nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Miskeyword" is the implementation version of the "iskeyword"
 * M-function from file "c:\matlab6p5\toolbox\matlab\lang\iskeyword.m" (lines
 * 1-41). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function L = iskeyword(s)
 */
static mxArray * Miskeyword(int nargout_, mxArray * s) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_iskeyword);
    int nargin_ = mclNargin(1, s, NULL);
    mxArray * L = NULL;
    mclCopyArray(&s);
    /*
     * %ISKEYWORD Check if input is a keyword.
     * %   ISKEYWORD(S) returns one if S is a MATLAB keyword,
     * %   and 0 otherwise.  MATLAB keywords cannot be used 
     * %   as variable names.
     * %
     * %   ISKEYWORD used without any inputs returns a cell array containing
     * %   the MATLAB keywords.
     * %
     * %   See also ISVARNAME.
     * 
     * %   $Revision: 1.3 $  $Date: 2002/04/08 23:29:22 $
     * %   Copyright 1984-2002 The MathWorks, Inc.
     * 
     * L = {...
     */
    mlfAssign(&L, _mxarray0_);
    /*
     * 'break',
     * 'case',
     * 'catch',
     * 'continue',
     * 'else',
     * 'elseif',
     * 'end',
     * 'for',
     * 'function',
     * 'global',
     * 'if',
     * 'otherwise',
     * 'persistent',
     * 'return',
     * 'switch',
     * 'try',
     * 'while',
     * };
     * 
     * if nargin==0
     */
    if (nargin_ == 0) {
    /*
     * %  Return the list only
     * return
     * else
     */
    } else {
        /*
         * L = any(strcmp(s,L));
         */
        mlfAssign(&L, mlfAny(mlfStrcmp(mclVa(s, "s"), mclVv(L, "L")), NULL));
    /*
     * end
     */
    }
    mclValidateOutput(L, 1, nargout_, "L", "iskeyword");
    mxDestroyArray(s);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return L;
}
