/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:58 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "elftos.h"
#include "error1.h"
#include "error2.h"
#include "libmatlbm.h"
#include "libmmfile.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;
static mxArray * _mxarray2_;
static mxArray * _mxarray3_;
static mxArray * _mxarray4_;
static mxArray * _mxarray5_;
static mxArray * _mxarray6_;

static mxChar _array8_[34] = { 'n', 'o', ' ', 'c', 'o', 'n', 'v', 'e', 'r',
                               'g', 'e', 'n', 'c', 'e', ':', ' ', 'e', 'r',
                               'r', 'o', 'r', ' ', 'g', 'r', 'e', 'a', 't',
                               'e', 'r', ' ', 't', 'h', 'a', 'n' };
static mxArray * _mxarray7_;
static mxArray * _mxarray9_;

static mxChar _array12_[2] = { 'n', 'o' };
static mxArray * _mxarray11_;
static mxArray * _mxarray10_;

static mxChar _array14_[24] = { 'm', 'o', 'r', 'e', ' ', 't', 'h', 'a',
                                'n', ' ', '1', '0', '0', ' ', 'i', 't',
                                'e', 'r', 'a', 't', 'i', 'o', 'n', 's' };
static mxArray * _mxarray13_;

static mxChar _array16_[11] = { 'c', 'o', 'n', 'v', 'e', 'r',
                                'g', 'e', 'n', 'c', 'e' };
static mxArray * _mxarray15_;
static mxArray * _mxarray17_;

void InitializeModule_elftos(void) {
    _mxarray0_ = mclInitializeDouble(1.0);
    _mxarray1_ = mclInitializeDouble(0.0);
    _mxarray2_ = mclInitializeDouble(2.0);
    _mxarray3_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray4_ = mclInitializeDouble(-1.0);
    _mxarray5_ = mclInitializeDouble(6.0);
    _mxarray6_ = mclInitializeDouble(10000.0);
    _mxarray7_ = mclInitializeString(34, _array8_);
    _mxarray9_ = mclInitializeDouble(100.0);
    _mxarray11_ = mclInitializeString(2, _array12_);
    _mxarray10_ = mclInitializeCell(_mxarray11_);
    _mxarray13_ = mclInitializeString(24, _array14_);
    _mxarray15_ = mclInitializeString(11, _array16_);
    _mxarray17_ = mclInitializeDouble(.5);
}

