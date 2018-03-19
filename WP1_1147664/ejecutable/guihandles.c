/*
 * MATLAB Compiler: 3.0
 * Date: Tue Jul 12 11:03:59 2005
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-B" "sgl" "-m" "-W"
 * "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W" "mainhg"
 * "libmwsglm.mlib" "wavecontrol.m" 
 */
#include "guihandles.h"
#include "libsgl.h"
#include "isvarname.h"
#include "libmatlbm.h"
#include "libmmfile.h"
#include "libmwsglm.h"
static mxArray * _mxarray0_;

static mxChar _array2_[54] = { 'H', ' ', 'm', 'u', 's', 't', ' ', 'b', 'e',
                               ' ', 't', 'h', 'e', ' ', 'h', 'a', 'n', 'd',
                               'l', 'e', ' ', 't', 'o', ' ', 'a', ' ', 'f',
                               'i', 'g', 'u', 'r', 'e', ' ', 'o', 'r', ' ',
                               'f', 'i', 'g', 'u', 'r', 'e', ' ', 'd', 'e',
                               's', 'c', 'e', 'n', 'd', 'e', 'n', 't', '.' };
static mxArray * _mxarray1_;

static mxChar _array4_[6] = { 'f', 'i', 'g', 'u', 'r', 'e' };
static mxArray * _mxarray3_;

static mxChar _array6_[4] = { 't', 'y', 'p', 'e' };
static mxArray * _mxarray5_;

static mxChar _array8_[6] = { 'p', 'a', 'r', 'e', 'n', 't' };
static mxArray * _mxarray7_;

static mxChar _array10_[3] = { 't', 'a', 'g' };
static mxArray * _mxarray9_;

void InitializeModule_guihandles(void) {
    _mxarray0_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray1_ = mclInitializeString(54, _array2_);
    _mxarray3_ = mclInitializeString(6, _array4_);
    _mxarray5_ = mclInitializeString(4, _array6_);
    _mxarray7_ = mclInitializeString(6, _array8_);
    _mxarray9_ = mclInitializeString(3, _array10_);
}

