/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "title.h"
#include "mwservices.h"
#include "libmatlbm.h"
#include "libmmfile.h"

static mxChar _array1_[35] = { 'I', 'n', 'c', 'o', 'r', 'r', 'e', 'c', 't',
                               ' ', 'n', 'u', 'm', 'b', 'e', 'r', ' ', 'o',
                               'f', ' ', 'i', 'n', 'p', 'u', 't', ' ', 'a',
                               'r', 'g', 'u', 'm', 'e', 'n', 't', 's' };
static mxArray * _mxarray0_;

static mxChar _array3_[14] = { 'M', 'W', 'B', 'Y', 'P', 'A', 'S',
                               'S', '_', 't', 'i', 't', 'l', 'e' };
static mxArray * _mxarray2_;

static mxChar _array5_[5] = { 't', 'i', 't', 'l', 'e' };
static mxArray * _mxarray4_;

static mxChar _array7_[9] = { 'F', 'o', 'n', 't', 'A', 'n', 'g', 'l', 'e' };
static mxArray * _mxarray6_;

static mxChar _array9_[8] = { 'F', 'o', 'n', 't', 'N', 'a', 'm', 'e' };
static mxArray * _mxarray8_;

static mxChar _array11_[8] = { 'F', 'o', 'n', 't', 'S', 'i', 'z', 'e' };
static mxArray * _mxarray10_;

static mxChar _array13_[10] = { 'F', 'o', 'n', 't', 'W',
                                'e', 'i', 'g', 'h', 't' };
static mxArray * _mxarray12_;

static mxChar _array15_[8] = { 'R', 'o', 't', 'a', 't', 'i', 'o', 'n' };
static mxArray * _mxarray14_;
static mxArray * _mxarray16_;

static mxChar _array18_[6] = { 's', 't', 'r', 'i', 'n', 'g' };
static mxArray * _mxarray17_;

void InitializeModule_title(void) {
    _mxarray0_ = mclInitializeString(35, _array1_);
    _mxarray2_ = mclInitializeString(14, _array3_);
    _mxarray4_ = mclInitializeString(5, _array5_);
    _mxarray6_ = mclInitializeString(9, _array7_);
    _mxarray8_ = mclInitializeString(8, _array9_);
    _mxarray10_ = mclInitializeString(8, _array11_);
    _mxarray12_ = mclInitializeString(10, _array13_);
    _mxarray14_ = mclInitializeString(8, _array15_);
    _mxarray16_ = mclInitializeDouble(0.0);
    _mxarray17_ = mclInitializeString(6, _array18_);
}

