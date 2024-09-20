#include "GUI_Form.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
    // Ativa o visual estilo do Windows para os controles do formul�rio
    Application::EnableVisualStyles();

    // Configura o gerenciamento de texto compat�vel com o padr�o .NET
    Application::SetCompatibleTextRenderingDefault(false);

    // Inicializa a inst�ncia do formul�rio e roda o aplicativo
    ImpactLabTrab1::GUI_Form form;
    Application::Run(% form);

    return 0;
}