void TerminateModule_elftos(void) {
    mxDestroyArray(_mxarray17_);
    mxDestroyArray(_mxarray15_);
    mxDestroyArray(_mxarray13_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray11_);
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * mlfElftos_ondas1(mxArray * n,
                                  mxArray * mu,
                                  mxArray * a,
                                  mxArray * b,
                                  mxArray * T,
                                  mxArray * h,
                                  mxArray * k,
                                  mxArray * N,
                                  mxArray * e0,
                                  mxArray * e1,
                                  mxArray * M,
                                  mxArray * K,
                                  mxArray * beta,
                                  mxArray * gamma);
static void mlxElftos_ondas1(int nlhs,
                             mxArray * plhs[],
                             int nrhs,
                             mxArray * prhs[]);
static mxArray * mlfElftos_ondas2(mxArray * * resu1,
                                  mxArray * n,
                                  mxArray * mu,
                                  mxArray * a,
                                  mxArray * b,
                                  mxArray * T,
                                  mxArray * h,
                                  mxArray * k,
                                  mxArray * N,
                                  mxArray * phix,
                                  mxArray * M,
                                  mxArray * K,
                                  mxArray * E,
                                  mxArray * r,
                                  mxArray * beta,
                                  mxArray * gamma,
                                  mxArray * u0,
                                  mxArray * u1);
static void mlxElftos_ondas2(int nlhs,
                             mxArray * plhs[],
                             int nrhs,
                             mxArray * prhs[]);
static mxArray * mlfElftos_eliptic(mxArray * K, mxArray * h, mxArray * f);
static void mlxElftos_eliptic(int nlhs,
                              mxArray * plhs[],
                              int nrhs,
                              mxArray * prhs[]);
static mxArray * mlfElftos_reg(mxArray * t, mxArray * T);
static void mlxElftos_reg(int nlhs,
                          mxArray * plhs[],
                          int nrhs,
                          mxArray * prhs[]);
static mxArray * Melftos(mxArray * * resid,
                         mxArray * * t,
                         int nargout_,
                         mxArray * a,
                         mxArray * b,
                         mxArray * n,
                         mxArray * T,
                         mxArray * mu,
                         mxArray * eps,
                         mxArray * Nbeta,
                         mxArray * Ngamma,
                         mxArray * r,
                         mxArray * u0,
                         mxArray * u1);
static mxArray * Melftos_ondas1(int nargout_,
                                mxArray * n,
                                mxArray * mu,
                                mxArray * a,
                                mxArray * b,
                                mxArray * T,
                                mxArray * h,
                                mxArray * k,
                                mxArray * N,
                                mxArray * e0,
                                mxArray * e1,
                                mxArray * M,
                                mxArray * K,
                                mxArray * beta,
                                mxArray * gamma);
static mxArray * Melftos_ondas2(mxArray * * resu1,
                                int nargout_,
                                mxArray * n,
                                mxArray * mu,
                                mxArray * a,
                                mxArray * b,
                                mxArray * T,
                                mxArray * h,
                                mxArray * k,
                                mxArray * N,
                                mxArray * phix,
                                mxArray * M,
                                mxArray * K,
                                mxArray * E,
                                mxArray * r,
                                mxArray * beta,
                                mxArray * gamma,
                                mxArray * u0,
                                mxArray * u1);
static mxArray * Melftos_eliptic(int nargout_,
                                 mxArray * K,
                                 mxArray * h,
                                 mxArray * f);
static mxArray * Melftos_reg(int nargout_, mxArray * t, mxArray * T);

static mexFunctionTableEntry local_function_table_[4]
  = { { "ondas1", mlxElftos_ondas1, 14, 1, NULL },
      { "ondas2", mlxElftos_ondas2, 17, 2, NULL },
      { "eliptic", mlxElftos_eliptic, 3, 1, NULL },
      { "reg", mlxElftos_reg, 2, 1, NULL } };

_mexLocalFunctionTable _local_function_table_elftos
  = { 4, local_function_table_ };

/*
 * The function "mlfElftos" contains the normal interface for the "elftos"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\elftos.m" (lines 1-173). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfElftos(mxArray * * resid,
                    mxArray * * t,
                    mxArray * a,
                    mxArray * b,
                    mxArray * n,
                    mxArray * T,
                    mxArray * mu,
                    mxArray * eps,
                    mxArray * Nbeta,
                    mxArray * Ngamma,
                    mxArray * r,
                    mxArray * u0,
                    mxArray * u1) {
    int nargout = 1;
    mxArray * control = NULL;
    mxArray * resid__ = NULL;
    mxArray * t__ = NULL;
    mlfEnterNewContext(
      2, 11, resid, t, a, b, n, T, mu, eps, Nbeta, Ngamma, r, u0, u1);
    if (resid != NULL) {
        ++nargout;
    }
    if (t != NULL) {
        ++nargout;
    }
    control
      = Melftos(
          &resid__,
          &t__,
          nargout,
          a,
          b,
          n,
          T,
          mu,
          eps,
          Nbeta,
          Ngamma,
          r,
          u0,
          u1);
    mlfRestorePreviousContext(
      2, 11, resid, t, a, b, n, T, mu, eps, Nbeta, Ngamma, r, u0, u1);
    if (resid != NULL) {
        mclCopyOutputArg(resid, resid__);
    } else {
        mxDestroyArray(resid__);
    }
    if (t != NULL) {
        mclCopyOutputArg(t, t__);
    } else {
        mxDestroyArray(t__);
    }
    return mlfReturnValue(control);
}

/*
 * The function "mlxElftos" contains the feval interface for the "elftos"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\elftos.m" (lines 1-173). The feval
 * function calls the implementation version of elftos through this function.
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxElftos(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[11];
    mxArray * mplhs[3];
    int i;
    if (nlhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: elftos Line: 24 Column:"
            " 1 The function \"elftos\" was called with mo"
            "re than the declared number of outputs (3)."),
          NULL);
    }
    if (nrhs > 11) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: elftos Line: 24 Column:"
            " 1 The function \"elftos\" was called with mo"
            "re than the declared number of inputs (11)."),
          NULL);
    }
    for (i = 0; i < 3; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 11 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 11; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(
      0,
      11,
      mprhs[0],
      mprhs[1],
      mprhs[2],
      mprhs[3],
      mprhs[4],
      mprhs[5],
      mprhs[6],
      mprhs[7],
      mprhs[8],
      mprhs[9],
      mprhs[10]);
    mplhs[0]
      = Melftos(
          &mplhs[1],
          &mplhs[2],
          nlhs,
          mprhs[0],
          mprhs[1],
          mprhs[2],
          mprhs[3],
          mprhs[4],
          mprhs[5],
          mprhs[6],
          mprhs[7],
          mprhs[8],
          mprhs[9],
          mprhs[10]);
    mlfRestorePreviousContext(
      0,
      11,
      mprhs[0],
      mprhs[1],
      mprhs[2],
      mprhs[3],
      mprhs[4],
      mprhs[5],
      mprhs[6],
      mprhs[7],
      mprhs[8],
      mprhs[9],
      mprhs[10]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 3 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 3; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "mlfElftos_ondas1" contains the normal interface for the
 * "elftos/ondas1" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\elftos.m" (lines 173-225).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static mxArray * mlfElftos_ondas1(mxArray * n,
                                  mxArray * mu,
                                  mxArray * a,
                                  mxArray * b,
                                  mxArray * T,
                                  mxArray * h,
                                  mxArray * k,
                                  mxArray * N,
                                  mxArray * e0,
                                  mxArray * e1,
                                  mxArray * M,
                                  mxArray * K,
                                  mxArray * beta,
                                  mxArray * gamma) {
    int nargout = 1;
    mxArray * resu = NULL;
    mlfEnterNewContext(
      0, 14, n, mu, a, b, T, h, k, N, e0, e1, M, K, beta, gamma);
    resu
      = Melftos_ondas1(
          nargout, n, mu, a, b, T, h, k, N, e0, e1, M, K, beta, gamma);
    mlfRestorePreviousContext(
      0, 14, n, mu, a, b, T, h, k, N, e0, e1, M, K, beta, gamma);
    return mlfReturnValue(resu);
}

/*
 * The function "mlxElftos_ondas1" contains the feval interface for the
 * "elftos/ondas1" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\elftos.m" (lines 173-225).
 * The feval function calls the implementation version of elftos/ondas1 through
 * this function. This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
static void mlxElftos_ondas1(int nlhs,
                             mxArray * plhs[],
                             int nrhs,
                             mxArray * prhs[]) {
    mxArray * mprhs[14];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: elftos/ondas1 Line: 173 Colu"
            "mn: 1 The function \"elftos/ondas1\" was called wi"
            "th more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 14) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: elftos/ondas1 Line: 173 Colu"
            "mn: 1 The function \"elftos/ondas1\" was called wi"
            "th more than the declared number of inputs (14)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 14 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 14; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(
      0,
      14,
      mprhs[0],
      mprhs[1],
      mprhs[2],
      mprhs[3],
      mprhs[4],
      mprhs[5],
      mprhs[6],
      mprhs[7],
      mprhs[8],
      mprhs[9],
      mprhs[10],
      mprhs[11],
      mprhs[12],
      mprhs[13]);
    mplhs[0]
      = Melftos_ondas1(
          nlhs,
          mprhs[0],
          mprhs[1],
          mprhs[2],
          mprhs[3],
          mprhs[4],
          mprhs[5],
          mprhs[6],
          mprhs[7],
          mprhs[8],
          mprhs[9],
          mprhs[10],
          mprhs[11],
          mprhs[12],
          mprhs[13]);
    mlfRestorePreviousContext(
      0,
      14,
      mprhs[0],
      mprhs[1],
      mprhs[2],
      mprhs[3],
      mprhs[4],
      mprhs[5],
      mprhs[6],
      mprhs[7],
      mprhs[8],
      mprhs[9],
      mprhs[10],
      mprhs[11],
      mprhs[12],
      mprhs[13]);
    plhs[0] = mplhs[0];
}

/*
 * The function "mlfElftos_ondas2" contains the normal interface for the
 * "elftos/ondas2" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\elftos.m" (lines 225-290).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static mxArray * mlfElftos_ondas2(mxArray * * resu1,
                                  mxArray * n,
                                  mxArray * mu,
                                  mxArray * a,
                                  mxArray * b,
                                  mxArray * T,
                                  mxArray * h,
                                  mxArray * k,
                                  mxArray * N,
                                  mxArray * phix,
                                  mxArray * M,
                                  mxArray * K,
                                  mxArray * E,
                                  mxArray * r,
                                  mxArray * beta,
                                  mxArray * gamma,
                                  mxArray * u0,
                                  mxArray * u1) {
    int nargout = 1;
    mxArray * resu0 = NULL;
    mxArray * resu1__ = NULL;
    mlfEnterNewContext(
      1,
      17,
      resu1,
      n,
      mu,
      a,
      b,
      T,
      h,
      k,
      N,
      phix,
      M,
      K,
      E,
      r,
      beta,
      gamma,
      u0,
      u1);
    if (resu1 != NULL) {
        ++nargout;
    }
    resu0
      = Melftos_ondas2(
          &resu1__,
          nargout,
          n,
          mu,
          a,
          b,
          T,
          h,
          k,
          N,
          phix,
          M,
          K,
          E,
          r,
          beta,
          gamma,
          u0,
          u1);
    mlfRestorePreviousContext(
      1,
      17,
      resu1,
      n,
      mu,
      a,
      b,
      T,
      h,
      k,
      N,
      phix,
      M,
      K,
      E,
      r,
      beta,
      gamma,
      u0,
      u1);
    if (resu1 != NULL) {
        mclCopyOutputArg(resu1, resu1__);
    } else {
        mxDestroyArray(resu1__);
    }
    return mlfReturnValue(resu0);
}

/*
 * The function "mlxElftos_ondas2" contains the feval interface for the
 * "elftos/ondas2" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\elftos.m" (lines 225-290).
 * The feval function calls the implementation version of elftos/ondas2 through
 * this function. This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
static void mlxElftos_ondas2(int nlhs,
                             mxArray * plhs[],
                             int nrhs,
                             mxArray * prhs[]) {
    mxArray * mprhs[17];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: elftos/ondas2 Line: 225 Colu"
            "mn: 1 The function \"elftos/ondas2\" was called wi"
            "th more than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 17) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: elftos/ondas2 Line: 225 Colu"
            "mn: 1 The function \"elftos/ondas2\" was called wi"
            "th more than the declared number of inputs (17)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 17 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 17; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(
      0,
      17,
      mprhs[0],
      mprhs[1],
      mprhs[2],
      mprhs[3],
      mprhs[4],
      mprhs[5],
      mprhs[6],
      mprhs[7],
      mprhs[8],
      mprhs[9],
      mprhs[10],
      mprhs[11],
      mprhs[12],
      mprhs[13],
      mprhs[14],
      mprhs[15],
      mprhs[16]);
    mplhs[0]
      = Melftos_ondas2(
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
          mprhs[8],
          mprhs[9],
          mprhs[10],
          mprhs[11],
          mprhs[12],
          mprhs[13],
          mprhs[14],
          mprhs[15],
          mprhs[16]);
    mlfRestorePreviousContext(
      0,
      17,
      mprhs[0],
      mprhs[1],
      mprhs[2],
      mprhs[3],
      mprhs[4],
      mprhs[5],
      mprhs[6],
      mprhs[7],
      mprhs[8],
      mprhs[9],
      mprhs[10],
      mprhs[11],
      mprhs[12],
      mprhs[13],
      mprhs[14],
      mprhs[15],
      mprhs[16]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "mlfElftos_eliptic" contains the normal interface for the
 * "elftos/eliptic" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\elftos.m" (lines 290-311).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static mxArray * mlfElftos_eliptic(mxArray * K, mxArray * h, mxArray * f) {
    int nargout = 1;
    mxArray * resu = NULL;
    mlfEnterNewContext(0, 3, K, h, f);
    resu = Melftos_eliptic(nargout, K, h, f);
    mlfRestorePreviousContext(0, 3, K, h, f);
    return mlfReturnValue(resu);
}

/*
 * The function "mlxElftos_eliptic" contains the feval interface for the
 * "elftos/eliptic" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\elftos.m" (lines 290-311).
 * The feval function calls the implementation version of elftos/eliptic
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxElftos_eliptic(int nlhs,
                              mxArray * plhs[],
                              int nrhs,
                              mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: elftos/eliptic Line: 290 Colu"
            "mn: 1 The function \"elftos/eliptic\" was called wi"
            "th more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: elftos/eliptic Line: 290 Colu"
            "mn: 1 The function \"elftos/eliptic\" was called wi"
            "th more than the declared number of inputs (3)."),
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
    mplhs[0] = Melftos_eliptic(nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    plhs[0] = mplhs[0];
}

/*
 * The function "mlfElftos_reg" contains the normal interface for the
 * "elftos/reg" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\elftos.m" (lines 311-325).
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static mxArray * mlfElftos_reg(mxArray * t, mxArray * T) {
    int nargout = 1;
    mxArray * resu = NULL;
    mlfEnterNewContext(0, 2, t, T);
    resu = Melftos_reg(nargout, t, T);
    mlfRestorePreviousContext(0, 2, t, T);
    return mlfReturnValue(resu);
}

/*
 * The function "mlxElftos_reg" contains the feval interface for the
 * "elftos/reg" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\elftos.m" (lines 311-325).
 * The feval function calls the implementation version of elftos/reg through
 * this function. This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
static void mlxElftos_reg(int nlhs,
                          mxArray * plhs[],
                          int nrhs,
                          mxArray * prhs[]) {
    mxArray * mprhs[2];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: elftos/reg Line: 311 Colum"
            "n: 1 The function \"elftos/reg\" was called with"
            " more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: elftos/reg Line: 311 Colum"
            "n: 1 The function \"elftos/reg\" was called with"
            " more than the declared number of inputs (2)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 2 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 2; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 2, mprhs[0], mprhs[1]);
    mplhs[0] = Melftos_reg(nlhs, mprhs[0], mprhs[1]);
    mlfRestorePreviousContext(0, 2, mprhs[0], mprhs[1]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Melftos" is the implementation version of the "elftos"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\elftos.m" (lines 1-173). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * % Function 'elftos.m'
 * 
 * % Resolution of the problem of control in one dimension
 * % Method HUM-gradient
 * % Approximation of the wave equation for finite differences
 * % Control in the right wing
 * % u_tt-u_xx=0 en (a,b)
 * % u(a,t)=0, u(b,t)=g(t) control
 * % u(x,0)=u0(x).
 * % u_t(x,0)=u1(x).
 * 
 * % Parameters of entry:
 * % n = number of interior points in the variable x
 * % mu = number of courant
 * % T = final time 
 * % a = left wing of the interval
 * % b = right wing of the interval
 * % eps = tolerance
 * % u0= final position
 * % u1= final speed
 * % Nbeta, Ngamma = parameters of Newmark's methods of the solution 
 * % of the wave ecuation
 * 
 * function [control,resid,t]=elftos(a,b,n,T,mu,eps,Nbeta,Ngamma,r,u0,u1)
 */
static mxArray * Melftos(mxArray * * resid,
                         mxArray * * t,
                         int nargout_,
                         mxArray * a,
                         mxArray * b,
                         mxArray * n,
                         mxArray * T,
                         mxArray * mu,
                         mxArray * eps,
                         mxArray * Nbeta,
                         mxArray * Ngamma,
                         mxArray * r,
                         mxArray * u0,
                         mxArray * u1) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_elftos);
    mxArray * control = NULL;
    mxArray * Mat = NULL;
    mxArray * Kt = NULL;
    mxArray * user_response = NULL;
    mxArray * ans = NULL;
    mxArray * p = NULL;
    mxArray * gamma = NULL;
    mxArray * gamman = NULL;
    mxArray * rho = NULL;
    mxArray * rhod = NULL;
    mxArray * rhon = NULL;
    mxArray * g1t = NULL;
    mxArray * g0t = NULL;
    mxArray * psi1n = NULL;
    mxArray * psi0n = NULL;
    mxArray * phixn = NULL;
    mxArray * ciclo = NULL;
    mxArray * itera = NULL;
    mxArray * w1 = NULL;
    mxArray * w0 = NULL;
    mxArray * residuo = NULL;
    mxArray * residuo0 = NULL;
    mxArray * g1 = NULL;
    mxArray * g0 = NULL;
    mxArray * sm = NULL;
    mxArray * psi1 = NULL;
    mxArray * psi0 = NULL;
    mxArray * phix = NULL;
    mxArray * e1 = NULL;
    mxArray * e0 = NULL;
    mxArray * RR = NULL;
    mxArray * E = NULL;
    mxArray * reguh = NULL;
    mxArray * regu = NULL;
    mxArray * K = NULL;
    mxArray * i = NULL;
    mxArray * M = NULL;
    mxArray * N = NULL;
    mxArray * k = NULL;
    mxArray * x = NULL;
    mxArray * h = NULL;
    mclCopyArray(&a);
    mclCopyArray(&b);
    mclCopyArray(&n);
    mclCopyArray(&T);
    mclCopyArray(&mu);
    mclCopyArray(&eps);
    mclCopyArray(&Nbeta);
    mclCopyArray(&Ngamma);
    mclCopyArray(&r);
    mclCopyArray(&u0);
    mclCopyArray(&u1);
    /*
     * 
     * % h = distance between two consecutive points (space)
     * % x = spatial coordinates of the nodes
     * % k = distance between two consecutive points (time)
     * % N = number of points in the temporary variable
     * % t = temporary coordinates of the nodes (time)
     * 
     * h = (b-a)/(n+1);
     */
    mlfAssign(
      &h,
      mclMrdivide(
        mclMinus(mclVa(b, "b"), mclVa(a, "a")),
        mclPlus(mclVa(n, "n"), _mxarray0_)));
    /*
     * x = a+h:h:b-h;
     */
    mlfAssign(
      &x,
      mlfColon(
        mclPlus(mclVa(a, "a"), mclVv(h, "h")),
        mclVv(h, "h"),
        mclMinus(mclVa(b, "b"), mclVv(h, "h"))));
    /*
     * k = mu*h;
     */
    mlfAssign(&k, mclMtimes(mclVa(mu, "mu"), mclVv(h, "h")));
    /*
     * N = floor(T/k);
     */
    mlfAssign(&N, mlfFloor(mclMrdivide(mclVa(T, "T"), mclVv(k, "k"))));
    /*
     * T=N*k;
     */
    mlfAssign(&T, mclMtimes(mclVv(N, "N"), mclVv(k, "k")));
    /*
     * t = 0:k:T;
     */
    mlfAssign(t, mlfColon(_mxarray1_, mclVv(k, "k"), mclVa(T, "T")));
    /*
     * 
     * % Matrix of mass M
     * % r=0    => lumped mass
     * % r=1/6  => consistent mass
     * % r=1/12 => higher-order mass
     * 
     * M = (1-2*r)*speye(n);
     */
    mlfAssign(
      &M,
      mclMtimes(
        mclMinus(_mxarray0_, mclMtimes(_mxarray2_, mclVa(r, "r"))),
        mlfSpeye(mclVa(n, "n"), NULL)));
    /*
     * for i=2:n
     */
    {
        int v_ = mclForIntStart(2);
        int e_ = mclForIntEnd(mclVa(n, "n"));
        if (v_ > e_) {
            mlfAssign(&i, _mxarray3_);
        } else {
            /*
             * M(i-1,i)=r;
             * M(i,i-1)=r;
             * end
             */
            for (; ; ) {
                mclIntArrayAssign2(&M, mclVa(r, "r"), v_ - 1, v_);
                mclIntArrayAssign2(&M, mclVa(r, "r"), v_, v_ - 1);
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&i, mlfScalar(v_));
        }
    }
    /*
     * M=h*M;
     */
    mlfAssign(&M, mclMtimes(mclVv(h, "h"), mclVv(M, "M")));
    /*
     * 
     * % Matrix de rigidity K: discretization of the laplacian
     * K = 2*speye(n); 
     */
    mlfAssign(&K, mclMtimes(_mxarray2_, mlfSpeye(mclVa(n, "n"), NULL)));
    /*
     * for i=2:n
     */
    {
        int v_ = mclForIntStart(2);
        int e_ = mclForIntEnd(mclVa(n, "n"));
        if (v_ > e_) {
            mlfAssign(&i, _mxarray3_);
        } else {
            /*
             * K(i-1,i)=-1;
             * K(i,i-1)=-1;
             * end
             */
            for (; ; ) {
                mclIntArrayAssign2(&K, _mxarray4_, v_ - 1, v_);
                mclIntArrayAssign2(&K, _mxarray4_, v_, v_ - 1);
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&i, mlfScalar(v_));
        }
    }
    /*
     * K=(1/h)*K;
     */
    mlfAssign(
      &K, mclMtimes(mclMrdivide(_mxarray0_, mclVv(h, "h")), mclVv(K, "K")));
    /*
     * 
     * % calculate of the matrix that calculates -r*h^2*f''+f/h^2
     * % And the second member of the system allows to calculate
     * % for a control f given
     * 
     * regu=reg(t,T);
     */
    mlfAssign(&regu, mlfElftos_reg(mclVv(*t, "t"), mclVa(T, "T")));
    /*
     * reguh=[regu(1:N),0];
     */
    mlfAssign(
      &reguh,
      mlfHorzcat(
        mclArrayRef1(
          mclVv(regu, "regu"), mlfColon(_mxarray0_, mclVv(N, "N"), NULL)),
        _mxarray1_,
        NULL));
    /*
     * E=2*diag(reguh);
     */
    mlfAssign(&E, mclMtimes(_mxarray2_, mlfDiag(mclVv(reguh, "reguh"), NULL)));
    /*
     * E=sparse(E);
     */
    mlfAssign(&E, mlfSparse(mclVv(E, "E"), NULL, NULL, NULL, NULL, NULL));
    /*
     * for i=2:N
     */
    {
        int v_ = mclForIntStart(2);
        int e_ = mclForIntEnd(mclVv(N, "N"));
        if (v_ > e_) {
            mlfAssign(&i, _mxarray3_);
        } else {
            /*
             * E(i-1,i)=-reguh(i);
             * E(i,i-1)=-reguh(i);
             * end
             */
            for (; ; ) {
                mclIntArrayAssign2(
                  &E,
                  mclUminus(mclIntArrayRef1(mclVv(reguh, "reguh"), v_)),
                  v_ - 1,
                  v_);
                mclIntArrayAssign2(
                  &E,
                  mclUminus(mclIntArrayRef1(mclVv(reguh, "reguh"), v_)),
                  v_,
                  v_ - 1);
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&i, mlfScalar(v_));
        }
    }
    /*
     * RR=sparse(diag(reguh));
     */
    mlfAssign(
      &RR,
      mlfSparse(
        mlfDiag(mclVv(reguh, "reguh"), NULL), NULL, NULL, NULL, NULL, NULL));
    /*
     * E=(r*h/k^2)*E+(1/h)*RR;
     */
    mlfAssign(
      &E,
      mclPlus(
        mclMtimes(
          mclMrdivide(
            mclMtimes(mclVa(r, "r"), mclVv(h, "h")),
            mclMpower(mclVv(k, "k"), _mxarray2_)),
          mclVv(E, "E")),
        mclMtimes(mclMrdivide(_mxarray0_, mclVv(h, "h")), mclVv(RR, "RR"))));
    /*
     * 
     * %%%%%%%%%%%%%%%%%%%%%%%%%%
     * % Step 0: Inicialitacion
     * %%%%%%%%%%%%%%%%%%%%%%%%%%
     * 
     * e0=zeros(n,1);
     */
    mlfAssign(&e0, mlfZeros(mclVa(n, "n"), _mxarray0_, NULL));
    /*
     * e1=zeros(n,1);
     */
    mlfAssign(&e1, mlfZeros(mclVa(n, "n"), _mxarray0_, NULL));
    /*
     * phix=zeros(1,N+1);
     */
    mlfAssign(
      &phix, mlfZeros(_mxarray0_, mclPlus(mclVv(N, "N"), _mxarray0_), NULL));
    /*
     * 
     * [psi0 psi1]=ondas2(n,mu,a,b,T,h,k,N,phix,M,K,E,r,Nbeta,Ngamma,u0,u1);
     */
    mlfAssign(
      &psi0,
      mlfElftos_ondas2(
        &psi1,
        mclVa(n, "n"),
        mclVa(mu, "mu"),
        mclVa(a, "a"),
        mclVa(b, "b"),
        mclVa(T, "T"),
        mclVv(h, "h"),
        mclVv(k, "k"),
        mclVv(N, "N"),
        mclVv(phix, "phix"),
        mclVv(M, "M"),
        mclVv(K, "K"),
        mclVv(E, "E"),
        mclVa(r, "r"),
        mclVa(Nbeta, "Nbeta"),
        mclVa(Ngamma, "Ngamma"),
        mclVa(u0, "u0"),
        mclVa(u1, "u1")));
    /*
     * 
     * sm=-psi1;
     */
    mlfAssign(&sm, mclUminus(mclVv(psi1, "psi1")));
    /*
     * g0=eliptic(K,h,sm);
     */
    mlfAssign(
      &g0, mlfElftos_eliptic(mclVv(K, "K"), mclVv(h, "h"), mclVv(sm, "sm")));
    /*
     * g1=M\psi0*h;
     */
    mlfAssign(
      &g1,
      mclMtimes(
        mlfMldivide(mclVv(M, "M"), mclVv(psi0, "psi0")), mclVv(h, "h")));
    /*
     * 
     * residuo0=sqrt(g0'*(K*g0)+g1'*(M*g1));
     */
    mlfAssign(
      &residuo0,
      mlfSqrt(
        mclPlus(
          mlf_times_transpose(
            mclVv(g0, "g0"),
            mclMtimes(mclVv(K, "K"), mclVv(g0, "g0")),
            _mxarray5_),
          mlf_times_transpose(
            mclVv(g1, "g1"),
            mclMtimes(mclVv(M, "M"), mclVv(g1, "g1")),
            _mxarray5_))));
    /*
     * residuo=residuo0;
     */
    mlfAssign(&residuo, mclVv(residuo0, "residuo0"));
    /*
     * resid=residuo;
     */
    mlfAssign(resid, mclVv(residuo, "residuo"));
    /*
     * 
     * w0=g0;
     */
    mlfAssign(&w0, mclVv(g0, "g0"));
    /*
     * w1=g1;
     */
    mlfAssign(&w1, mclVv(g1, "g1"));
    /*
     * 
     * %%%%%%%%%%%%%%%%%%%%%
     * % Step 1: Decrease
     * %%%%%%%%%%%%%%%%%%%%%
     * itera=0;
     */
    mlfAssign(&itera, _mxarray1_);
    /*
     * ciclo=1;
     */
    mlfAssign(&ciclo, _mxarray0_);
    /*
     * 
     * while (residuo>=eps)
     */
    while (mclGeBool(mclVv(residuo, "residuo"), mclVa(eps, "eps"))) {
        /*
         * itera=itera+1
         */
        mlfAssign(&itera, mclPlus(mclVv(itera, "itera"), _mxarray0_));
        mclPrintArray(mclVv(itera, "itera"), "itera");
        /*
         * phixn=ondas1(n,mu,a,b,T,h,k,N,w0,w1,M,K,Nbeta,Ngamma);
         */
        mlfAssign(
          &phixn,
          mlfElftos_ondas1(
            mclVa(n, "n"),
            mclVa(mu, "mu"),
            mclVa(a, "a"),
            mclVa(b, "b"),
            mclVa(T, "T"),
            mclVv(h, "h"),
            mclVv(k, "k"),
            mclVv(N, "N"),
            mclVv(w0, "w0"),
            mclVv(w1, "w1"),
            mclVv(M, "M"),
            mclVv(K, "K"),
            mclVa(Nbeta, "Nbeta"),
            mclVa(Ngamma, "Ngamma")));
        /*
         * 
         * [psi0n psi1n]=ondas2(n,mu,a,b,T,h,k,N,phixn,M,K,E,r,Nbeta,Ngamma,u0*0,u1*0);
         */
        mlfAssign(
          &psi0n,
          mlfElftos_ondas2(
            &psi1n,
            mclVa(n, "n"),
            mclVa(mu, "mu"),
            mclVa(a, "a"),
            mclVa(b, "b"),
            mclVa(T, "T"),
            mclVv(h, "h"),
            mclVv(k, "k"),
            mclVv(N, "N"),
            mclVv(phixn, "phixn"),
            mclVv(M, "M"),
            mclVv(K, "K"),
            mclVv(E, "E"),
            mclVa(r, "r"),
            mclVa(Nbeta, "Nbeta"),
            mclVa(Ngamma, "Ngamma"),
            mclMtimes(mclVa(u0, "u0"), _mxarray1_),
            mclMtimes(mclVa(u1, "u1"), _mxarray1_)));
        /*
         * 
         * g0t=eliptic(K,h,-psi1n);
         */
        mlfAssign(
          &g0t,
          mlfElftos_eliptic(
            mclVv(K, "K"), mclVv(h, "h"), mclUminus(mclVv(psi1n, "psi1n"))));
        /*
         * g1t=M\psi0n*h;
         */
        mlfAssign(
          &g1t,
          mclMtimes(
            mlfMldivide(mclVv(M, "M"), mclVv(psi0n, "psi0n")), mclVv(h, "h")));
        /*
         * 
         * % decrease
         * rhon=g0'*(K*g0)+g1'*(M*g1);
         */
        mlfAssign(
          &rhon,
          mclPlus(
            mlf_times_transpose(
              mclVv(g0, "g0"),
              mclMtimes(mclVv(K, "K"), mclVv(g0, "g0")),
              _mxarray5_),
            mlf_times_transpose(
              mclVv(g1, "g1"),
              mclMtimes(mclVv(M, "M"), mclVv(g1, "g1")),
              _mxarray5_)));
        /*
         * rhod=w0'*(K*g0t)+w1'*(M*g1t);
         */
        mlfAssign(
          &rhod,
          mclPlus(
            mlf_times_transpose(
              mclVv(w0, "w0"),
              mclMtimes(mclVv(K, "K"), mclVv(g0t, "g0t")),
              _mxarray5_),
            mlf_times_transpose(
              mclVv(w1, "w1"),
              mclMtimes(mclVv(M, "M"), mclVv(g1t, "g1t")),
              _mxarray5_)));
        /*
         * rho=rhon/rhod;
         */
        mlfAssign(&rho, mclMrdivide(mclVv(rhon, "rhon"), mclVv(rhod, "rhod")));
        /*
         * 
         * % Update 
         * e0=e0-rho*w0;
         */
        mlfAssign(
          &e0,
          mclMinus(
            mclVv(e0, "e0"), mclMtimes(mclVv(rho, "rho"), mclVv(w0, "w0"))));
        /*
         * e1=e1-rho*w1;
         */
        mlfAssign(
          &e1,
          mclMinus(
            mclVv(e1, "e1"), mclMtimes(mclVv(rho, "rho"), mclVv(w1, "w1"))));
        /*
         * phix=phix-rho*phixn;
         */
        mlfAssign(
          &phix,
          mclMinus(
            mclVv(phix, "phix"),
            mclMtimes(mclVv(rho, "rho"), mclVv(phixn, "phixn"))));
        /*
         * 
         * g0=g0-rho*g0t;
         */
        mlfAssign(
          &g0,
          mclMinus(
            mclVv(g0, "g0"), mclMtimes(mclVv(rho, "rho"), mclVv(g0t, "g0t"))));
        /*
         * g1=g1-rho*g1t;
         */
        mlfAssign(
          &g1,
          mclMinus(
            mclVv(g1, "g1"), mclMtimes(mclVv(rho, "rho"), mclVv(g1t, "g1t"))));
        /*
         * 
         * % Test of convergence
         * residuo=sqrt((g0'*(K*g0)+g1'*(M*g1))/residuo0)
         */
        mlfAssign(
          &residuo,
          mlfSqrt(
            mclMrdivide(
              mclPlus(
                mlf_times_transpose(
                  mclVv(g0, "g0"),
                  mclMtimes(mclVv(K, "K"), mclVv(g0, "g0")),
                  _mxarray5_),
                mlf_times_transpose(
                  mclVv(g1, "g1"),
                  mclMtimes(mclVv(M, "M"), mclVv(g1, "g1")),
                  _mxarray5_)),
              mclVv(residuo0, "residuo0"))));
        mclPrintArray(mclVv(residuo, "residuo"), "residuo");
        /*
         * 
         * resid=[resid residuo];
         */
        mlfAssign(
          resid,
          mlfHorzcat(mclVv(*resid, "resid"), mclVv(residuo, "residuo"), NULL));
        /*
         * % new decrease
         * gamman=g0'*(K*g0)+g1'*(M*g1);
         */
        mlfAssign(
          &gamman,
          mclPlus(
            mlf_times_transpose(
              mclVv(g0, "g0"),
              mclMtimes(mclVv(K, "K"), mclVv(g0, "g0")),
              _mxarray5_),
            mlf_times_transpose(
              mclVv(g1, "g1"),
              mclMtimes(mclVv(M, "M"), mclVv(g1, "g1")),
              _mxarray5_)));
        /*
         * gamma=gamman/rhon;
         */
        mlfAssign(
          &gamma, mclMrdivide(mclVv(gamman, "gamman"), mclVv(rhon, "rhon")));
        /*
         * 
         * w0=g0+gamma*w0;
         */
        mlfAssign(
          &w0,
          mclPlus(
            mclVv(g0, "g0"),
            mclMtimes(mclVv(gamma, "gamma"), mclVv(w0, "w0"))));
        /*
         * w1=g1+gamma*w1; 
         */
        mlfAssign(
          &w1,
          mclPlus(
            mclVv(g1, "g1"),
            mclMtimes(mclVv(gamma, "gamma"), mclVv(w1, "w1"))));
        /*
         * 
         * % To do that the program ends if there is no convergence
         * if residuo > 1.e4
         */
        if (mclGtBool(mclVv(residuo, "residuo"), _mxarray6_)) {
            /*
             * p=error2;
             */
            mlfAssign(&p, mlfNError2(0, mclValueVarargout(), NULL));
            /*
             * delete(p);
             */
            mlfDelete(mclVv(p, "p"), NULL);
            /*
             * 'no convergence: error greater than'
             */
            mclPrintAns(&ans, _mxarray7_);
            /*
             * break
             */
            break;
        /*
         * end
         */
        }
        /*
         * if itera > 100*ciclo
         */
        if (mclGtBool(
              mclVv(itera, "itera"),
              mclMtimes(_mxarray9_, mclVv(ciclo, "ciclo")))) {
            /*
             * ciclo=ciclo+1;
             */
            mlfAssign(&ciclo, mclPlus(mclVv(ciclo, "ciclo"), _mxarray0_));
            /*
             * [p user_response] = error1;
             */
            mlfNError1(0, mlfVarargout(&p, &user_response, NULL), NULL);
            /*
             * delete(p);
             */
            mlfDelete(mclVv(p, "p"), NULL);
            /*
             * switch user_response
             */
            {
                mxArray * v_
                  = mclInitialize(mclVv(user_response, "user_response"));
                if (mclSwitchCompare(v_, _mxarray10_)) {
                    /*
                     * case {'no'}
                     * break
                     */
                    mxDestroyArray(v_);
                    break;
                /*
                 * end
                 */
                }
                mxDestroyArray(v_);
            }
            /*
             * 'more than 100 iterations'
             */
            mclPrintAns(&ans, _mxarray13_);
        /*
         * end   
         */
        }
    /*
     * end 
     */
    }
    /*
     * % calculate of control
     * Kt = 2*speye(N+1); 
     */
    mlfAssign(
      &Kt,
      mclMtimes(
        _mxarray2_, mlfSpeye(mclPlus(mclVv(N, "N"), _mxarray0_), NULL)));
    /*
     * for i=2:N+1
     */
    {
        int v_ = mclForIntStart(2);
        int e_ = mclForIntEnd(mclPlus(mclVv(N, "N"), _mxarray0_));
        if (v_ > e_) {
            mlfAssign(&i, _mxarray3_);
        } else {
            /*
             * Kt(i-1,i)=-1;
             * Kt(i,i-1)=-1;
             * end
             */
            for (; ; ) {
                mclIntArrayAssign2(&Kt, _mxarray4_, v_ - 1, v_);
                mclIntArrayAssign2(&Kt, _mxarray4_, v_, v_ - 1);
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&i, mlfScalar(v_));
        }
    }
    /*
     * Kt(1,1)=1;
     */
    mclIntArrayAssign2(&Kt, _mxarray0_, 1, 1);
    /*
     * Kt(N+1,N+1)=1;
     */
    mclArrayAssign2(
      &Kt,
      _mxarray0_,
      mclPlus(mclVv(N, "N"), _mxarray0_),
      mclPlus(mclVv(N, "N"), _mxarray0_));
    /*
     * Kt=(1/(k^2))*Kt;
     */
    mlfAssign(
      &Kt,
      mclMtimes(
        mclMrdivide(_mxarray0_, mclMpower(mclVv(k, "k"), _mxarray2_)),
        mclVv(Kt, "Kt")));
    /*
     * Mat=((h^2)*r)*Kt+speye(N+1);
     */
    mlfAssign(
      &Mat,
      mclPlus(
        mclMtimes(
          mclMtimes(mclMpower(mclVv(h, "h"), _mxarray2_), mclVa(r, "r")),
          mclVv(Kt, "Kt")),
        mlfSpeye(mclPlus(mclVv(N, "N"), _mxarray0_), NULL)));
    /*
     * control=Mat\(h*E*phix');
     */
    mlfAssign(
      &control,
      mlfMldivide(
        mclVv(Mat, "Mat"),
        mlf_times_transpose(
          mclMtimes(mclVv(h, "h"), mclVv(E, "E")),
          mclVv(phix, "phix"),
          _mxarray2_)));
    /*
     * 
     * 'convergence'
     */
    mclPrintAns(&ans, _mxarray15_);
    mclValidateOutput(control, 1, nargout_, "control", "elftos");
    mclValidateOutput(*resid, 2, nargout_, "resid", "elftos");
    mclValidateOutput(*t, 3, nargout_, "t", "elftos");
    mxDestroyArray(h);
    mxDestroyArray(x);
    mxDestroyArray(k);
    mxDestroyArray(N);
    mxDestroyArray(M);
    mxDestroyArray(i);
    mxDestroyArray(K);
    mxDestroyArray(regu);
    mxDestroyArray(reguh);
    mxDestroyArray(E);
    mxDestroyArray(RR);
    mxDestroyArray(e0);
    mxDestroyArray(e1);
    mxDestroyArray(phix);
    mxDestroyArray(psi0);
    mxDestroyArray(psi1);
    mxDestroyArray(sm);
    mxDestroyArray(g0);
    mxDestroyArray(g1);
    mxDestroyArray(residuo0);
    mxDestroyArray(residuo);
    mxDestroyArray(w0);
    mxDestroyArray(w1);
    mxDestroyArray(itera);
    mxDestroyArray(ciclo);
    mxDestroyArray(phixn);
    mxDestroyArray(psi0n);
    mxDestroyArray(psi1n);
    mxDestroyArray(g0t);
    mxDestroyArray(g1t);
    mxDestroyArray(rhon);
    mxDestroyArray(rhod);
    mxDestroyArray(rho);
    mxDestroyArray(gamman);
    mxDestroyArray(gamma);
    mxDestroyArray(p);
    mxDestroyArray(ans);
    mxDestroyArray(user_response);
    mxDestroyArray(Kt);
    mxDestroyArray(Mat);
    mxDestroyArray(u1);
    mxDestroyArray(u0);
    mxDestroyArray(r);
    mxDestroyArray(Ngamma);
    mxDestroyArray(Nbeta);
    mxDestroyArray(eps);
    mxDestroyArray(mu);
    mxDestroyArray(T);
    mxDestroyArray(n);
    mxDestroyArray(b);
    mxDestroyArray(a);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return control;
    /*
     * 
     * %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
     * %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
     * 
     * %%%%%%%%%%%%%%%%%%%%%%%%%%%%
     * % Function: 'Ondas1.m'
     * %%%%%%%%%%%%%%%%%%%%%%%%%%%%%
     * 
     */
}

