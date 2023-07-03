#using <System.dll>
#using <System.Windows.Forms.dll>

#include "JSArray.h"
#include "gui.h"
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	JSArray::gui jsarray_gui;
	Application::Run(% jsarray_gui);
}