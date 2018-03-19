function varargout = parametros(varargin)
% PARAMETROS M-file for parametros.fig
%      PARAMETROS, by itself, creates a new PARAMETROS or raises the existing
%      singleton*.
%
%      H = PARAMETROS returns the handle to a new PARAMETROS or the handle to
%      the existing singleton*.
%
%      PARAMETROS('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in PARAMETROS.M with the given input arguments.
%
%      PARAMETROS('Property','Value',...) creates a new PARAMETROS or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before parametros_OpeningFunction gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to parametros_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help parametros

% Last Modified by GUIDE v2.5 21-May-2004 00:17:39

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @parametros_OpeningFcn, ...
                   'gui_OutputFcn',  @parametros_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin & isstr(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before parametros is made visible.
function parametros_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to parametros (see VARARGIN)

datos=varargin{1};
handles.n=datos.n;
handles.a=datos.a;
handles.b=datos.b;
handles.T=datos.T;
handles.eps=datos.eps;
handles.mu=datos.mu;
handles.beta=datos.beta;
handles.gamma=datos.gamma;
handles.masa=datos.masa;

set(handles.editptos,'string',datos.n);
set(handles.edit_extiz,'string',datos.a);
set(handles.edit_extde,'string',datos.b);
set(handles.edit_tiempo,'string',datos.T);
set(handles.edit_tolera,'string',datos.eps);
set(handles.edit_courant,'string',datos.mu);
set(handles.edit_beta,'string',datos.beta);
set(handles.edit_gamma,'string',datos.gamma);
set(handles.edit_masa,'string',datos.masa);


% Choose default command line output for parametros
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes parametros wait for user response (see UIRESUME)
uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = parametros_OutputFcn(hObject, eventdata, handles)
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure

varargout{1} = handles.output;
varargout{2} = handles.n;
varargout{3} = handles.mu;
varargout{4} = handles.a;
varargout{5} = handles.b;
varargout{6} = handles.T;
varargout{7} = handles.eps;
varargout{8} = handles.beta;
varargout{9} = handles.gamma;
varargout{10} = handles.masa;



% --- Executes on button press in push_aceptar.
function push_aceptar_Callback(hObject, eventdata, handles)
% hObject    handle to push_aceptar (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

uiresume;


% --- Executes during object creation, after setting all properties.
function editptos_CreateFcn(hObject, eventdata, handles)
% hObject    handle to editptos (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc
    set(hObject,'BackgroundColor','white');
else
    set(hObject,'BackgroundColor',get(0,'defaultUicontrolBackgroundColor'));
end


function editptos_Callback(hObject, eventdata, handles)
% hObject    handle to editptos (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of editptos as text
%        str2double(get(hObject,'String')) returns contents of editptos as a double


ptos=str2double(get(hObject,'String'));
if isnan(ptos)
    set(hObject, 'String', 0);
    errordlg('Input must be a number','Error');
end

handles.n=ptos;
guidata(hObject,handles);


% --- Executes during object creation, after setting all properties.
function edit_extiz_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit_extiz (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc
    set(hObject,'BackgroundColor','white');
else
    set(hObject,'BackgroundColor',get(0,'defaultUicontrolBackgroundColor'));
end



function edit_extiz_Callback(hObject, eventdata, handles)
% hObject    handle to edit_extiz (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit_extiz as text
%        str2double(get(hObject,'String')) returns contents of edit_extiz as a double

valor=str2double(get(hObject,'String'));
if isnan(valor)
    set(hObject, 'String', 0);
    errordlg('Input must be a number','Error');
end

handles.a=valor;
guidata(hObject,handles);


% --- Executes during object creation, after setting all properties.
function edit_extde_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit_extde (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc
    set(hObject,'BackgroundColor','white');
else
    set(hObject,'BackgroundColor',get(0,'defaultUicontrolBackgroundColor'));
end



function edit_extde_Callback(hObject, eventdata, handles)
% hObject    handle to edit_extde (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit_extde as text
%        str2double(get(hObject,'String')) returns contents of edit_extde as a double

valor=str2double(get(hObject,'String'));
if isnan(valor)
    set(hObject, 'String', 0);
    errordlg('Input must be a number','Error');
end

handles.b=valor;
guidata(hObject,handles);

% --- Executes during object creation, after setting all properties.
function edit_tiempo_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit_tiempo (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc
    set(hObject,'BackgroundColor','white');
else
    set(hObject,'BackgroundColor',get(0,'defaultUicontrolBackgroundColor'));
end



function edit_tiempo_Callback(hObject, eventdata, handles)
% hObject    handle to edit_tiempo (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit_tiempo as text
%        str2double(get(hObject,'String')) returns contents of edit_tiempo as a double

valor=str2double(get(hObject,'String'));
if isnan(valor)
    set(hObject, 'String', 0);
    errordlg('Input must be a number','Error');
end

handles.T=valor;
guidata(hObject,handles);

% --- Executes during object creation, after setting all properties.
function edit_tolera_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit_tolera (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc
    set(hObject,'BackgroundColor','white');
else
    set(hObject,'BackgroundColor',get(0,'defaultUicontrolBackgroundColor'));
end



function edit_tolera_Callback(hObject, eventdata, handles)
% hObject    handle to edit_tolera (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit_tolera as text
%        str2double(get(hObject,'String')) returns contents of edit_tolera as a double

valor=str2double(get(hObject,'String'));
if isnan(valor)
    set(hObject, 'String', 0);
    errordlg('Input must be a number','Error');
end

handles.eps=valor;
guidata(hObject,handles);

% --- Executes during object creation, after setting all properties.
function edit_courant_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit_courant (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc
    set(hObject,'BackgroundColor','white');
else
    set(hObject,'BackgroundColor',get(0,'defaultUicontrolBackgroundColor'));
end



function edit_courant_Callback(hObject, eventdata, handles)
% hObject    handle to edit_courant (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit_courant as text
%        str2double(get(hObject,'String')) returns contents of edit_courant as a double

valor=str2double(get(hObject,'String'));
if isnan(valor)
    set(hObject, 'String', 0);
    errordlg('Input must be a number','Error');
end

handles.mu=valor;
guidata(hObject,handles);


% --- Executes during object creation, after setting all properties.
function edit_beta_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit_beta (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc
    set(hObject,'BackgroundColor','white');
else
    set(hObject,'BackgroundColor',get(0,'defaultUicontrolBackgroundColor'));
end



function edit_beta_Callback(hObject, eventdata, handles)
% hObject    handle to edit_beta (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit_beta as text
%        str2double(get(hObject,'String')) returns contents of edit_beta as a double

valor=str2double(get(hObject,'String'));
if isnan(valor)
    set(hObject, 'String', 0);
    errordlg('Input must be a number','Error');
end

handles.beta=valor;
guidata(hObject,handles);

% --- Executes during object creation, after setting all properties.
function edit_gamma_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit_gamma (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc
    set(hObject,'BackgroundColor','white');
else
    set(hObject,'BackgroundColor',get(0,'defaultUicontrolBackgroundColor'));
end



function edit_gamma_Callback(hObject, eventdata, handles)
% hObject    handle to edit_gamma (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit_gamma as text
%        str2double(get(hObject,'String')) returns contents of edit_gamma as a double

valor=str2double(get(hObject,'String'));
if isnan(valor)
    set(hObject, 'String', 0);
    errordlg('Input must be a number','Error');
end

handles.gamma=valor;
guidata(hObject,handles);

% --- Executes during object creation, after setting all properties.
function edit_masa_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit_masa (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc
    set(hObject,'BackgroundColor','white');
else
    set(hObject,'BackgroundColor',get(0,'defaultUicontrolBackgroundColor'));
end



function edit_masa_Callback(hObject, eventdata, handles)
% hObject    handle to edit_masa (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit_masa as text
%        str2double(get(hObject,'String')) returns contents of edit_masa as a double

valor=str2double(get(hObject,'String'));
if isnan(valor)
    set(hObject, 'String', 0);
    errordlg('Input must be a number','Error');
end

handles.masa=valor;
guidata(hObject,handles);