/*
 * The function "Melftos_ondas1" is the implementation version of the
 * "elftos/ondas1" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\elftos.m" (lines 173-225).
 * It contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function resu=ondas1(n,mu,a,b,T,h,k,N,e0,e1,M,K,beta,gamma)
 */
static mxArray * Melftos_ondas1(int nargout_,
                                mxArray * n,
                                mxArray * mu,
                                mxArray * a,
                                mxArray * b,
                                mxArray * T,
                                mxArray * h,
                                mxArray * k,
                                mxArray * N,
                                mxArray * e0,
                                mxArray * e1,
                                mxArray * M,
                                mxArray * K,
                                mxArray * beta,
                                mxArray * gamma) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_elftos);
    mxArray * resu = NULL;
    mxArray * vet = NULL;
    mxArray * det = NULL;
    mxArray * iter = NULL;
    mxArray * ac = NULL;
    mxArray * ve = NULL;
    mxArray * de = NULL;
    mxArray * F = NULL;
    mclCopyArray(&n);
    mclCopyArray(&mu);
    mclCopyArray(&a);
    mclCopyArray(&b);
    mclCopyArray(&T);
    mclCopyArray(&h);
    mclCopyArray(&k);
    mclCopyArray(&N);
    mclCopyArray(&e0);
    mclCopyArray(&e1);
    mclCopyArray(&M);
    mclCopyArray(&K);
    mclCopyArray(&beta);
    mclCopyArray(&gamma);
    /*
     * 
     * % Wave ecuation in dimension 1: 
     * % u_tt-u_xx=0 en (a,b)
     * % u(a,t)=u(b,t)=0,
     * % u(x,0)=u0(x).
     * % u_t(x,0)=u1(x).
     * % The result is the normal derivative in x=1
     * 
     * % Parameters of entry:
     * % n = number of interior points in the variable x
     * % mu = number of courant
     * % T = final time 
     * % a = left wing of the interval
     * % b = right wing of the interval
     * % e0= initial position 
     * % e1= initial speed
     * % M = matrix of mass
     * % K = matrix of rigidity
     * % beta,gamma = parameters of Newmark
     * 
     * % Parameters of exit:
     * %    resu = normal derivative in x=1
     * 
     * % Vector F: second member
     * 
     * F=zeros(n,1);
     */
    mlfAssign(&F, mlfZeros(mclVa(n, "n"), _mxarray0_, NULL));
    /*
     * 
     * % Inicializacion 
     * de=e0;
     */
    mlfAssign(&de, mclVa(e0, "e0"));
    /*
     * ve=-e1;
     */
    mlfAssign(&ve, mclUminus(mclVa(e1, "e1")));
    /*
     * ac=M\(F-K*de);
     */
    mlfAssign(
      &ac,
      mlfMldivide(
        mclVa(M, "M"),
        mclMinus(mclVv(F, "F"), mclMtimes(mclVa(K, "K"), mclVv(de, "de")))));
    /*
     * % Beginning of the iterations
     * resu(N+1)=-de(n)/h;
     */
    mclArrayAssign1(
      &resu,
      mclMrdivide(
        mclUminus(mclArrayRef1(mclVv(de, "de"), mclVa(n, "n"))), mclVa(h, "h")),
      mclPlus(mclVa(N, "N"), _mxarray0_));
    /*
     * for iter =1:N-1
     */
    {
        int v_ = mclForIntStart(1);
        int e_ = mclForIntEnd(mclMinus(mclVa(N, "N"), _mxarray0_));
        if (v_ > e_) {
            mlfAssign(&iter, _mxarray3_);
        } else {
            /*
             * det = de + k*ve + (.5*k^2)*(1-2*beta)*ac;
             * vet = ve + (1-gamma)*k*ac;
             * 
             * % Calculate of the new acceleration
             * ac = (M+(beta*k^2)*K)\(F-K*det);
             * 
             * % Calculate of de and ve
             * de = det+beta*(k^2)*ac;
             * ve = vet+gamma*k*ac;
             * resu(N-iter+1)=-de(n)/h;
             * end
             */
            for (; ; ) {
                mlfAssign(
                  &det,
                  mclPlus(
                    mclPlus(
                      mclVv(de, "de"),
                      mclMtimes(mclVa(k, "k"), mclVv(ve, "ve"))),
                    mclMtimes(
                      mclMtimes(
                        mclMtimes(
                          _mxarray17_, mclMpower(mclVa(k, "k"), _mxarray2_)),
                        mclMinus(
                          _mxarray0_,
                          mclMtimes(_mxarray2_, mclVa(beta, "beta")))),
                      mclVv(ac, "ac"))));
                mlfAssign(
                  &vet,
                  mclPlus(
                    mclVv(ve, "ve"),
                    mclMtimes(
                      mclMtimes(
                        mclMinus(_mxarray0_, mclVa(gamma, "gamma")),
                        mclVa(k, "k")),
                      mclVv(ac, "ac"))));
                mlfAssign(
                  &ac,
                  mlfMldivide(
                    mclPlus(
                      mclVa(M, "M"),
                      mclMtimes(
                        mclMtimes(
                          mclVa(beta, "beta"),
                          mclMpower(mclVa(k, "k"), _mxarray2_)),
                        mclVa(K, "K"))),
                    mclMinus(
                      mclVv(F, "F"),
                      mclMtimes(mclVa(K, "K"), mclVv(det, "det")))));
                mlfAssign(
                  &de,
                  mclPlus(
                    mclVv(det, "det"),
                    mclMtimes(
                      mclMtimes(
                        mclVa(beta, "beta"),
                        mclMpower(mclVa(k, "k"), _mxarray2_)),
                      mclVv(ac, "ac"))));
                mlfAssign(
                  &ve,
                  mclPlus(
                    mclVv(vet, "vet"),
                    mclMtimes(
                      mclMtimes(mclVa(gamma, "gamma"), mclVa(k, "k")),
                      mclVv(ac, "ac"))));
                mclArrayAssign1(
                  &resu,
                  mclMrdivide(
                    mclUminus(mclArrayRef1(mclVv(de, "de"), mclVa(n, "n"))),
                    mclVa(h, "h")),
                  mclPlus(mclMinus(mclVa(N, "N"), mlfScalar(v_)), _mxarray0_));
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&iter, mlfScalar(v_));
        }
    }
    /*
     * resu(1)=0;
     */
    mclIntArrayAssign1(&resu, _mxarray1_, 1);
    mclValidateOutput(resu, 1, nargout_, "resu", "elftos/ondas1");
    mxDestroyArray(F);
    mxDestroyArray(de);
    mxDestroyArray(ve);
    mxDestroyArray(ac);
    mxDestroyArray(iter);
    mxDestroyArray(det);
    mxDestroyArray(vet);
    mxDestroyArray(gamma);
    mxDestroyArray(beta);
    mxDestroyArray(K);
    mxDestroyArray(M);
    mxDestroyArray(e1);
    mxDestroyArray(e0);
    mxDestroyArray(N);
    mxDestroyArray(k);
    mxDestroyArray(h);
    mxDestroyArray(T);
    mxDestroyArray(b);
    mxDestroyArray(a);
    mxDestroyArray(mu);
    mxDestroyArray(n);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return resu;
    /*
     * 
     * %%%%%%%%%%%%%%%%%%%%%%%55
     * % Function: 'Ondas2.m'
     * %%%%%%%%%%%%%%%%%%%%%%%%%5
     * 
     */
}

