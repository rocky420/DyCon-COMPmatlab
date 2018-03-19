/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:58 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "data1.h"
#include "libmatlbm.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;

void InitializeModule_data1(void) {
    _mxarray0_ = mclInitializeDouble(3.141592653589793);
    _mxarray1_ = mclInitializeDouble(-3.141592653589793);
}

void TerminateModule_data1(void) {
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mdata1(mxArray * * u1, int nargout_, mxArray * x);

_mexLocalFunctionTable _local_function_table_data1
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfData1" contains the normal interface for the "data1"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\data1.m" (lines 1-32). This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
mxArray * mlfData1(mxArray * * u1, mxArray * x) {
    int nargout = 1;
    mxArray * u0 = NULL;
    mxArray * u1__ = NULL;
    mlfEnterNewContext(1, 1, u1, x);
    if (u1 != NULL) {
        ++nargout;
    }
    u0 = Mdata1(&u1__, nargout, x);
    mlfRestorePreviousContext(1, 1, u1, x);
    if (u1 != NULL) {
        mclCopyOutputArg(u1, u1__);
    } else {
        mxDestroyArray(u1__);
    }
    return mlfReturnValue(u0);
}

/*
 * The function "mlxData1" contains the feval interface for the "data1"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\data1.m" (lines 1-32). The feval
 * function calls the implementation version of data1 through this function.
 * This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxData1(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: data1 Line: 4 Column: 1 The function \"data1"
            "\" was called with more than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: data1 Line: 4 Column: 1 The function \"data1"
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
    mplhs[0] = Mdata1(&mplhs[1], nlhs, mprhs[0]);
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
 * The function "Mdata1" is the implementation version of the "data1"
 * M-function from file "c:\documents and settings\miguel cea nogal\mis
 * documentos\documents\progcontrol\guide6\data1.m" (lines 1-32). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * % Introducir los datos iniciales:
 * % u0=u(0,x)
 * % u1=u_t(0,x)
 * function [u0,u1]=data1(x)
 */
static mxArray * Mdata1(mxArray * * u1, int nargout_, mxArray * x) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_data1);
    mxArray * u0 = NULL;
    mclCopyArray(&x);
    /*
     * 
     * % Ejemplo 1
     * u0=sin(pi*x);
     */
    mlfAssign(&u0, mlfSin(mclMtimes(_mxarray0_, mclVa(x, "x"))));
    /*
     * u1=-pi*sin(pi*x);
     */
    mlfAssign(
      u1, mclMtimes(_mxarray1_, mlfSin(mclMtimes(_mxarray0_, mclVa(x, "x")))));
    mclValidateOutput(u0, 1, nargout_, "u0", "data1");
    mclValidateOutput(*u1, 2, nargout_, "u1", "data1");
    mxDestroyArray(x);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return u0;
    /*
     * 
     * %u1=0*x;
     * % Ejemplo 2: 100 modos de Fourier
     * %resu=0*x;
     * %u0=0*x;
     * %for i=1:50
     * %  resu= resu+sin(i*pi*x);
     * %end
     * 
     * %u0=resu/50; 
     * 
     * % Ejemplo 3: funcion sombrero
     * %resu=x*0;
     * %for i=1:length(x)/2
     * %   resu(i)=3*x(i);
     * %end
     * 
     * %for i=1:length(x)
     * % if x(i)<.5
     * %   u0(i)=16*x(i);
     * %else
     * %  u0(i)=0;
     * %end
     * %end
     */
}
