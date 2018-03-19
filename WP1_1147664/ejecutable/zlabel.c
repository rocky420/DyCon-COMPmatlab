/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:58 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "zlabel.h"
#include "mwservices.h"
#include "libmatlbm.h"
#include "libmmfile.h"

static mxChar _array1_[6] = { 'z', 'l', 'a', 'b', 'e', 'l' };
static mxArray * _mxarray0_;

static mxChar _array3_[35] = { 'I', 'n', 'c', 'o', 'r', 'r', 'e', 'c', 't',
                               ' ', 'n', 'u', 'm', 'b', 'e', 'r', ' ', 'o',
                               'f', ' ', 'i', 'n', 'p', 'u', 't', ' ', 'a',
                               'r', 'g', 'u', 'm', 'e', 'n', 't', 's' };
static mxArray * _mxarray2_;

static mxChar _array5_[9] = { 'F', 'o', 'n', 't', 'A', 'n', 'g', 'l', 'e' };
static mxArray * _mxarray4_;

static mxChar _array7_[8] = { 'F', 'o', 'n', 't', 'N', 'a', 'm', 'e' };
static mxArray * _mxarray6_;

static mxChar _array9_[8] = { 'F', 'o', 'n', 't', 'S', 'i', 'z', 'e' };
static mxArray * _mxarray8_;

static mxChar _array11_[10] = { 'F', 'o', 'n', 't', 'W',
                                'e', 'i', 'g', 'h', 't' };
static mxArray * _mxarray10_;

static mxChar _array13_[6] = { 's', 't', 'r', 'i', 'n', 'g' };
static mxArray * _mxarray12_;

void InitializeModule_zlabel(void) {
    _mxarray0_ = mclInitializeString(6, _array1_);
    _mxarray2_ = mclInitializeString(35, _array3_);
    _mxarray4_ = mclInitializeString(9, _array5_);
    _mxarray6_ = mclInitializeString(8, _array7_);
    _mxarray8_ = mclInitializeString(8, _array9_);
    _mxarray10_ = mclInitializeString(10, _array11_);
    _mxarray12_ = mclInitializeString(6, _array13_);
}