/*
 * The function "Melftos_ondas2" is the implementation version of the
 * "elftos/ondas2" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\elftos.m" (lines 225-290).
 * It contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [resu0,resu1]=ondas2(n,mu,a,b,T,h,k,N,phix,M,K,E,r,beta,gamma,u0,u1)
 */
static mxArray * Melftos_ondas2(mxArray * * resu1,
                                int nargout_,
                                mxArray * n,
                                mxArray * mu,
                                mxArray * a,
                                mxArray * b,
                                mxArray * T,
                                mxArray * h,
                                mxArray * k,
                                mxArray * N,
                                mxArray * phix,
                                mxArray * M,
                                mxArray * K,
                                mxArray * E,
                                mxArray * r,
                                mxArray * beta,
                                mxArray * gamma,
                                mxArray * u0,
                                mxArray * u1) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_elftos);
    mxArray * resu0 = NULL;
    mxArray * vet = NULL;
    mxArray * det = NULL;
    mxArray * iter = NULL;
    mxArray * ac = NULL;
    mxArray * ve = NULL;
    mxArray * de = NULL;
    mxArray * sm = NULL;
    mxArray * F = NULL;
    mclCopyArray(&n);
    mclCopyArray(&mu);
    mclCopyArray(&a);
    mclCopyArray(&b);
    mclCopyArray(&T);
    mclCopyArray(&h);
    mclCopyArray(&k);
    mclCopyArray(&N);
    mclCopyArray(&phix);
    mclCopyArray(&M);
    mclCopyArray(&K);
    mclCopyArray(&E);
    mclCopyArray(&r);
    mclCopyArray(&beta);
    mclCopyArray(&gamma);
    mclCopyArray(&u0);
    mclCopyArray(&u1);
    /*
     * 
     * % Not homogeneous waves equation in dimension 1: 
     * % u_tt-u_xx=0 en (a,b)
     * % u(a,t)=0, u(b,t)=f(t),
     * % u(x,0)=u0(x).
     * % u_t(x,0)=u1(x).
     * % The result is the solution in t=T
     * 
     * % Parameters of entry:
     * % n = number of interior points in the variable x
     * % mu = number of courant
     * % T= final time 
     * % a = left wing of the interval
     * % b = right wing of the interval
     * % phix = value of the solution in x=b
     * %    M = matrix of mass
     * %    r = parameter that depends on the matrix of chosen mass
     * %                r=0    => lumped mass
     * %                r=1/6  => consistent mass
     * %                r=1/12 => higher-order mass
     * %    K = matrix of rigidity
     * %    beta,gamma = parameters of Newmark
     * %    E = matrix that allows to cut the control in the ends
     * 
     * % Parameters of exit:
     * %    position in t=T
     * %    speed in t=T
     * 
     * % Vector F: second member
     * 
     * F=zeros(n,1);
     */
    mlfAssign(&F, mlfZeros(mclVa(n, "n"), _mxarray0_, NULL));
    /*
     * 
     * sm=E*phix';
     */
    mlfAssign(
      &sm, mlf_times_transpose(mclVa(E, "E"), mclVa(phix, "phix"), _mxarray2_));
    /*
     * 
     * F(n)=sm(1);
     */
    mclArrayAssign1(&F, mclIntArrayRef1(mclVv(sm, "sm"), 1), mclVa(n, "n"));
    /*
     * 
     * % Inicialization 
     * de=u0';
     */
    mlfAssign(&de, mlfCtranspose(mclVa(u0, "u0")));
    /*
     * ve=u1';
     */
    mlfAssign(&ve, mlfCtranspose(mclVa(u1, "u1")));
    /*
     * ac=M\(F-K*de);
     */
    mlfAssign(
      &ac,
      mlfMldivide(
        mclVa(M, "M"),
        mclMinus(mclVv(F, "F"), mclMtimes(mclVa(K, "K"), mclVv(de, "de")))));
    /*
     * 
     * % Beginning of the iterations
     * for iter =1:N
     */
    {
        int v_ = mclForIntStart(1);
        int e_ = mclForIntEnd(mclVa(N, "N"));
        if (v_ > e_) {
            mlfAssign(&iter, _mxarray3_);
        } else {
            /*
             * det = de + k*ve + (.5*k^2)*(1-2*beta)*ac;
             * vet = ve + (1-gamma)*k*ac;
             * 
             * % Update of F
             * F(n) = sm(1+iter);
             * 
             * % Calculate of the new acceleration
             * ac = (M+(beta*k^2)*K)\(F-K*det);
             * 
             * % Calculate of de and ve
             * de = det+beta*(k^2)*ac;
             * ve = vet+gamma*k*ac;
             * end
             */
            for (; ; ) {
                mlfAssign(
                  &det,
                  mclPlus(
                    mclPlus(
                      mclVv(de, "de"),
                      mclMtimes(mclVa(k, "k"), mclVv(ve, "ve"))),
                    mclMtimes(
                      mclMtimes(
                        mclMtimes(
                          _mxarray17_, mclMpower(mclVa(k, "k"), _mxarray2_)),
                        mclMinus(
                          _mxarray0_,
                          mclMtimes(_mxarray2_, mclVa(beta, "beta")))),
                      mclVv(ac, "ac"))));
                mlfAssign(
                  &vet,
                  mclPlus(
                    mclVv(ve, "ve"),
                    mclMtimes(
                      mclMtimes(
                        mclMinus(_mxarray0_, mclVa(gamma, "gamma")),
                        mclVa(k, "k")),
                      mclVv(ac, "ac"))));
                mclArrayAssign1(
                  &F, mclIntArrayRef1(mclVv(sm, "sm"), 1 + v_), mclVa(n, "n"));
                mlfAssign(
                  &ac,
                  mlfMldivide(
                    mclPlus(
                      mclVa(M, "M"),
                      mclMtimes(
                        mclMtimes(
                          mclVa(beta, "beta"),
                          mclMpower(mclVa(k, "k"), _mxarray2_)),
                        mclVa(K, "K"))),
                    mclMinus(
                      mclVv(F, "F"),
                      mclMtimes(mclVa(K, "K"), mclVv(det, "det")))));
                mlfAssign(
                  &de,
                  mclPlus(
                    mclVv(det, "det"),
                    mclMtimes(
                      mclMtimes(
                        mclVa(beta, "beta"),
                        mclMpower(mclVa(k, "k"), _mxarray2_)),
                      mclVv(ac, "ac"))));
                mlfAssign(
                  &ve,
                  mclPlus(
                    mclVv(vet, "vet"),
                    mclMtimes(
                      mclMtimes(mclVa(gamma, "gamma"), mclVa(k, "k")),
                      mclVv(ac, "ac"))));
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&iter, mlfScalar(v_));
        }
    }
    /*
     * 
     * resu0=de;
     */
    mlfAssign(&resu0, mclVv(de, "de"));
    /*
     * resu1=ve;
     */
    mlfAssign(resu1, mclVv(ve, "ve"));
    mclValidateOutput(resu0, 1, nargout_, "resu0", "elftos/ondas2");
    mclValidateOutput(*resu1, 2, nargout_, "resu1", "elftos/ondas2");
    mxDestroyArray(F);
    mxDestroyArray(sm);
    mxDestroyArray(de);
    mxDestroyArray(ve);
    mxDestroyArray(ac);
    mxDestroyArray(iter);
    mxDestroyArray(det);
    mxDestroyArray(vet);
    mxDestroyArray(u1);
    mxDestroyArray(u0);
    mxDestroyArray(gamma);
    mxDestroyArray(beta);
    mxDestroyArray(r);
    mxDestroyArray(E);
    mxDestroyArray(K);
    mxDestroyArray(M);
    mxDestroyArray(phix);
    mxDestroyArray(N);
    mxDestroyArray(k);
    mxDestroyArray(h);
    mxDestroyArray(T);
    mxDestroyArray(b);
    mxDestroyArray(a);
    mxDestroyArray(mu);
    mxDestroyArray(n);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return resu0;
    /*
     * 
     * %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
     * % Function: 'eliptic'
     * %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
     * 
     */
}

