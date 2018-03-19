/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:58 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "guidata.h"
#include "libsgl.h"
#include "libmatlbm.h"
#include "libmmfile.h"

static mxChar _array1_[15] = { 'U', 's', 'e', 'd', 'B', 'y', 'G', 'U',
                               'I', 'D', 'a', 't', 'a', '_', 'm' };
static mxArray * _mxarray0_;
static mxArray * _mxarray2_;
static mxArray * _mxarray3_;
static mxArray * _mxarray4_;
static mxArray * _mxarray5_;

static mxChar _array7_[54] = { 'H', ' ', 'm', 'u', 's', 't', ' ', 'b', 'e',
                               ' ', 't', 'h', 'e', ' ', 'h', 'a', 'n', 'd',
                               'l', 'e', ' ', 't', 'o', ' ', 'a', ' ', 'f',
                               'i', 'g', 'u', 'r', 'e', ' ', 'o', 'r', ' ',
                               'f', 'i', 'g', 'u', 'r', 'e', ' ', 'd', 'e',
                               's', 'c', 'e', 'n', 'd', 'e', 'n', 't', '.' };
static mxArray * _mxarray6_;

static mxChar _array9_[6] = { 'f', 'i', 'g', 'u', 'r', 'e' };
static mxArray * _mxarray8_;

static mxChar _array11_[4] = { 't', 'y', 'p', 'e' };
static mxArray * _mxarray10_;

static mxChar _array13_[6] = { 'p', 'a', 'r', 'e', 'n', 't' };
static mxArray * _mxarray12_;

void InitializeModule_guidata(void) {
    _mxarray0_ = mclInitializeString(15, _array1_);
    _mxarray2_ = mclInitializeDouble(1.0);
    _mxarray3_ = mclInitializeDouble(2.0);
    _mxarray4_ = mclInitializeDouble(0.0);
    _mxarray5_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray6_ = mclInitializeString(54, _array7_);
    _mxarray8_ = mclInitializeString(6, _array9_);
    _mxarray10_ = mclInitializeString(4, _array11_);
    _mxarray12_ = mclInitializeString(6, _array13_);
}

