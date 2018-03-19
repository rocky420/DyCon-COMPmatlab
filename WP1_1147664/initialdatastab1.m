function varargout = initialdatastab1(varargin)
% INITIALDATASTAB1 M-file for initialdatastab1.fig
%      INITIALDATASTAB1, by itself, creates a new INITIALDATASTAB1 or raises the existing
%      singleton*.
%
%      H = INITIALDATASTAB1 returns the handle to a new INITIALDATASTAB1 or the handle to
%      the existing singleton*.
%
%      INITIALDATASTAB1('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in INITIALDATASTAB1.M with the given input arguments.
%
%      INITIALDATASTAB1('Property','Value',...) creates a new INITIALDATASTAB1 or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before initialdatastab1_OpeningFunction gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to initialdatastab1_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help initialdatastab1

% Last Modified by GUIDE v2.5 07-Jul-2005 22:36:18

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @initialdatastab1_OpeningFcn, ...
                   'gui_OutputFcn',  @initialdatastab1_OutputFcn, ...
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


% --- Executes just before initialdatastab1 is made visible.
function initialdatastab1_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to initialdatastab1 (see VARARGIN)

datos=varargin{1};
handles.a=datos.a;
handles.b=datos.b;
handles.n=datos.n;
handles.mu=datos.mu;
handles.T=datos.T;
handles.coeffdamp=datos.coeffdamp;
handles.dampa=datos.dampa;
handles.dampb=datos.dampb;
handles.viscosity=datos.viscosity;
handles.u0=datos.u0;
handles.u1=datos.u1;
handles.x=datos.x;

% set(handles.edit_u0,'string',datos.gamma);
% set(handles.edit_u1,'string',datos.masa);


% Choose default command line output for initialdatastab1
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes initialdatastab1 wait for user response (see UIRESUME)
uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = initialdatastab1_OutputFcn(hObject, eventdata, handles)
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure

varargout{1} = handles.output;
varargout{1} = handles.output;
varargout{2} = handles.a;
varargout{3} = handles.b;
varargout{4} = handles.n;
varargout{5} = handles.mu;
varargout{6} = handles.T;
varargout{7} = handles.coeffdamp;
varargout{8} = handles.dampa;
varargout{9} = handles.dampb;
varargout{10} = handles.viscosity;
varargout{11} = handles.u0;
varargout{12} = handles.u1;
varargout{13} = handles.x;


% --- Executes on button press in push_aceptar.
function push_aceptar_Callback(hObject, eventdata, handles)
% hObject    handle to push_aceptar (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

uiresume;


% --- Executes during object creation, after setting all properties.
function edit_u0_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit_u0 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc
    set(hObject,'BackgroundColor','white');
else
    set(hObject,'BackgroundColor',get(0,'defaultUicontrolBackgroundColor'));
end

set(hObject,'String','sin(pi*x)');

function edit_u0_Callback(hObject, eventdata, handles)
% hObject    handle to edit_u0 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit_u0 as text
%        str2double(get(hObject,'String')) returns contents of edit_u0 as a double
x=handles.x;
valor=get(hObject,'String');

valor=vectorize(valor);
valor=eval(valor,[]);

handles.u0=valor;
guidata(hObject,handles);

% --- Executes during object creation, after setting all properties.
function edit_u1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit_u1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc
    set(hObject,'BackgroundColor','white');
else
    set(hObject,'BackgroundColor',get(0,'defaultUicontrolBackgroundColor'));
end

set(hObject,'String','-pi*sin(pi*x)');

function edit_u1_Callback(hObject, eventdata, handles)
% hObject    handle to edit_u1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit_u1 as text
%        str2double(get(hObject,'String')) returns contents of edit_u1 as a double
x=handles.x;
valor=get(hObject,'String');
       
valor=vectorize(valor);  
valor=eval(valor,[]);

handles.u1=valor
guidata(hObject,handles);
