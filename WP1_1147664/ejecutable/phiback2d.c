/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "phiback2d.h"
#include "libmatlbm.h"

void InitializeModule_phiback2d(void) {
}

void TerminateModule_phiback2d(void) {
}

static mxArray * Mphiback2d(int nargout_,
                            mxArray * n,
                            mxArray * dt,
                            mxArray * J,
                            mxArray * G,
                            mxArray * M1,
                            mxArray * phi1np1,
                            mxArray * phi1n);

_mexLocalFunctionTable _local_function_table_phiback2d
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfPhiback2d" contains the normal interface for the
 * "phiback2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\phiback2d.m" (lines 1-21).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfPhiback2d(mxArray * n,
                       mxArray * dt,
                       mxArray * J,
                       mxArray * G,
                       mxArray * M1,
                       mxArray * phi1np1,
                       mxArray * phi1n) {
    int nargout = 1;
    mxArray * sol1n = NULL;
    mlfEnterNewContext(0, 7, n, dt, J, G, M1, phi1np1, phi1n);
    sol1n = Mphiback2d(nargout, n, dt, J, G, M1, phi1np1, phi1n);
    mlfRestorePreviousContext(0, 7, n, dt, J, G, M1, phi1np1, phi1n);
    return mlfReturnValue(sol1n);
}

/*
 * The function "mlxPhiback2d" contains the feval interface for the "phiback2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\phiback2d.m" (lines 1-21). The feval
 * function calls the implementation version of phiback2d through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxPhiback2d(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[7];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: phiback2d Line: 1 Column:"
            " 1 The function \"phiback2d\" was called with m"
            "ore than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 7) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: phiback2d Line: 1 Column:"
            " 1 The function \"phiback2d\" was called with m"
            "ore than the declared number of inputs (7)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 7 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 7; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(
      0,
      7,
      mprhs[0],
      mprhs[1],
      mprhs[2],
      mprhs[3],
      mprhs[4],
      mprhs[5],
      mprhs[6]);
    mplhs[0]
      = Mphiback2d(
          nlhs,
          mprhs[0],
          mprhs[1],
          mprhs[2],
          mprhs[3],
          mprhs[4],
          mprhs[5],
          mprhs[6]);
    mlfRestorePreviousContext(
      0,
      7,
      mprhs[0],
      mprhs[1],
      mprhs[2],
      mprhs[3],
      mprhs[4],
      mprhs[5],
      mprhs[6]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mphiback2d" is the implementation version of the "phiback2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\phiback2d.m" (lines 1-21). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [sol1n]=phiback2d(n,dt,J,...
 */
static mxArray * Mphiback2d(int nargout_,
                            mxArray * n,
                            mxArray * dt,
                            mxArray * J,
                            mxArray * G,
                            mxArray * M1,
                            mxArray * phi1np1,
                            mxArray * phi1n) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_phiback2d);
    mxArray * sol1n = NULL;
    mxArray * phi1nm1 = NULL;
    mclCopyArray(&n);
    mclCopyArray(&dt);
    mclCopyArray(&J);
    mclCopyArray(&G);
    mclCopyArray(&M1);
    mclCopyArray(&phi1np1);
    mclCopyArray(&phi1n);
    /*
     * G,M1,phi1np1,phi1n)
     * 
     * % Resolution of the retrograde system of elasticity:
     * 
     * % U_(tt) - mu*laplacian(U) - (lambda+mu)*grad(div(U)) = 0  in Omega x(0,T)
     * % U(x,y,T)=e0  U_(t)(x,y,0)=e1
     * % U = 0  on Boundary of Omega
     * 
     * % by a scheme in finite diff. to the order 2 at time and in space
     * 
     * % A single step of time is calculated: phi in time n*dt
     * 
     * phi1nm1 = M1*phi1n - phi1np1;
     */
    mlfAssign(
      &phi1nm1,
      mclMinus(
        mclMtimes(mclVa(M1, "M1"), mclVa(phi1n, "phi1n")),
        mclVa(phi1np1, "phi1np1")));
    /*
     * sol1n = phi1nm1;
     */
    mlfAssign(&sol1n, mclVv(phi1nm1, "phi1nm1"));
    mclValidateOutput(sol1n, 1, nargout_, "sol1n", "phiback2d");
    mxDestroyArray(phi1nm1);
    mxDestroyArray(phi1n);
    mxDestroyArray(phi1np1);
    mxDestroyArray(M1);
    mxDestroyArray(G);
    mxDestroyArray(J);
    mxDestroyArray(dt);
    mxDestroyArray(n);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return sol1n;
    /*
     * 
     * 
     * 
     * 
     * 
     */
}