void TerminateModule_guidata(void) {
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray6_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray4_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * mlfGuidata_getParentFigure(mxArray * fig_in);
static void mlxGuidata_getParentFigure(int nlhs,
                                       mxArray * plhs[],
                                       int nrhs,
                                       mxArray * prhs[]);
static mxArray * Mguidata(int nargout_, mxArray * h, mxArray * data_in);
static mxArray * Mguidata_getParentFigure(int nargout_, mxArray * fig_in);

static mexFunctionTableEntry local_function_table_[1]
  = { { "getParentFigure", mlxGuidata_getParentFigure, 1, 1, NULL } };

_mexLocalFunctionTable _local_function_table_guidata
  = { 1, local_function_table_ };

/*
 * The function "mlfNGuidata" contains the nargout interface for the "guidata"
 * M-function from file "c:\matlab6p5\toolbox\matlab\uitools\guidata.m" (lines
 * 1-99). This interface is only produced if the M-function uses the special
 * variable "nargout". The nargout interface allows the number of requested
 * outputs to be specified via the nargout argument, as opposed to the normal
 * interface which dynamically calculates the number of outputs based on the
 * number of non-NULL inputs it receives. This function processes any input
 * arguments and passes them to the implementation version of the function,
 * appearing above.
 */
mxArray * mlfNGuidata(int nargout, mxArray * h, mxArray * data_in) {
    mxArray * data = NULL;
    mlfEnterNewContext(0, 2, h, data_in);
    data = Mguidata(nargout, h, data_in);
    mlfRestorePreviousContext(0, 2, h, data_in);
    return mlfReturnValue(data);
}

/*
 * The function "mlfGuidata" contains the normal interface for the "guidata"
 * M-function from file "c:\matlab6p5\toolbox\matlab\uitools\guidata.m" (lines
 * 1-99). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfGuidata(mxArray * h, mxArray * data_in) {
    int nargout = 1;
    mxArray * data = NULL;
    mlfEnterNewContext(0, 2, h, data_in);
    data = Mguidata(nargout, h, data_in);
    mlfRestorePreviousContext(0, 2, h, data_in);
    return mlfReturnValue(data);
}

/*
 * The function "mlfVGuidata" contains the void interface for the "guidata"
 * M-function from file "c:\matlab6p5\toolbox\matlab\uitools\guidata.m" (lines
 * 1-99). The void interface is only produced if the M-function uses the
 * special variable "nargout", and has at least one output. The void interface
 * function specifies zero output arguments to the implementation version of
 * the function, and in the event that the implementation version still returns
 * an output (which, in MATLAB, would be assigned to the "ans" variable), it
 * deallocates the output. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlfVGuidata(mxArray * h, mxArray * data_in) {
    mxArray * data = NULL;
    mlfEnterNewContext(0, 2, h, data_in);
    data = Mguidata(0, h, data_in);
    mlfRestorePreviousContext(0, 2, h, data_in);
    mxDestroyArray(data);
}

/*
 * The function "mlxGuidata" contains the feval interface for the "guidata"
 * M-function from file "c:\matlab6p5\toolbox\matlab\uitools\guidata.m" (lines
 * 1-99). The feval function calls the implementation version of guidata
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxGuidata(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[2];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: guidata Line: 1 Column: "
            "1 The function \"guidata\" was called with mor"
            "e than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: guidata Line: 1 Column:"
            " 1 The function \"guidata\" was called with m"
            "ore than the declared number of inputs (2)."),
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
    mplhs[0] = Mguidata(nlhs, mprhs[0], mprhs[1]);
    mlfRestorePreviousContext(0, 2, mprhs[0], mprhs[1]);
    plhs[0] = mplhs[0];
}

/*
 * The function "mlfGuidata_getParentFigure" contains the normal interface for
 * the "guidata/getParentFigure" M-function from file
 * "c:\matlab6p5\toolbox\matlab\uitools\guidata.m" (lines 99-105). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static mxArray * mlfGuidata_getParentFigure(mxArray * fig_in) {
    int nargout = 1;
    mxArray * fig = NULL;
    mlfEnterNewContext(0, 1, fig_in);
    fig = Mguidata_getParentFigure(nargout, fig_in);
    mlfRestorePreviousContext(0, 1, fig_in);
    return mlfReturnValue(fig);
}

/*
 * The function "mlxGuidata_getParentFigure" contains the feval interface for
 * the "guidata/getParentFigure" M-function from file
 * "c:\matlab6p5\toolbox\matlab\uitools\guidata.m" (lines 99-105). The feval
 * function calls the implementation version of guidata/getParentFigure through
 * this function. This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
static void mlxGuidata_getParentFigure(int nlhs,
                                       mxArray * plhs[],
                                       int nrhs,
                                       mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: guidata/getParentFigure Line: 99 Co"
            "lumn: 1 The function \"guidata/getParentFigure\" was call"
            "ed with more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: guidata/getParentFigure Line: 99 C"
            "olumn: 1 The function \"guidata/getParentFigure\" was ca"
            "lled with more than the declared number of inputs (1)."),
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
    mplhs[0] = Mguidata_getParentFigure(nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mguidata" is the implementation version of the "guidata"
 * M-function from file "c:\matlab6p5\toolbox\matlab\uitools\guidata.m" (lines
 * 1-99). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function data = guidata(h, data_in)
 */
static mxArray * Mguidata(int nargout_, mxArray * h, mxArray * data_in) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_guidata);
    int nargin_ = mclNargin(2, h, data_in, NULL);
    mxArray * data = NULL;
    mxArray * fig = NULL;
    mxArray * ans = NULL;
    mxArray * PROP_NAME = NULL;
    mclCopyArray(&h);
    mclCopyArray(&data_in);
    /*
     * %GUIDATA Store or retrieve application data.
     * %   GUIDATA(H, DATA) stores the specified data in the figure's
     * %   application data.
     * %
     * %   H is a handle that identifies the figure - it can be the figure
     * %   itself, or any object contained in the figure.
     * %
     * %   DATA can be anything an application wishes to store for later
     * %   retrieval.
     * %
     * %   DATA = GUIDATA(H) returns previously stored data, or an empty
     * %   matrix if nothing was previously stored.
     * %
     * %   GUIDATA provides application authors with a convenient interface
     * %   to a figure's application data. You can access the data from a
     * %   callback subfunction using the component's handle, without needing
     * %   to find the figure's handle.  You can also avoid having to create
     * %   and maintain a hardcoded property name for the application data
     * %   throughout your source code.  GUIDATA is particularly useful in
     * %   conjunction with GUIHANDLES, which returns a structure containing
     * %   handles of all the components in a GUI listed by tag.
     * %
     * %   Example:
     * %
     * %   Suppose an application creates a figure with handle F, containing
     * %   a slider and an editable text uicontrol whose tags are
     * %   'valueSlider' and 'valueEdit' respectively.  The following
     * %   excerpts from the application's M-file illustrate the use of
     * %   GUIDATA to access a structure containing handles returned by
     * %   GUIHANDLES, plus additional application-specific data added during
     * %   initialization and callbacks:
     * %
     * %   ... excerpt from the GUI setup code ...
     * %
     * %   f = openfig('mygui.fig');
     * %   data = guihandles(f); % initialize it to contain handles
     * %   data.errorString = 'Total number of mistakes: ';
     * %   data.numberOfErrors = 0;
     * %   guidata(f, data);  % store the structure
     * %
     * %   ... excerpt from the slider's callback ...
     * %
     * %   data = guidata(gcbo); % get the struct, use the handles:
     * %   set(data.valueEdit, 'String',...
     * %       num2str(get(data.valueSlider, 'Value')));
     * %
     * %   ... excerpt from the edit's callback ...
     * %
     * %   data = guidata(gcbo); % need handles, may need error info
     * %   val = str2double(get(data.valueEdit,'String'));
     * %   if isnumeric(val) & length(val)==1 & ...
     * %      val >= get(data.valueSlider, 'Min') & ...
     * %      val <= get(data.valueSlider, 'Max')
     * %     set(data.valueSlider, 'Value', val);
     * %   else
     * %     % increment the error count, and display it
     * %     data.numberOfErrors = data.numberOfErrors + 1;
     * %     set(handles.valueEdit, 'String',...
     * %      [ data.errorString, num2str(data.numberOfErrors) ]);
     * %     guidata(gcbo, data); % store the changes...
     * %   end
     * %
     * %   Note that GUIDE generates callback functions to which a structure
     * %   of handles is passed automatically as an input argument.  This
     * %   eliminates the need to call "data = guidata(gcbo);" in callbacks
     * %   written using GUIDE, unlike the example above.
     * %
     * %  See also GUIHANDLES, GUIDE, OPENFIG, GETAPPDATA, SETAPPDATA.
     * 
     * %   Damian T. Packer 6-8-2000
     * %   Copyright 1984-2002 The MathWorks, Inc.
     * %   $Revision: 1.7 $  $Date: 2002/04/09 01:36:02 $
     * 
     * % choose a unique name for our application data property.
     * % This M-file should be the only place using it.
     * PROP_NAME = 'UsedByGUIData_m';
     */
    mlfAssign(&PROP_NAME, _mxarray0_);
    /*
     * 
     * error(nargchk(1, 2, nargin));
     */
    mlfError(mlfNargchk(_mxarray2_, _mxarray3_, mlfScalar(nargin_)), NULL);
    /*
     * if (nargin == 2)
     */
    if (nargin_ == 2) {
        /*
         * error(nargoutchk(0, 0, nargout));
         */
        mlfError(
          mlfNargoutchk(_mxarray4_, _mxarray4_, mlfScalar(nargout_)), NULL);
    /*
     * end
     */
    }
    /*
     * 
     * fig = [];
     */
    mlfAssign(&fig, _mxarray5_);
    /*
     * if ishandle(h) & length(h) == 1
     */
    {
        mxArray * a_ = mclInitialize(mlfIshandle(mclVa(h, "h")));
        if (mlfTobool(a_)
            && mlfTobool(
                 mclAnd(
                   a_, mclBoolToArray(mclLengthInt(mclVa(h, "h")) == 1)))) {
            mxDestroyArray(a_);
            /*
             * fig = getParentFigure(h);
             */
            mlfAssign(&fig, mlfGuidata_getParentFigure(mclVa(h, "h")));
        } else {
            mxDestroyArray(a_);
        }
    /*
     * end
     */
    }
    /*
     * if isempty(fig)
     */
    if (mlfTobool(mlfIsempty(mclVv(fig, "fig")))) {
        /*
         * error('H must be the handle to a figure or figure descendent.');
         */
        mlfError(_mxarray6_, NULL);
    /*
     * end
     */
    }
    /*
     * 
     * if nargin == 1 % GET
     */
    if (nargin_ == 1) {
        /*
         * data = getappdata(fig, PROP_NAME);
         */
        mlfAssign(
          &data,
          mlfGetappdata(mclVv(fig, "fig"), mclVv(PROP_NAME, "PROP_NAME")));
    /*
     * else % (nargin == 2) SET
     */
    } else {
        /*
         * setappdata(fig, PROP_NAME, data_in);
         */
        mlfSetappdata(
          mclVv(fig, "fig"),
          mclVv(PROP_NAME, "PROP_NAME"),
          mclVa(data_in, "data_in"),
          NULL);
    /*
     * end
     */
    }
    mclValidateOutput(data, 1, nargout_, "data", "guidata");
    mxDestroyArray(PROP_NAME);
    mxDestroyArray(ans);
    mxDestroyArray(fig);
    mxDestroyArray(data_in);
    mxDestroyArray(h);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return data;
    /*
     * 
     * 
     */
}

