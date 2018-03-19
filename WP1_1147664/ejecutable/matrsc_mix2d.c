/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "matrsc_mix2d.h"
#include "grdiv.h"
#include "grdivk.h"
#include "grdivm.h"
#include "libmatlbm.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;

void InitializeModule_matrsc_mix2d(void) {
    _mxarray0_ = mclInitializeDouble(.25);
    _mxarray1_ = mclInitializeDouble(2.0);
}

void TerminateModule_matrsc_mix2d(void) {
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mmatrsc_mix2d(mxArray * * M2,
                               int nargout_,
                               mxArray * G,
                               mxArray * J,
                               mxArray * r0);

_mexLocalFunctionTable _local_function_table_matrsc_mix2d
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfMatrsc_mix2d" contains the normal interface for the
 * "matrsc_mix2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\matrsc_mix2d.m" (lines
 * 1-9). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfMatrsc_mix2d(mxArray * * M2,
                          mxArray * G,
                          mxArray * J,
                          mxArray * r0) {
    int nargout = 1;
    mxArray * M1 = NULL;
    mxArray * M2__ = NULL;
    mlfEnterNewContext(1, 3, M2, G, J, r0);
    if (M2 != NULL) {
        ++nargout;
    }
    M1 = Mmatrsc_mix2d(&M2__, nargout, G, J, r0);
    mlfRestorePreviousContext(1, 3, M2, G, J, r0);
    if (M2 != NULL) {
        mclCopyOutputArg(M2, M2__);
    } else {
        mxDestroyArray(M2__);
    }
    return mlfReturnValue(M1);
}

/*
 * The function "mlxMatrsc_mix2d" contains the feval interface for the
 * "matrsc_mix2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\matrsc_mix2d.m" (lines
 * 1-9). The feval function calls the implementation version of matrsc_mix2d
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxMatrsc_mix2d(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: matrsc_mix2d Line: 1 Column"
            ": 1 The function \"matrsc_mix2d\" was called with"
            " more than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: matrsc_mix2d Line: 1 Column"
            ": 1 The function \"matrsc_mix2d\" was called with"
            " more than the declared number of inputs (3)."),
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
    mplhs[0] = Mmatrsc_mix2d(&mplhs[1], nlhs, mprhs[0], mprhs[1], mprhs[2]);
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
 * The function "Mmatrsc_mix2d" is the implementation version of the
 * "matrsc_mix2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\matrsc_mix2d.m" (lines
 * 1-9). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [M1,M2] = matrsc_mix2d(G,J,r0)
 */
static mxArray * Mmatrsc_mix2d(mxArray * * M2,
                               int nargout_,
                               mxArray * G,
                               mxArray * J,
                               mxArray * r0) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_matrsc_mix2d);
    mxArray * M1 = NULL;
    mxArray * alpha = NULL;
    mxArray * K = NULL;
    mxArray * M = NULL;
    mxArray * B = NULL;
    mxArray * A = NULL;
    mclCopyArray(&G);
    mclCopyArray(&J);
    mclCopyArray(&r0);
    /*
     * [A,B] = grdiv(G);
     */
    mlfAssign(&A, mlfGrdiv(&B, mclVa(G, "G")));
    /*
     * M=grdivM(G);
     */
    mlfAssign(&M, mlfGrdivm(mclVa(G, "G")));
    /*
     * K=grdivK(G);
     */
    mlfAssign(&K, mlfGrdivk(mclVa(G, "G")));
    /*
     * alpha=1/4;
     */
    mlfAssign(&alpha, _mxarray0_);
    /*
     * M2=(A+B)*inv(K)*M-alpha*r0*(A+B);
     */
    mlfAssign(
      M2,
      mclMinus(
        mclMtimes(
          mclMtimes(
            mclPlus(mclVv(A, "A"), mclVv(B, "B")), mlfInv(mclVv(K, "K"))),
          mclVv(M, "M")),
        mclMtimes(
          mclMtimes(mclVv(alpha, "alpha"), mclVa(r0, "r0")),
          mclPlus(mclVv(A, "A"), mclVv(B, "B")))));
    /*
     * M1 = 2*M2 + r0*(A+B);
     */
    mlfAssign(
      &M1,
      mclPlus(
        mclMtimes(_mxarray1_, mclVv(*M2, "M2")),
        mclMtimes(mclVa(r0, "r0"), mclPlus(mclVv(A, "A"), mclVv(B, "B")))));
    /*
     * M1=M2\M1;
     */
    mlfAssign(&M1, mlfMldivide(mclVv(*M2, "M2"), mclVv(M1, "M1")));
    /*
     * M2=inv(M2);
     */
    mlfAssign(M2, mlfInv(mclVv(*M2, "M2")));
    mclValidateOutput(M1, 1, nargout_, "M1", "matrsc_mix2d");
    mclValidateOutput(*M2, 2, nargout_, "M2", "matrsc_mix2d");
    mxDestroyArray(A);
    mxDestroyArray(B);
    mxDestroyArray(M);
    mxDestroyArray(K);
    mxDestroyArray(alpha);
    mxDestroyArray(r0);
    mxDestroyArray(J);
    mxDestroyArray(G);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return M1;
}
