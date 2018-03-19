/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "nested.h"
#include "libmatlbm.h"
#include "nestdiss.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;
static mxArray * _mxarray2_;

void InitializeModule_nested(void) {
    _mxarray0_ = mclInitializeDouble(2.0);
    _mxarray1_ = mclInitializeDouble(0.0);
    _mxarray2_ = mclInitializeDouble(1.0);
}

void TerminateModule_nested(void) {
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mnested(int nargout_, mxArray * n);

_mexLocalFunctionTable _local_function_table_nested
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNested" contains the normal interface for the "nested"
 * M-function from file "c:\matlab6p5\toolbox\matlab\demos\nested.m" (lines
 * 1-14). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfNested(mxArray * n) {
    int nargout = 1;
    mxArray * G = NULL;
    mlfEnterNewContext(0, 1, n);
    G = Mnested(nargout, n);
    mlfRestorePreviousContext(0, 1, n);
    return mlfReturnValue(G);
}

/*
 * The function "mlxNested" contains the feval interface for the "nested"
 * M-function from file "c:\matlab6p5\toolbox\matlab\demos\nested.m" (lines
 * 1-14). The feval function calls the implementation version of nested through
 * this function. This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
void mlxNested(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: nested Line: 1 Column: "
            "1 The function \"nested\" was called with mor"
            "e than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: nested Line: 1 Column: "
            "1 The function \"nested\" was called with mor"
            "e than the declared number of inputs (1)."),
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
    mplhs[0] = Mnested(nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mnested" is the implementation version of the "nested"
 * M-function from file "c:\matlab6p5\toolbox\matlab\demos\nested.m" (lines
 * 1-14). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function G = nested(n);
 */
static mxArray * Mnested(int nargout_, mxArray * n) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_nested);
    mxArray * G = NULL;
    mclCopyArray(&n);
    /*
     * %NESTED Nested dissection ordering.
     * %   G = nested(n) generates a nested dissection numbering of an n-by-n grid.
     * %
     * %   See also DELSQ, NUMGRID.
     * 
     * %   C. Moler, 1990.
     * %   Copyright 1984-2002 The MathWorks, Inc. 
     * %   $Revision: 5.7 $  $Date: 2002/04/08 20:04:48 $
     * 
     * % The actual numbering is done recursively by nestdiss.
     * G = zeros(n,n);
     */
    mlfAssign(&G, mlfZeros(mclVa(n, "n"), mclVa(n, "n"), NULL));
    /*
     * G(2:n-1,2:n-1) = nestdiss(zeros(n-2,n-2),0);
     */
    mclArrayAssign2(
      &G,
      mlfNestdiss(
        NULL,
        mlfZeros(
          mclMinus(mclVa(n, "n"), _mxarray0_),
          mclMinus(mclVa(n, "n"), _mxarray0_),
          NULL),
        _mxarray1_),
      mlfColon(_mxarray0_, mclMinus(mclVa(n, "n"), _mxarray2_), NULL),
      mlfColon(_mxarray0_, mclMinus(mclVa(n, "n"), _mxarray2_), NULL));
    mclValidateOutput(G, 1, nargout_, "G", "nested");
    mxDestroyArray(n);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return G;
}
