//---------------------------------------------------------------------------

#include <vcl.h>
#include <fstream.h>
#include <iostream.h>


#pragma hdrstop

#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
ADOTable1->IndexFieldNames = "КоличествоЭВМ";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
ADOTable1->IndexFieldNames = "";
}
//---------------------------------------------------------------------------
int ks=1;
void stroka(AnsiString s,AnsiString *s1, AnsiString *s2,AnsiString *s3,AnsiString *s4,AnsiString *s5 )
{
 *s1=s.SubString(1,s.Pos(";")-1);
 s.Delete(1,s.Pos(";"));
 *s2=s.SubString(1,s.Pos(";")-1);
 s.Delete(1,s.Pos(";"));
 *s3=s.SubString(1,s.Pos(";")-1);
 s.Delete(1,s.Pos(";"));
 *s4=s.SubString(1,s.Pos(";")-1);
 s.Delete(1,s.Pos(";"));
 *s5=s.SubString(1,s.Pos(";")-1);
 s.Delete(1,s.Pos(";"));
}
struct vacansia
{ AnsiString nameaud;
 AnsiString nomadr;
 AnsiString namezaw;
 AnsiString kolewm;
 AnsiString kolprint;
} a[1000];




void __fastcall TForm2::Button3Click(TObject *Sender)
{
int nm=DBGrid1->DataSource->DataSet->RecordCount;
int nn=0;
 for (int i=1; i<nm+1;i++) {
 DBGrid1->DataSource->DataSet->RecNo = i;
if (DBGrid1->Columns->Items[0]->Field->AsString==Edit1->Text)
{nn++; }
 }
Form3->Tablisa1->RowCount=nn+1;
int l=0,kl=0;
for (int i=1; i<nm+1;i++) {
DBGrid1->DataSource->DataSet->RecNo = i;
if (DBGrid1->Columns->Items[0]->Field->AsString==Edit1->Text)
{l++ ;
Form3->Tablisa1->Cells[0][l]=Form2->DBGrid1->Columns->Items[0]->Field->AsString;
Form3->Tablisa1->Cells[1][l]=Form2->DBGrid1->Columns->Items[1]->Field->AsString;
Form3->Tablisa1->Cells[2][l]=Form2->DBGrid1->Columns->Items[2]->Field->AsString;
Form3->Tablisa1->Cells[3][l]=Form2->DBGrid1->Columns->Items[3]->Field->AsString;
Form3->Tablisa1->Cells[4][l]=Form2->DBGrid1->Columns->Items[4]->Field->AsString;
}    else
{kl++;}
}
if (kl==nm)ShowMessage("Аудитория не найдено"); else Form3->Show();


}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button4Click(TObject *Sender)
{
{ int j=1;
	  AnsiString st1=NULL;
	 AnsiString st2=NULL;
	 AnsiString st3=NULL;
	 AnsiString st4=NULL;
	 AnsiString st5=NULL;
   char str2[256];
 ifstream fayl2;
 fayl2.open("base.txt");
 if (!fayl2.is_open()){ShowMessage("Файл не найден ");return;}
while(!fayl2.eof())
{ fayl2.getline(str2,256);
stroka(AnsiString(str2),&st1,&st2,&st3,&st4,&st5);
  a[j].nameaud=st1 ;
 a[j].nomadr=st2 ;
 a[j].namezaw=st3;
 a[j].kolewm=st4 ;
 a[j].kolprint=st5 ;
 j++;
}
fayl2.close();
Tablisa1->RowCount=j-2;
for (int i=1; i<j;i++)
{Tablisa1->Cells[0][i]=a[i].nameaud ;
 Tablisa1->Cells[1][i]=a[i].nomadr ;
 Tablisa1->Cells[2][i]=a[i].namezaw ;
 Tablisa1->Cells[3][i]=a[i].kolewm ;
 Tablisa1->Cells[4][i]=a[i].kolprint ;
  }

}
}

//---------------------------------------------------------------------------

void __fastcall TForm2::Button5Click(TObject *Sender)
{
   int   n=Tablisa1->RowCount;

for (int i=1; i<n;i++)
{
a[i].nameaud=Tablisa1->Cells[0][i] ;
 a[i].nomadr=Tablisa1->Cells[1][i] ;
 a[i].namezaw=Tablisa1->Cells[2][i] ;
 a[i].kolewm=Tablisa1->Cells[3][i] ;
 a[i].kolprint=Tablisa1->Cells[4][i] ;
  }
FILE *f;
f=fopen("base.txt","wt");
for (int i=1; i<n+1;i++)
{fputs((a[i].nameaud+';').c_str(),f);
 fputs((a[i].nomadr+';').c_str(),f);
 fputs((a[i].namezaw+';').c_str(),f);
 fputs((a[i].kolewm+';').c_str(),f);
 fputs((a[i].kolprint+';'+'\n').c_str(),f);
}
fclose(f);

}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button6Click(TObject *Sender)
{
  int nm=Tablisa1->RowCount;
int nn;
int kc=1;
nn=0;
while(kc<nm+1)
{
if (Tablisa1->Cells[0][kc]==Edit2->Text)
{ nn++;}
kc++ ;
}
if (nn==0)ShowMessage("Аудитория не найдено"); else
{Form3->Tablisa1->RowCount=nn+1;
int l=0;
while(l<nn)
{  for (int k=1; k<nm;k++)
if (Tablisa1->Cells[0][k]==Edit2->Text)
{   l++;
Form3->Tablisa1->Cells[0][l]=Tablisa1->Cells[0][k];
Form3->Tablisa1->Cells[1][l]=Tablisa1->Cells[1][k];
Form3->Tablisa1->Cells[2][l]=Tablisa1->Cells[2][k];
Form3->Tablisa1->Cells[3][l]=Tablisa1->Cells[3][k];
Form3->Tablisa1->Cells[4][l]=Tablisa1->Cells[4][k];

}}
Form3->Show();}

}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormCreate(TObject *Sender)
{
Tablisa1->Cells[0][0]="Название аудитории"    ;
Tablisa1->Cells[1][0]="Номер аудитории"    ;
Tablisa1->Cells[2][0]="Фамилия заведующей лаборатории"   ;
Tablisa1->Cells[3][0]="Количество ЭВМ"  ;
Tablisa1->Cells[4][0]="Количество принтеров" ;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button7Click(TObject *Sender)
{
	 for (int j=0; j<Tablisa1->RowCount-1; j++)
	 for (int i=1; i<Tablisa1->RowCount-j-1; i++)
	   if (StrToInt(Tablisa1->Cells[3][i])!=0 &&  StrToInt(Tablisa1->Cells[3][i+1])!=0)
       if (StrToInt(Tablisa1->Cells[3][i])>StrToInt(Tablisa1->Cells[3][i+1]))
		  {Tablisa1->Rows[Tablisa1->RowCount+1]=Tablisa1->Rows[i+1];
           Tablisa1->Rows[i+1]= Tablisa1->Rows[i];
           Tablisa1->Rows[i]=Tablisa1->Rows[Tablisa1->RowCount+1];
		  }
  }
//---------------------------------------------------------------------------

void __fastcall TForm2::Button8Click(TObject *Sender)
{ Tablisa1->RowCount=Tablisa1->RowCount+1;
}
//---------------------------------------------------------------------------


void __fastcall TForm2::RadioButton1Click(TObject *Sender)
{
if(RadioButton1->Checked){Panel1->Hide();Panel2->Hide();}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::RadioButton2Click(TObject *Sender)
{
if(RadioButton2->Checked){Panel2->Hide();}
}
//---------------------------------------------------------------------------

