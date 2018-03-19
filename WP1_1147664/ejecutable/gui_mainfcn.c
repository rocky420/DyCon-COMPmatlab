/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:58 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "gui_mainfcn.h"
#include "libsgl.h"
#include "guidata.h"
#include "guihandles.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "openfig.h"

static mxChar _array3_[8] = { 'g', 'u', 'i', '_', 'N', 'a', 'm', 'e' };
static mxArray * _mxarray2_;

static mxChar _array5_[13] = { 'g', 'u', 'i', '_', 'S', 'i', 'n',
                               'g', 'l', 'e', 't', 'o', 'n' };
static mxArray * _mxarray4_;

static mxChar _array7_[14] = { 'g', 'u', 'i', '_', 'O', 'p', 'e',
                               'n', 'i', 'n', 'g', 'F', 'c', 'n' };
static mxArray * _mxarray6_;

static mxChar _array9_[13] = { 'g', 'u', 'i', '_', 'O', 'u', 't',
                               'p', 'u', 't', 'F', 'c', 'n' };
static mxArray * _mxarray8_;

static mxChar _array11_[13] = { 'g', 'u', 'i', '_', 'L', 'a', 'y',
                                'o', 'u', 't', 'F', 'c', 'n' };
static mxArray * _mxarray10_;

static mxChar _array13_[12] = { 'g', 'u', 'i', '_', 'C', 'a',
                                'l', 'l', 'b', 'a', 'c', 'k' };
static mxArray * _mxarray12_;

static mxArray * _array1_[6] = { NULL /*_mxarray2_*/, NULL /*_mxarray4_*/,
                                 NULL /*_mxarray6_*/, NULL /*_mxarray8_*/,
                                 NULL /*_mxarray10_*/, NULL /*_mxarray12_*/ };
static mxArray * _mxarray0_;
static mxArray * _mxarray14_;
static mxArray * _mxarray15_;

static mxChar _array17_[64] = { 'C', 'o', 'u', 'l', 'd', ' ', 'n', 'o',
                                't', ' ', 'f', 'i', 'n', 'd', ' ', 'f',
                                'i', 'e', 'l', 'd', ' ', '%', 's', ' ',
                                'i', 'n', ' ', 't', 'h', 'e', ' ', 'g',
                                'u', 'i', '_', 'S', 't', 'a', 't', 'e',
                                ' ', 's', 't', 'r', 'u', 'c', 't', ' ',
                                'i', 'n', ' ', 'G', 'U', 'I', ' ', 'M',
                                '-', 'f', 'i', 'l', 'e', ' ', '%', 's' };
static mxArray * _mxarray16_;

static mxChar _array19_[2] = { '.', 'm' };
static mxArray * _mxarray18_;
static mxArray * _mxarray20_;
static mxArray * _mxarray21_;
static mxArray * _mxarray22_;
static mxArray * _mxarray23_;

static mxChar _array25_[5] = { 'r', 'e', 'u', 's', 'e' };
static mxArray * _mxarray24_;

static mxChar _array27_[3] = { 'n', 'e', 'w' };
static mxArray * _mxarray26_;

static mxChar _array29_[19] = { 'I', 'n', 'G', 'U', 'I', 'I', 'n',
                                'i', 't', 'i', 'a', 'l', 'i', 'z',
                                'a', 't', 'i', 'o', 'n' };
static mxArray * _mxarray28_;

static mxChar _array31_[12] = { 'G', 'U', 'I', 'D', 'E', 'O',
                                'p', 't', 'i', 'o', 'n', 's' };
static mxArray * _mxarray30_;

static mxChar _array33_[11] = { 'G', 'U', 'I', 'O', 'n', 'S',
                                'c', 'r', 'e', 'e', 'n' };
static mxArray * _mxarray32_;

