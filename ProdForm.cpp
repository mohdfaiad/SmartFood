//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#ifndef _MYINCL1_H
#define _MYINCL1_H

#include "ProdForm.h"
#include "Products.h"
#include "Meals.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button1Click(TObject *Sender)
{
if (OpenPictureDialog1->Execute())
	{
		 Image1->Picture->LoadFromFile(OpenPictureDialog1->FileName);
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button2Click(TObject *Sender)
{
int n;
if(Button4->Visible==false)     //���� ������ ������� ��������(�� ����� ����� ������ ��������)
{
	Form2->ProductsA++;
	n=Form2->ProductsA-1;
	int k;
	k=Form2->ScrollBox1->VertScrollBar->Position;  //����� �����������,����� �����. ��������
	Form2->ScrollBox1->VertScrollBar->Position=0;

	Form2->Panels[n]=new TPanel(Form2);
	Form2->Panels[n]->Parent=Form2->ScrollBox1;
	Form2->Panels[n]->Top=(Form2->ProductsA-1-Form2->ProductsDel)*Form2->PanelH;
	Form2->Panels[n]->Left=0;
	Form2->Panels[n]->Width=Form2->ScrollBox1->Width-4;
	Form2->Panels[n]->Height=Form2->PanelH;

	Form2->ScrollBox1->VertScrollBar->Position=k;


	Form2->Images[n]=new TImage(Form2);
	Form2->Images[n]->Parent=Form2->Panels[n];
	Form2->Images[n]->Left=150;
	Form2->Images[n]->Height=Form2->PanelH-1;
	Form2->Images[n]->Width=125;
	Form2->Images[n]->Picture=Image1->Picture;
	Form2->Images[n]->Stretch=true;


	Form2->Edits[n]=new TMemo(Form2);
	Form2->Edits[n]->Parent=Form2->Panels[n];
	Form2->Edits[n]->Left=277;
	Form2->Edits[n]->Height=Form2->PanelH-1;
	Form2->Edits[n]->Width=150;
	Form2->Edits[n]->Lines->Text=Edit5->Lines->Text;
	Form2->Edits[n]->ReadOnly=true;
	Form2->Edits[n]->ScrollBars=ssBoth;

	Form2->Labeles[n*5]=new TLabel(Form2);
	Form2->Labeles[n*5]->Parent=Form2->Panels[n];
	Form2->Labeles[n*5]->Top=40;
	Form2->Labeles[n*5]->Left=10;
	Form2->Labeles[n*5]->WordWrap=true;
	Form2->Labeles[n*5]->AutoSize=false;
	Form2->Labeles[n*5]->Height=50;
	Form2->Labeles[n*5]->Width=130;
	Form2->Labeles[n*5]->Font->Size=14;
	Form2->Labeles[n*5]->Caption=Edit1->Text;

	Form2->Labeles[n*5+1]=new TLabel(Form2);
	Form2->Labeles[n*5+1]->Parent=Form2->Panels[n];
	Form2->Labeles[n*5+1]->Top=40;
	Form2->Labeles[n*5+1]->Left=450;
	Form2->Labeles[n*5+1]->WordWrap=true;
	Form2->Labeles[n*5+1]->AutoSize=false;
	Form2->Labeles[n*5+1]->Height=20;
	Form2->Labeles[n*5+1]->Width=50;
	Form2->Labeles[n*5+1]->Font->Size=10;
	Form2->Labeles[n*5+1]->Caption=Edit2->Text;

	Form2->Labeles[n*5+2]=new TLabel(Form2);
	Form2->Labeles[n*5+2]->Parent=Form2->Panels[n];
	Form2->Labeles[n*5+2]->Top=40;
	Form2->Labeles[n*5+2]->Left=573;
	Form2->Labeles[n*5+2]->WordWrap=true;
	Form2->Labeles[n*5+2]->AutoSize=false;
	Form2->Labeles[n*5+2]->Height=20;
	Form2->Labeles[n*5+2]->Width=50;
	Form2->Labeles[n*5+2]->Font->Size=10;
	Form2->Labeles[n*5+2]->Caption=Edit3->Text;

	Form2->Labeles[n*5+3]=new TLabel(Form2);
	Form2->Labeles[n*5+3]->Parent=Form2->Panels[n];
	Form2->Labeles[n*5+3]->Top=40;
	Form2->Labeles[n*5+3]->Left=696;
	Form2->Labeles[n*5+3]->WordWrap=true;
	Form2->Labeles[n*5+3]->AutoSize=false;
	Form2->Labeles[n*5+3]->Height=20;
	Form2->Labeles[n*5+3]->Width=50;
	Form2->Labeles[n*5+3]->Font->Size=10;
	Form2->Labeles[n*5+3]->Caption=Edit4->Text;

	Form2->Labeles[n*5+4]=new TLabel(Form2);
	Form2->Labeles[n*5+4]->Parent=Form2->Panels[n];
	Form2->Labeles[n*5+4]->Top=40;
	Form2->Labeles[n*5+4]->Left=819;
	Form2->Labeles[n*5+4]->WordWrap=true;
	Form2->Labeles[n*5+4]->AutoSize=false;
	Form2->Labeles[n*5+4]->Height=20;
	Form2->Labeles[n*5+4]->Width=50;
	Form2->Labeles[n*5+4]->Font->Size=10;
	int n1=StrToInt(Form2->Labeles[n*5+1]->Caption);
	int n2=StrToInt(Form2->Labeles[n*5+2]->Caption);
	int n3=StrToInt(Form2->Labeles[n*5+3]->Caption);
	Form2->Labeles[n*5+4]->Caption=n1+n2+n3;
   //	Form2->Labeles[n*5+4]->Caption=Edit;

	Form2->Buttons[n]=new TButton(Form2);
	Form2->Buttons[n]->Parent=Form2->Panels[n];
	Form2->Buttons[n]->Left=920;
	Form2->Buttons[n]->Height=Form2->PanelH-1;
	Form2->Buttons[n]->Width=100;
	Form2->Buttons[n]->Tag=n;
	Form2->Buttons[n]->OnClick=Form2->PropClick;

	TImage *line=new TImage(Form2);               //������ �����
	line->Parent=Form2->Panels[n];
	line->Left=150;
	line->Width=2;
	line->Height=Form2->PanelH-1;
	line->Picture->Bitmap->Width=2;
	line->Picture->Bitmap->Height=Form2->PanelH-1;
	line->Picture->Bitmap->Canvas->Brush->Color=clBlack;
	line->Picture->Bitmap->Canvas->FillRect(Rect(0,0,2,100));

	TImage *line1=new TImage(Form2);
	line1->Parent=Form2->Panels[n];
	line1->Left=275;
	line1->Width=2;
	line1->Height=Form2->PanelH-1;
	line1->Picture->Bitmap->Width=2;
	line1->Picture->Bitmap->Height=Form2->PanelH-1;
	line1->Picture->Bitmap->Canvas->Brush->Color=clBlack;
	line1->Picture->Bitmap->Canvas->FillRect(Rect(0,0,2,100));

	TImage *line2=new TImage(Form2);
	line2->Parent=Form2->Panels[n];
	line2->Left=427;
	line2->Width=2;
	line2->Height=Form2->PanelH-1;
	line2->Picture->Bitmap->Width=2;
	line2->Picture->Bitmap->Height=Form2->PanelH-1;
	line2->Picture->Bitmap->Canvas->Brush->Color=clBlack;
	line2->Picture->Bitmap->Canvas->FillRect(Rect(0,0,2,100));

	TImage *line3=new TImage(Form2);
	line3->Parent=Form2->Panels[n];
	line3->Left=550;
	line3->Width=2;
	line3->Height=Form2->PanelH-1;
	line3->Picture->Bitmap->Width=2;
	line3->Picture->Bitmap->Height=Form2->PanelH-1;
	line3->Picture->Bitmap->Canvas->Brush->Color=clBlack;
	line3->Picture->Bitmap->Canvas->FillRect(Rect(0,0,2,100));

	TImage *line4=new TImage(Form2);
	line4->Parent=Form2->Panels[n];
	line4->Left=673;
	line4->Width=2;
	line4->Height=Form2->PanelH-1;
	line4->Picture->Bitmap->Width=2;
	line4->Picture->Bitmap->Height=Form2->PanelH-1;
	line4->Picture->Bitmap->Canvas->Brush->Color=clBlack;
	line4->Picture->Bitmap->Canvas->FillRect(Rect(0,0,2,100));

	TImage *line5=new TImage(Form2);
	line5->Parent=Form2->Panels[n];
	line5->Left=796;
	line5->Width=2;
	line5->Height=Form2->PanelH-1;
	line5->Picture->Bitmap->Width=2;
	line5->Picture->Bitmap->Height=Form2->PanelH-1;
	line5->Picture->Bitmap->Canvas->Brush->Color=clBlack;
	line5->Picture->Bitmap->Canvas->FillRect(Rect(0,0,2,100));

	TImage *line6=new TImage(Form2);
	line6->Parent=Form2->Panels[n];
	line6->Left=919;
	line6->Width=2;
	line6->Height=Form2->PanelH-1;
	line6->Picture->Bitmap->Width=2;
	line6->Picture->Bitmap->Height=Form2->PanelH-1;
	line6->Picture->Bitmap->Canvas->Brush->Color=clBlack;
	line6->Picture->Bitmap->Canvas->FillRect(Rect(0,0,2,100));
}
	else
	{
        n=Form2->PropNum;
		Form2->Images[n]->Picture=Image1->Picture;
		Form2->Edits[n]->Lines->Text=Edit5->Lines->Text;
		Form2->Labeles[n*5]->Caption=Edit1->Text;
		Form2->Labeles[n*5+1]->Caption=Edit2->Text;
		Form2->Labeles[n*5+2]->Caption=Edit3->Text;
		Form2->Labeles[n*5+3]->Caption=Edit4->Text;
    }

Close();
}
void __fastcall TForm5::Button3Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
#endif


//---------------------------------------------------------------------------



void __fastcall TForm5::Button4Click(TObject *Sender)
{
int num=Form2->PropNum;
int n=Form2->ProductsA-1;
for(int i=num+1;i<n+1;i++)
{
	if(Form2->IsDel[i]==false)
		Form2->Panels[i]->Top-=Form2->PanelH;
}
Form2->Panels[num]->Free();
Form2->IsDel[num]=true;
Form2->ProductsDel++;

for(int i=0;i<Form3->ProductsHave+Form3->ProductsUse;i++)
if(Form3->PanelsHave[i]->Tag==num)
	for(int j=0;j<Form2->ProductsA;j++)
	{
		Form3->IsLeft[j][num]=false;
		Form3->IsRight[j][num]=false;
    }

Close();
}
//---------------------------------------------------------------------------

