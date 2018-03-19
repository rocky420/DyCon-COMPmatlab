/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "parseparams.h"
#include "libmatlbm.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;
static mxArray * _mxarray2_;

void InitializeModule_parseparams(void) {
    _mxarray0_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray1_ = mclInitializeDouble(1.0);
    _mxarray2_ = mclInitializeDouble(0.0);
}

void TerminateModule_parseparams(void) {
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mparseparams(mxArray * * proppairs,
                              int nargout_,
                              mxArray * args);

_mexLocalFunctionTable _local_function_table_parseparams
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfParseparams" contains the normal interface for the
 * "parseparams" M-function from file
 * "c:\matlab6p5\toolbox\matlab\graphics\parseparams.m" (lines 1-33). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfParseparams(mxArray * * proppairs, mxArray * args) {
    int nargout = 1;
    mxArray * regargs = NULL;
    mxArray * proppairs__ = NULL;
    mlfEnterNewContext(1, 1, proppairs, args);
    if (proppairs != NULL) {
        ++nargout;
    }
    regargs = Mparseparams(&proppairs__, nargout, args);
    mlfRestorePreviousContext(1, 1, proppairs, args);
    if (proppairs != NULL) {
        mclCopyOutputArg(proppairs, proppairs__);
    } else {
        mxDestroyArray(proppairs__);
    }
    return mlfReturnValue(regargs);
}

/*
 * The function "mlxParseparams" contains the feval interface for the
 * "parseparams" M-function from file
 * "c:\matlab6p5\toolbox\matlab\graphics\parseparams.m" (lines 1-33). The feval
 * function calls the implementation version of parseparams through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxParseparams(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parseparams Line: 1 Column"
            ": 1 The function \"parseparams\" was called with"
            " more than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: parseparams Line: 1 Column"
            ": 1 The function \"parseparams\" was called with"
            " more than the declared number of inputs (1)."),
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
    mplhs[0] = Mparseparams(&mplhs[1], nlhs, mprhs[0]);
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
 * The function "Mparseparams" is the implementation version of the
 * "parseparams" M-function from file
 * "c:\matlab6p5\toolbox\matlab\graphics\parseparams.m" (lines 1-33). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [regargs, proppairs]=parseparams(args)
 */
static mxArray * Mparseparams(mxArray * * proppairs,
                              int nargout_,
                              mxArray * args) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_parseparams);
    mxArray * regargs = NULL;
    mxArray * charindx = NULL;
    mxArray * i = NULL;
    mxArray * charsrch = NULL;
    mclCopyArray(&args);
    /*
     * %PARSEPARAMS Finds first string argument.
     * %   [REG, PROP]=PARSEPARAMS(ARGS) takes cell array ARGS and
     * %   separates it into two argument sets:
     * %      REG being all arguments up to, but excluding, the
     * %   first string argument encountered in ARGS.
     * %      PROP contains all other arguments after, and including,
     * %   the first string argument encountered.
     * %
     * %   PARSEPARAMS is intended to isolate possible property
     * %   value pairs in functions using VARARGIN as the input
     * %   argument.
     * 
     * %   Chris Portal 2-17-98
     * %   Copyright 1984-2002 The MathWorks, Inc. 
     * %   $Revision: 1.6 $  $Date: 2002/04/08 22:41:31 $
     * 
     * charsrch=[];
     */
    mlfAssign(&charsrch, _mxarray0_);
    /*
     * 
     * for i=1:length(args),
     */
    {
        int v_ = mclForIntStart(1);
        int e_ = mclLengthInt(mclVa(args, "args"));
        if (v_ > e_) {
            mlfAssign(&i, _mxarray0_);
        } else {
            /*
             * charsrch=[charsrch ischar(args{i})];
             * end
             */
            for (; ; ) {
                mlfAssign(
                  &charsrch,
                  mlfHorzcat(
                    mclVv(charsrch, "charsrch"),
                    mclFeval(
                      mclValueVarargout(),
                      mlxIschar,
                      mlfIndexRef(mclVa(args, "args"), "{?}", mlfScalar(v_)),
                      NULL),
                    NULL));
                if (v_ == e_) {
                    break;
                }
                ++v_;
            }
            mlfAssign(&i, mlfScalar(v_));
        }
    }
    /*
     * 
     * charindx=find(charsrch);
     */
    mlfAssign(&charindx, mlfFind(NULL, NULL, mclVv(charsrch, "charsrch")));
    /*
     * 
     * if isempty(charindx),
     */
    if (mlfTobool(mlfIsempty(mclVv(charindx, "charindx")))) {
        /*
         * regargs=args;
         */
        mlfAssign(&regargs, mclVa(args, "args"));
        /*
         * proppairs=args(1:0);
         */
        mlfAssign(
          proppairs,
          mclArrayRef1(
            mclVa(args, "args"), mlfColon(_mxarray1_, _mxarray2_, NULL)));
    /*
     * else
     */
    } else {
        /*
         * regargs=args(1:charindx(1)-1);
         */
        mlfAssign(
          &regargs,
          mclArrayRef1(
            mclVa(args, "args"),
            mlfColon(
              _mxarray1_,
              mclMinus(
                mclIntArrayRef1(mclVv(charindx, "charindx"), 1), _mxarray1_),
              NULL)));
        /*
         * proppairs=args(charindx(1):end);
         */
        mlfAssign(
          proppairs,
          mclArrayRef1(
            mclVa(args, "args"),
            mlfColon(
              mclIntArrayRef1(mclVv(charindx, "charindx"), 1),
              mlfEnd(mclVa(args, "args"), _mxarray1_, _mxarray1_),
              NULL)));
    /*
     * end
     */
    }
    mclValidateOutput(regargs, 1, nargout_, "regargs", "parseparams");
    mclValidateOutput(*proppairs, 2, nargout_, "proppairs", "parseparams");
    mxDestroyArray(charsrch);
    mxDestroyArray(i);
    mxDestroyArray(charindx);
    mxDestroyArray(args);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return regargs;
}
