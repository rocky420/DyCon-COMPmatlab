/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:58 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "data3.h"
#include "mwservices.h"
#include "libmatlbm.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;

void InitializeModule_data3(void) {
    _mxarray0_ = mclInitializeDouble(0.0);
    _mxarray1_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
}

void TerminateModule_data3(void) {
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mdata3(mxArray * * u1, int nargout_, mxArray * x);

_mexLocalFunctionTable _local_function_table_data3
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfData3" contains the normal interface for the "data3"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\data3.m" (lines 1-15). This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
mxArray * mlfData3(mxArray * * u1, mxArray * x) {
    int nargout = 1;
    mxArray * u0 = NULL;
    mxArray * u1__ = NULL;
    mlfEnterNewContext(1, 1, u1, x);
    if (u1 != NULL) {
        ++nargout;
    }
    u0 = Mdata3(&u1__, nargout, x);
    mlfRestorePreviousContext(1, 1, u1, x);
    if (u1 != NULL) {
        mclCopyOutputArg(u1, u1__);
    } else {
        mxDestroyArray(u1__);
    }
    return mlfReturnValue(u0);
}

/*
 * The function "mlxData3" contains the feval interface for the "data3"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\data3.m" (lines 1-15). The feval
 * function calls the implementation version of data3 through this function.
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxData3(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: data3 Line: 4 Column: 1 The function \"data3"
            "\" was called with more than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: data3 Line: 4 Column: 1 The function \"data3"
            "\" was called with more than the declared number of inputs (1)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 1 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 1; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 1, mprhs[0]);
    mplhs[0] = Mdata3(&mplhs[1], nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "Mdata3" is the implementation version of the "data3"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\data3.m" (lines 1-15). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * % Introducir los datos iniciales:
 * % u0=u(0,x)
 * % u1=u_t(0,x)
 * function [u0,u1]=data3(x)
 */
static mxArray * Mdata3(mxArray * * u1, int nargout_, mxArray * x) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_data3);
    mxArray * u0 = NULL;
    mxArray * i = NULL;
    mxArray * resu = NULL;
    mclCopyArray(&x);
    /*
     * 
     * % Ejemplo 1
     * 
     * resu=0*x;
     */
    mlfAssign(&resu, mclMtimes(_mxarray0_, mclVa(x, "x")));
    /*
     * for i=1:25
     */
    {
        int v_ = mclForIntStart(1);
        int e_ = 25;
        if (v_ > e_) {
            mlfAssign(&i, _mxarray1_);
        } else {
            /*
             * resu=resu+(-1/(i*pi)*cos(i*pi/2)+2/(i^2*pi^2)*sin(i*pi/2))*...
             * sin(i*pi*x);
             * end
             */
            for (; ; ) {
                mlfAssign(
                  &resu,
                  mclPlus(
                    mclVv(resu, "resu"),
                    mclMtimes(
                      mlfScalar(
                        svDoubleScalarPlus(
                          svDoubleScalarTimes(
                            svDoubleScalarRdivide(
                              -1.0,
                              svDoubleScalarTimes(
                                (double) v_, 3.141592653589793)),
                            svDoubleScalarCos(
                              svDoubleScalarRdivide(
                                svDoubleScalarTimes(
                                  (double) v_, 3.141592653589793),
                                2.0))),
                          svDoubleScalarTimes(
                            svDoubleScalarRdivide(
                              2.0,
                              svDoubleScalarTimes(
                                svDoubleScalarPower((double) v_, 2.0),
                                9.869604401089358)),
                            svDoubleScalarSin(
                              svDoubleScalarRdivide(
                                svDoubleScalarTimes(
                                  (double) v_, 3.141592653589793),
                                2.0))))),
                      mlfSin(
                        mclMtimes(
                          mlfScalar(
                            svDoubleScalarTimes(
                              (double) v_, 3.141592653589793)),
                          mclVa(x, "x"))))));
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&i, mlfScalar(v_));
        }
    }
    /*
     * u0=resu;
     */
    mlfAssign(&u0, mclVv(resu, "resu"));
    /*
     * u1=0*x;
     */
    mlfAssign(u1, mclMtimes(_mxarray0_, mclVa(x, "x")));
    mclValidateOutput(u0, 1, nargout_, "u0", "data3");
    mclValidateOutput(*u1, 2, nargout_, "u1", "data3");
    mxDestroyArray(resu);
    mxDestroyArray(i);
    mxDestroyArray(x);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return u0;
}
