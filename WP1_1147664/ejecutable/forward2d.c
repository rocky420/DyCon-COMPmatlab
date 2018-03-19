/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "forward2d.h"
#include "libmatlbm.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;
static mxArray * _mxarray2_;
static mxArray * _mxarray3_;

void InitializeModule_forward2d(void) {
    _mxarray0_ = mclInitializeDouble(0.0);
    _mxarray1_ = mclInitializeDouble(2.0);
    _mxarray2_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray3_ = mclInitializeDouble(1.0);
}

void TerminateModule_forward2d(void) {
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mforward2d(mxArray * * sol1Np1,
                            int nargout_,
                            mxArray * X,
                            mxArray * Y,
                            mxArray * G,
                            mxArray * J,
                            mxArray * dt,
                            mxArray * N,
                            mxArray * M1,
                            mxArray * e01,
                            mxArray * e11);

_mexLocalFunctionTable _local_function_table_forward2d
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfForward2d" contains the normal interface for the
 * "forward2d" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\forward2d.m" (lines 1-64).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfForward2d(mxArray * * sol1Np1,
                       mxArray * X,
                       mxArray * Y,
                       mxArray * G,
                       mxArray * J,
                       mxArray * dt,
                       mxArray * N,
                       mxArray * M1,
                       mxArray * e01,
                       mxArray * e11) {
    int nargout = 1;
    mxArray * sol1N = NULL;
    mxArray * sol1Np1__ = NULL;
    mlfEnterNewContext(1, 9, sol1Np1, X, Y, G, J, dt, N, M1, e01, e11);
    if (sol1Np1 != NULL) {
        ++nargout;
    }
    sol1N = Mforward2d(&sol1Np1__, nargout, X, Y, G, J, dt, N, M1, e01, e11);
    mlfRestorePreviousContext(1, 9, sol1Np1, X, Y, G, J, dt, N, M1, e01, e11);
    if (sol1Np1 != NULL) {
        mclCopyOutputArg(sol1Np1, sol1Np1__);
    } else {
        mxDestroyArray(sol1Np1__);
    }
    return mlfReturnValue(sol1N);
}

/*
 * The function "mlxForward2d" contains the feval interface for the "forward2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\forward2d.m" (lines 1-64). The feval
 * function calls the implementation version of forward2d through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxForward2d(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[9];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: forward2d Line: 1 Column:"
            " 1 The function \"forward2d\" was called with m"
            "ore than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 9) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: forward2d Line: 1 Column:"
            " 1 The function \"forward2d\" was called with m"
            "ore than the declared number of inputs (9)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 9 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 9; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(
      0,
      9,
      mprhs[0],
      mprhs[1],
      mprhs[2],
      mprhs[3],
      mprhs[4],
      mprhs[5],
      mprhs[6],
      mprhs[7],
      mprhs[8]);
    mplhs[0]
      = Mforward2d(
          &mplhs[1],
          nlhs,
          mprhs[0],
          mprhs[1],
          mprhs[2],
          mprhs[3],
          mprhs[4],
          mprhs[5],
          mprhs[6],
          mprhs[7],
          mprhs[8]);
    mlfRestorePreviousContext(
      0,
      9,
      mprhs[0],
      mprhs[1],
      mprhs[2],
      mprhs[3],
      mprhs[4],
      mprhs[5],
      mprhs[6],
      mprhs[7],
      mprhs[8]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "Mforward2d" is the implementation version of the "forward2d"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\forward2d.m" (lines 1-64). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [sol1N,sol1Np1] = forward2d(X,Y,G,J,dt,N,M1,e01,e11);
 */
