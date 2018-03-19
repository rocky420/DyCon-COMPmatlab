/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:58 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "cla.h"
#include "libsgl.h"
#include "libmatlbm.h"
#include "libmmfile.h"
static mxArray * _mxarray0_;

static mxChar _array2_[4] = { 'T', 'y', 'p', 'e' };
static mxArray * _mxarray1_;

static mxChar _array4_[4] = { 'a', 'x', 'e', 's' };
static mxArray * _mxarray3_;
static mxArray * _mxarray5_;

void InitializeModule_cla(void) {
    _mxarray0_ = mclInitializeDouble(1.0);
    _mxarray1_ = mclInitializeString(4, _array2_);
    _mxarray3_ = mclInitializeString(4, _array4_);
    _mxarray5_ = mclInitializeDouble(2.0);
}

void TerminateModule_cla(void) {
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mcla(int nargout_, mxArray * varargin);

_mexLocalFunctionTable _local_function_table_cla
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNCla" contains the nargout interface for the "cla"
 * M-function from file "c:\matlab6p5\toolbox\matlab\graphics\cla.m" (lines
 * 1-34). This interface is only produced if the M-function uses the special
 * variable "nargout". The nargout interface allows the number of requested
 * outputs to be specified via the nargout argument, as opposed to the normal
 * interface which dynamically calculates the number of outputs based on the
 * number of non-NULL inputs it receives. This function processes any input
 * arguments and passes them to the implementation version of the function,
 * appearing above.
 */
mxArray * mlfNCla(int nargout, ...) {
    mxArray * varargin = NULL;
    mxArray * ret_ax = NULL;
    mlfVarargin(&varargin, nargout, 0);
    mlfEnterNewContext(0, -1, varargin);
    ret_ax = Mcla(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfReturnValue(ret_ax);
}

/*
 * The function "mlfCla" contains the normal interface for the "cla" M-function
 * from file "c:\matlab6p5\toolbox\matlab\graphics\cla.m" (lines 1-34). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfCla(mxArray * synthetic_varargin_argument, ...) {
    mxArray * varargin = NULL;
    int nargout = 1;
    mxArray * ret_ax = NULL;
    mlfVarargin(&varargin, synthetic_varargin_argument, 1);
    mlfEnterNewContext(0, -1, varargin);
    ret_ax = Mcla(nargout, varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
    return mlfReturnValue(ret_ax);
}

/*
 * The function "mlfVCla" contains the void interface for the "cla" M-function
 * from file "c:\matlab6p5\toolbox\matlab\graphics\cla.m" (lines 1-34). The
 * void interface is only produced if the M-function uses the special variable
 * "nargout", and has at least one output. The void interface function
 * specifies zero output arguments to the implementation version of the
 * function, and in the event that the implementation version still returns an
 * output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVCla(mxArray * synthetic_varargin_argument, ...) {
    mxArray * varargin = NULL;
    mxArray * ret_ax = NULL;
    mlfVarargin(&varargin, synthetic_varargin_argument, 1);
    mlfEnterNewContext(0, -1, varargin);
    ret_ax = Mcla(0, synthetic_varargin_argument);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxCla" contains the feval interface for the "cla" M-function
 * from file "c:\matlab6p5\toolbox\matlab\graphics\cla.m" (lines 1-34). The
 * feval function calls the implementation version of cla through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxCla(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: cla Line: 1 Column: 1 The function \"cla\""
            " was called with more than the declared number of outputs (1)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    mlfEnterNewContext(0, 0);
    mprhs[0] = NULL;
    mlfAssign(&mprhs[0], mclCreateVararginCell(nrhs, prhs));
    mplhs[0] = Mcla(nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 0);
    plhs[0] = mplhs[0];
    mxDestroyArray(mprhs[0]);
}

/*
 * The function "Mcla" is the implementation version of the "cla" M-function
 * from file "c:\matlab6p5\toolbox\matlab\graphics\cla.m" (lines 1-34). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function ret_ax = cla(varargin)
 */
static mxArray * Mcla(int nargout_, mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_cla);
    int nargin_ = mclNargin(-1, varargin, NULL);
    mxArray * ret_ax = NULL;
    mxArray * ans = NULL;
    mxArray * extra = NULL;
    mxArray * ax = NULL;
    mclCopyArray(&varargin);
    /*
     * %CLA Clear current axis.
     * %   CLA deletes all children of the current axes with visible handles.
     * %
     * %   CLA RESET deletes all objects (including ones with hidden handles)
     * %   and also resets all axes properties, except Position and Units, to
     * %   their default values.
     * %
     * %   See also CLF, RESET, HOLD.
     * 
     * %   CLA(..., HSAVE) deletes all children except those specified in
     * %   HSAVE.
     * %
     * %   CLA(AX) or CLA(AX,'RESET') clears the axes with handle AX.
     * 
     * %   Copyright 1984-2002 The MathWorks, Inc. 
     * %   $Revision: 5.17 $  $Date: 2002/04/08 22:41:27 $
     * 
     * if nargin>0 & length(varargin{1})==1 & ishandle(varargin{1}) & strcmp(get(varargin{1},'Type'),'axes')
     */
    {
        mxArray * a_ = mclInitialize(mclBoolToArray(nargin_ > 0));
        if (mlfTobool(a_)) {
            mlfAssign(
              &a_,
              mclAnd(
                a_,
                mclEq(
                  mclFeval(
                    mclValueVarargout(),
                    mlxLength,
                    mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray0_),
                    NULL),
                  _mxarray0_)));
        } else {
            mlfAssign(&a_, mlfScalar(0));
        }
        if (mlfTobool(a_)) {
            mlfAssign(
              &a_,
              mclAnd(
                a_,
                mclFeval(
                  mclValueVarargout(),
                  mlxIshandle,
                  mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray0_),
                  NULL)));
        } else {
            mlfAssign(&a_, mlfScalar(0));
        }
        if (mlfTobool(a_)
            && mlfTobool(
                 mclAnd(
                   a_,
                   mlfStrcmp(
                     mlfNGet(
                       1,
                       mlfIndexRef(
                         mclVa(varargin, "varargin"), "{?}", _mxarray0_),
                       _mxarray1_,
                       NULL),
                     _mxarray3_)))) {
            mxDestroyArray(a_);
            /*
             * % If first argument is a single axes handle, apply CLA to these axes
             * ax = varargin{1};
             */
            mlfAssign(
              &ax, mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray0_));
            /*
             * extra = varargin(2:end);
             */
            mlfAssign(
              &extra,
              mclArrayRef1(
                mclVa(varargin, "varargin"),
                mlfColon(
                  _mxarray5_,
                  mlfEnd(mclVa(varargin, "varargin"), _mxarray0_, _mxarray0_),
                  NULL)));
        /*
         * else
         */
        } else {
            mxDestroyArray(a_);
            /*
             * % Default target is current axes
             * ax = gca;
             */
            mlfAssign(&ax, mlfGca(NULL));
            /*
             * extra = varargin;
             */
            mlfAssign(&extra, mclVa(varargin, "varargin"));
        }
    /*
     * end
     */
    }
    /*
     * 
     * clo(ax, extra{:});
     */
    mclAssignAns(
      &ans,
      mclFeval(
        mclAnsVarargout(),
        mlxGraphics_private_clo,
        mclVv(ax, "ax"),
        mlfIndexRef(mclVv(extra, "extra"), "{?}", mlfCreateColonIndex()),
        NULL));
    /*
     * 
     * if (nargout ~= 0)
     */
    if (nargout_ != 0) {
        /*
         * ret_ax = ax;
         */
        mlfAssign(&ret_ax, mclVv(ax, "ax"));
    /*
     * end
     */
    }
    mclValidateOutput(ret_ax, 1, nargout_, "ret_ax", "cla");
    mxDestroyArray(ax);
    mxDestroyArray(extra);
    mxDestroyArray(ans);
    mxDestroyArray(varargin);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return ret_ax;
}
