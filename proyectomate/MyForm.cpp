#include "MyForm.h"
using namespace std;
using namespace proyectomate;
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm());
}