/*
 * The function "Melftos_eliptic" is the implementation version of the
 * "elftos/eliptic" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\elftos.m" (lines 290-311).
 * It contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function resu=eliptic(K,h,f)
 */
static mxArray * Melftos_eliptic(int nargout_,
                                 mxArray * K,
                                 mxArray * h,
                                 mxArray * f) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_elftos);
    mxArray * resu = NULL;
    mxArray * sm = NULL;
    mclCopyArray(&K);
    mclCopyArray(&h);
    mclCopyArray(&f);
    /*
     * 
     * % Poisson's equation solves in dimension 1:
     * % K*x=f
     * 
     * % Parameters of entry:
     * %    K = discretization of the laplacian
     * %    h = parameter of discretization 
     * %    f = second member
     * 
     * % Parameters of exit
     * %    resu= solutionf of the sistem
     * 
     * sm = h*f;
     */
    mlfAssign(&sm, mclMtimes(mclVa(h, "h"), mclVa(f, "f")));
    /*
     * % Solution 'sol'
     * resu = K\sm;
     */
    mlfAssign(&resu, mlfMldivide(mclVa(K, "K"), mclVv(sm, "sm")));
    mclValidateOutput(resu, 1, nargout_, "resu", "elftos/eliptic");
    mxDestroyArray(sm);
    mxDestroyArray(f);
    mxDestroyArray(h);
    mxDestroyArray(K);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return resu;
    /*
     * 
     * %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
     * % Function 'reg'
     * %%%%%%%%%%%%%%%%%%%%%%%%%%
     * 
     */
}

