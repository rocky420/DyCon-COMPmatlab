/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "movegui.h"
#include "libsgl.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "libmwsglm.h"

static mxChar _array3_[5] = { 'n', 'o', 'r', 't', 'h' };
static mxArray * _mxarray2_;

static mxChar _array5_[5] = { 's', 'o', 'u', 't', 'h' };
static mxArray * _mxarray4_;

static mxChar _array7_[4] = { 'e', 'a', 's', 't' };
static mxArray * _mxarray6_;

static mxChar _array9_[4] = { 'w', 'e', 's', 't' };
static mxArray * _mxarray8_;

static mxChar _array11_[9] = { 'n', 'o', 'r', 't', 'h', 'e', 'a', 's', 't' };
static mxArray * _mxarray10_;

static mxChar _array13_[9] = { 's', 'o', 'u', 't', 'h', 'e', 'a', 's', 't' };
static mxArray * _mxarray12_;

static mxChar _array15_[9] = { 'n', 'o', 'r', 't', 'h', 'w', 'e', 's', 't' };
static mxArray * _mxarray14_;

static mxChar _array17_[9] = { 's', 'o', 'u', 't', 'h', 'w', 'e', 's', 't' };
static mxArray * _mxarray16_;

static mxChar _array19_[6] = { 'c', 'e', 'n', 't', 'e', 'r' };
static mxArray * _mxarray18_;

static mxChar _array21_[8] = { 'o', 'n', 's', 'c', 'r', 'e', 'e', 'n' };
static mxArray * _mxarray20_;

static mxArray * _array1_[10] = { NULL /*_mxarray2_*/, NULL /*_mxarray4_*/,
                                  NULL /*_mxarray6_*/, NULL /*_mxarray8_*/,
                                  NULL /*_mxarray10_*/, NULL /*_mxarray12_*/,
                                  NULL /*_mxarray14_*/, NULL /*_mxarray16_*/,
                                  NULL /*_mxarray18_*/, NULL /*_mxarray20_*/ };
static mxArray * _mxarray0_;
static mxArray * _mxarray22_;
static mxArray * _mxarray23_;
static mxArray * _mxarray24_;
static mxArray * _mxarray25_;
static mxArray * _mxarray26_;

static mxChar _array28_[39] = { 'h', 'a', 'n', 'd', 'l', 'e', ' ', 'o',
                                'f', ' ', 'f', 'i', 'g', 'u', 'r', 'e',
                                ' ', 'o', 'r', ' ', 'd', 'e', 's', 'c',
                                'e', 'n', 'd', 'a', 'n', 't', ' ', 'r',
                                'e', 'q', 'u', 'i', 'r', 'e', 'd' };
static mxArray * _mxarray27_;

static mxChar _array30_[5] = { 'e', 'x', 'a', 'c', 't' };
static mxArray * _mxarray29_;

static mxChar _array32_[21] = { 'u', 'n', 'r', 'e', 'c', 'o', 'g',
                                'n', 'i', 'z', 'e', 'd', ' ', 'p',
                                'o', 's', 'i', 't', 'i', 'o', 'n' };
static mxArray * _mxarray31_;
static mxArray * _mxarray33_;

static mxChar _array35_[27] = { 'u', 'n', 'r', 'e', 'c', 'o', 'g', 'n', 'i',
                                'z', 'e', 'd', ' ', 'i', 'n', 'p', 'u', 't',
                                ' ', 'a', 'r', 'g', 'u', 'm', 'e', 'n', 't' };
static mxArray * _mxarray34_;

static mxChar _array37_[22] = { 'a', 'c', 't', 'i', 'v', 'e', 'p', 'o',
                                's', 'i', 't', 'i', 'o', 'n', 'p', 'r',
                                'o', 'p', 'e', 'r', 't', 'y' };
static mxArray * _mxarray36_;

static mxChar _array39_[5] = { 'u', 'n', 'i', 't', 's' };
static mxArray * _mxarray38_;

static mxChar _array41_[6] = { 'p', 'i', 'x', 'e', 'l', 's' };
static mxArray * _mxarray40_;

static mxChar _array43_[8] = { 'p', 'o', 's', 'i', 't', 'i', 'o', 'n' };
static mxArray * _mxarray42_;
static mxArray * _mxarray44_;
static mxArray * _mxarray45_;

static mxChar _array47_[4] = { 't', 'y', 'p', 'e' };
static mxArray * _mxarray46_;

static mxChar _array49_[6] = { 'u', 'i', 'm', 'e', 'n', 'u' };
static mxArray * _mxarray48_;
static mxArray * _mxarray50_;

static mxChar _array52_[9] = { 'u', 'i', 't', 'o', 'o', 'l', 'b', 'a', 'r' };
static mxArray * _mxarray51_;

static mxChar _array54_[13] = { 'o', 'u', 't', 'e', 'r', 'p', 'o',
                                's', 'i', 't', 'i', 'o', 'n' };
static mxArray * _mxarray53_;

static mxChar _array56_[10] = { 's', 'c', 'r', 'e', 'e',
                                'n', 's', 'i', 'z', 'e' };
