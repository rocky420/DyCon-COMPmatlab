/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "psiback2d.h"
#include "libmatlbm.h"

void InitializeModule_psiback2d(void) {
}

void TerminateModule_psiback2d(void) {
}

static mxArray * Mpsiback2d(int nargout_,
                            mxArray * M1,
                            mxArray * bc1,
                            mxArray * psi1np1,
                            mxArray * psi1n);

_mexLocalFunctionTable _local_function_table_psiback2d
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfPsiback2d" contains the normal interface for the
 * "psiback2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\psiback2d.m" (lines 1-20).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfPsiback2d(mxArray * M1,
                       mxArray * bc1,
                       mxArray * psi1np1,
                       mxArray * psi1n) {
    int nargout = 1;
    mxArray * sol1n = NULL;
    mlfEnterNewContext(0, 4, M1, bc1, psi1np1, psi1n);
    sol1n = Mpsiback2d(nargout, M1, bc1, psi1np1, psi1n);
    mlfRestorePreviousContext(0, 4, M1, bc1, psi1np1, psi1n);
    return mlfReturnValue(sol1n);
}

/*
 * The function "mlxPsiback2d" contains the feval interface for the "psiback2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\psiback2d.m" (lines 1-20). The feval
 * function calls the implementation version of psiback2d through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxPsiback2d(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[4];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: psiback2d Line: 1 Column:"
            " 1 The function \"psiback2d\" was called with m"
            "ore than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 4) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: psiback2d Line: 1 Column:"
            " 1 The function \"psiback2d\" was called with m"
            "ore than the declared number of inputs (4)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 4 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 4; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 4, mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    mplhs[0] = Mpsiback2d(nlhs, mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    mlfRestorePreviousContext(0, 4, mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mpsiback2d" is the implementation version of the "psiback2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\psiback2d.m" (lines 1-20). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [sol1n]=psiback2d(M1,bc1,psi1np1,psi1n)
 */
static mxArray * Mpsiback2d(int nargout_,
                            mxArray * M1,
                            mxArray * bc1,
                            mxArray * psi1np1,
                            mxArray * psi1n) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_psiback2d);
    mxArray * sol1n = NULL;
    mxArray * psi1nm1 = NULL;
    mclCopyArray(&M1);
    mclCopyArray(&bc1);
    mclCopyArray(&psi1np1);
    mclCopyArray(&psi1n);
    /*
     * 
     * %  Resolution of elasticity system:
     * 
     * % U_(tt) - mu*laplacian(U) - (lambda+mu)*grad(div(U)) = 0 in Omega x(0,T)
     * % U(x,y,T)=e0      U_(t)(x,y,0)=e1
     * % U = mu*dnU + (lambda+mu)*nu*div(U) on Boundary of Omega
     * % Where dn is the normal derivative in nu, the normal vector
     * 
     * % by a scheme in finite diff. to the order 2 at time and in space
     * 
     * % A single step of time is calculated
     * 
     * psi1nm1 = M1*psi1n - psi1np1 + bc1;
     */
    mlfAssign(
      &psi1nm1,
      mclPlus(
        mclMinus(
          mclMtimes(mclVa(M1, "M1"), mclVa(psi1n, "psi1n")),
          mclVa(psi1np1, "psi1np1")),
        mclVa(bc1, "bc1")));
    /*
     * sol1n = psi1nm1;
     */
    mlfAssign(&sol1n, mclVv(psi1nm1, "psi1nm1"));
    mclValidateOutput(sol1n, 1, nargout_, "sol1n", "psiback2d");
    mxDestroyArray(psi1nm1);
    mxDestroyArray(psi1n);
    mxDestroyArray(psi1np1);
    mxDestroyArray(bc1);
    mxDestroyArray(M1);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return sol1n;
    /*
     * 
     * 
     * 
     * 
     */
}