void TerminateModule_guihandles(void) {
    mxDestroyArray(_mxarray9_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * mlfGuihandles_getParentFigure(mxArray * fig_in);
static void mlxGuihandles_getParentFigure(int nlhs,
                                          mxArray * plhs[],
                                          int nrhs,
                                          mxArray * prhs[]);
static mxArray * mlfGuihandles_createHandles(mxArray * fig);
static void mlxGuihandles_createHandles(int nlhs,
                                        mxArray * plhs[],
                                        int nrhs,
                                        mxArray * prhs[]);
static mxArray * Mguihandles(int nargout_, mxArray * h);
static mxArray * Mguihandles_getParentFigure(int nargout_, mxArray * fig_in);
static mxArray * Mguihandles_createHandles(int nargout_, mxArray * fig);

static mexFunctionTableEntry local_function_table_[2]
  = { { "getParentFigure", mlxGuihandles_getParentFigure, 1, 1, NULL },
      { "createHandles", mlxGuihandles_createHandles, 1, 1, NULL } };

_mexLocalFunctionTable _local_function_table_guihandles
  = { 2, local_function_table_ };

/*
 * The function "mlfGuihandles" contains the normal interface for the
 * "guihandles" M-function from file
 * "c:\matlab6p5\toolbox\matlab\uitools\guihandles.m" (lines 1-78). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
mxArray * mlfGuihandles(mxArray * h) {
    int nargout = 1;
    mxArray * handles = NULL;
    mlfEnterNewContext(0, 1, h);
    handles = Mguihandles(nargout, h);
    mlfRestorePreviousContext(0, 1, h);
    return mlfReturnValue(handles);
}

/*
 * The function "mlxGuihandles" contains the feval interface for the
 * "guihandles" M-function from file
 * "c:\matlab6p5\toolbox\matlab\uitools\guihandles.m" (lines 1-78). The feval
 * function calls the implementation version of guihandles through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
void mlxGuihandles(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: guihandles Line: 1 Column:"
            " 1 The function \"guihandles\" was called with m"
            "ore than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: guihandles Line: 1 Column"
            ": 1 The function \"guihandles\" was called with"
            " more than the declared number of inputs (1)."),
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
    mplhs[0] = Mguihandles(nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
}

/*
 * The function "mlfGuihandles_getParentFigure" contains the normal interface
 * for the "guihandles/getParentFigure" M-function from file
 * "c:\matlab6p5\toolbox\matlab\uitools\guihandles.m" (lines 78-86). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static mxArray * mlfGuihandles_getParentFigure(mxArray * fig_in) {
    int nargout = 1;
    mxArray * fig = NULL;
    mlfEnterNewContext(0, 1, fig_in);
    fig = Mguihandles_getParentFigure(nargout, fig_in);
    mlfRestorePreviousContext(0, 1, fig_in);
    return mlfReturnValue(fig);
}

/*
 * The function "mlxGuihandles_getParentFigure" contains the feval interface
 * for the "guihandles/getParentFigure" M-function from file
 * "c:\matlab6p5\toolbox\matlab\uitools\guihandles.m" (lines 78-86). The feval
 * function calls the implementation version of guihandles/getParentFigure
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxGuihandles_getParentFigure(int nlhs,
                                          mxArray * plhs[],
                                          int nrhs,
                                          mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: guihandles/getParentFigure Line: 78 C"
            "olumn: 1 The function \"guihandles/getParentFigure\" was ca"
            "lled with more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: guihandles/getParentFigure Line: 78 "
            "Column: 1 The function \"guihandles/getParentFigure\" was "
            "called with more than the declared number of inputs (1)."),
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
    mplhs[0] = Mguihandles_getParentFigure(nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
}

/*
 * The function "mlfGuihandles_createHandles" contains the normal interface for
 * the "guihandles/createHandles" M-function from file
 * "c:\matlab6p5\toolbox\matlab\uitools\guihandles.m" (lines 86-111). This
 * function processes any input arguments and passes them to the implementation
 * version of the function, appearing above.
 */
static mxArray * mlfGuihandles_createHandles(mxArray * fig) {
    int nargout = 1;
    mxArray * handles = NULL;
    mlfEnterNewContext(0, 1, fig);
    handles = Mguihandles_createHandles(nargout, fig);
    mlfRestorePreviousContext(0, 1, fig);
    return mlfReturnValue(handles);
}

/*
 * The function "mlxGuihandles_createHandles" contains the feval interface for
 * the "guihandles/createHandles" M-function from file
 * "c:\matlab6p5\toolbox\matlab\uitools\guihandles.m" (lines 86-111). The feval
 * function calls the implementation version of guihandles/createHandles
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
static void mlxGuihandles_createHandles(int nlhs,
                                        mxArray * plhs[],
                                        int nrhs,
                                        mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: guihandles/createHandles Line: 86 C"
            "olumn: 1 The function \"guihandles/createHandles\" was ca"
            "lled with more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: guihandles/createHandles Line: 86 C"
            "olumn: 1 The function \"guihandles/createHandles\" was ca"
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
    mplhs[0] = Mguihandles_createHandles(nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
}

/*
 * The function "Mguihandles" is the implementation version of the "guihandles"
 * M-function from file "c:\matlab6p5\toolbox\matlab\uitools\guihandles.m"
 * (lines 1-78). It contains the actual compiled code for that M-function. It
 * is a static function and must only be called from one of the interface
 * functions, appearing below.
 */
/*
 * function handles = guihandles(h)
 */
static mxArray * Mguihandles(int nargout_, mxArray * h) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_guihandles);
    int nargin_ = mclNargin(1, h, NULL);
    mxArray * handles = NULL;
    mxArray * ans = NULL;
    mxArray * fig = NULL;
    mclCopyArray(&h);
    /*
     * %GUIHANDLES Return a structure of handles.
     * %   HANDLES = GUIHANDLES(H) returns a structure containing handles of
     * %   objects in a figure, using their tags as fieldnames.  Objects
     * %   are excluded if their tags are empty, or are not legal variable
     * %   names.  If several objects have the same tag, that field in the
     * %   structure contains a vector of handles.  Objects with hidden
     * %   handles are included in the structure.
     * %
     * %   H is a handle that identifies the figure - it can be the figure
     * %   itself, or any object contained in the figure.
     * %
     * %   HANDLES = GUIHANDLES returns a structure of handles for the
     * %   current figure.
     * %
     * %   Example:
     * %
     * %   Suppose an application creates a figure with handle F, containing
     * %   a slider and an editable text uicontrol whose tags are 'valueSlider'
     * %   and 'valueEdit' respectively.  The following excerpts from the
     * %   application's M-file illustrate the use of GUIHANDLES in callbacks:
     * %
     * %   ... excerpt from the GUI setup code ...
     * %
     * %   f = figure;
     * %   uicontrol('Style','slider','Tag','valueSlider', ...);
     * %   uicontrol('Style','edit','Tag','valueEdit',...);
     * %
     * %   ... excerpt from the slider's callback ...
     * %
     * %   handles = guihandles(gcbo); % generate handles struct
     * %   set(handles.valueEdit, 'string',...
     * %       num2str(get(handles.valueSlider, 'value')));
     * %
     * %   ... excerpt from the edit's callback ...
     * %
     * %   handles = guihandles(gcbo);
     * %   val = str2double(get(handles.valueEdit,'String'));
     * %   if isnumeric(val) & length(val)==1 & ...
     * %      val >= get(handles.valueSlider, 'Min') & ...
     * %      val <= get(handles.valueSlider, 'Max')
     * %     % update the slider's value if the edit's value is OK:
     * %     set(handles.valueSlider, 'Value', val);
     * %   else
     * %     % flush the bad string out of the edit; replace with slider's
     * %     % current value:
     * %     set(handles.valueEdit, 'String',...
     * %       num2str(get(handles.valueSlider, 'Value')));
     * %   end
     * %
     * %   Note that in this example, the structure of handles is created
     * %   each time a callback executes.  See the GUIDATA help for an
     * %   example in which the structure is created only once, and cached
     * %   for subsequent use.
     * %
     * %  See also GUIDATA, GUIDE, OPENFIG.
     * 
     * %   Damian T. Packer 6-8-2000
     * %   Copyright 1984-2002 The MathWorks, Inc.
     * %   $Revision: 1.7 $  $Date: 2002/05/30 20:42:00 $
     * 
     * if nargin == 0 % use GCF
     */
    if (nargin_ == 0) {
        /*
         * fig = gcf;
         */
        mlfAssign(&fig, mlfGcf());
    /*
     * else % nargin == 1: obtain a figure handle from H
     */
    } else {
        /*
         * fig = [];
         */
        mlfAssign(&fig, _mxarray0_);
        /*
         * if ishandle(h) & length(h) == 1
         */
        {
            mxArray * a_ = mclInitialize(mlfIshandle(mclVa(h, "h")));
            if (mlfTobool(a_)
                && mlfTobool(
                     mclAnd(
                       a_,
                       mclBoolToArray(mclLengthInt(mclVa(h, "h")) == 1)))) {
                mxDestroyArray(a_);
                /*
                 * fig = getParentFigure(h);
                 */
                mlfAssign(&fig, mlfGuihandles_getParentFigure(mclVa(h, "h")));
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
            mlfError(_mxarray1_, NULL);
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
     * % the structure creation is handled in a subfunction:
     * handles = createHandles(fig);
     */
    mlfAssign(&handles, mlfGuihandles_createHandles(mclVv(fig, "fig")));
    mclValidateOutput(handles, 1, nargout_, "handles", "guihandles");
    mxDestroyArray(fig);
    mxDestroyArray(ans);
    mxDestroyArray(h);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return handles;
    /*
     * 
     * 
     */
}

/*
 * The function "Mguihandles_getParentFigure" is the implementation version of
 * the "guihandles/getParentFigure" M-function from file
 * "c:\matlab6p5\toolbox\matlab\uitools\guihandles.m" (lines 78-86). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function fig = getParentFigure(fig)
 */
static mxArray * Mguihandles_getParentFigure(int nargout_, mxArray * fig_in) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_guihandles);
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
                       _mxarray3_,
                       mlfNGet(1, mclVa(fig, "fig"), _mxarray5_, NULL)))))) {
            mxDestroyArray(a_);
        } else {
            mxDestroyArray(a_);
            break;
        }
        /*
         * fig = get(fig,'parent');
         */
        mlfAssign(&fig, mlfNGet(1, mclVa(fig, "fig"), _mxarray7_, NULL));
    /*
     * end
     */
    }
    mclValidateOutput(fig, 1, nargout_, "fig", "guihandles/getParentFigure");
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return fig;
    /*
     * 
     * 
     */
}

