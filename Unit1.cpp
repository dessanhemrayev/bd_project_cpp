//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int k=0;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
if (Edit1->Text=="Igor"&&Edit2->Text=="Nepota")
{
   Form2->Show();       }
 else {
		k++; ShowMessage("�� ���������� ����� ��� ������");
 }
 if (k==3)
 {ShowMessage("�� ����� 3 ���� �� ���������� ����� ��� ������\n������ ����� ������������  � �������  30 ������");
  Timer1->Enabled=true;
  Edit1->Enabled=false;
Edit2->Enabled=false;
Button1->Enabled=false;
 }


}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{ int nk=0;
while(nk<300)
{

nk++;
}


Edit1->Enabled=true;
Edit2->Enabled=true;
Button1->Enabled=true;
k=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
ShowMessage("�����:Igor\n�����:Nepota")   ;
}
//---------------------------------------------------------------------------

