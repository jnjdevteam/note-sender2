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
    char SendDate[100]; //�ѱ� 50�� ���ĺ� 100��
    memset(SendDate,0x00,100); // �ֱ����ġ 0���� �� , 0x00=��=����
                                //senddate ũ�⸸ŭ 0x00�� ä���ش�
    memcpy(SendDate,Edit1->Text.c_str(),strlen(Edit1->Text.c_str()));

    Form3->NMUDP2->SendBuffer(SendDate,sizeof(SendDate),strlen(Edit1->Text.c_str()));
    //nmudp sendbuffer�� �޼����� ������. sizeof=ũ�� strlen=����
    Edit1->Clear();

    Form2->Hide();
}
//---------------------------------------------------------------------------
