#include "GestionColegio.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace ARBOLESGENERALES;

[STAThread]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew GestionColegio());
}