/*
 * The function "Mguihandles_createHandles" is the implementation version of
 * the "guihandles/createHandles" M-function from file
 * "c:\matlab6p5\toolbox\matlab\uitools\guihandles.m" (lines 86-111). It
 * contains the actual compiled code for that M-function. It is a static
 * function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function handles = createHandles(fig)
 */
static mxArray * Mguihandles_createHandles(int nargout_, mxArray * fig) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_guihandles);
    mxArray * handles = NULL;
    mxArray * prev_h = NULL;
    mxArray * tag = NULL;
    mxArray * this_h = NULL;
    mxArray * all_h = NULL;
    mclCopyArray(&fig);
    /*
     * % Assemble a struct using all the legal tag names in the figure as
     * % fieldnames.  Each field contains the handles of the objects using
     * % that tag.
     * all_h = findall(fig);
     */
    mlfAssign(&all_h, mlfFindall(mclVa(fig, "fig"), NULL));
    /*
     * handles = [];
     */
    mlfAssign(&handles, _mxarray0_);
    /*
     * 
     * % loop across all objects in figure, looking for legal tags:
     * for this_h = all_h'
     */
    {
        mclForLoopIterator viter__;
        for (mclForStart(
               &viter__, mlfCtranspose(mclVv(all_h, "all_h")), NULL, NULL);
             mclForNext(&viter__, &this_h);
             ) {
            /*
             * tag = get(this_h,'tag');
             */
            mlfAssign(
              &tag, mlfNGet(1, mclVv(this_h, "this_h"), _mxarray9_, NULL));
            /*
             * if ~isempty(tag) & isvarname(tag) % can it be used as a fieldname?
             */
            {
                mxArray * a_
                  = mclInitialize(mclNot(mlfIsempty(mclVv(tag, "tag"))));
                if (mlfTobool(a_)
                    && mlfTobool(
                         mclAnd(a_, mlfIsvarname(mclVv(tag, "tag"))))) {
                    mxDestroyArray(a_);
                    /*
                     * 
                     * % if a field of this name already exists, get its contents
                     * if isfield(handles, tag)
                     */
                    if (mlfTobool(
                          mlfIsfield(
                            mclVv(handles, "handles"), mclVv(tag, "tag")))) {
                        /*
                         * prev_h = handles.(tag);
                         */
                        mlfAssign(
                          &prev_h,
                          mlfIndexRef(
                            mclVv(handles, "handles"),
                            ".(?)",
                            mclVv(tag, "tag")));
                    /*
                     * else
                     */
                    } else {
                        /*
                         * prev_h = [];
                         */
                        mlfAssign(&prev_h, _mxarray0_);
                    /*
                     * end
                     */
                    }
                    /*
                     * 
                     * % append our handle to whatever was there before. If nothing
                     * % was there before, SETFIELD will create the field.
                     * handles.(tag) = [prev_h this_h];
                     */
                    mlfIndexAssign(
                      &handles,
                      ".(?)",
                      mclVv(tag, "tag"),
                      mlfHorzcat(
                        mclVv(prev_h, "prev_h"),
                        mclVv(this_h, "this_h"),
                        NULL));
                } else {
                    mxDestroyArray(a_);
                }
            /*
             * 
             * end % if legal tag
             */
            }
        /*
         * end % loop
         */
        }
        mclDestroyForLoopIterator(viter__);
    }
    mclValidateOutput(
      handles, 1, nargout_, "handles", "guihandles/createHandles");
    mxDestroyArray(all_h);
    mxDestroyArray(this_h);
    mxDestroyArray(tag);
    mxDestroyArray(prev_h);
    mxDestroyArray(fig);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return handles;
}
