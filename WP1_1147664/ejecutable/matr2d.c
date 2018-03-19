/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "matr2d.h"
#include "grdiv.h"
#include "libmatlbm.h"
#include "libmmfile.h"
static mxArray * _mxarray0_;

static mxChar _array2_[42] = { ' ', '-', '-', '>', ' ', 'T', 'h', 'e', ' ',
                               'e', 'n', 'd', ' ', 'o', 'f', ' ', 't', 'h',
                               'e', ' ', 'c', 'o', 'n', 's', 't', 'r', 'u',
                               'c', 't', 'i', 'o', 'n', ' ', 'o', 'f', ' ',
                               'm', 'a', 't', 'r', 'i', 'x' };
static mxArray * _mxarray1_;

void InitializeModule_matr2d(void) {
    _mxarray0_ = mclInitializeDouble(2.0);
    _mxarray1_ = mclInitializeString(42, _array2_);
}

void TerminateModule_matr2d(void) {
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mmatr2d(int nargout_, mxArray * G, mxArray * J, mxArray * r0);

_mexLocalFunctionTable _local_function_table_matr2d
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfMatr2d" contains the normal interface for the "matr2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\matr2d.m" (lines 1-12). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfMatr2d(mxArray * G, mxArray * J, mxArray * r0) {
    int nargout = 1;
    mxArray * M1 = NULL;
    mlfEnterNewContext(0, 3, G, J, r0);
    M1 = Mmatr2d(nargout, G, J, r0);
    mlfRestorePreviousContext(0, 3, G, J, r0);
    return mlfReturnValue(M1);
}

/*
 * The function "mlxMatr2d" contains the feval interface for the "matr2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\matr2d.m" (lines 1-12). The feval
 * function calls the implementation version of matr2d through this function.
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxMatr2d(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: matr2d Line: 1 Column: "
            "1 The function \"matr2d\" was called with mor"
            "e than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: matr2d Line: 1 Column: "
            "1 The function \"matr2d\" was called with mor"
            "e than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    mplhs[0] = Mmatr2d(nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mmatr2d" is the implementation version of the "matr2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\matr2d.m" (lines 1-12). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function [M1] = matr2d(G,J,r0)
 */
static mxArray * Mmatr2d(int nargout_, mxArray * G, mxArray * J, mxArray * r0) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_matr2d);
    mxArray * M1 = NULL;
    mxArray * ans = NULL;
    mxArray * B = NULL;
    mxArray * A = NULL;
    mclCopyArray(&G);
    mclCopyArray(&J);
    mclCopyArray(&r0);
    /*
     * 
     * % Calculate the linear operators of the schema in the finited diff.
     * % resolvant the elasticity system
     * % Three operators are calculated:
     * 
     * %   A = d_(xx)		B = d_(yy)	C = d_(xy)
     * % M1 and M2 are the linear combinations de A,B,C
     * 
     * [A,B] = grdiv(G);
     */
    mlfAssign(&A, mlfGrdiv(&B, mclVa(G, "G")));
    /*
     * M1 = 2*speye(J^2) + r0*(A+B);
     */
    mlfAssign(
      &M1,
      mclPlus(
        mclMtimes(
          _mxarray0_, mlfSpeye(mclMpower(mclVa(J, "J"), _mxarray0_), NULL)),
        mclMtimes(mclVa(r0, "r0"), mclPlus(mclVv(A, "A"), mclVv(B, "B")))));
    /*
     * disp(' --> The end of the construction of matrix');
     */
    mlfDisp(_mxarray1_);
    mclValidateOutput(M1, 1, nargout_, "M1", "matr2d");
    mxDestroyArray(A);
    mxDestroyArray(B);
    mxDestroyArray(ans);
    mxDestroyArray(r0);
    mxDestroyArray(J);
    mxDestroyArray(G);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return M1;
}
