//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button1Click(TObject *Sender)
{
if(PrintDialog1->Execute())
  {
  TPrinter * thePrinter = Printer();
  thePrinter->BeginDoc();
Tablisa1->PaintTo(Printer()->Handle,10,10);
Printer()->EndDoc();  }

}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormCreate(TObject *Sender)
{
 Tablisa1->Cells[0][0]="Название аудитории"    ;
Tablisa1->Cells[1][0]="Номер аудитории"    ;
Tablisa1->Cells[2][0]="Фамилия заведующей лаборатории"   ;
Tablisa1->Cells[3][0]="Количество ЭВМ"  ;
Tablisa1->Cells[4][0]="Количество принтеров" ;

}
//---------------------------------------------------------------------------