static mxArray * _mxarray55_;

static double _array58_[2] = { 0.0, 0.0 };
static mxArray * _mxarray57_;
static mxArray * _mxarray59_;

static mxChar _array61_[6] = { 'f', 'i', 'g', 'u', 'r', 'e' };
static mxArray * _mxarray60_;

static mxChar _array63_[6] = { 'p', 'a', 'r', 'e', 'n', 't' };
static mxArray * _mxarray62_;

void InitializeModule_movegui(void) {
    _mxarray2_ = mclInitializeString(5, _array3_);
    _array1_[0] = _mxarray2_;
    _mxarray4_ = mclInitializeString(5, _array5_);
    _array1_[1] = _mxarray4_;
    _mxarray6_ = mclInitializeString(4, _array7_);
    _array1_[2] = _mxarray6_;
    _mxarray8_ = mclInitializeString(4, _array9_);
    _array1_[3] = _mxarray8_;
    _mxarray10_ = mclInitializeString(9, _array11_);
    _array1_[4] = _mxarray10_;
    _mxarray12_ = mclInitializeString(9, _array13_);
    _array1_[5] = _mxarray12_;
    _mxarray14_ = mclInitializeString(9, _array15_);
    _array1_[6] = _mxarray14_;
    _mxarray16_ = mclInitializeString(9, _array17_);
    _array1_[7] = _mxarray16_;
    _mxarray18_ = mclInitializeString(6, _array19_);
    _array1_[8] = _mxarray18_;
    _mxarray20_ = mclInitializeString(8, _array21_);
    _array1_[9] = _mxarray20_;
    _mxarray0_ = mclInitializeCellVector(1, 10, _array1_);
    _mxarray22_ = mclInitializeDouble(0.0);
    _mxarray23_ = mclInitializeDouble(3.0);
    _mxarray24_ = mclInitializeCharVector(0, 0, (mxChar *)NULL);
    _mxarray25_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray26_ = mclInitializeDouble(1.0);
    _mxarray27_ = mclInitializeString(39, _array28_);
    _mxarray29_ = mclInitializeString(5, _array30_);
    _mxarray31_ = mclInitializeString(21, _array32_);
    _mxarray33_ = mclInitializeDouble(2.0);
    _mxarray34_ = mclInitializeString(27, _array35_);
    _mxarray36_ = mclInitializeString(22, _array37_);
    _mxarray38_ = mclInitializeString(5, _array39_);
    _mxarray40_ = mclInitializeString(6, _array41_);
    _mxarray42_ = mclInitializeString(8, _array43_);
    _mxarray44_ = mclInitializeDouble(6.0);
    _mxarray45_ = mclInitializeDouble(24.0);
    _mxarray46_ = mclInitializeString(4, _array47_);
    _mxarray48_ = mclInitializeString(6, _array49_);
    _mxarray50_ = mclInitializeDouble(32.0);
    _mxarray51_ = mclInitializeString(9, _array52_);
    _mxarray53_ = mclInitializeString(13, _array54_);
    _mxarray55_ = mclInitializeString(10, _array56_);
    _mxarray57_ = mclInitializeDoubleVector(1, 2, _array58_);
    _mxarray59_ = mclInitializeDouble(4.0);
    _mxarray60_ = mclInitializeString(6, _array61_);
    _mxarray62_ = mclInitializeString(6, _array63_);
}

