/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "isvarname.h"
#include "iskeyword.h"
#include "libmatlbm.h"
static mxArray * _mxarray0_;

static mxChar _array2_[1] = { '_' };
static mxArray * _mxarray1_;

static mxChar _array4_[1] = { '0' };
static mxArray * _mxarray3_;

static mxChar _array6_[1] = { '9' };
static mxArray * _mxarray5_;

void InitializeModule_isvarname(void) {
    _mxarray0_ = mclInitializeDouble(1.0);
    _mxarray1_ = mclInitializeString(1, _array2_);
    _mxarray3_ = mclInitializeString(1, _array4_);
    _mxarray5_ = mclInitializeString(1, _array6_);
}

void TerminateModule_isvarname(void) {
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Misvarname(int nargout_, mxArray * s);

_mexLocalFunctionTable _local_function_table_isvarname
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfIsvarname" contains the normal interface for the
 * "isvarname" M-function from file
 * "c:\matlab6p5\toolbox\matlab\lang\isvarname.m" (lines 1-17). This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
mxArray * mlfIsvarname(mxArray * s) {
    int nargout = 1;
    mxArray * t = NULL;
    mlfEnterNewContext(0, 1, s);
    t = Misvarname(nargout, s);
    mlfRestorePreviousContext(0, 1, s);
    return mlfReturnValue(t);
}

/*
 * The function "mlxIsvarname" contains the feval interface for the "isvarname"
 * M-function from file "c:\matlab6p5\toolbox\matlab\lang\isvarname.m" (lines
 * 1-17). The feval function calls the implementation version of isvarname
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxIsvarname(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: isvarname Line: 1 Column:"
            " 1 The function \"isvarname\" was called with m"
            "ore than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: isvarname Line: 1 Column:"
            " 1 The function \"isvarname\" was called with m"
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
    mplhs[0] = Misvarname(nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Misvarname" is the implementation version of the "isvarname"
 * M-function from file "c:\matlab6p5\toolbox\matlab\lang\isvarname.m" (lines
 * 1-17). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function t = isvarname(s)
 */
static mxArray * Misvarname(int nargout_, mxArray * s) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_isvarname);
    mxArray * t = NULL;
    mclCopyArray(&s);
    /*
     * %ISVARNAME True for valid variable name.
     * %   ISVARNAME(S) is true if S is a valid MATLAB variable name.
     * %   A valid variable name is a character string of letters, digits and
     * %   underscores, with length <= namelengthmax and the first character a letter.
     * %
     * %   See also ISKEYWORD, NAMELENGTHMAX.
     * 
     * %   Copyright 1984-2002 The MathWorks, Inc. 
     * %   $Revision: 1.7 $  $Date: 2002/04/26 03:56:46 $
     * 
     * t = ischar(s) & size(s,1) == 1 & length(s) <= namelengthmax;
     */
    mlfAssign(
      &t,
      mclAnd(
        mclAnd(
          mlfIschar(mclVa(s, "s")),
          mclEq(
            mlfSize(mclValueVarargout(), mclVa(s, "s"), _mxarray0_),
            _mxarray0_)),
        mclBoolToArray(mclLengthInt(mclVa(s, "s")) <= 63)));
    /*
     * if t
     */
    if (mlfTobool(mclVv(t, "t"))) {
        /*
         * t = isletter(s(1)) & all(isletter(s) | s == '_' | ('0' <= s & s <= '9'));
         */
        mlfAssign(
          &t,
          mclAnd(
            mlfIsletter(mclIntArrayRef1(mclVa(s, "s"), 1)),
            mlfAll(
              mclOr(
                mclOr(
                  mlfIsletter(mclVa(s, "s")), mclEq(mclVa(s, "s"), _mxarray1_)),
                mclAnd(
                  mclLe(_mxarray3_, mclVa(s, "s")),
                  mclLe(mclVa(s, "s"), _mxarray5_))),
              NULL)));
        /*
         * t = t & ~iskeyword(s); 
         */
        mlfAssign(
          &t, mclAnd(mclVv(t, "t"), mclNot(mlfIskeyword(mclVa(s, "s")))));
    /*
     * end
     */
    }
    mclValidateOutput(t, 1, nargout_, "t", "isvarname");
    mxDestroyArray(s);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return t;
}