/*
 * The function "Mguidata_getParentFigure" is the implementation version of the
 * "guidata/getParentFigure" M-function from file
 * "c:\matlab6p5\toolbox\matlab\uitools\guidata.m" (lines 99-105). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function fig = getParentFigure(fig)
 */
static mxArray * Mguidata_getParentFigure(int nargout_, mxArray * fig_in) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_guidata);
    mxArray * fig = NULL;
    mclCopyInputArg(&fig, fig_in);
    /*
     * % if the object is a figure or figure descendent, return the
     * % figure.  Otherwise return [].
     * while ~isempty(fig) & ~strcmp('figure', get(fig,'type'))
     */
    for (;;) {
        mxArray * a_ = mclInitialize(mclNot(mlfIsempty(mclVa(fig, "fig"))));
        if (mlfTobool(a_)
            && mlfTobool(
                 mclAnd(
                   a_,
                   mclNot(
                     mlfStrcmp(
                       _mxarray8_,
                       mlfNGet(1, mclVa(fig, "fig"), _mxarray10_, NULL)))))) {
            mxDestroyArray(a_);
        } else {
            mxDestroyArray(a_);
            break;
        }
        /*
         * fig = get(fig,'parent');
         */
        mlfAssign(&fig, mlfNGet(1, mclVa(fig, "fig"), _mxarray12_, NULL));
    /*
     * end
     */
    }
    mclValidateOutput(fig, 1, nargout_, "fig", "guidata/getParentFigure");
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return fig;
}