void TerminateModule_movegui(void) {
    mxDestroyArray(_mxarray62_);
    mxDestroyArray(_mxarray60_);
    mxDestroyArray(_mxarray59_);
    mxDestroyArray(_mxarray57_);
    mxDestroyArray(_mxarray55_);
    mxDestroyArray(_mxarray53_);
    mxDestroyArray(_mxarray51_);
    mxDestroyArray(_mxarray50_);
    mxDestroyArray(_mxarray48_);
    mxDestroyArray(_mxarray46_);
    mxDestroyArray(_mxarray45_);
    mxDestroyArray(_mxarray44_);
    mxDestroyArray(_mxarray42_);
    mxDestroyArray(_mxarray40_);
    mxDestroyArray(_mxarray38_);
    mxDestroyArray(_mxarray36_);
    mxDestroyArray(_mxarray34_);
    mxDestroyArray(_mxarray33_);
    mxDestroyArray(_mxarray31_);
    mxDestroyArray(_mxarray29_);
    mxDestroyArray(_mxarray27_);
    mxDestroyArray(_mxarray26_);
    mxDestroyArray(_mxarray25_);
    mxDestroyArray(_mxarray24_);
    mxDestroyArray(_mxarray23_);
    mxDestroyArray(_mxarray22_);
    mxDestroyArray(_mxarray0_);
    mxDestroyArray(_mxarray20_);
    mxDestroyArray(_mxarray18_);
    mxDestroyArray(_mxarray16_);
    mxDestroyArray(_mxarray14_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
}

static mxArray * mlfMovegui_get_parent_fig(mxArray * h_in);
static void mlxMovegui_get_parent_fig(int nlhs,
                                      mxArray * plhs[],
                                      int nrhs,
                                      mxArray * prhs[]);
static void Mmovegui(mxArray * varargin);
static mxArray * Mmovegui_get_parent_fig(int nargout_, mxArray * h_in);

static mexFunctionTableEntry local_function_table_[1]
  = { { "get_parent_fig", mlxMovegui_get_parent_fig, 1, 1, NULL } };

_mexLocalFunctionTable _local_function_table_movegui
  = { 1, local_function_table_ };

/*
 * The function "mlfMovegui" contains the normal interface for the "movegui"
 * M-function from file "c:\matlab6p5\toolbox\matlab\uitools\movegui.m" (lines
 * 1-214). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlfMovegui(mxArray * synthetic_varargin_argument, ...) {
    mxArray * varargin = NULL;
    mlfVarargin(&varargin, synthetic_varargin_argument, 1);
    mlfEnterNewContext(0, -1, varargin);
    Mmovegui(varargin);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxMovegui" contains the feval interface for the "movegui"
 * M-function from file "c:\matlab6p5\toolbox\matlab\uitools\movegui.m" (lines
 * 1-214). The feval function calls the implementation version of movegui
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxMovegui(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    if (nlhs > 0) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: movegui Line: 1 Column: "
            "1 The function \"movegui\" was called with mor"
            "e than the declared number of outputs (0)."),
          NULL);
    }
    mlfEnterNewContext(0, 0);
    mprhs[0] = NULL;
    mlfAssign(&mprhs[0], mclCreateVararginCell(nrhs, prhs));
    Mmovegui(mprhs[0]);
    mlfRestorePreviousContext(0, 0);
    mxDestroyArray(mprhs[0]);
}

/*
 * The function "mlfMovegui_get_parent_fig" contains the normal interface for
 * the "movegui/get_parent_fig" M-function from file
 * "c:\matlab6p5\toolbox\matlab\uitools\movegui.m" (lines 214-218). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static mxArray * mlfMovegui_get_parent_fig(mxArray * h_in) {
    int nargout = 1;
    mxArray * h = NULL;
    mlfEnterNewContext(0, 1, h_in);
    h = Mmovegui_get_parent_fig(nargout, h_in);
    mlfRestorePreviousContext(0, 1, h_in);
    return mlfReturnValue(h);
}

/*
 * The function "mlxMovegui_get_parent_fig" contains the feval interface for
 * the "movegui/get_parent_fig" M-function from file
 * "c:\matlab6p5\toolbox\matlab\uitools\movegui.m" (lines 214-218). The feval
 * function calls the implementation version of movegui/get_parent_fig through
 * this function. This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
static void mlxMovegui_get_parent_fig(int nlhs,
                                      mxArray * plhs[],
                                      int nrhs,
                                      mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: movegui/get_parent_fig Line: 214 C"
            "olumn: 1 The function \"movegui/get_parent_fig\" was cal"
            "led with more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: movegui/get_parent_fig Line: 214 C"
            "olumn: 1 The function \"movegui/get_parent_fig\" was cal"
            "led with more than the declared number of inputs (1)."),
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
    mplhs[0] = Mmovegui_get_parent_fig(nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mmovegui" is the implementation version of the "movegui"
 * M-function from file "c:\matlab6p5\toolbox\matlab\uitools\movegui.m" (lines
 * 1-214). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function movegui(varargin)
 */
static void Mmovegui(mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_movegui);
    int nargin_ = mclNargin(-1, varargin, NULL);
    mxArray * newpos = NULL;
    mxArray * rheight = NULL;
    mxArray * rwidth = NULL;
    mxArray * sheight = NULL;
    mxArray * swidth = NULL;
    mxArray * screensize = NULL;
    mxArray * old0units = NULL;
    mxArray * fheight = NULL;
    mxArray * fwidth = NULL;
    mxArray * fbottom = NULL;
    mxArray * fleft = NULL;
    mxArray * numtoolbars = NULL;
    mxArray * hfudge = NULL;
    mxArray * wfudge = NULL;
    mxArray * oldpos = NULL;
    mxArray * oldfunits = NULL;
    mxArray * oldposmode = NULL;
    mxArray * numel = NULL;
    mxArray * i = NULL;
    mxArray * fig = NULL;
    mxArray * position = NULL;
    mxArray * ans = NULL;
    mxArray * POSITIONS = NULL;
    mclCopyArray(&varargin);
    /*
     * %MOVEGUI  Move GUI figure to specified part of screen.
     * %    MOVEGUI(H, POSITION) moves the figure associated with handle H to
     * %    the specified part of the screen, preserving its size.
     * %
     * %    H can be the handle to a figure, or to any object within a figure
     * %    (for example, allowing a pushbutton uicontrol to move the figure
     * %    which contains it, from the pushbutton's function-handle
     * %    Callback.)
     * %
     * %    The POSITION argument can be any one of the strings:
     * %     'north'     - top center edge of screen
     * %     'south'     - bottom center edge of screen
     * %     'east'      - right center edge of screen
     * %     'west'      - left center edge of screen
     * %     'northeast' - top right corner of screen
     * %     'northwest' - top left corner of screen
     * %     'southeast' - bottom right corner of screen
     * %     'southwest' - bottom left corner of screen
     * %     'center'    - center of screen
     * %     'onscreen'  - nearest onscreen location to current position.
     * %
     * %    The POSITION argument can also be a two-element vector [H V],
     * %    where depending on sign, H specifies the figure's offset from the
     * %    left or right edge of the screen, and V specifies the figure's
     * %    offset from the top or bottom of the screen, in pixels:
     * %     H (for h >= 0) offset of left side from left edge of screen
     * %     H (for h < 0)  offset of right side from right edge of screen
     * %     V (for v >= 0) offset of bottom edge from bottom of screen
     * %     V (for v < 0)  offset of top edge from top of screen
     * %
     * %    MOVEGUI(POSITION) moves the GCBF or GCF to the specified
     * %    position.
     * %
     * %    MOVEGUI(H) moves the specified figure 'onscreen'.
     * %
     * %    MOVEGUI moves the GCBF or GCF 'onscreen' (useful as a
     * %    string-based CreateFcn callback for a saved figure, to ensure it
     * %    will appear onscreen when reloaded, regardless of its saved
     * %    position)
     * %
     * %    MOVEGUI(H, <event data>)
     * %    MOVEGUI(H, <event data>, POSITION) when used as a function-handle
     * %    callback, moves the specified figure to the default position, or
     * %    to the specified position, safely ignoring the automatically
     * %    passed-in event data struct.
     * %
     * %    Example:
     * %    This example demonstrates MOVEGUIs usefulness as a means of
     * %    ensuring that a saved GUI will appear onscreen when reloaded,
     * %    regardless of differences between screen sizes and resolutions
     * %    between the machines on which it was saved and reloaded.  It
     * %    creates a figure off the screen, assigns MOVEGUI as its CreateFcn
     * %    callback, then saves and reloads the figure:
     * %
     * %    	f=figure('position', [10000, 10000, 400, 300]);
     * %    	set(f, 'CreateFcn', 'movegui')
     * %    	hgsave(f, 'onscreenfig')
     * %    	close(f)
     * %    	f2 = hgload('onscreenfig')
     * %
     * %    The following are a few variations on ways MOVEGUI can be
     * %    assigned as the CreateFcn, using both string and function-handle
     * %    callbacks, with and without extra arguments, to achieve a variety
     * %    of behaviors:
     * %
     * %    	set(gcf, 'CreateFcn', 'movegui center')
     * %    	set(gcf, 'CreateFcn', @movegui)
     * %    	set(gcf, 'CreateFcn', {@movegui, 'northeast'})
     * %    	set(gcf, 'CreateFcn', {@movegui, [-100 -50]})
     * %
     * %    See also OPENFIG, GUIHANDLES, GUIDATA, GUIDE.
     * 
     * %   Damian T. Packer 2-5-2000
     * %   Copyright 1984-2002 The MathWorks, Inc. 
     * %   $Revision: 1.14 $  $Date: 2002/04/22 22:25:49 $
     * 
     * POSITIONS = {'north','south','east','west',...
     */
    mlfAssign(&POSITIONS, _mxarray0_);
    /*
     * 'northeast','southeast','northwest','southwest',...
     * 'center','onscreen'};
     * 
     * error(nargchk(0, 3, nargin));
     */
    mlfError(mlfNargchk(_mxarray22_, _mxarray23_, mlfScalar(nargin_)), NULL);
    /*
     * position = '';
     */
    mlfAssign(&position, _mxarray24_);
    /*
     * fig = [];
     */
    mlfAssign(&fig, _mxarray25_);
    {
        /*
         * 
         * for i=1:nargin
         */
        int v_ = mclForIntStart(1);
        int e_ = nargin_;
        if (v_ > e_) {
            mlfAssign(&i, _mxarray25_);
        } else {
            /*
             * numel = prod(size(varargin{i}));
             * if ishandle(varargin{i}) & numel == 1
             * fig = get_parent_fig(varargin{i});
             * if isempty(fig)
             * error('handle of figure or descendant required');
             * end
             * elseif isstr(varargin{i})
             * position = varargin{i};
             * if isempty(strmatch(position,POSITIONS,'exact'))
             * error('unrecognized position');
             * end
             * elseif isnumeric(varargin{i}) & numel == 2
             * position = varargin{i};
             * elseif ~isempty(gcbo) & i==2
             * continue; % skip past the event data struct, if in a callback
             * else
             * error('unrecognized input argument');
             * end
             * end
             */
            for (; ; ) {
                mlfAssign(
                  &numel,
                  mlfProd(
                    mclFeval(
                      mclValueVarargout(),
                      mlxSize,
                      mlfIndexRef(
                        mclVa(varargin, "varargin"), "{?}", mlfScalar(v_)),
                      NULL),
                    NULL));
                {
                    mxArray * a_
                      = mclInitialize(
                          mclFeval(
                            mclValueVarargout(),
                            mlxIshandle,
                            mlfIndexRef(
                              mclVa(varargin, "varargin"),
                              "{?}",
                              mlfScalar(v_)),
                            NULL));
                    if (mlfTobool(a_)
                        && mlfTobool(
                             mclAnd(
                               a_,
                               mclEq(mclVv(numel, "numel"), _mxarray26_)))) {
                        mxDestroyArray(a_);
                        mlfAssign(
                          &fig,
                          mclFeval(
                            mclValueVarargout(),
                            mlxMovegui_get_parent_fig,
                            mlfIndexRef(
                              mclVa(varargin, "varargin"),
                              "{?}",
                              mlfScalar(v_)),
                            NULL));
                        if (mlfTobool(mlfIsempty(mclVv(fig, "fig")))) {
                            mlfError(_mxarray27_, NULL);
                        }
                    } else {
                        mxDestroyArray(a_);
                        if (mlfTobool(
                              mclFeval(
                                mclValueVarargout(),
                                mlxIsstr,
                                mlfIndexRef(
                                  mclVa(varargin, "varargin"),
                                  "{?}",
                                  mlfScalar(v_)),
                                NULL))) {
                            mlfAssign(
                              &position,
                              mlfIndexRef(
                                mclVa(varargin, "varargin"),
                                "{?}",
                                mlfScalar(v_)));
                            if (mlfTobool(
                                  mlfIsempty(
                                    mlfStrmatch(
                                      mclVv(position, "position"),
                                      mclVv(POSITIONS, "POSITIONS"),
                                      _mxarray29_)))) {
                                mlfError(_mxarray31_, NULL);
                            }
                        } else {
                            mxArray * a_0
                              = mclInitialize(
                                  mclFeval(
                                    mclValueVarargout(),
                                    mlxIsnumeric,
                                    mlfIndexRef(
                                      mclVa(varargin, "varargin"),
                                      "{?}",
                                      mlfScalar(v_)),
                                    NULL));
                            if (mlfTobool(a_0)
                                && mlfTobool(
                                     mclAnd(
                                       a_0,
                                       mclEq(
                                         mclVv(numel, "numel"),
                                         _mxarray33_)))) {
                                mxDestroyArray(a_0);
                                mlfAssign(
                                  &position,
                                  mlfIndexRef(
                                    mclVa(varargin, "varargin"),
                                    "{?}",
                                    mlfScalar(v_)));
                            } else {
                                mxDestroyArray(a_0);
                                {
                                    mxArray * a_1
                                      = mclInitialize(
                                          mclNot(
                                            mlfIsempty(mlfNGcbo(1, NULL))));
                                    if (mlfTobool(a_1)
                                        && mlfTobool(
                                             mclAnd(
                                               a_1,
                                               mclBoolToArray(v_ == 2)))) {
                                        mxDestroyArray(a_1);
                                    } else {
                                        mxDestroyArray(a_1);
                                        mlfError(_mxarray34_, NULL);
                                    }
                                }
                            }
                        }
                    }
                }
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
     * if isempty(fig)
     */
    if (mlfTobool(mlfIsempty(mclVv(fig, "fig")))) {
        /*
         * fig = gcbf;
         */
        mlfAssign(&fig, mlfGcbf());
        /*
         * if(isempty(fig))
         */
        if (mlfTobool(mlfIsempty(mclVv(fig, "fig")))) {
            /*
             * fig = gcf;
             */
            mlfAssign(&fig, mlfGcf());
        /*
         * end
         */
        }
    /*
     * end
     */
    }
    /*
     * 
     * if isempty(position)
     */
    if (mlfTobool(mlfIsempty(mclVv(position, "position")))) {
        /*
         * position = 'onscreen';
         */
        mlfAssign(&position, _mxarray20_);
    /*
     * end
     */
    }
    /*
     * 
     * drawnow
     */
    mlfDrawnow(NULL);
    /*
     * oldposmode = get(fig,'activepositionproperty');
     */
    mlfAssign(&oldposmode, mlfNGet(1, mclVv(fig, "fig"), _mxarray36_, NULL));
    /*
     * oldfunits = get(fig, 'units');
     */
    mlfAssign(&oldfunits, mlfNGet(1, mclVv(fig, "fig"), _mxarray38_, NULL));
    /*
     * set(fig, 'units', 'pixels');
     */
    mclAssignAns(
      &ans, mlfNSet(0, mclVv(fig, "fig"), _mxarray38_, _mxarray40_, NULL));
    /*
     * 
     * if isunix
     */
    if (mlfTobool(mlfIsunix())) {
        /*
         * % on unix, we can't rely on outerposition to place the figure
         * % correctly.  use reasonable defaults and place using regular
         * % position.  i call it fudge because it's just a guess. 
         * oldpos  = get(fig, 'position');
         */
        mlfAssign(&oldpos, mlfNGet(1, mclVv(fig, "fig"), _mxarray42_, NULL));
        /*
         * wfudge =  6;
         */
        mlfAssign(&wfudge, _mxarray44_);
        /*
         * hfudge = 24;
         */
        mlfAssign(&hfudge, _mxarray45_);
        /*
         * 
         * if ~isempty(findall(fig,'type','uimenu'))
         */
        if (mclNotBool(
              mlfIsempty(
                mlfFindall(
                  mclVv(fig, "fig"), _mxarray46_, _mxarray48_, NULL)))) {
            /*
             * hfudge = hfudge + 32;
             */
            mlfAssign(&hfudge, mclPlus(mclVv(hfudge, "hfudge"), _mxarray50_));
        /*
         * end
         */
        }
        /*
         * 
         * numtoolbars = length(findall(fig,'type','uitoolbar'));
         */
        mlfAssign(
          &numtoolbars,
          mlfScalar(
            mclLengthInt(
              mlfFindall(mclVv(fig, "fig"), _mxarray46_, _mxarray51_, NULL))));
        /*
         * if numtoolbars > 0
         */
        if (mclGtBool(mclVv(numtoolbars, "numtoolbars"), _mxarray22_)) {
            /*
             * hfudge = hfudge + 24 * numtoolbars;
             */
            mlfAssign(
              &hfudge,
              mclPlus(
                mclVv(hfudge, "hfudge"),
                mclMtimes(_mxarray45_, mclVv(numtoolbars, "numtoolbars"))));
        /*
         * end
         */
        }
        /*
         * 
         * oldpos(3) = oldpos(3) + wfudge;
         */
        mclIntArrayAssign1(
          &oldpos,
          mclPlus(
            mclIntArrayRef1(mclVv(oldpos, "oldpos"), 3),
            mclVv(wfudge, "wfudge")),
          3);
        /*
         * oldpos(4) = oldpos(4) + hfudge;
         */
        mclIntArrayAssign1(
          &oldpos,
          mclPlus(
            mclIntArrayRef1(mclVv(oldpos, "oldpos"), 4),
            mclVv(hfudge, "hfudge")),
          4);
    /*
     * else
     */
    } else {
        /*
         * oldpos  = get(fig, 'outerposition');
         */
        mlfAssign(&oldpos, mlfNGet(1, mclVv(fig, "fig"), _mxarray53_, NULL));
    /*
     * end
     */
    }
    /*
     * 
     * fleft   = oldpos(1);
     */
    mlfAssign(&fleft, mclIntArrayRef1(mclVv(oldpos, "oldpos"), 1));
    /*
     * fbottom = oldpos(2);
     */
    mlfAssign(&fbottom, mclIntArrayRef1(mclVv(oldpos, "oldpos"), 2));
    /*
     * fwidth  = oldpos(3);
     */
    mlfAssign(&fwidth, mclIntArrayRef1(mclVv(oldpos, "oldpos"), 3));
    /*
     * fheight = oldpos(4);
     */
    mlfAssign(&fheight, mclIntArrayRef1(mclVv(oldpos, "oldpos"), 4));
    /*
     * 
     * old0units = get(0, 'units');
     */
    mlfAssign(&old0units, mlfNGet(1, _mxarray22_, _mxarray38_, NULL));
    /*
     * set(0, 'units', 'pixels');
     */
    mclAssignAns(&ans, mlfNSet(0, _mxarray22_, _mxarray38_, _mxarray40_, NULL));
    /*
     * screensize = get(0, 'screensize');
     */
    mlfAssign(&screensize, mlfNGet(1, _mxarray22_, _mxarray55_, NULL));
    /*
     * set(0, 'units', old0units);
     */
    mclAssignAns(
      &ans,
      mlfNSet(
        0, _mxarray22_, _mxarray38_, mclVv(old0units, "old0units"), NULL));
    /*
     * swidth = screensize(3);       sheight = screensize(4);
     */
    mlfAssign(&swidth, mclIntArrayRef1(mclVv(screensize, "screensize"), 3));
    mlfAssign(&sheight, mclIntArrayRef1(mclVv(screensize, "screensize"), 4));
    /*
     * % make sure the figure is not bigger than the screen size
     * fwidth = min(fwidth, swidth); fheight = min(fheight, sheight);
     */
    mlfAssign(
      &fwidth,
      mlfMin(NULL, mclVv(fwidth, "fwidth"), mclVv(swidth, "swidth"), NULL));
    mlfAssign(
      &fheight,
      mlfMin(NULL, mclVv(fheight, "fheight"), mclVv(sheight, "sheight"), NULL));
    /*
     * 
     * % swidth - fwidth == remaining width
     * rwidth  = swidth-fwidth;
     */
    mlfAssign(
      &rwidth, mclMinus(mclVv(swidth, "swidth"), mclVv(fwidth, "fwidth")));
    /*
     * 
     * % sheight - fheight == remaining height
     * rheight = sheight-fheight;
     */
    mlfAssign(
      &rheight, mclMinus(mclVv(sheight, "sheight"), mclVv(fheight, "fheight")));
    /*
     * 
     * 
     * if isnumeric(position)
     */
    if (mlfTobool(mlfIsnumeric(mclVv(position, "position")))) {
        /*
         * newpos = position;
         */
        mlfAssign(&newpos, mclVv(position, "position"));
        /*
         * if(newpos(1) < 0)	newpos(1) = rwidth + newpos(1); end
         */
        if (mclLtBool(
              mclIntArrayRef1(mclVv(newpos, "newpos"), 1), _mxarray22_)) {
            mclIntArrayAssign1(
              &newpos,
              mclPlus(
                mclVv(rwidth, "rwidth"),
                mclIntArrayRef1(mclVv(newpos, "newpos"), 1)),
              1);
        }
        /*
         * if(newpos(2) < 0)	newpos(2) = rheight + newpos(2); end
         */
        if (mclLtBool(
              mclIntArrayRef1(mclVv(newpos, "newpos"), 2), _mxarray22_)) {
            mclIntArrayAssign1(
              &newpos,
              mclPlus(
                mclVv(rheight, "rheight"),
                mclIntArrayRef1(mclVv(newpos, "newpos"), 2)),
              2);
        }
    /*
     * else
     */
    } else {
        /*
         * switch position
         */
        mxArray * v_ = mclInitialize(mclVv(position, "position"));
        if (mclSwitchCompare(v_, _mxarray2_)) {
            /*
             * case 'north',	newpos = [rwidth/2,   rheight];
             */
            mlfAssign(
              &newpos,
              mlfHorzcat(
                mclMrdivide(mclVv(rwidth, "rwidth"), _mxarray33_),
                mclVv(rheight, "rheight"),
                NULL));
        /*
         * case 'south',	newpos = [rwidth/2,         0];
         */
        } else if (mclSwitchCompare(v_, _mxarray4_)) {
            mlfAssign(
              &newpos,
              mlfHorzcat(
                mclMrdivide(mclVv(rwidth, "rwidth"), _mxarray33_),
                _mxarray22_,
                NULL));
        /*
         * case 'east',	newpos = [  rwidth, rheight/2];
         */
        } else if (mclSwitchCompare(v_, _mxarray6_)) {
            mlfAssign(
              &newpos,
              mlfHorzcat(
                mclVv(rwidth, "rwidth"),
                mclMrdivide(mclVv(rheight, "rheight"), _mxarray33_),
                NULL));
        /*
         * case 'west',	newpos = [       0, rheight/2];
         */
        } else if (mclSwitchCompare(v_, _mxarray8_)) {
            mlfAssign(
              &newpos,
              mlfHorzcat(
                _mxarray22_,
                mclMrdivide(mclVv(rheight, "rheight"), _mxarray33_),
                NULL));
        /*
         * case 'northeast',  newpos = [  rwidth,   rheight];
         */
        } else if (mclSwitchCompare(v_, _mxarray10_)) {
            mlfAssign(
              &newpos,
              mlfHorzcat(
                mclVv(rwidth, "rwidth"), mclVv(rheight, "rheight"), NULL));
        /*
         * case 'southeast',  newpos = [  rwidth,         0];
         */
        } else if (mclSwitchCompare(v_, _mxarray12_)) {
            mlfAssign(
              &newpos, mlfHorzcat(mclVv(rwidth, "rwidth"), _mxarray22_, NULL));
        /*
         * case 'northwest',  newpos = [       0,   rheight];
         */
        } else if (mclSwitchCompare(v_, _mxarray14_)) {
            mlfAssign(
              &newpos,
              mlfHorzcat(_mxarray22_, mclVv(rheight, "rheight"), NULL));
        /*
         * case 'southwest',  newpos = [       0,         0];
         */
        } else if (mclSwitchCompare(v_, _mxarray16_)) {
            mlfAssign(&newpos, _mxarray57_);
        /*
         * case 'center',	newpos = [rwidth/2, rheight/2];
         */
        } else if (mclSwitchCompare(v_, _mxarray18_)) {
            mlfAssign(
              &newpos,
              mlfHorzcat(
                mclMrdivide(mclVv(rwidth, "rwidth"), _mxarray33_),
                mclMrdivide(mclVv(rheight, "rheight"), _mxarray33_),
                NULL));
        /*
         * case 'onscreen'
         */
        } else if (mclSwitchCompare(v_, _mxarray20_)) {
            /*
             * if fleft < 0
             */
            if (mclLtBool(mclVv(fleft, "fleft"), _mxarray22_)) {
                /*
                 * fleft = 0;
                 */
                mlfAssign(&fleft, _mxarray22_);
            /*
             * end
             */
            }
            /*
             * if fbottom < 0
             */
            if (mclLtBool(mclVv(fbottom, "fbottom"), _mxarray22_)) {
                /*
                 * fbottom = 0;
                 */
                mlfAssign(&fbottom, _mxarray22_);
            /*
             * end
             */
            }
            /*
             * if fleft > rwidth
             */
            if (mclGtBool(mclVv(fleft, "fleft"), mclVv(rwidth, "rwidth"))) {
                /*
                 * fleft = rwidth;
                 */
                mlfAssign(&fleft, mclVv(rwidth, "rwidth"));
            /*
             * end
             */
            }
            /*
             * if fbottom > rheight
             */
            if (mclGtBool(
                  mclVv(fbottom, "fbottom"), mclVv(rheight, "rheight"))) {
                /*
                 * fbottom = rheight;
                 */
                mlfAssign(&fbottom, mclVv(rheight, "rheight"));
            /*
             * end
             */
            }
            /*
             * newpos = [fleft, fbottom];
             */
            mlfAssign(
              &newpos,
              mlfHorzcat(
                mclVv(fleft, "fleft"), mclVv(fbottom, "fbottom"), NULL));
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    /*
     * end
     */
    }
    /*
     * 
     * newpos(3:4) = [fwidth, fheight];
     */
    mclArrayAssign1(
      &newpos,
      mlfHorzcat(mclVv(fwidth, "fwidth"), mclVv(fheight, "fheight"), NULL),
      mlfColon(_mxarray23_, _mxarray59_, NULL));
    /*
     * 
     * if isunix
     */
    if (mlfTobool(mlfIsunix())) {
        /*
         * % remove width and height adjustments added above
         * newpos(3) = newpos(3) - wfudge;
         */
        mclIntArrayAssign1(
          &newpos,
          mclMinus(
            mclIntArrayRef1(mclVv(newpos, "newpos"), 3),
            mclVv(wfudge, "wfudge")),
          3);
        /*
         * newpos(4) = newpos(4) - hfudge;
         */
        mclIntArrayAssign1(
          &newpos,
          mclMinus(
            mclIntArrayRef1(mclVv(newpos, "newpos"), 4),
            mclVv(hfudge, "hfudge")),
          4);
        /*
         * set(fig, 'position', newpos);
         */
        mclAssignAns(
          &ans,
          mlfNSet(
            0, mclVv(fig, "fig"), _mxarray42_, mclVv(newpos, "newpos"), NULL));
    /*
     * else
     */
    } else {
        /*
         * set(fig, 'outerposition', newpos);
         */
        mclAssignAns(
          &ans,
          mlfNSet(
            0, mclVv(fig, "fig"), _mxarray53_, mclVv(newpos, "newpos"), NULL));
    /*
     * end
     */
    }
    /*
     * set(fig, 'units', oldfunits);
     */
    mclAssignAns(
      &ans,
      mlfNSet(
        0,
        mclVv(fig, "fig"),
        _mxarray38_,
        mclVv(oldfunits, "oldfunits"),
        NULL));
    /*
     * % setting outposition on a figure sets the activepositionproperty
     * % to 'outerposition'. It needs to be reset here.
     * set(fig, 'activepositionproperty', oldposmode);
     */
    mclAssignAns(
      &ans,
      mlfNSet(
        0,
        mclVv(fig, "fig"),
        _mxarray36_,
        mclVv(oldposmode, "oldposmode"),
        NULL));
    mxDestroyArray(POSITIONS);
    mxDestroyArray(ans);
    mxDestroyArray(position);
    mxDestroyArray(fig);
    mxDestroyArray(i);
    mxDestroyArray(numel);
    mxDestroyArray(oldposmode);
    mxDestroyArray(oldfunits);
    mxDestroyArray(oldpos);
    mxDestroyArray(wfudge);
    mxDestroyArray(hfudge);
    mxDestroyArray(numtoolbars);
    mxDestroyArray(fleft);
    mxDestroyArray(fbottom);
    mxDestroyArray(fwidth);
    mxDestroyArray(fheight);
    mxDestroyArray(old0units);
    mxDestroyArray(screensize);
    mxDestroyArray(swidth);
    mxDestroyArray(sheight);
    mxDestroyArray(rwidth);
    mxDestroyArray(rheight);
    mxDestroyArray(newpos);
    mxDestroyArray(varargin);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    /*
     * 
     * %----------------------------------------------------
     */
}

/*
 * The function "Mmovegui_get_parent_fig" is the implementation version of the
 * "movegui/get_parent_fig" M-function from file
 * "c:\matlab6p5\toolbox\matlab\uitools\movegui.m" (lines 214-218). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function h = get_parent_fig(h)
 */
static mxArray * Mmovegui_get_parent_fig(int nargout_, mxArray * h_in) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_movegui);
    mxArray * h = NULL;
    mclCopyInputArg(&h, h_in);
    /*
     * while ~isempty(h) & ~strcmp(get(h,'type'), 'figure')
     */
    for (;;) {
        mxArray * a_ = mclInitialize(mclNot(mlfIsempty(mclVa(h, "h"))));
        if (mlfTobool(a_)
            && mlfTobool(
                 mclAnd(
                   a_,
                   mclNot(
                     mlfStrcmp(
                       mlfNGet(1, mclVa(h, "h"), _mxarray46_, NULL),
                       _mxarray60_))))) {
            mxDestroyArray(a_);
        } else {
            mxDestroyArray(a_);
            break;
        }
        /*
         * h = get(h, 'parent');
         */
        mlfAssign(&h, mlfNGet(1, mclVa(h, "h"), _mxarray62_, NULL));
    /*
     * end
     */
    }
    mclValidateOutput(h, 1, nargout_, "h", "movegui/get_parent_fig");
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return h;
}
