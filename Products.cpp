//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Products.h"
#include "Main.h"
#include "Meals.h"
#include "Recommend.h"
#include "ProdForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;

const int PanelH=100;

//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
	PanelH=100;
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button1Click(TObject *Sender)
{
	Form5->Show();
}
//---------------------------------------------------------------------------

