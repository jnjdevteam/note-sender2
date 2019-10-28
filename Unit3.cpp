//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit4.h"
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


void __fastcall TForm3::NMUDP2DataReceived(TComponent *Sender,
      int NumberBytes, AnsiString FromIP, int Port)
{
    Form4->Show();
    char Buff[100];
    int i;
    memset (Buff,0x00,100);
    Form3->NMUDP2->ReadBuffer(Buff,NumberBytes,i);
    //NMUDP1 ReadBuffer는 메세지를 받는다.  크기 길이
    Memo1->Lines->Add(Buff);
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button1Click(TObject *Sender)
{
    Form3->Hide();
}
//---------------------------------------------------------------------------

