//---------------------------------------------------------------------------

#include <vcl.h>
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
    char SendDate[100]; //한글 50자 알파벳 100자
    memset(SendDate,0x00,100); // 주기억장치 0으로 셋 , 0x00=널=공백
                                //senddate 크기만큼 0x00을 채워준다
    memcpy(SendDate,Edit1->Text.c_str(),strlen(Edit1->Text.c_str()));

    Form3->NMUDP2->SendBuffer(SendDate,sizeof(SendDate),strlen(Edit1->Text.c_str()));
    //nmudp sendbuffer는 메세지를 보낸다. sizeof=크기 strlen=길이
    Edit1->Clear();

    Form2->Hide();
}
//---------------------------------------------------------------------------
