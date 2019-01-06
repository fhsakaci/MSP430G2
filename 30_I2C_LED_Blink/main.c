/*���棺����G2 LaunchPad�ϵ�LED2ʹ����P1.6��I2C���ţ������������漰��I2C��ʵ�鶼�����P1.6���߰γ�,���������̣�
 * main.c
 */
#include"MSP430G2553.h"
#include"TCA6416A.h"

void WDT_init();
void I2C_IODect()	;		                 //����¼�ȷʵ������

void main(void)
{
	WDTCTL = WDTPW + WDTHOLD;	//�ع�
    BCSCTL1 = CALBC1_16MHZ;      /* Set DCO to 8MHz */
    DCOCTL = CALDCO_16MHZ;
    TCA6416A_Init();			// ��ʼ��IO��չ��
//----��ʾ��ʼ���ɹ�----
	PinOUT(0,1);           // ָ��0�Źܽ����Ϊ0
	PinOUT(1,0);           // ָ��1�Źܽ����Ϊ0
	PinOUT(2,0);           // ָ��2�Źܽ����Ϊ0
	PinOUT(3,0);           // ָ��3�Źܽ����Ϊ0
	PinOUT(4,0);           // ָ��4�Źܽ����Ϊ0
	PinOUT(5,0);           // ָ��5�Źܽ����Ϊ0
	PinOUT(6,0);           // ָ��6�Źܽ����Ϊ0
	PinOUT(7,0);           // ָ��7�Źܽ����Ϊ0
	WDT_init();
	while(1)
	{
		 _bis_SR_register(LPM0_bits);
		 PinOUT(0,0);
		 PinOUT(1,1);
		 _bis_SR_register(LPM0_bits);
		 PinOUT(1,0);
		 PinOUT(2,1);
		 _bis_SR_register(LPM0_bits);
		 PinOUT(2,0);
		 PinOUT(3,1);
		 _bis_SR_register(LPM0_bits);
		 PinOUT(3,0);
		 PinOUT(4,1);
		 _bis_SR_register(LPM0_bits);
		 PinOUT(4,0);
		 PinOUT(5,1);
		 _bis_SR_register(LPM0_bits);
		 PinOUT(5,0);
		 PinOUT(6,1);
		 _bis_SR_register(LPM0_bits);
		 PinOUT(6,0);
		 PinOUT(7,1);
		 _bis_SR_register(LPM0_bits);
		 PinOUT(7,0);
		 PinOUT(0,1);
	}


}

/********WDT��ʼ������**********/
void WDT_init()
{
	//-----�趨WDTΪ-----------
	WDTCTL=WDT_ADLY_250;
	//-----WDT�ж�ʹ��----------------------
    IE1 |= WDTIE;
    _enable_interrupts();
}


/***********WDT��ʱ�жϺ���*************/
#pragma vector=WDT_VECTOR
__interrupt void watchdog_timer(void)
{
__bic_SR_register_on_exit(LPM0_bits );
}


