/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "data2_2d.h"
#include "libmatlbm.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;

void InitializeModule_data2_2d(void) {
    _mxarray0_ = mclInitializeDouble(10.0);
    _mxarray1_ = mclInitializeDouble(3.141592653589793);
}

void TerminateModule_data2_2d(void) {
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mdata2_2d(mxArray * * U11,
                           int nargout_,
                           mxArray * X,
                           mxArray * Y,
                           mxArray * T);

_mexLocalFunctionTable _local_function_table_data2_2d
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfData2_2d" contains the normal interface for the "data2_2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\data2_2d.m" (lines 1-10). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfData2_2d(mxArray * * U11, mxArray * X, mxArray * Y, mxArray * T) {
    int nargout = 1;
    mxArray * U01 = NULL;
    mxArray * U11__ = NULL;
    mlfEnterNewContext(1, 3, U11, X, Y, T);
    if (U11 != NULL) {
        ++nargout;
    }
    U01 = Mdata2_2d(&U11__, nargout, X, Y, T);
    mlfRestorePreviousContext(1, 3, U11, X, Y, T);
    if (U11 != NULL) {
        mclCopyOutputArg(U11, U11__);
    } else {
        mxDestroyArray(U11__);
    }
    return mlfReturnValue(U01);
}

/*
 * The function "mlxData2_2d" contains the feval interface for the "data2_2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\data2_2d.m" (lines 1-10). The feval
 * function calls the implementation version of data2_2d through this function.
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxData2_2d(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: data2_2d Line: 1 Column:"
            " 1 The function \"data2_2d\" was called with m"
            "ore than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: data2_2d Line: 1 Column:"
            " 1 The function \"data2_2d\" was called with m"
            "ore than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    mplhs[0] = Mdata2_2d(&mplhs[1], nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "Mdata2_2d" is the implementation version of the "data2_2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\data2_2d.m" (lines 1-10). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [U01,U11]=data2_2d(X,Y,T)
 */
static mxArray * Mdata2_2d(mxArray * * U11,
                           int nargout_,
                           mxArray * X,
                           mxArray * Y,
                           mxArray * T) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_data2_2d);
    mxArray * U01 = NULL;
    mclCopyArray(&X);
    mclCopyArray(&Y);
    mclCopyArray(&T);
    /*
     * 
     * U01 = 10*( sin(pi*X).*sin(pi*Y) );
     */
    mlfAssign(
      &U01,
      mclMtimes(
        _mxarray0_,
        mclTimes(
          mlfSin(mclMtimes(_mxarray1_, mclVa(X, "X"))),
          mlfSin(mclMtimes(_mxarray1_, mclVa(Y, "Y"))))));
    /*
     * U11 = zeros(size(X));
     */
    mlfAssign(
      U11, mlfZeros(mlfSize(mclValueVarargout(), mclVa(X, "X"), NULL), NULL));
    mclValidateOutput(U01, 1, nargout_, "U01", "data2_2d");
    mclValidateOutput(*U11, 2, nargout_, "U11", "data2_2d");
    mxDestroyArray(T);
    mxDestroyArray(Y);
    mxDestroyArray(X);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return U01;
    /*
     * 
     * %end
     * 
     * 
     * 
     */
}
