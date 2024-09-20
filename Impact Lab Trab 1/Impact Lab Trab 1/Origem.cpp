#include "GUI_Form.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
    // Ativa o visual estilo do Windows para os controles do formulário
    Application::EnableVisualStyles();

    // Configura o gerenciamento de texto compatível com o padrão .NET
    Application::SetCompatibleTextRenderingDefault(false);

    // Inicializa a instância do formulário e roda o aplicativo
    ImpactLabTrab1::GUI_Form form;
    Application::Run(% form);

    return 0;
}