/*
 * The function "Melftos_reg" is the implementation version of the "elftos/reg"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\elftos.m" (lines 311-325). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function resu=reg(t,T)
 */
static mxArray * Melftos_reg(int nargout_, mxArray * t, mxArray * T) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_elftos);
    mxArray * resu = NULL;
    mxArray * i = NULL;
    mxArray * p = NULL;
    mclCopyArray(&t);
    mclCopyArray(&T);
    /*
     * 
     * % Function of compact support in time [0,T] 
     * 
     * % Parameters of entry:
     * % T final time
     * % t Coordinates of the discretizacion in time
     * 
     * resu(1)=0;
     */
    mclIntArrayAssign1(&resu, _mxarray1_, 1);
    /*
     * p=length(t);
     */
    mlfAssign(&p, mlfScalar(mclLengthInt(mclVa(t, "t"))));
    /*
     * resu(p)=0;
     */
    mclArrayAssign1(&resu, _mxarray1_, mclVv(p, "p"));
    /*
     * for i=2:p-1
     */
    {
        int v_ = mclForIntStart(2);
        int e_ = mclForIntEnd(mclMinus(mclVv(p, "p"), _mxarray0_));
        if (v_ > e_) {
            mlfAssign(&i, _mxarray3_);
        } else {
            /*
             * resu(i)= exp(1./((t(i)-T/2).^2-(T/2)^2));
             * end
             */
            for (; ; ) {
                mclIntArrayAssign1(
                  &resu,
                  mlfExp(
                    mclRdivide(
                      _mxarray0_,
                      mclMinus(
                        mlfPower(
                          mclMinus(
                            mclIntArrayRef1(mclVa(t, "t"), v_),
                            mclMrdivide(mclVa(T, "T"), _mxarray2_)),
                          _mxarray2_),
                        mclMpower(
                          mclMrdivide(mclVa(T, "T"), _mxarray2_),
                          _mxarray2_)))),
                  v_);
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&i, mlfScalar(v_));
        }
    }
    mclValidateOutput(resu, 1, nargout_, "resu", "elftos/reg");
    mxDestroyArray(p);
    mxDestroyArray(i);
    mxDestroyArray(T);
    mxDestroyArray(t);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return resu;
    /*
     * %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
     */
}
