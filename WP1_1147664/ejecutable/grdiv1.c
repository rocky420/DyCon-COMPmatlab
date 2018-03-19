/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "grdiv1.h"
#include "libmatlbm.h"
static mxArray * _mxarray0_;

void InitializeModule_grdiv1(void) {
    _mxarray0_ = mclInitializeDouble(1.0);
}

void TerminateModule_grdiv1(void) {
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mgrdiv1(int nargout_, mxArray * G1);

_mexLocalFunctionTable _local_function_table_grdiv1
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfGrdiv1" contains the normal interface for the "grdiv1"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\grdiv1.m" (lines 1-8). This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
mxArray * mlfGrdiv1(mxArray * G1) {
    int nargout = 1;
    mxArray * C = NULL;
    mlfEnterNewContext(0, 1, G1);
    C = Mgrdiv1(nargout, G1);
    mlfRestorePreviousContext(0, 1, G1);
    return mlfReturnValue(C);
}

/*
 * The function "mlxGrdiv1" contains the feval interface for the "grdiv1"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\grdiv1.m" (lines 1-8). The feval
 * function calls the implementation version of grdiv1 through this function.
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxGrdiv1(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: grdiv1 Line: 1 Column: "
            "1 The function \"grdiv1\" was called with mor"
            "e than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: grdiv1 Line: 1 Column: "
            "1 The function \"grdiv1\" was called with mor"
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
    mplhs[0] = Mgrdiv1(nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mgrdiv1" is the implementation version of the "grdiv1"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\grdiv1.m" (lines 1-8). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function [C] = grdiv1(G1)
 */
static mxArray * Mgrdiv1(int nargout_, mxArray * G1) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_grdiv1);
    mxArray * C = NULL;
    mxArray * sa = NULL;
    mxArray * ia = NULL;
    mxArray * p = NULL;
    mclCopyArray(&G1);
    /*
     * 
     * p = find(G1);
     */
    mlfAssign(&p, mlfFind(NULL, NULL, mclVa(G1, "G1")));
    /*
     * ia = G1(p);
     */
    mlfAssign(&ia, mclArrayRef1(mclVa(G1, "G1"), mclVv(p, "p")));
    /*
     * sa = ones(length(p),1);
     */
    mlfAssign(
      &sa, mlfOnes(mlfScalar(mclLengthInt(mclVv(p, "p"))), _mxarray0_, NULL));
    /*
     * C = sparse(ia,ia,sa);
     */
    mlfAssign(
      &C,
      mlfSparse(
        mclVv(ia, "ia"), mclVv(ia, "ia"), mclVv(sa, "sa"), NULL, NULL, NULL));
    mclValidateOutput(C, 1, nargout_, "C", "grdiv1");
    mxDestroyArray(p);
    mxDestroyArray(ia);
    mxDestroyArray(sa);
    mxDestroyArray(G1);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return C;
    /*
     * 
     */
}