void TerminateModule_title(void) {
    mxDestroyArray(_mxarray17_);
    mxDestroyArray(_mxarray16_);
    mxDestroyArray(_mxarray14_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mtitle(int nargout_, mxArray * string, mxArray * varargin);

_mexLocalFunctionTable _local_function_table_title
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNTitle" contains the nargout interface for the "title"
 * M-function from file "c:\matlab6p5\toolbox\matlab\graph2d\title.m" (lines
 * 1-42). This interface is only produced if the M-function uses the special
 * variable "nargout". The nargout interface allows the number of requested
 * outputs to be specified via the nargout argument, as opposed to the normal
 * interface which dynamically calculates the number of outputs based on the
 * number of non-NULL inputs it receives. This function processes any input
 * arguments and passes them to the implementation version of the function,
 * appearing above.
 */
mxArray * mlfNTitle(int nargout, mxArray * string, ...) {
    mxArray * varargin = NULL;
    mxArray * hh = NULL;
    mlfVarargin(&varargin, string, 0);
    mlfEnterNewContext(0, -2, string, varargin);
    hh = Mtitle(nargout, string, varargin);
    mlfRestorePreviousContext(0, 1, string);
    mxDestroyArray(varargin);
    return mlfReturnValue(hh);
}

/*
 * The function "mlfTitle" contains the normal interface for the "title"
 * M-function from file "c:\matlab6p5\toolbox\matlab\graph2d\title.m" (lines
 * 1-42). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfTitle(mxArray * string, ...) {
    mxArray * varargin = NULL;
    int nargout = 1;
    mxArray * hh = NULL;
    mlfVarargin(&varargin, string, 0);
    mlfEnterNewContext(0, -2, string, varargin);
    hh = Mtitle(nargout, string, varargin);
    mlfRestorePreviousContext(0, 1, string);
    mxDestroyArray(varargin);
    return mlfReturnValue(hh);
}

/*
 * The function "mlfVTitle" contains the void interface for the "title"
 * M-function from file "c:\matlab6p5\toolbox\matlab\graph2d\title.m" (lines
 * 1-42). The void interface is only produced if the M-function uses the
 * special variable "nargout", and has at least one output. The void interface
 * function specifies zero output arguments to the implementation version of
 * the function, and in the event that the implementation version still returns
 * an output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVTitle(mxArray * string, ...) {
    mxArray * varargin = NULL;
    mxArray * hh = NULL;
    mlfVarargin(&varargin, string, 0);
    mlfEnterNewContext(0, -2, string, varargin);
    hh = Mtitle(0, string, varargin);
    mlfRestorePreviousContext(0, 1, string);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxTitle" contains the feval interface for the "title"
 * M-function from file "c:\matlab6p5\toolbox\matlab\graph2d\title.m" (lines
 * 1-42). The feval function calls the implementation version of title through
 * this function. This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
void mlxTitle(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[2];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: title Line: 1 Column: 1 The function \"title"
            "\" was called with more than the declared number of outputs (1)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 1 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 1; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 1, mprhs[0]);
    mprhs[1] = NULL;
    mlfAssign(&mprhs[1], mclCreateVararginCell(nrhs - 1, prhs + 1));
    mplhs[0] = Mtitle(nlhs, mprhs[0], mprhs[1]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
    mxDestroyArray(mprhs[1]);
}

/*
 * The function "Mtitle" is the implementation version of the "title"
 * M-function from file "c:\matlab6p5\toolbox\matlab\graph2d\title.m" (lines
 * 1-42). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function hh = title(string,varargin)
 */
static mxArray * Mtitle(int nargout_, mxArray * string, mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_title);
    int nargin_ = mclNargin(-2, string, varargin, NULL);
    mxArray * hh = NULL;
    mxArray * h = NULL;
    mxArray * ax = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&string);
    mclCopyArray(&varargin);
    /*
     * %TITLE  Graph title.
     * %   TITLE('text') adds text at the top of the current axis.
     * %
     * %   TITLE('text','Property1',PropertyValue1,'Property2',PropertyValue2,...)
     * %   sets the values of the specified properties of the title.
     * %
     * %   H = TITLE(...) returns the handle to the text object used as the title.
     * %
     * %   See also XLABEL, YLABEL, ZLABEL, TEXT.
     * 
     * %   Copyright 1984-2002 The MathWorks, Inc. 
     * %   $Revision: 5.14 $  $Date: 2002/04/08 21:44:38 $
     * 
     * if nargin > 1 & (nargin-1)/2-fix((nargin-1)/2),
     */
    {
        mxArray * a_ = mclInitialize(mclBoolToArray(nargin_ > 1));
        if (mlfTobool(a_)
            && mlfTobool(
                 mclAnd(
                   a_,
                   mclMinus(
                     mlfScalar(
                       svDoubleScalarRdivide((double) (nargin_ - 1), 2.0)),
                     mlfFix(
                       mlfScalar(
                         svDoubleScalarRdivide(
                           (double) (nargin_ - 1), 2.0))))))) {
            mxDestroyArray(a_);
            /*
             * error('Incorrect number of input arguments')
             */
            mlfError(_mxarray0_, NULL);
        } else {
            mxDestroyArray(a_);
        }
    /*
     * end
     */
    }
    /*
     * 
     * ax = gca;
     */
    mlfAssign(&ax, mlfGca(NULL));
    /*
     * 
     * %---Check for bypass option
     * if isappdata(ax,'MWBYPASS_title')       
     */
    if (mlfTobool(mlfIsappdata(mclVv(ax, "ax"), _mxarray2_))) {
        /*
         * h = mwbypass(ax,'MWBYPASS_title',string,varargin{:});
         */
        mlfAssign(
          &h,
          mlfNGraph2d_private_mwbypass(
            1,
            mclVv(ax, "ax"),
            _mxarray2_,
            mclVa(string, "string"),
            mlfIndexRef(
              mclVa(varargin, "varargin"), "{?}", mlfCreateColonIndex()),
            NULL));
    /*
     * 
     * %---Standard behavior      
     * else
     */
    } else {
        /*
         * h = get(ax,'title');
         */
        mlfAssign(&h, mlfNGet(1, mclVv(ax, "ax"), _mxarray4_, NULL));
        /*
         * 
         * %Over-ride text objects default font attributes with
         * %the Axes' default font attributes.
         * set(h, 'FontAngle',  get(ax, 'FontAngle'), ...
         */
        mclAssignAns(
          &ans,
          mlfNSet(
            0,
            mclVv(h, "h"),
            _mxarray6_,
            mlfNGet(1, mclVv(ax, "ax"), _mxarray6_, NULL),
            _mxarray8_,
            mlfNGet(1, mclVv(ax, "ax"), _mxarray8_, NULL),
            _mxarray10_,
            mlfNGet(1, mclVv(ax, "ax"), _mxarray10_, NULL),
            _mxarray12_,
            mlfNGet(1, mclVv(ax, "ax"), _mxarray12_, NULL),
            _mxarray14_,
            _mxarray16_,
            _mxarray17_,
            mclVa(string, "string"),
            mlfIndexRef(
              mclVa(varargin, "varargin"), "{?}", mlfCreateColonIndex()),
            NULL));
    /*
     * 'FontName',   get(ax, 'FontName'), ...
     * 'FontSize',   get(ax, 'FontSize'), ...
     * 'FontWeight', get(ax, 'FontWeight'), ...
     * 'Rotation',   0, ...
     * 'string',     string, varargin{:});
     * end
     */
    }
    /*
     * 
     * if nargout > 0
     */
    if (nargout_ > 0) {
        /*
         * hh = h;
         */
        mlfAssign(&hh, mclVv(h, "h"));
    /*
     * end
     */
    }
    mclValidateOutput(hh, 1, nargout_, "hh", "title");
    mxDestroyArray(ans);
    mxDestroyArray(ax);
    mxDestroyArray(h);
    mxDestroyArray(varargin);
    mxDestroyArray(string);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return hh;
}