static mxArray * Mforward2d(mxArray * * sol1Np1,
                            int nargout_,
                            mxArray * X,
                            mxArray * Y,
                            mxArray * G,
                            mxArray * J,
                            mxArray * dt,
                            mxArray * N,
                            mxArray * M1,
                            mxArray * e01,
                            mxArray * e11) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_forward2d);
    mxArray * sol1N = NULL;
    mxArray * Y1np1 = NULL;
    mxArray * np1 = NULL;
    mxArray * Y1n = NULL;
    mxArray * Y1nm1 = NULL;
    mxArray * du1 = NULL;
    mxArray * u1 = NULL;
    mclCopyArray(&X);
    mclCopyArray(&Y);
    mclCopyArray(&G);
    mclCopyArray(&J);
    mclCopyArray(&dt);
    mclCopyArray(&N);
    mclCopyArray(&M1);
    mclCopyArray(&e01);
    mclCopyArray(&e11);
    /*
     * 
     * % Resolution of elasticity system:
     * 
     * %  U_(tt) - mu*laplacian(U) - (lambda+mu)*grad(div(U)) = 0 indans Omega x(0,T)
     * %  U(x,y,0) = e0	U_(t)(x,y,0) = e1
     * %  U = 0   on Omega x(0,T)
     * 
     * % By a explicit scheme in the finited diff. clarify of order 2 in time and in space
     * 
     * % *********** Description of variables and constants ***********
     * % h: step to the discretization in space
     * % X,Y and G: meshing
     * % J: number of points on the interior
     * % dt: step time of the compatible scheme with the cond CFL
     * % N: number of steps of time made by forward.m
     * % lambda and mu: coefficients of Lamé
     * % **************************************************************
     * 
     * % ********************* Variables of exit  *********************
     * % soliN: the solution phi in time N 
     * % soliNp1: the solution phi in time N+1
     * % **************************************************************
     * 
     * 
     * 
     * u1 = e01;
     */
    mlfAssign(&u1, mclVa(e01, "e01"));
    /*
     * du1 = e11;
     */
    mlfAssign(&du1, mclVa(e11, "e11"));
    /*
     * 
     * %--------------------------------------------------------------
     * % Initialization of the buckle in time
     * %--------------------------------------------------------------
     * 
     * Y1nm1 = u1;
     */
    mlfAssign(&Y1nm1, mclVv(u1, "u1"));
    /*
     * 
     * Y1nm1 = Y1nm1(G>0);
     */
    mlfAssign(
      &Y1nm1,
      mclArrayRef1(mclVv(Y1nm1, "Y1nm1"), mclGt(mclVa(G, "G"), _mxarray0_)));
    /*
     * 
     * du1 = du1(G>0);
     */
    mlfAssign(
      &du1, mclArrayRef1(mclVv(du1, "du1"), mclGt(mclVa(G, "G"), _mxarray0_)));
    /*
     * 
     * %****************** Calculation of u in time dt**********************
     * 
     * Y1n = ( M1*Y1nm1 + 2*dt*du1 )/2;
     */
    mlfAssign(
      &Y1n,
      mclMrdivide(
        mclPlus(
          mclMtimes(mclVa(M1, "M1"), mclVv(Y1nm1, "Y1nm1")),
          mclMtimes(mclMtimes(_mxarray1_, mclVa(dt, "dt")), mclVv(du1, "du1"))),
        _mxarray1_));
    /*
     * 
     * %-------------------------------------------------------------
     * % Buckle in time
     * %-------------------------------------------------------------
     * 
     * for np1 = 2:N+1 
     */
    {
        int v_ = mclForIntStart(2);
        int e_ = mclForIntEnd(mclPlus(mclVa(N, "N"), _mxarray3_));
        if (v_ > e_) {
            mlfAssign(&np1, _mxarray2_);
        } else {
            /*
             * 
             * %******************** Calculation of Y1(n+1) *********************
             * 
             * Y1np1 = M1*Y1n - Y1nm1;
             * 
             * %******************** Calculation of Y2(n+1) *********************
             * 
             * % Preparation of the next passage in the buckle
             * 
             * Y1nm1 = Y1n; Y1n = Y1np1;
             * 
             * end
             */
            for (; ; ) {
                mlfAssign(
                  &Y1np1,
                  mclMinus(
                    mclMtimes(mclVa(M1, "M1"), mclVv(Y1n, "Y1n")),
                    mclVv(Y1nm1, "Y1nm1")));
                mlfAssign(&Y1nm1, mclVv(Y1n, "Y1n"));
                mlfAssign(&Y1n, mclVv(Y1np1, "Y1np1"));
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&np1, mlfScalar(v_));
        }
    }
    /*
     * 
     * sol1N = Y1nm1;
     */
    mlfAssign(&sol1N, mclVv(Y1nm1, "Y1nm1"));
    /*
     * sol1Np1 = Y1n;
     */
    mlfAssign(sol1Np1, mclVv(Y1n, "Y1n"));
    mclValidateOutput(sol1N, 1, nargout_, "sol1N", "forward2d");
    mclValidateOutput(*sol1Np1, 2, nargout_, "sol1Np1", "forward2d");
    mxDestroyArray(u1);
    mxDestroyArray(du1);
    mxDestroyArray(Y1nm1);
    mxDestroyArray(Y1n);
    mxDestroyArray(np1);
    mxDestroyArray(Y1np1);
    mxDestroyArray(e11);
    mxDestroyArray(e01);
    mxDestroyArray(M1);
    mxDestroyArray(N);
    mxDestroyArray(dt);
    mxDestroyArray(J);
    mxDestroyArray(G);
    mxDestroyArray(Y);
    mxDestroyArray(X);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return sol1N;
}