void TerminateModule_zlabel(void) {
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * Mzlabel(int nargout_, mxArray * string, mxArray * varargin);

_mexLocalFunctionTable _local_function_table_zlabel
  = { 0, (mexFunctionTableEntry *)NULL };

/*
 * The function "mlfNZlabel" contains the nargout interface for the "zlabel"
 * M-function from file "c:\matlab6p5\toolbox\matlab\graph3d\zlabel.m" (lines
 * 1-34). This interface is only produced if the M-function uses the special
 * variable "nargout". The nargout interface allows the number of requested
 * outputs to be specified via the nargout argument, as opposed to the normal
 * interface which dynamically calculates the number of outputs based on the
 * number of non-NULL inputs it receives. This function processes any input
 * arguments and passes them to the implementation version of the function,
 * appearing above.
 */
mxArray * mlfNZlabel(int nargout, mxArray * string, ...) {
    mxArray * varargin = NULL;
    mxArray * hh = NULL;
    mlfVarargin(&varargin, string, 0);
    mlfEnterNewContext(0, -2, string, varargin);
    hh = Mzlabel(nargout, string, varargin);
    mlfRestorePreviousContext(0, 1, string);
    mxDestroyArray(varargin);
    return mlfReturnValue(hh);
}

/*
 * The function "mlfZlabel" contains the normal interface for the "zlabel"
 * M-function from file "c:\matlab6p5\toolbox\matlab\graph3d\zlabel.m" (lines
 * 1-34). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfZlabel(mxArray * string, ...) {
    mxArray * varargin = NULL;
    int nargout = 1;
    mxArray * hh = NULL;
    mlfVarargin(&varargin, string, 0);
    mlfEnterNewContext(0, -2, string, varargin);
    hh = Mzlabel(nargout, string, varargin);
    mlfRestorePreviousContext(0, 1, string);
    mxDestroyArray(varargin);
    return mlfReturnValue(hh);
}

/*
 * The function "mlfVZlabel" contains the void interface for the "zlabel"
 * M-function from file "c:\matlab6p5\toolbox\matlab\graph3d\zlabel.m" (lines
 * 1-34). The void interface is only produced if the M-function uses the
 * special variable "nargout", and has at least one output. The void interface
 * function specifies zero output arguments to the implementation version of
 * the function, and in the event that the implementation version still returns
 * an output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVZlabel(mxArray * string, ...) {
    mxArray * varargin = NULL;
    mxArray * hh = NULL;
    mlfVarargin(&varargin, string, 0);
    mlfEnterNewContext(0, -2, string, varargin);
    hh = Mzlabel(0, string, varargin);
    mlfRestorePreviousContext(0, 1, string);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxZlabel" contains the feval interface for the "zlabel"
 * M-function from file "c:\matlab6p5\toolbox\matlab\graph3d\zlabel.m" (lines
 * 1-34). The feval function calls the implementation version of zlabel through
 * this function. This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
void mlxZlabel(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[2];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: zlabel Line: 1 Column: "
            "1 The function \"zlabel\" was called with mor"
            "e than the declared number of outputs (1)."),
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
    mplhs[0] = Mzlabel(nlhs, mprhs[0], mprhs[1]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
    mxDestroyArray(mprhs[1]);
}

/*
 * The function "Mzlabel" is the implementation version of the "zlabel"
 * M-function from file "c:\matlab6p5\toolbox\matlab\graph3d\zlabel.m" (lines
 * 1-34). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function hh = zlabel(string,varargin)
 */
static mxArray * Mzlabel(int nargout_, mxArray * string, mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_zlabel);
    int nargin_ = mclNargin(-2, string, varargin, NULL);
    mxArray * hh = NULL;
    mxArray * ans = NULL;
    mxArray * h = NULL;
    mxArray * ax = NULL;
    mclCopyArray(&string);
    mclCopyArray(&varargin);
    /*
     * %ZLABEL Z-axis label.
     * %   ZLABEL('text') adds text above the Z-axis on the current axis.
     * %
     * %   ZLABEL('txt','Property1',PropertyValue1,'Property2',PropertyValue2,...)
     * %   sets the values of the specified properties of the zlabel.
     * %
     * %   H = ZLABEL(...) returns the handle to the text object used as the label.
     * %
     * %   See also XLABEL, YLABEL, TITLE, TEXT.
     * 
     * %   Copyright 1984-2002 The MathWorks, Inc. 
     * %   $Revision: 5.11 $  $Date: 2002/04/08 22:00:18 $
     * 
     * ax = gca;
     */
    mlfAssign(&ax, mlfGca(NULL));
    /*
     * h = get(ax,'zlabel');
     */
    mlfAssign(&h, mlfNGet(1, mclVv(ax, "ax"), _mxarray0_, NULL));
    /*
     * 
     * %Over-ride text objects default font attributes with
     * %the Axes' default font attributes.
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
            mlfError(_mxarray2_, NULL);
        } else {
            mxDestroyArray(a_);
        }
    /*
     * end
     */
    }
    /*
     * 
     * set(h, 'FontAngle',  get(ax, 'FontAngle'), ...
     */
    mclAssignAns(
      &ans,
      mlfNSet(
        0,
        mclVv(h, "h"),
        _mxarray4_,
        mlfNGet(1, mclVv(ax, "ax"), _mxarray4_, NULL),
        _mxarray6_,
        mlfNGet(1, mclVv(ax, "ax"), _mxarray6_, NULL),
        _mxarray8_,
        mlfNGet(1, mclVv(ax, "ax"), _mxarray8_, NULL),
        _mxarray10_,
        mlfNGet(1, mclVv(ax, "ax"), _mxarray10_, NULL),
        _mxarray12_,
        mclVa(string, "string"),
        mlfIndexRef(mclVa(varargin, "varargin"), "{?}", mlfCreateColonIndex()),
        NULL));
    /*
     * 'FontName',   get(ax, 'FontName'), ...
     * 'FontSize',   get(ax, 'FontSize'), ...
     * 'FontWeight', get(ax, 'FontWeight'), ...
     * 'string',     string, varargin{:});
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
    mclValidateOutput(hh, 1, nargout_, "hh", "zlabel");
    mxDestroyArray(ax);
    mxDestroyArray(h);
    mxDestroyArray(ans);
    mxDestroyArray(varargin);
    mxDestroyArray(string);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return hh;
}
