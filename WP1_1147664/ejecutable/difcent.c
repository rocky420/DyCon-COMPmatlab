/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:58 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "difcent.h"
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
static mxArray * _mxarray15_;

void InitializeModule_difcent(void) {
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
    _mxarray15_ = mclInitializeDouble(.5);
}

void TerminateModule_difcent(void) {
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

static mxArray * mlfDifcent_ondas1(mxArray * n,
                                   mxArray * mu,
                                   mxArray * a,
                                   mxArray * b,
                                   mxArray * N,
                                   mxArray * h,
                                   mxArray * T,
                                   mxArray * e0,
                                   mxArray * e1);
static void mlxDifcent_ondas1(int nlhs,
                              mxArray * plhs[],
                              int nrhs,
                              mxArray * prhs[]);
static mxArray * mlfDifcent_ondas2(mxArray * * resu1,
                                   mxArray * n,
                                   mxArray * mu,
                                   mxArray * a,
                                   mxArray * b,
                                   mxArray * N,
                                   mxArray * h,
                                   mxArray * T,
                                   mxArray * E,
                                   mxArray * phix,
                                   mxArray * u0,
                                   mxArray * u1);
static void mlxDifcent_ondas2(int nlhs,
                              mxArray * plhs[],
                              int nrhs,
                              mxArray * prhs[]);
static mxArray * mlfDifcent_eliptic(mxArray * n,
                                    mxArray * a,
                                    mxArray * b,
                                    mxArray * f);
static void mlxDifcent_eliptic(int nlhs,
                               mxArray * plhs[],
                               int nrhs,
                               mxArray * prhs[]);
static mxArray * mlfDifcent_reg(mxArray * t, mxArray * T);
static void mlxDifcent_reg(int nlhs,
                           mxArray * plhs[],
                           int nrhs,
                           mxArray * prhs[]);
static mxArray * Mdifcent(mxArray * * resid,
                          mxArray * * t,
                          int nargout_,
                          mxArray * a,
                          mxArray * b,
                          mxArray * n,
                          mxArray * T,
                          mxArray * mu,
                          mxArray * eps,
                          mxArray * u0,
                          mxArray * u1);
static mxArray * Mdifcent_ondas1(int nargout_,
                                 mxArray * n,
                                 mxArray * mu,
                                 mxArray * a,
                                 mxArray * b,
                                 mxArray * N,
                                 mxArray * h,
                                 mxArray * T,
                                 mxArray * e0,
                                 mxArray * e1);
static mxArray * Mdifcent_ondas2(mxArray * * resu1,
                                 int nargout_,
                                 mxArray * n,
                                 mxArray * mu,
                                 mxArray * a,
                                 mxArray * b,
                                 mxArray * N,
                                 mxArray * h,
                                 mxArray * T,
                                 mxArray * E,
                                 mxArray * phix,
                                 mxArray * u0,
                                 mxArray * u1);
static mxArray * Mdifcent_eliptic(int nargout_,
                                  mxArray * n,
                                  mxArray * a,
                                  mxArray * b,
                                  mxArray * f);
static mxArray * Mdifcent_reg(int nargout_, mxArray * t, mxArray * T);

static mexFunctionTableEntry local_function_table_[4]
  = { { "ondas1", mlxDifcent_ondas1, 9, 1, NULL },
      { "ondas2", mlxDifcent_ondas2, 11, 2, NULL },
      { "eliptic", mlxDifcent_eliptic, 4, 1, NULL },
      { "reg", mlxDifcent_reg, 2, 1, NULL } };

_mexLocalFunctionTable _local_function_table_difcent
  = { 4, local_function_table_ };

/*
 * The function "mlfDifcent" contains the normal interface for the "difcent"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\difcent.m" (lines 1-139). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfDifcent(mxArray * * resid,
                     mxArray * * t,
                     mxArray * a,
                     mxArray * b,
                     mxArray * n,
                     mxArray * T,
                     mxArray * mu,
                     mxArray * eps,
                     mxArray * u0,
                     mxArray * u1) {
    int nargout = 1;
    mxArray * control = NULL;
    mxArray * resid__ = NULL;
    mxArray * t__ = NULL;
    mlfEnterNewContext(2, 8, resid, t, a, b, n, T, mu, eps, u0, u1);
    if (resid != NULL) {
        ++nargout;
    }
    if (t != NULL) {
        ++nargout;
    }
    control = Mdifcent(&resid__, &t__, nargout, a, b, n, T, mu, eps, u0, u1);
    mlfRestorePreviousContext(2, 8, resid, t, a, b, n, T, mu, eps, u0, u1);
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
 * The function "mlxDifcent" contains the feval interface for the "difcent"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\difcent.m" (lines 1-139). The feval
 * function calls the implementation version of difcent through this function.
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxDifcent(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[8];
    mxArray * mplhs[3];
    int i;
    if (nlhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: difcent Line: 24 Column:"
            " 1 The function \"difcent\" was called with mo"
            "re than the declared number of outputs (3)."),
          NULL);
    }
    if (nrhs > 8) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: difcent Line: 24 Column:"
            " 1 The function \"difcent\" was called with mo"
            "re than the declared number of inputs (8)."),
          NULL);
    }
    for (i = 0; i < 3; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 8 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 8; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(
      0,
      8,
      mprhs[0],
      mprhs[1],
      mprhs[2],
      mprhs[3],
      mprhs[4],
      mprhs[5],
      mprhs[6],
      mprhs[7]);
    mplhs[0]
      = Mdifcent(
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
          mprhs[7]);
    mlfRestorePreviousContext(
      0,
      8,
      mprhs[0],
      mprhs[1],
      mprhs[2],
      mprhs[3],
      mprhs[4],
      mprhs[5],
      mprhs[6],
      mprhs[7]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 3 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 3; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "mlfDifcent_ondas1" contains the normal interface for the
 * "difcent/ondas1" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\difcent.m" (lines
 * 139-199). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static mxArray * mlfDifcent_ondas1(mxArray * n,
                                   mxArray * mu,
                                   mxArray * a,
                                   mxArray * b,
                                   mxArray * N,
                                   mxArray * h,
                                   mxArray * T,
                                   mxArray * e0,
                                   mxArray * e1) {
    int nargout = 1;
    mxArray * resu = NULL;
    mlfEnterNewContext(0, 9, n, mu, a, b, N, h, T, e0, e1);
    resu = Mdifcent_ondas1(nargout, n, mu, a, b, N, h, T, e0, e1);
    mlfRestorePreviousContext(0, 9, n, mu, a, b, N, h, T, e0, e1);
    return mlfReturnValue(resu);
}

/*
 * The function "mlxDifcent_ondas1" contains the feval interface for the
 * "difcent/ondas1" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\difcent.m" (lines
 * 139-199). The feval function calls the implementation version of
 * difcent/ondas1 through this function. This function processes any input
 * arguments and passes them to the implementation version of the function,
 * appearing above.
 */
static void mlxDifcent_ondas1(int nlhs,
                              mxArray * plhs[],
                              int nrhs,
                              mxArray * prhs[]) {
    mxArray * mprhs[9];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: difcent/ondas1 Line: 139 Colu"
            "mn: 1 The function \"difcent/ondas1\" was called wi"
            "th more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 9) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: difcent/ondas1 Line: 139 Colu"
            "mn: 1 The function \"difcent/ondas1\" was called wi"
            "th more than the declared number of inputs (9)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
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
      = Mdifcent_ondas1(
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
}

/*
 * The function "mlfDifcent_ondas2" contains the normal interface for the
 * "difcent/ondas2" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\difcent.m" (lines
 * 199-275). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static mxArray * mlfDifcent_ondas2(mxArray * * resu1,
                                   mxArray * n,
                                   mxArray * mu,
                                   mxArray * a,
                                   mxArray * b,
                                   mxArray * N,
                                   mxArray * h,
                                   mxArray * T,
                                   mxArray * E,
                                   mxArray * phix,
                                   mxArray * u0,
                                   mxArray * u1) {
    int nargout = 1;
    mxArray * resu0 = NULL;
    mxArray * resu1__ = NULL;
    mlfEnterNewContext(1, 11, resu1, n, mu, a, b, N, h, T, E, phix, u0, u1);
    if (resu1 != NULL) {
        ++nargout;
    }
    resu0
      = Mdifcent_ondas2(
          &resu1__, nargout, n, mu, a, b, N, h, T, E, phix, u0, u1);
    mlfRestorePreviousContext(
      1, 11, resu1, n, mu, a, b, N, h, T, E, phix, u0, u1);
    if (resu1 != NULL) {
        mclCopyOutputArg(resu1, resu1__);
    } else {
        mxDestroyArray(resu1__);
    }
    return mlfReturnValue(resu0);
}

/*
 * The function "mlxDifcent_ondas2" contains the feval interface for the
 * "difcent/ondas2" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\difcent.m" (lines
 * 199-275). The feval function calls the implementation version of
 * difcent/ondas2 through this function. This function processes any input
 * arguments and passes them to the implementation version of the function,
 * appearing above.
 */
static void mlxDifcent_ondas2(int nlhs,
                              mxArray * plhs[],
                              int nrhs,
                              mxArray * prhs[]) {
    mxArray * mprhs[11];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: difcent/ondas2 Line: 199 Colu"
            "mn: 1 The function \"difcent/ondas2\" was called wi"
            "th more than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 11) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: difcent/ondas2 Line: 199 Colu"
            "mn: 1 The function \"difcent/ondas2\" was called wi"
            "th more than the declared number of inputs (11)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
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
      = Mdifcent_ondas2(
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
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "mlfDifcent_eliptic" contains the normal interface for the
 * "difcent/eliptic" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\difcent.m" (lines
 * 275-309). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static mxArray * mlfDifcent_eliptic(mxArray * n,
                                    mxArray * a,
                                    mxArray * b,
                                    mxArray * f) {
    int nargout = 1;
    mxArray * resu0 = NULL;
    mlfEnterNewContext(0, 4, n, a, b, f);
    resu0 = Mdifcent_eliptic(nargout, n, a, b, f);
    mlfRestorePreviousContext(0, 4, n, a, b, f);
    return mlfReturnValue(resu0);
}

/*
 * The function "mlxDifcent_eliptic" contains the feval interface for the
 * "difcent/eliptic" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\difcent.m" (lines
 * 275-309). The feval function calls the implementation version of
 * difcent/eliptic through this function. This function processes any input
 * arguments and passes them to the implementation version of the function,
 * appearing above.
 */
static void mlxDifcent_eliptic(int nlhs,
                               mxArray * plhs[],
                               int nrhs,
                               mxArray * prhs[]) {
    mxArray * mprhs[4];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: difcent/eliptic Line: 275 Colu"
            "mn: 1 The function \"difcent/eliptic\" was called wi"
            "th more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 4) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: difcent/eliptic Line: 275 Col"
            "umn: 1 The function \"difcent/eliptic\" was called "
            "with more than the declared number of inputs (4)."),
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
    mplhs[0] = Mdifcent_eliptic(nlhs, mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    mlfRestorePreviousContext(0, 4, mprhs[0], mprhs[1], mprhs[2], mprhs[3]);
    plhs[0] = mplhs[0];
}

/*
 * The function "mlfDifcent_reg" contains the normal interface for the
 * "difcent/reg" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\difcent.m" (lines
 * 309-316). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static mxArray * mlfDifcent_reg(mxArray * t, mxArray * T) {
    int nargout = 1;
    mxArray * resu = NULL;
    mlfEnterNewContext(0, 2, t, T);
    resu = Mdifcent_reg(nargout, t, T);
    mlfRestorePreviousContext(0, 2, t, T);
    return mlfReturnValue(resu);
}

/*
 * The function "mlxDifcent_reg" contains the feval interface for the
 * "difcent/reg" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\difcent.m" (lines
 * 309-316). The feval function calls the implementation version of difcent/reg
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxDifcent_reg(int nlhs,
                           mxArray * plhs[],
                           int nrhs,
                           mxArray * prhs[]) {
    mxArray * mprhs[2];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: difcent/reg Line: 309 Colum"
            "n: 1 The function \"difcent/reg\" was called with"
            " more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: difcent/reg Line: 309 Colum"
            "n: 1 The function \"difcent/reg\" was called with"
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
    mplhs[0] = Mdifcent_reg(nlhs, mprhs[0], mprhs[1]);
    mlfRestorePreviousContext(0, 2, mprhs[0], mprhs[1]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mdifcent" is the implementation version of the "difcent"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\difcent.m" (lines 1-139). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * % Function 'difcent.m'
 * 
 * % Resolution of the problem of control in one dimension
 * % Method HUM-gradient
 * % Approximation of the wave equation for finite differences
 * % Control in the right wing
 * 
 * % u_tt-u_xx=0 en (a,b)
 * % u(t,a)=0, u(t,b)=g(t) control
 * % u(0,x)=u_t(0,x)=0
 * % u(T,x)=u0(x).
 * % u_t(T,x)=u1(x).
 * 
 * % The final information is written in the file datos.m 
 * 
 * % Parameters of entry:
 * % n = number of interior points in the variable x
 * % mu = number of courant
 * % T = final time 
 * % a = left wing of the interval
 * % b = right wing of the interval
 * % eps = tolerance
 * 
 * function [control,resid,t]=difcent(a,b,n,T,mu,eps,u0,u1)
 */
static mxArray * Mdifcent(mxArray * * resid,
                          mxArray * * t,
                          int nargout_,
                          mxArray * a,
                          mxArray * b,
                          mxArray * n,
                          mxArray * T,
                          mxArray * mu,
                          mxArray * eps,
                          mxArray * u0,
                          mxArray * u1) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_difcent);
    mxArray * control = NULL;
    mxArray * user_response = NULL;
    mxArray * ans = NULL;
    mxArray * p = NULL;
    mxArray * nuevoresi = NULL;
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
    mxArray * E = NULL;
    mxArray * reguh = NULL;
    mxArray * regu = NULL;
    mxArray * i = NULL;
    mxArray * K = NULL;
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
     * N = floor(T/k)
     */
    mlfAssign(&N, mlfFloor(mclMrdivide(mclVa(T, "T"), mclVv(k, "k"))));
    mclPrintArray(mclVv(N, "N"), "N");
    /*
     * T=N*k;
     */
    mlfAssign(&T, mclMtimes(mclVv(N, "N"), mclVv(k, "k")));
    /*
     * t = 0:k:N*k;
     */
    mlfAssign(
      t,
      mlfColon(
        _mxarray1_, mclVv(k, "k"), mclMtimes(mclVv(N, "N"), mclVv(k, "k"))));
    /*
     * 
     * % Matrix 'K' for the norm
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
     * K=K/(h^2);
     */
    mlfAssign(
      &K, mclMrdivide(mclVv(K, "K"), mclMpower(mclVv(h, "h"), _mxarray2_)));
    /*
     * 
     * % Initial data
     * %[u0 u1]=data(x);
     * 
     * regu=reg(t,T);
     */
    mlfAssign(&regu, mlfDifcent_reg(mclVv(*t, "t"), mclVa(T, "T")));
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
     * E=diag(reguh);
     */
    mlfAssign(&E, mlfDiag(mclVv(reguh, "reguh"), NULL));
    /*
     * E=sparse(E);
     */
    mlfAssign(&E, mlfSparse(mclVv(E, "E"), NULL, NULL, NULL, NULL, NULL));
    /*
     * 
     * %%%%%%%%%%%%%%%%%%%%%%%%%%
     * % Step 0: Inicialization
     * %%%%%%%%%%%%%%%%%%%%%%%%%%
     * e0=zeros(n,1);
     */
    mlfAssign(&e0, mlfZeros(mclVa(n, "n"), _mxarray0_, NULL));
    /*
     * e1=zeros(n,1);
     */
    mlfAssign(&e1, mlfZeros(mclVa(n, "n"), _mxarray0_, NULL));
    /*
     * phix=ondas1(n,mu,a,b,N,h,T,e0,e1);
     */
    mlfAssign(
      &phix,
      mlfDifcent_ondas1(
        mclVa(n, "n"),
        mclVa(mu, "mu"),
        mclVa(a, "a"),
        mclVa(b, "b"),
        mclVv(N, "N"),
        mclVv(h, "h"),
        mclVa(T, "T"),
        mclVv(e0, "e0"),
        mclVv(e1, "e1")));
    /*
     * 
     * [psi0 psi1]=ondas2(n,mu,a,b,N,h,T,E,phix,u0,u1);
     */
    mlfAssign(
      &psi0,
      mlfDifcent_ondas2(
        &psi1,
        mclVa(n, "n"),
        mclVa(mu, "mu"),
        mclVa(a, "a"),
        mclVa(b, "b"),
        mclVv(N, "N"),
        mclVv(h, "h"),
        mclVa(T, "T"),
        mclVv(E, "E"),
        mclVv(phix, "phix"),
        mclVa(u0, "u0"),
        mclVa(u1, "u1")));
    /*
     * 
     * sm=-psi1;
     */
    mlfAssign(&sm, mclUminus(mclVv(psi1, "psi1")));
    /*
     * g0=eliptic(n,a,b,sm);
     */
    mlfAssign(
      &g0,
      mlfDifcent_eliptic(
        mclVa(n, "n"), mclVa(a, "a"), mclVa(b, "b"), mclVv(sm, "sm")));
    /*
     * g1=psi0;
     */
    mlfAssign(&g1, mclVv(psi0, "psi0"));
    /*
     * 
     * % inicializate the residue 
     * residuo0=sqrt((g0'*K*g0+g1'*g1)/(n));
     */
    mlfAssign(
      &residuo0,
      mlfSqrt(
        mclMrdivide(
          mclPlus(
            mclMtimes(
              mlf_times_transpose(mclVv(g0, "g0"), mclVv(K, "K"), _mxarray5_),
              mclVv(g0, "g0")),
            mlf_times_transpose(mclVv(g1, "g1"), mclVv(g1, "g1"), _mxarray5_)),
          mclVa(n, "n"))));
    /*
     * residuo=residuo0;
     */
    mlfAssign(&residuo, mclVv(residuo0, "residuo0"));
    /*
     * resid=residuo0;
     */
    mlfAssign(resid, mclVv(residuo0, "residuo0"));
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
     * while (residuo/residuo0>=eps)
     */
    while (mclGeBool(
             mclMrdivide(
               mclVv(residuo, "residuo"), mclVv(residuo0, "residuo0")),
             mclVa(eps, "eps"))) {
        /*
         * itera=itera+1
         */
        mlfAssign(&itera, mclPlus(mclVv(itera, "itera"), _mxarray0_));
        mclPrintArray(mclVv(itera, "itera"), "itera");
        /*
         * phixn=ondas1(n,mu,a,b,N,h,T,w0,w1);
         */
        mlfAssign(
          &phixn,
          mlfDifcent_ondas1(
            mclVa(n, "n"),
            mclVa(mu, "mu"),
            mclVa(a, "a"),
            mclVa(b, "b"),
            mclVv(N, "N"),
            mclVv(h, "h"),
            mclVa(T, "T"),
            mclVv(w0, "w0"),
            mclVv(w1, "w1")));
        /*
         * 
         * [psi0n psi1n]=ondas2(n,mu,a,b,N,h,T,E,phixn,u0*0,u1*0);
         */
        mlfAssign(
          &psi0n,
          mlfDifcent_ondas2(
            &psi1n,
            mclVa(n, "n"),
            mclVa(mu, "mu"),
            mclVa(a, "a"),
            mclVa(b, "b"),
            mclVv(N, "N"),
            mclVv(h, "h"),
            mclVa(T, "T"),
            mclVv(E, "E"),
            mclVv(phixn, "phixn"),
            mclMtimes(mclVa(u0, "u0"), _mxarray1_),
            mclMtimes(mclVa(u1, "u1"), _mxarray1_)));
        /*
         * 
         * g0t=eliptic(n,a,b,-psi1n);
         */
        mlfAssign(
          &g0t,
          mlfDifcent_eliptic(
            mclVa(n, "n"),
            mclVa(a, "a"),
            mclVa(b, "b"),
            mclUminus(mclVv(psi1n, "psi1n"))));
        /*
         * g1t=psi0n;
         */
        mlfAssign(&g1t, mclVv(psi0n, "psi0n"));
        /*
         * 
         * % calculate of rho
         * rhon=(g0'*K*g0+g1'*g1)/(n);
         */
        mlfAssign(
          &rhon,
          mclMrdivide(
            mclPlus(
              mclMtimes(
                mlf_times_transpose(mclVv(g0, "g0"), mclVv(K, "K"), _mxarray5_),
                mclVv(g0, "g0")),
              mlf_times_transpose(
                mclVv(g1, "g1"), mclVv(g1, "g1"), _mxarray5_)),
            mclVa(n, "n")));
        /*
         * rhod=(g0t'*K*w0+g1t'*w1)/(n);
         */
        mlfAssign(
          &rhod,
          mclMrdivide(
            mclPlus(
              mclMtimes(
                mlf_times_transpose(
                  mclVv(g0t, "g0t"), mclVv(K, "K"), _mxarray5_),
                mclVv(w0, "w0")),
              mlf_times_transpose(
                mclVv(g1t, "g1t"), mclVv(w1, "w1"), _mxarray5_)),
            mclVa(n, "n")));
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
         * 
         * phix=phix-rho*phixn;
         */
        mlfAssign(
          &phix,
          mclMinus(
            mclVv(phix, "phix"),
            mclMtimes(mclVv(rho, "rho"), mclVv(phixn, "phixn"))));
        /*
         * psi0=psi0-rho*psi0n;
         */
        mlfAssign(
          &psi0,
          mclMinus(
            mclVv(psi0, "psi0"),
            mclMtimes(mclVv(rho, "rho"), mclVv(psi0n, "psi0n"))));
        /*
         * psi1=psi1-rho*psi1n; 
         */
        mlfAssign(
          &psi1,
          mclMinus(
            mclVv(psi1, "psi1"),
            mclMtimes(mclVv(rho, "rho"), mclVv(psi1n, "psi1n"))));
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
         * gamman=(g0'*K*g0+g1'*g1)/(n);
         */
        mlfAssign(
          &gamman,
          mclMrdivide(
            mclPlus(
              mclMtimes(
                mlf_times_transpose(mclVv(g0, "g0"), mclVv(K, "K"), _mxarray5_),
                mclVv(g0, "g0")),
              mlf_times_transpose(
                mclVv(g1, "g1"), mclVv(g1, "g1"), _mxarray5_)),
            mclVa(n, "n")));
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
         * residuo=sqrt((g0'*K*g0+g1'*g1)/(n));
         */
        mlfAssign(
          &residuo,
          mlfSqrt(
            mclMrdivide(
              mclPlus(
                mclMtimes(
                  mlf_times_transpose(
                    mclVv(g0, "g0"), mclVv(K, "K"), _mxarray5_),
                  mclVv(g0, "g0")),
                mlf_times_transpose(
                  mclVv(g1, "g1"), mclVv(g1, "g1"), _mxarray5_)),
              mclVa(n, "n"))));
        /*
         * nuevoresi=residuo/residuo0
         */
        mlfAssign(
          &nuevoresi,
          mclMrdivide(mclVv(residuo, "residuo"), mclVv(residuo0, "residuo0")));
        mclPrintArray(mclVv(nuevoresi, "nuevoresi"), "nuevoresi");
        /*
         * resid=[resid nuevoresi];
         */
        mlfAssign(
          resid,
          mlfHorzcat(
            mclVv(*resid, "resid"), mclVv(nuevoresi, "nuevoresi"), NULL));
        /*
         * 
         * % To do that the program ends if there is no convergence
         * if nuevoresi > 1.e4
         */
        if (mclGtBool(mclVv(nuevoresi, "nuevoresi"), _mxarray6_)) {
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
     * control=E*phix';
     */
    mlfAssign(
      &control,
      mlf_times_transpose(mclVv(E, "E"), mclVv(phix, "phix"), _mxarray2_));
    mclValidateOutput(control, 1, nargout_, "control", "difcent");
    mclValidateOutput(*resid, 2, nargout_, "resid", "difcent");
    mclValidateOutput(*t, 3, nargout_, "t", "difcent");
    mxDestroyArray(h);
    mxDestroyArray(x);
    mxDestroyArray(k);
    mxDestroyArray(N);
    mxDestroyArray(K);
    mxDestroyArray(i);
    mxDestroyArray(regu);
    mxDestroyArray(reguh);
    mxDestroyArray(E);
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
    mxDestroyArray(nuevoresi);
    mxDestroyArray(p);
    mxDestroyArray(ans);
    mxDestroyArray(user_response);
    mxDestroyArray(u1);
    mxDestroyArray(u0);
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
     * 
     * % Function 'Ondas1.m'
     */
}

/*
 * The function "Mdifcent_ondas1" is the implementation version of the
 * "difcent/ondas1" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\difcent.m" (lines
 * 139-199). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function resu=ondas1(n,mu,a,b,N,h,T,e0,e1)
 */
static mxArray * Mdifcent_ondas1(int nargout_,
                                 mxArray * n,
                                 mxArray * mu,
                                 mxArray * a,
                                 mxArray * b,
                                 mxArray * N,
                                 mxArray * h,
                                 mxArray * T,
                                 mxArray * e0,
                                 mxArray * e1) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_difcent);
    mxArray * resu = NULL;
    mxArray * auxi = NULL;
    mxArray * iter = NULL;
    mxArray * dep = NULL;
    mxArray * de = NULL;
    mxArray * F = NULL;
    mxArray * i = NULL;
    mxArray * K = NULL;
    mxArray * t = NULL;
    mxArray * k = NULL;
    mxArray * x = NULL;
    mclCopyArray(&n);
    mclCopyArray(&mu);
    mclCopyArray(&a);
    mclCopyArray(&b);
    mclCopyArray(&N);
    mclCopyArray(&h);
    mclCopyArray(&T);
    mclCopyArray(&e0);
    mclCopyArray(&e1);
    /*
     * % Wave ecuation in dimension 1 with initial data: 
     * % u_tt-u_xx=0 en (a,b)
     * % u(a,t)=u(b,t)=0,
     * % u(x,T)=e0(x).
     * % u_t(x,T)=e1(x).
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
     * 
     * % Parameters of exit:
     * %    normal derivative in en x=1
     * 
     * % Calculate of:
     * % h = distance between two consecutive points
     * % x = spatial coordinates of the interior points
     * % k = step of time
     * % N = number of iterations T/k
     * % t = temporary coordinates of the nodes
     * 
     * x = a+h:h:b-h;
     */
    mlfAssign(
      &x,
      mlfColon(
        mclPlus(mclVa(a, "a"), mclVa(h, "h")),
        mclVa(h, "h"),
        mclMinus(mclVa(b, "b"), mclVa(h, "h"))));
    /*
     * k = mu*h;
     */
    mlfAssign(&k, mclMtimes(mclVa(mu, "mu"), mclVa(h, "h")));
    /*
     * t = 0:k:T;
     */
    mlfAssign(&t, mlfColon(_mxarray1_, mclVv(k, "k"), mclVa(T, "T")));
    /*
     * N=length(t)-1;
     */
    mlfAssign(&N, mlfScalar(mclLengthInt(mclVv(t, "t")) - 1));
    /*
     * 
     * % Matrix K: discretization of the laplacian
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
     * K=(1/(h^2))*K;
     */
    mlfAssign(
      &K,
      mclMtimes(
        mclMrdivide(_mxarray0_, mclMpower(mclVa(h, "h"), _mxarray2_)),
        mclVv(K, "K")));
    /*
     * 
     * % Vector F: second member
     * F=zeros(n,1);
     */
    mlfAssign(&F, mlfZeros(mclVa(n, "n"), _mxarray0_, NULL));
    /*
     * 
     * % Inicialization 
     * % de = displacement in n
     * % dep= displacement in n+1
     * de=e0;
     */
    mlfAssign(&de, mclVa(e0, "e0"));
    /*
     * dep=-k*e1+e0-.5*(k^2)*K*e0;
     */
    mlfAssign(
      &dep,
      mclMinus(
        mclPlus(
          mclMtimes(mclUminus(mclVv(k, "k")), mclVa(e1, "e1")),
          mclVa(e0, "e0")),
        mclMtimes(
          mclMtimes(
            mclMtimes(_mxarray15_, mclMpower(mclVv(k, "k"), _mxarray2_)),
            mclVv(K, "K")),
          mclVa(e0, "e0"))));
    /*
     * % Beginnig of the iterations
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
             * auxi=dep;
             * dep = 2*dep-de-k^2*K*dep;
             * de=auxi;
             * resu(N-iter+1)=-de(n)/h;
             * end
             */
            for (; ; ) {
                mlfAssign(&auxi, mclVv(dep, "dep"));
                mlfAssign(
                  &dep,
                  mclMinus(
                    mclMinus(
                      mclMtimes(_mxarray2_, mclVv(dep, "dep")),
                      mclVv(de, "de")),
                    mclMtimes(
                      mclMtimes(
                        mclMpower(mclVv(k, "k"), _mxarray2_), mclVv(K, "K")),
                      mclVv(dep, "dep"))));
                mlfAssign(&de, mclVv(auxi, "auxi"));
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
    mclValidateOutput(resu, 1, nargout_, "resu", "difcent/ondas1");
    mxDestroyArray(x);
    mxDestroyArray(k);
    mxDestroyArray(t);
    mxDestroyArray(K);
    mxDestroyArray(i);
    mxDestroyArray(F);
    mxDestroyArray(de);
    mxDestroyArray(dep);
    mxDestroyArray(iter);
    mxDestroyArray(auxi);
    mxDestroyArray(e1);
    mxDestroyArray(e0);
    mxDestroyArray(T);
    mxDestroyArray(h);
    mxDestroyArray(N);
    mxDestroyArray(b);
    mxDestroyArray(a);
    mxDestroyArray(mu);
    mxDestroyArray(n);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return resu;
    /*
     * 
     * 
     * % Program: 'Ondas2.m'
     */
}

/*
 * The function "Mdifcent_ondas2" is the implementation version of the
 * "difcent/ondas2" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\difcent.m" (lines
 * 199-275). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [resu0,resu1]=ondas2(n,mu,a,b,N,h,T,E,phix,u0,u1)
 */
static mxArray * Mdifcent_ondas2(mxArray * * resu1,
                                 int nargout_,
                                 mxArray * n,
                                 mxArray * mu,
                                 mxArray * a,
                                 mxArray * b,
                                 mxArray * N,
                                 mxArray * h,
                                 mxArray * T,
                                 mxArray * E,
                                 mxArray * phix,
                                 mxArray * u0,
                                 mxArray * u1) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_difcent);
    mxArray * resu0 = NULL;
    mxArray * dem = NULL;
    mxArray * auxi = NULL;
    mxArray * iter = NULL;
    mxArray * dep = NULL;
    mxArray * de = NULL;
    mxArray * F = NULL;
    mxArray * i = NULL;
    mxArray * K = NULL;
    mxArray * e1 = NULL;
    mxArray * e0 = NULL;
    mxArray * t = NULL;
    mxArray * k = NULL;
    mxArray * x = NULL;
    mclCopyArray(&n);
    mclCopyArray(&mu);
    mclCopyArray(&a);
    mclCopyArray(&b);
    mclCopyArray(&N);
    mclCopyArray(&h);
    mclCopyArray(&T);
    mclCopyArray(&E);
    mclCopyArray(&phix);
    mclCopyArray(&u0);
    mclCopyArray(&u1);
    /*
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
     * 
     * % Parameters of exit:
     * %    position in t=T
     * %    speed in t=T
     * 
     * % Parameters of Newmark's method:
     * %    beta =0.
     * %    gamma =.5 
     * 
     * % Calculate of:
     * % h = distance between two consecutive points
     * % x = spatial coordinates of the interior points
     * % k = step of time
     * % N = number of iterations T/k
     * 
     * 
     * x = a+h:h:b-h;
     */
    mlfAssign(
      &x,
      mlfColon(
        mclPlus(mclVa(a, "a"), mclVa(h, "h")),
        mclVa(h, "h"),
        mclMinus(mclVa(b, "b"), mclVa(h, "h"))));
    /*
     * k = mu*h;
     */
    mlfAssign(&k, mclMtimes(mclVa(mu, "mu"), mclVa(h, "h")));
    /*
     * 
     * t=0:k:T;
     */
    mlfAssign(&t, mlfColon(_mxarray1_, mclVv(k, "k"), mclVa(T, "T")));
    /*
     * N=length(t)-1;
     */
    mlfAssign(&N, mlfScalar(mclLengthInt(mclVv(t, "t")) - 1));
    /*
     * %phix=reg(t,T).*phix;
     * 
     * e0=u0';
     */
    mlfAssign(&e0, mlfCtranspose(mclVa(u0, "u0")));
    /*
     * e1=u1';
     */
    mlfAssign(&e1, mlfCtranspose(mclVa(u1, "u1")));
    /*
     * 
     * % Matrix K: discretization of the laplacian
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
     * K=(1/(h^2))*K;
     */
    mlfAssign(
      &K,
      mclMtimes(
        mclMrdivide(_mxarray0_, mclMpower(mclVa(h, "h"), _mxarray2_)),
        mclVv(K, "K")));
    /*
     * 
     * phix=E*phix';
     */
    mlfAssign(
      &phix,
      mlf_times_transpose(mclVa(E, "E"), mclVa(phix, "phix"), _mxarray2_));
    /*
     * % Vector F: second member
     * F=zeros(n,1);
     */
    mlfAssign(&F, mlfZeros(mclVa(n, "n"), _mxarray0_, NULL));
    /*
     * F(n) = (1/(h^2))*phix(1);
     */
    mclArrayAssign1(
      &F,
      mclMtimes(
        mclMrdivide(_mxarray0_, mclMpower(mclVa(h, "h"), _mxarray2_)),
        mclIntArrayRef1(mclVa(phix, "phix"), 1)),
      mclVa(n, "n"));
    /*
     * 
     * % Inicialization 
     * % de = displacement in n
     * % dep= displacement in n+1
     * de=e0;
     */
    mlfAssign(&de, mclVv(e0, "e0"));
    /*
     * dep=k*e1+e0-.5*(k^2)*K*e0+k^2*F;
     */
    mlfAssign(
      &dep,
      mclPlus(
        mclMinus(
          mclPlus(mclMtimes(mclVv(k, "k"), mclVv(e1, "e1")), mclVv(e0, "e0")),
          mclMtimes(
            mclMtimes(
              mclMtimes(_mxarray15_, mclMpower(mclVv(k, "k"), _mxarray2_)),
              mclVv(K, "K")),
            mclVv(e0, "e0"))),
        mclMtimes(mclMpower(mclVv(k, "k"), _mxarray2_), mclVv(F, "F"))));
    /*
     * 
     * % Beginning of iterations
     * 
     * for iter =1:N
     */
    {
        int v_ = mclForIntStart(1);
        int e_ = mclForIntEnd(mclVa(N, "N"));
        if (v_ > e_) {
            mlfAssign(&iter, _mxarray3_);
        } else {
            /*
             * auxi=dep;
             * % Update of F
             * F(n) = (1/(h^2))*phix(iter+1);
             * 
             * dep = 2*dep-de-k^2*K*dep+k^2*F;
             * dem=de;
             * de=auxi;   
             * end
             */
            for (; ; ) {
                mlfAssign(&auxi, mclVv(dep, "dep"));
                mclArrayAssign1(
                  &F,
                  mclMtimes(
                    mclMrdivide(
                      _mxarray0_, mclMpower(mclVa(h, "h"), _mxarray2_)),
                    mclIntArrayRef1(mclVa(phix, "phix"), v_ + 1)),
                  mclVa(n, "n"));
                mlfAssign(
                  &dep,
                  mclPlus(
                    mclMinus(
                      mclMinus(
                        mclMtimes(_mxarray2_, mclVv(dep, "dep")),
                        mclVv(de, "de")),
                      mclMtimes(
                        mclMtimes(
                          mclMpower(mclVv(k, "k"), _mxarray2_), mclVv(K, "K")),
                        mclVv(dep, "dep"))),
                    mclMtimes(
                      mclMpower(mclVv(k, "k"), _mxarray2_), mclVv(F, "F"))));
                mlfAssign(&dem, mclVv(de, "de"));
                mlfAssign(&de, mclVv(auxi, "auxi"));
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
     * resu1=(dep-dem)/(2*k);
     */
    mlfAssign(
      resu1,
      mclMrdivide(
        mclMinus(mclVv(dep, "dep"), mclVv(dem, "dem")),
        mclMtimes(_mxarray2_, mclVv(k, "k"))));
    mclValidateOutput(resu0, 1, nargout_, "resu0", "difcent/ondas2");
    mclValidateOutput(*resu1, 2, nargout_, "resu1", "difcent/ondas2");
    mxDestroyArray(x);
    mxDestroyArray(k);
    mxDestroyArray(t);
    mxDestroyArray(e0);
    mxDestroyArray(e1);
    mxDestroyArray(K);
    mxDestroyArray(i);
    mxDestroyArray(F);
    mxDestroyArray(de);
    mxDestroyArray(dep);
    mxDestroyArray(iter);
    mxDestroyArray(auxi);
    mxDestroyArray(dem);
    mxDestroyArray(u1);
    mxDestroyArray(u0);
    mxDestroyArray(phix);
    mxDestroyArray(E);
    mxDestroyArray(T);
    mxDestroyArray(h);
    mxDestroyArray(N);
    mxDestroyArray(b);
    mxDestroyArray(a);
    mxDestroyArray(mu);
    mxDestroyArray(n);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return resu0;
    /*
     * 
     * % Program: 'Poisson.m'
     */
}

/*
 * The function "Mdifcent_eliptic" is the implementation version of the
 * "difcent/eliptic" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\difcent.m" (lines
 * 275-309). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function resu0=eliptic(n,a,b,f)
 */
static mxArray * Mdifcent_eliptic(int nargout_,
                                  mxArray * n,
                                  mxArray * a,
                                  mxArray * b,
                                  mxArray * f) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_difcent);
    mxArray * resu0 = NULL;
    mxArray * sm = NULL;
    mxArray * i = NULL;
    mxArray * mat = NULL;
    mxArray * x = NULL;
    mxArray * h = NULL;
    mclCopyArray(&n);
    mclCopyArray(&a);
    mclCopyArray(&b);
    mclCopyArray(&f);
    /*
     * % Poisson ecuation in dimension 1:
     * % -u''(x)=f(x) en (a,b)
     * % u(a)=0, u(b)=0.
     * % The functions f(x) and c(x) are defined in the files f.m and c.m
     * % The results are written in the file 'resultados.dat'
     * 
     * % Parameters of entry:
     * % n = number of interior points
     * % a = left wing of the interval
     * % b = right wing of the interval
     * % f = the second member
     * 
     * % Parameters of exit
     * % Solution of the elliptical problem
     * 
     * % calculate of:
     * % h = distance between two consecutive points 
     * % x = coordinates of the interior points
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
     * 
     * % Matrix 'mat' and second member 'sm'
     * mat = 2*speye(n);
     */
    mlfAssign(&mat, mclMtimes(_mxarray2_, mlfSpeye(mclVa(n, "n"), NULL)));
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
             * mat(i-1,i)=-1;
             * mat(i,i-1)=-1;
             * end
             */
            for (; ; ) {
                mclIntArrayAssign2(&mat, _mxarray4_, v_ - 1, v_);
                mclIntArrayAssign2(&mat, _mxarray4_, v_, v_ - 1);
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&i, mlfScalar(v_));
        }
    }
    /*
     * sm = f*h^2;
     */
    mlfAssign(
      &sm, mclMtimes(mclVa(f, "f"), mclMpower(mclVv(h, "h"), _mxarray2_)));
    /*
     * 
     * % Solution 'sol'
     * resu0 = mat\sm;
     */
    mlfAssign(&resu0, mlfMldivide(mclVv(mat, "mat"), mclVv(sm, "sm")));
    mclValidateOutput(resu0, 1, nargout_, "resu0", "difcent/eliptic");
    mxDestroyArray(h);
    mxDestroyArray(x);
    mxDestroyArray(mat);
    mxDestroyArray(i);
    mxDestroyArray(sm);
    mxDestroyArray(f);
    mxDestroyArray(b);
    mxDestroyArray(a);
    mxDestroyArray(n);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return resu0;
    /*
     * 
     */
}

/*
 * The function "Mdifcent_reg" is the implementation version of the
 * "difcent/reg" M-function from file "c:\documents and settings\miguel cea
 * nogal\mis documentos\documents\progcontrol\guide6\difcent.m" (lines
 * 309-316). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function resu=reg(t,T)
 */
static mxArray * Mdifcent_reg(int nargout_, mxArray * t, mxArray * T) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_difcent);
    mxArray * resu = NULL;
    mxArray * i = NULL;
    mxArray * p = NULL;
    mclCopyArray(&t);
    mclCopyArray(&T);
    /*
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
    mclValidateOutput(resu, 1, nargout_, "resu", "difcent/reg");
    mxDestroyArray(p);
    mxDestroyArray(i);
    mxDestroyArray(T);
    mxDestroyArray(t);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return resu;
}