static mxChar _array35_[5] = { 'C', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray34_;

static mxChar _array37_[31] = { 'D', 'e', 'f', 'a', 'u', 'l', 't', 'U',
                                'i', 'c', 'o', 'n', 't', 'r', 'o', 'l',
                                'B', 'a', 'c', 'k', 'g', 'r', 'o', 'u',
                                'n', 'd', 'C', 'o', 'l', 'o', 'r' };
static mxArray * _mxarray36_;

static mxChar _array39_[7] = { 'v', 'i', 's', 'i', 'b', 'l', 'e' };
static mxArray * _mxarray38_;

static mxChar _array41_[3] = { 'o', 'f', 'f' };
static mxArray * _mxarray40_;

static mxChar _array43_[2] = { 'o', 'n' };
static mxArray * _mxarray42_;

static mxChar _array45_[16] = { 'H', 'a', 'n', 'd', 'l', 'e', 'V', 'i',
                                's', 'i', 'b', 'i', 'l', 'i', 't', 'y' };
static mxArray * _mxarray44_;

static mxChar _array47_[8] = { 'c', 'a', 'l', 'l', 'b', 'a', 'c', 'k' };
static mxArray * _mxarray46_;

static mxChar _array49_[7] = { 'V', 'i', 's', 'i', 'b', 'l', 'e' };
static mxArray * _mxarray48_;

static mxChar _array51_[7] = { 'o', 'p', 'e', 'n', 'f', 'i', 'g' };
static mxArray * _mxarray50_;

static mxChar _array53_[4] = { 'a', 'u', 't', 'o' };
static mxArray * _mxarray52_;

static mxChar _array55_[20] = { 'd', 'e', 'f', 'a', 'u', 'l', 't',
                                'F', 'i', 'g', 'u', 'r', 'e', 'V',
                                'i', 's', 'i', 'b', 'l', 'e' };
static mxArray * _mxarray54_;

void InitializeModule_gui_mainfcn(void) {
    _mxarray2_ = mclInitializeString(8, _array3_);
    _array1_[0] = _mxarray2_;
    _mxarray4_ = mclInitializeString(13, _array5_);
    _array1_[1] = _mxarray4_;
    _mxarray6_ = mclInitializeString(14, _array7_);
    _array1_[2] = _mxarray6_;
    _mxarray8_ = mclInitializeString(13, _array9_);
    _array1_[3] = _mxarray8_;
    _mxarray10_ = mclInitializeString(13, _array11_);
    _array1_[4] = _mxarray10_;
    _mxarray12_ = mclInitializeString(12, _array13_);
    _array1_[5] = _mxarray12_;
    _mxarray0_ = mclInitializeCellVector(6, 1, _array1_);
    _mxarray14_ = mclInitializeCharVector(0, 0, (mxChar *)NULL);
    _mxarray15_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray16_ = mclInitializeString(64, _array17_);
    _mxarray18_ = mclInitializeString(2, _array19_);
    _mxarray20_ = mclInitializeDouble(0.0);
    _mxarray21_ = mclInitializeDouble(1.0);
    _mxarray22_ = mclInitializeDouble(2.0);
    _mxarray23_ = mclInitializeDouble(3.0);
    _mxarray24_ = mclInitializeString(5, _array25_);
    _mxarray26_ = mclInitializeString(3, _array27_);
    _mxarray28_ = mclInitializeString(19, _array29_);
    _mxarray30_ = mclInitializeString(12, _array31_);
    _mxarray32_ = mclInitializeString(11, _array33_);
    _mxarray34_ = mclInitializeString(5, _array35_);
    _mxarray36_ = mclInitializeString(31, _array37_);
    _mxarray38_ = mclInitializeString(7, _array39_);
    _mxarray40_ = mclInitializeString(3, _array41_);
    _mxarray42_ = mclInitializeString(2, _array43_);
    _mxarray44_ = mclInitializeString(16, _array45_);
    _mxarray46_ = mclInitializeString(8, _array47_);
    _mxarray48_ = mclInitializeString(7, _array49_);
    _mxarray50_ = mclInitializeString(7, _array51_);
    _mxarray52_ = mclInitializeString(4, _array53_);
    _mxarray54_ = mclInitializeString(20, _array55_);
}

void TerminateModule_gui_mainfcn(void) {
    mxDestroyArray(_mxarray54_);
    mxDestroyArray(_mxarray52_);
    mxDestroyArray(_mxarray50_);
    mxDestroyArray(_mxarray48_);
    mxDestroyArray(_mxarray46_);
    mxDestroyArray(_mxarray44_);
    mxDestroyArray(_mxarray42_);
    mxDestroyArray(_mxarray40_);
    mxDestroyArray(_mxarray38_);
    mxDestroyArray(_mxarray36_);
    mxDestroyArray(_mxarray34_);
    mxDestroyArray(_mxarray32_);
    mxDestroyArray(_mxarray30_);
    mxDestroyArray(_mxarray28_);
    mxDestroyArray(_mxarray26_);
    mxDestroyArray(_mxarray24_);
    mxDestroyArray(_mxarray23_);
    mxDestroyArray(_mxarray22_);
    mxDestroyArray(_mxarray21_);
    mxDestroyArray(_mxarray20_);
    mxDestroyArray(_mxarray18_);
    mxDestroyArray(_mxarray16_);
    mxDestroyArray(_mxarray15_);
    mxDestroyArray(_mxarray14_);
    mxDestroyArray(_mxarray0_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray2_);
}

static mxArray * mlfGui_mainfcn_local_openfig(mxArray * name,
                                              mxArray * singleton);
static void mlxGui_mainfcn_local_openfig(int nlhs,
                                         mxArray * plhs[],
                                         int nrhs,
                                         mxArray * prhs[]);
static mxArray * Mgui_mainfcn(int nargout_,
                              mxArray * gui_State,
                              mxArray * varargin);
static mxArray * Mgui_mainfcn_local_openfig(int nargout_,
                                            mxArray * name,
                                            mxArray * singleton);

static mexFunctionTableEntry local_function_table_[1]
  = { { "local_openfig", mlxGui_mainfcn_local_openfig, 2, 1, NULL } };

_mexLocalFunctionTable _local_function_table_gui_mainfcn
  = { 1, local_function_table_ };

/*
 * The function "mlfNGui_mainfcn" contains the nargout interface for the
 * "gui_mainfcn" M-function from file
 * "c:\matlab6p5\toolbox\matlab\uitools\gui_mainfcn.m" (lines 1-182). This
 * interface is only produced if the M-function uses the special variable
 * "nargout". The nargout interface allows the number of requested outputs to
 * be specified via the nargout argument, as opposed to the normal interface
 * which dynamically calculates the number of outputs based on the number of
 * non-NULL inputs it receives. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
mxArray * mlfNGui_mainfcn(int nargout,
                          mlfVarargoutList * varargout,
                          mxArray * gui_State,
                          ...) {
    mxArray * varargin = NULL;
    mlfVarargin(&varargin, gui_State, 0);
    mlfEnterNewContext(0, -2, gui_State, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout)
      = Mgui_mainfcn(nargout, gui_State, varargin);
    mlfRestorePreviousContext(0, 1, gui_State);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfGui_mainfcn" contains the normal interface for the
 * "gui_mainfcn" M-function from file
 * "c:\matlab6p5\toolbox\matlab\uitools\gui_mainfcn.m" (lines 1-182). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfGui_mainfcn(mlfVarargoutList * varargout,
                         mxArray * gui_State,
                         ...) {
    mxArray * varargin = NULL;
    int nargout = 0;
    mlfVarargin(&varargin, gui_State, 0);
    mlfEnterNewContext(0, -2, gui_State, varargin);
    nargout += mclNargout(varargout);
    *mlfGetVarargoutCellPtr(varargout)
      = Mgui_mainfcn(nargout, gui_State, varargin);
    mlfRestorePreviousContext(0, 1, gui_State);
    mxDestroyArray(varargin);
    return mlfAssignOutputs(varargout);
}

/*
 * The function "mlfVGui_mainfcn" contains the void interface for the
 * "gui_mainfcn" M-function from file
 * "c:\matlab6p5\toolbox\matlab\uitools\gui_mainfcn.m" (lines 1-182). The void
 * interface is only produced if the M-function uses the special variable
 * "nargout", and has at least one output. The void interface function
 * specifies zero output arguments to the implementation version of the
 * function, and in the event that the implementation version still returns an
 * output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVGui_mainfcn(mxArray * gui_State, ...) {
    mxArray * varargin = NULL;
    mxArray * varargout = NULL;
    mlfVarargin(&varargin, gui_State, 0);
    mlfEnterNewContext(0, -2, gui_State, varargin);
    varargout = Mgui_mainfcn(0, gui_State, varargin);
    mlfRestorePreviousContext(0, 1, gui_State);
    mxDestroyArray(varargin);
}

/*
 * The function "mlxGui_mainfcn" contains the feval interface for the
 * "gui_mainfcn" M-function from file
 * "c:\matlab6p5\toolbox\matlab\uitools\gui_mainfcn.m" (lines 1-182). The feval
 * function calls the implementation version of gui_mainfcn through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxGui_mainfcn(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[2];
    mxArray * mplhs[1];
    int i;
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
    mplhs[0] = Mgui_mainfcn(nlhs, mprhs[0], mprhs[1]);
    mclAssignVarargoutCell(0, nlhs, plhs, mplhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    mxDestroyArray(mprhs[1]);
}

/*
 * The function "mlfGui_mainfcn_local_openfig" contains the normal interface
 * for the "gui_mainfcn/local_openfig" M-function from file
 * "c:\matlab6p5\toolbox\matlab\uitools\gui_mainfcn.m" (lines 182-194). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static mxArray * mlfGui_mainfcn_local_openfig(mxArray * name,
                                              mxArray * singleton) {
    int nargout = 1;
    mxArray * gui_hFigure = NULL;
    mlfEnterNewContext(0, 2, name, singleton);
    gui_hFigure = Mgui_mainfcn_local_openfig(nargout, name, singleton);
    mlfRestorePreviousContext(0, 2, name, singleton);
    return mlfReturnValue(gui_hFigure);
}

/*
 * The function "mlxGui_mainfcn_local_openfig" contains the feval interface for
 * the "gui_mainfcn/local_openfig" M-function from file
 * "c:\matlab6p5\toolbox\matlab\uitools\gui_mainfcn.m" (lines 182-194). The
 * feval function calls the implementation version of gui_mainfcn/local_openfig
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxGui_mainfcn_local_openfig(int nlhs,
                                         mxArray * plhs[],
                                         int nrhs,
                                         mxArray * prhs[]) {
    mxArray * mprhs[2];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: gui_mainfcn/local_openfig Line: 182 "
            "Column: 1 The function \"gui_mainfcn/local_openfig\" was c"
            "alled with more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: gui_mainfcn/local_openfig Line: 182 "
            "Column: 1 The function \"gui_mainfcn/local_openfig\" was c"
            "alled with more than the declared number of inputs (2)."),
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
    mplhs[0] = Mgui_mainfcn_local_openfig(nlhs, mprhs[0], mprhs[1]);
    mlfRestorePreviousContext(0, 2, mprhs[0], mprhs[1]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mgui_mainfcn" is the implementation version of the
 * "gui_mainfcn" M-function from file
 * "c:\matlab6p5\toolbox\matlab\uitools\gui_mainfcn.m" (lines 1-182). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function varargout = gui_mainfcn(gui_State, varargin)
 */
static mxArray * Mgui_mainfcn(int nargout_,
                              mxArray * gui_State,
                              mxArray * varargin) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_gui_mainfcn);
    mxArray * varargout = NULL;
    mxArray * gui_Handles = NULL;
    mxArray * gui_HandleVisibility = NULL;
    mxArray * index = NULL;
    mxArray * len2 = NULL;
    mxArray * len1 = NULL;
    mxArray * ind = NULL;
    mxArray * gui_MakeVisible = NULL;
    mxArray * gui_Options = NULL;
    mxArray * gui_hFigure = NULL;
    mxArray * gui_SingletonOpt = NULL;
    mxArray * _T0_ = NULL;
    mxArray * gui_Create = NULL;
    mxArray * numargin = NULL;
    mxArray * ans = NULL;
    mxArray * i = NULL;
    mxArray * gui_Mfile = NULL;
    mxArray * gui_StateFields = NULL;
    mclCopyArray(&gui_State);
    mclCopyArray(&varargin);
    /*
     * % GUI_MAINFCN A function to handle default GUIDE GUI creation and callback dispatch.
     * %   GUI_MAINFCN is called from inside M-files generated by GUIDE to handle 
     * %   GUI creation, layout, and callback dispatch.
     * %
     * %   See also: GUIDE.
     * 
     * %   GUI_MAINFCN provides these command line APIs for dealing with GUIs
     * %
     * %      UNTITLED, by itself, creates a new UNTITLED or raises the existing
     * %      singleton*.
     * %
     * %      H = UNTITLED returns the handle to a new UNTITLED or the handle to
     * %      the existing singleton*.
     * %
     * %      UNTITLED('CALLBACK',hObject,eventData,handles,...) calls the local
     * %      function named CALLBACK in UNTITLED.M with the given input arguments.
     * %
     * %      UNTITLED('Property','Value',...) creates a new UNTITLED or raises the
     * %      existing singleton*.  Starting from the left, property value pairs are
     * %      applied to the GUI before untitled_OpeningFunction gets called.  An
     * %      unrecognized property name or invalid value makes property application
     * %      stop.  All inputs are passed to untitled_OpeningFcn via varargin.
     * %
     * %      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
     * %      instance to run (singleton)".
     * 
     * %   Copyright 1984-2002 The MathWorks, Inc.
     * %   $Revision: 1.4 $ $Date: 2002/05/31 21:44:31 $
     * 
     * gui_StateFields =  {'gui_Name'
     */
    mlfAssign(&gui_StateFields, _mxarray0_);
    /*
     * 'gui_Singleton'
     * 'gui_OpeningFcn'
     * 'gui_OutputFcn'
     * 'gui_LayoutFcn'
     * 'gui_Callback'};
     * gui_Mfile = '';
     */
    mlfAssign(&gui_Mfile, _mxarray14_);
    /*
     * for i=1:length(gui_StateFields)
     */
    {
        int v_ = mclForIntStart(1);
        int e_ = mclLengthInt(mclVv(gui_StateFields, "gui_StateFields"));
        if (v_ > e_) {
            mlfAssign(&i, _mxarray15_);
        } else {
            /*
             * if ~isfield(gui_State, gui_StateFields{i})
             * error('Could not find field %s in the gui_State struct in GUI M-file %s', gui_StateFields{i}, gui_Mfile);        
             * elseif isequal(gui_StateFields{i}, 'gui_Name')
             * gui_Mfile = [getfield(gui_State, gui_StateFields{i}), '.m'];
             * end
             * end
             */
            for (; ; ) {
                if (mclNotBool(
                      mclFeval(
                        mclValueVarargout(),
                        mlxIsfield,
                        mclVa(gui_State, "gui_State"),
                        mlfIndexRef(
                          mclVv(gui_StateFields, "gui_StateFields"),
                          "{?}",
                          mlfScalar(v_)),
                        NULL))) {
                    mlfError(
                      _mxarray16_,
                      mlfIndexRef(
                        mclVv(gui_StateFields, "gui_StateFields"),
                        "{?}",
                        mlfScalar(v_)),
                      mclVv(gui_Mfile, "gui_Mfile"),
                      NULL);
                } else if (mlfTobool(
                             mclFeval(
                               mclValueVarargout(),
                               mlxIsequal,
                               mlfIndexRef(
                                 mclVv(gui_StateFields, "gui_StateFields"),
                                 "{?}",
                                 mlfScalar(v_)),
                               _mxarray2_,
                               NULL))) {
                    mlfAssign(
                      &gui_Mfile,
                      mlfHorzcat(
                        mlfGetfield(
                          mclVa(gui_State, "gui_State"),
                          mlfIndexRef(
                            mclVv(gui_StateFields, "gui_StateFields"),
                            "{?}",
                            mlfScalar(v_)),
                          NULL),
                        _mxarray18_,
                        NULL));
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
     * numargin = length(varargin);
     */
    mlfAssign(&numargin, mlfScalar(mclLengthInt(mclVa(varargin, "varargin"))));
    /*
     * 
     * if numargin == 0
     */
    if (mclEqBool(mclVv(numargin, "numargin"), _mxarray20_)) {
        /*
         * % UNTITLED
         * % create the GUI
         * gui_Create = 1;
         */
        mlfAssign(&gui_Create, _mxarray21_);
    /*
     * elseif numargin > 3 & ischar(varargin{1}) & ishandle(varargin{2})
     */
    } else {
        mxArray * a_
          = mclInitialize(mclGt(mclVv(numargin, "numargin"), _mxarray23_));
        if (mlfTobool(a_)) {
            mlfAssign(
              &a_,
              mclAnd(
                a_,
                mclFeval(
                  mclValueVarargout(),
                  mlxIschar,
                  mlfIndexRef(mclVa(varargin, "varargin"), "{?}", _mxarray21_),
                  NULL)));
        } else {
            mlfAssign(&a_, mlfScalar(0));
        }
        if (mlfTobool(a_)
            && mlfTobool(
                 mclAnd(
                   a_,
                   mclFeval(
                     mclValueVarargout(),
                     mlxIshandle,
                     mlfIndexRef(
                       mclVa(varargin, "varargin"), "{?}", _mxarray22_),
                     NULL)))) {
            mxDestroyArray(a_);
            /*
             * % UNTITLED('CALLBACK',hObject,eventData,handles,...)
             * gui_Create = 0;
             */
            mlfAssign(&gui_Create, _mxarray20_);
        /*
         * else
         */
        } else {
            mxDestroyArray(a_);
            /*
             * % UNTITLED(...)
             * % create the GUI and hand varargin to the openingfcn
             * gui_Create = 1;
             */
            mlfAssign(&gui_Create, _mxarray21_);
        }
    /*
     * end
     */
    }
    /*
     * 
     * if gui_Create == 0
     */
    if (mclEqBool(mclVv(gui_Create, "gui_Create"), _mxarray20_)) {
        /*
         * varargin{1} = gui_State.gui_Callback;
         */
        mlfIndexAssign(
          &varargin,
          "{?}",
          _mxarray21_,
          mlfIndexRef(mclVa(gui_State, "gui_State"), ".gui_Callback"));
        /*
         * if nargout
         */
        if (nargout_ != 0) {
            mlfAssign(&_T0_, mlfColon(_mxarray21_, mlfScalar(nargout_), NULL));
            /*
             * [varargout{1:nargout}] = feval(varargin{:});
             */
            mlfFeval(
              mlfIndexVarargout(&varargout, "{?}", _T0_, NULL),
              mlfIndexRef(
                mclVa(varargin, "varargin"), "{?}", mlfCreateColonIndex()),
              NULL);
        /*
         * else
         */
        } else {
            /*
             * feval(varargin{:});
             */
            mclAssignAns(
              &ans,
              mlfFeval(
                mclAnsVarargout(),
                mlfIndexRef(
                  mclVa(varargin, "varargin"), "{?}", mlfCreateColonIndex()),
                NULL));
        /*
         * end
         */
        }
    /*
     * else
     */
    } else {
        /*
         * if gui_State.gui_Singleton
         */
        if (mlfTobool(
              mlfIndexRef(mclVa(gui_State, "gui_State"), ".gui_Singleton"))) {
            /*
             * gui_SingletonOpt = 'reuse';
             */
            mlfAssign(&gui_SingletonOpt, _mxarray24_);
        /*
         * else
         */
        } else {
            /*
             * gui_SingletonOpt = 'new';
             */
            mlfAssign(&gui_SingletonOpt, _mxarray26_);
        /*
         * end
         */
        }
        /*
         * 
         * % Open fig file with stored settings.  Note: This executes all component
         * % specific CreateFunctions with an empty HANDLES structure.
         * 
         * % Do feval on layout code in m-file if it exists
         * if ~isempty(gui_State.gui_LayoutFcn)
         */
        if (mclNotBool(
              mclFeval(
                mclValueVarargout(),
                mlxIsempty,
                mlfIndexRef(mclVa(gui_State, "gui_State"), ".gui_LayoutFcn"),
                NULL))) {
            /*
             * gui_hFigure = feval(gui_State.gui_LayoutFcn, gui_SingletonOpt);
             */
            mlfAssign(
              &gui_hFigure,
              mlfFeval(
                mclValueVarargout(),
                mlfIndexRef(mclVa(gui_State, "gui_State"), ".gui_LayoutFcn"),
                mclVv(gui_SingletonOpt, "gui_SingletonOpt"),
                NULL));
        /*
         * else
         */
        } else {
            /*
             * gui_hFigure = local_openfig(gui_State.gui_Name, gui_SingletonOpt);            
             */
            mlfAssign(
              &gui_hFigure,
              mclFeval(
                mclValueVarargout(),
                mlxGui_mainfcn_local_openfig,
                mlfIndexRef(mclVa(gui_State, "gui_State"), ".gui_Name"),
                mclVv(gui_SingletonOpt, "gui_SingletonOpt"),
                NULL));
            /*
             * % If the figure has InGUIInitialization it was not completely created
             * % on the last pass.  Delete this handle and try again.
             * if isappdata(gui_hFigure, 'InGUIInitialization')
             */
            if (mlfTobool(
                  mlfIsappdata(
                    mclVv(gui_hFigure, "gui_hFigure"), _mxarray28_))) {
                /*
                 * delete(gui_hFigure);
                 */
                mlfDelete(mclVv(gui_hFigure, "gui_hFigure"), NULL);
                /*
                 * gui_hFigure = local_openfig(gui_State.gui_Name, gui_SingletonOpt);            
                 */
                mlfAssign(
                  &gui_hFigure,
                  mclFeval(
                    mclValueVarargout(),
                    mlxGui_mainfcn_local_openfig,
                    mlfIndexRef(mclVa(gui_State, "gui_State"), ".gui_Name"),
                    mclVv(gui_SingletonOpt, "gui_SingletonOpt"),
                    NULL));
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
         * % Set flag to indicate starting GUI initialization
         * setappdata(gui_hFigure,'InGUIInitialization',1);
         */
        mlfSetappdata(
          mclVv(gui_hFigure, "gui_hFigure"), _mxarray28_, _mxarray21_, NULL);
        /*
         * 
         * % Fetch GUIDE Application options
         * gui_Options = getappdata(gui_hFigure,'GUIDEOptions');
         */
        mlfAssign(
          &gui_Options,
          mlfGetappdata(mclVv(gui_hFigure, "gui_hFigure"), _mxarray30_));
        /*
         * 
         * if ~isappdata(gui_hFigure,'GUIOnScreen')
         */
        if (mclNotBool(
              mlfIsappdata(mclVv(gui_hFigure, "gui_hFigure"), _mxarray32_))) {
            /*
             * % Adjust background color
             * if gui_Options.syscolorfig 
             */
            if (mlfTobool(
                  mlfIndexRef(
                    mclVv(gui_Options, "gui_Options"), ".syscolorfig"))) {
                /*
                 * set(gui_hFigure,'Color', get(0,'DefaultUicontrolBackgroundColor'));
                 */
                mclAssignAns(
                  &ans,
                  mlfNSet(
                    0,
                    mclVv(gui_hFigure, "gui_hFigure"),
                    _mxarray34_,
                    mlfNGet(1, _mxarray20_, _mxarray36_, NULL),
                    NULL));
            /*
             * end
             */
            }
            /*
             * 
             * % Generate HANDLES structure and store with GUIDATA
             * guidata(gui_hFigure, guihandles(gui_hFigure));
             */
            mclAssignAns(
              &ans,
              mlfNGuidata(
                0,
                mclVv(gui_hFigure, "gui_hFigure"),
                mlfGuihandles(mclVv(gui_hFigure, "gui_hFigure"))));
        /*
         * end
         */
        }
        /*
         * 
         * % If user specified 'Visible','off' in p/v pairs, don't make the figure
         * % visible.
         * gui_MakeVisible = 1;
         */
        mlfAssign(&gui_MakeVisible, _mxarray21_);
        /*
         * for ind=1:2:length(varargin)
         */
        {
            int v_ = mclForIntStart(1);
            int i_ = 2;
            int e_
              = mclForIntIntEnd(
                  v_,
                  i_,
                  mlfScalar(mclLengthInt(mclVa(varargin, "varargin"))));
            if (e_ == mclIntMin()) {
                mlfAssign(&ind, _mxarray15_);
            } else {
                /*
                 * if length(varargin) == ind
                 * break;
                 * end
                 * len1 = min(length('visible'),length(varargin{ind}));
                 * len2 = min(length('off'),length(varargin{ind+1}));
                 * if ischar(varargin{ind}) & ischar(varargin{ind+1}) & ...
                 * strncmpi(varargin{ind},'visible',len1) & len2 > 1
                 * if strncmpi(varargin{ind+1},'off',len2)
                 * gui_MakeVisible = 0;
                 * elseif strncmpi(varargin{ind+1},'on',len2)
                 * gui_MakeVisible = 1;
                 * end
                 * end
                 * end
                 */
                for (; ; ) {
                    if (mclEqBool(
                          mlfScalar(mclLengthInt(mclVa(varargin, "varargin"))),
                          mlfScalar(v_))) {
                        break;
                    }
                    mlfAssign(
                      &len1,
                      mlfMin(
                        NULL,
                        mlfScalar(mclLengthInt(_mxarray38_)),
                        mclFeval(
                          mclValueVarargout(),
                          mlxLength,
                          mlfIndexRef(
                            mclVa(varargin, "varargin"), "{?}", mlfScalar(v_)),
                          NULL),
                        NULL));
                    mlfAssign(
                      &len2,
                      mlfMin(
                        NULL,
                        mlfScalar(mclLengthInt(_mxarray40_)),
                        mclFeval(
                          mclValueVarargout(),
                          mlxLength,
                          mlfIndexRef(
                            mclVa(varargin, "varargin"),
                            "{?}",
                            mlfScalar(v_ + 1)),
                          NULL),
                        NULL));
                    {
                        mxArray * a_
                          = mclInitialize(
                              mclFeval(
                                mclValueVarargout(),
                                mlxIschar,
                                mlfIndexRef(
                                  mclVa(varargin, "varargin"),
                                  "{?}",
                                  mlfScalar(v_)),
                                NULL));
                        if (mlfTobool(a_)) {
                            mlfAssign(
                              &a_,
                              mclAnd(
                                a_,
                                mclFeval(
                                  mclValueVarargout(),
                                  mlxIschar,
                                  mlfIndexRef(
                                    mclVa(varargin, "varargin"),
                                    "{?}",
                                    mlfScalar(v_ + 1)),
                                  NULL)));
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
                                  mlxStrncmpi,
                                  mlfIndexRef(
                                    mclVa(varargin, "varargin"),
                                    "{?}",
                                    mlfScalar(v_)),
                                  _mxarray38_,
                                  mclVv(len1, "len1"),
                                  NULL)));
                        } else {
                            mlfAssign(&a_, mlfScalar(0));
                        }
                        if (mlfTobool(a_)
                            && mlfTobool(
                                 mclAnd(
                                   a_,
                                   mclGt(mclVv(len2, "len2"), _mxarray21_)))) {
                            mxDestroyArray(a_);
                            if (mlfTobool(
                                  mclFeval(
                                    mclValueVarargout(),
                                    mlxStrncmpi,
                                    mlfIndexRef(
                                      mclVa(varargin, "varargin"),
                                      "{?}",
                                      mlfScalar(v_ + 1)),
                                    _mxarray40_,
                                    mclVv(len2, "len2"),
                                    NULL))) {
                                mlfAssign(&gui_MakeVisible, _mxarray20_);
                            } else if (mlfTobool(
                                         mclFeval(
                                           mclValueVarargout(),
                                           mlxStrncmpi,
                                           mlfIndexRef(
                                             mclVa(varargin, "varargin"),
                                             "{?}",
                                             mlfScalar(v_ + 1)),
                                           _mxarray42_,
                                           mclVv(len2, "len2"),
                                           NULL))) {
                                mlfAssign(&gui_MakeVisible, _mxarray21_);
                            }
                        } else {
                            mxDestroyArray(a_);
                        }
                    }
                    if (v_ == e_) {
                        break;
                    }
                    v_ += i_;
                }
                mlfAssign(&ind, mlfScalar(v_));
            }
        }
        /*
         * 
         * % Check for figure param value pairs
         * for index=1:2:length(varargin)
         */
        {
            int v_ = mclForIntStart(1);
            int i_ = 2;
            int e_
              = mclForIntIntEnd(
                  v_,
                  i_,
                  mlfScalar(mclLengthInt(mclVa(varargin, "varargin"))));
            if (e_ == mclIntMin()) {
                mlfAssign(&index, _mxarray15_);
            } else {
                /*
                 * if length(varargin) == index
                 * break;
                 * end
                 * try, set(gui_hFigure, varargin{index}, varargin{index+1}), catch, break, end
                 * end
                 */
                for (; ; ) {
                    if (mclEqBool(
                          mlfScalar(mclLengthInt(mclVa(varargin, "varargin"))),
                          mlfScalar(v_))) {
                        break;
                    }
                    mlfTry {
                        mclPrintAns(
                          &ans,
                          mlfNSet(
                            0,
                            mclVv(gui_hFigure, "gui_hFigure"),
                            mlfIndexRef(
                              mclVa(varargin, "varargin"),
                              "{?}",
                              mlfScalar(v_)),
                            mlfIndexRef(
                              mclVa(varargin, "varargin"),
                              "{?}",
                              mlfScalar(v_ + 1)),
                            NULL));
                    } mlfCatch {
                        break;
                    } mlfEndCatch
                    if (v_ == e_) {
                        break;
                    }
                    v_ += i_;
                }
                mlfAssign(&index, mlfScalar(v_));
            }
        }
        /*
         * 
         * % If handle visibility is set to 'callback', turn it on until finished
         * % with OpeningFcn
         * gui_HandleVisibility = get(gui_hFigure,'HandleVisibility');
         */
        mlfAssign(
          &gui_HandleVisibility,
          mlfNGet(1, mclVv(gui_hFigure, "gui_hFigure"), _mxarray44_, NULL));
        /*
         * if strcmp(gui_HandleVisibility, 'callback')
         */
        if (mlfTobool(
              mlfStrcmp(
                mclVv(gui_HandleVisibility, "gui_HandleVisibility"),
                _mxarray46_))) {
            /*
             * set(gui_hFigure,'HandleVisibility', 'on');
             */
            mclAssignAns(
              &ans,
              mlfNSet(
                0,
                mclVv(gui_hFigure, "gui_hFigure"),
                _mxarray44_,
                _mxarray42_,
                NULL));
        /*
         * end
         */
        }
        /*
         * 
         * feval(gui_State.gui_OpeningFcn, gui_hFigure, [], guidata(gui_hFigure), varargin{:});
         */
        mclAssignAns(
          &ans,
          mlfFeval(
            mclAnsVarargout(),
            mlfIndexRef(mclVa(gui_State, "gui_State"), ".gui_OpeningFcn"),
            mclVv(gui_hFigure, "gui_hFigure"),
            _mxarray15_,
            mlfNGuidata(1, mclVv(gui_hFigure, "gui_hFigure"), NULL),
            mlfIndexRef(
              mclVa(varargin, "varargin"), "{?}", mlfCreateColonIndex()),
            NULL));
        /*
         * 
         * if ishandle(gui_hFigure)
         */
        if (mlfTobool(mlfIshandle(mclVv(gui_hFigure, "gui_hFigure")))) {
            /*
             * % Update handle visibility
             * set(gui_hFigure,'HandleVisibility', gui_HandleVisibility);
             */
            mclAssignAns(
              &ans,
              mlfNSet(
                0,
                mclVv(gui_hFigure, "gui_hFigure"),
                _mxarray44_,
                mclVv(gui_HandleVisibility, "gui_HandleVisibility"),
                NULL));
            /*
             * 
             * % Make figure visible
             * if gui_MakeVisible
             */
            if (mlfTobool(mclVv(gui_MakeVisible, "gui_MakeVisible"))) {
                /*
                 * set(gui_hFigure, 'Visible', 'on')
                 */
                mclPrintAns(
                  &ans,
                  mlfNSet(
                    0,
                    mclVv(gui_hFigure, "gui_hFigure"),
                    _mxarray48_,
                    _mxarray42_,
                    NULL));
                /*
                 * if gui_Options.singleton 
                 */
                if (mlfTobool(
                      mlfIndexRef(
                        mclVv(gui_Options, "gui_Options"), ".singleton"))) {
                    /*
                     * setappdata(gui_hFigure,'GUIOnScreen', 1);
                     */
                    mlfSetappdata(
                      mclVv(gui_hFigure, "gui_hFigure"),
                      _mxarray32_,
                      _mxarray21_,
                      NULL);
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
             * % Done with GUI initialization
             * rmappdata(gui_hFigure,'InGUIInitialization');
             */
            mlfRmappdata(mclVv(gui_hFigure, "gui_hFigure"), _mxarray28_, NULL);
        /*
         * end
         */
        }
        /*
         * 
         * % If handle visibility is set to 'callback', turn it on until finished with
         * % OutputFcn
         * if ishandle(gui_hFigure)
         */
        if (mlfTobool(mlfIshandle(mclVv(gui_hFigure, "gui_hFigure")))) {
            /*
             * gui_HandleVisibility = get(gui_hFigure,'HandleVisibility');
             */
            mlfAssign(
              &gui_HandleVisibility,
              mlfNGet(1, mclVv(gui_hFigure, "gui_hFigure"), _mxarray44_, NULL));
            /*
             * if strcmp(gui_HandleVisibility, 'callback')
             */
            if (mlfTobool(
                  mlfStrcmp(
                    mclVv(gui_HandleVisibility, "gui_HandleVisibility"),
                    _mxarray46_))) {
                /*
                 * set(gui_hFigure,'HandleVisibility', 'on');
                 */
                mclAssignAns(
                  &ans,
                  mlfNSet(
                    0,
                    mclVv(gui_hFigure, "gui_hFigure"),
                    _mxarray44_,
                    _mxarray42_,
                    NULL));
            /*
             * end
             */
            }
            /*
             * gui_Handles = guidata(gui_hFigure);
             */
            mlfAssign(
              &gui_Handles,
              mlfNGuidata(1, mclVv(gui_hFigure, "gui_hFigure"), NULL));
        /*
         * else
         */
        } else {
            /*
             * gui_Handles = [];
             */
            mlfAssign(&gui_Handles, _mxarray15_);
        /*
         * end
         */
        }
        /*
         * 
         * if nargout
         */
        if (nargout_ != 0) {
            mlfAssign(&_T0_, mlfColon(_mxarray21_, mlfScalar(nargout_), NULL));
            /*
             * [varargout{1:nargout}] = feval(gui_State.gui_OutputFcn, gui_hFigure, [], gui_Handles);
             */
            mlfFeval(
              mlfIndexVarargout(&varargout, "{?}", _T0_, NULL),
              mlfIndexRef(mclVa(gui_State, "gui_State"), ".gui_OutputFcn"),
              mclVv(gui_hFigure, "gui_hFigure"),
              _mxarray15_,
              mclVv(gui_Handles, "gui_Handles"),
              NULL);
        /*
         * else
         */
        } else {
            /*
             * feval(gui_State.gui_OutputFcn, gui_hFigure, [], gui_Handles);
             */
            mclAssignAns(
              &ans,
              mlfFeval(
                mclAnsVarargout(),
                mlfIndexRef(mclVa(gui_State, "gui_State"), ".gui_OutputFcn"),
                mclVv(gui_hFigure, "gui_hFigure"),
                _mxarray15_,
                mclVv(gui_Handles, "gui_Handles"),
                NULL));
        /*
         * end
         */
        }
        /*
         * 
         * if ishandle(gui_hFigure)
         */
        if (mlfTobool(mlfIshandle(mclVv(gui_hFigure, "gui_hFigure")))) {
            /*
             * set(gui_hFigure,'HandleVisibility', gui_HandleVisibility);
             */
            mclAssignAns(
              &ans,
              mlfNSet(
                0,
                mclVv(gui_hFigure, "gui_hFigure"),
                _mxarray44_,
                mclVv(gui_HandleVisibility, "gui_HandleVisibility"),
                NULL));
        /*
         * end
         */
        }
    /*
     * end    
     */
    }
    mxDestroyArray(gui_StateFields);
    mxDestroyArray(gui_Mfile);
    mxDestroyArray(i);
    mxDestroyArray(ans);
    mxDestroyArray(numargin);
    mxDestroyArray(gui_Create);
    mxDestroyArray(_T0_);
    mxDestroyArray(gui_SingletonOpt);
    mxDestroyArray(gui_hFigure);
    mxDestroyArray(gui_Options);
    mxDestroyArray(gui_MakeVisible);
    mxDestroyArray(ind);
    mxDestroyArray(len1);
    mxDestroyArray(len2);
    mxDestroyArray(index);
    mxDestroyArray(gui_HandleVisibility);
    mxDestroyArray(gui_Handles);
    mxDestroyArray(varargin);
    mxDestroyArray(gui_State);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return varargout;
    /*
     * 
     */
}

/*
 * The function "Mgui_mainfcn_local_openfig" is the implementation version of
 * the "gui_mainfcn/local_openfig" M-function from file
 * "c:\matlab6p5\toolbox\matlab\uitools\gui_mainfcn.m" (lines 182-194). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function gui_hFigure = local_openfig(name, singleton)
 */
static mxArray * Mgui_mainfcn_local_openfig(int nargout_,
                                            mxArray * name,
                                            mxArray * singleton) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_gui_mainfcn);
    mxArray * gui_hFigure = NULL;
    mxArray * ans = NULL;
    mxArray * gui_OldDefaultVisible = NULL;
    mclCopyArray(&name);
    mclCopyArray(&singleton);
    /*
     * if nargin('openfig') == 3 
     */
    if (mclEqBool(mlfNargin(_mxarray50_), _mxarray23_)) {
        /*
         * gui_hFigure = openfig(name, singleton, 'auto');
         */
        mlfAssign(
          &gui_hFigure,
          mlfNOpenfig(
            1,
            mclVa(name, "name"),
            mclVa(singleton, "singleton"),
            _mxarray52_));
    /*
     * else
     */
    } else {
        /*
         * % OPENFIG did not accept 3rd input argument until R13,
         * % toggle default figure visible to prevent the figure
         * % from showing up too soon.
         * gui_OldDefaultVisible = get(0,'defaultFigureVisible');
         */
        mlfAssign(
          &gui_OldDefaultVisible, mlfNGet(1, _mxarray20_, _mxarray54_, NULL));
        /*
         * set(0,'defaultFigureVisible','off');
         */
        mclAssignAns(
          &ans, mlfNSet(0, _mxarray20_, _mxarray54_, _mxarray40_, NULL));
        /*
         * gui_hFigure = openfig(name, singleton);
         */
        mlfAssign(
          &gui_hFigure,
          mlfNOpenfig(
            1, mclVa(name, "name"), mclVa(singleton, "singleton"), NULL));
        /*
         * set(0,'defaultFigureVisible',gui_OldDefaultVisible);
         */
        mclAssignAns(
          &ans,
          mlfNSet(
            0,
            _mxarray20_,
            _mxarray54_,
            mclVv(gui_OldDefaultVisible, "gui_OldDefaultVisible"),
            NULL));
    /*
     * end
     */
    }
    mclValidateOutput(
      gui_hFigure, 1, nargout_, "gui_hFigure", "gui_mainfcn/local_openfig");
    mxDestroyArray(gui_OldDefaultVisible);
    mxDestroyArray(ans);
    mxDestroyArray(singleton);
    mxDestroyArray(name);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return gui_hFigure;
}
