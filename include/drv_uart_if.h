

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#ifndef __DRV_UART_H__
#define __DRV_UART_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif



/*****************************************************************************
  2 �궨��
*****************************************************************************/

/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/

typedef enum _E_UART_CONSUMER_ID_
{
    CBP_UART_PORT_ID = 1,
	JAZZ_UART_PORT_ID = 2,
    UART_CONSUMER_BUTT
}UART_CONSUMER_ID;

/*****************************************************************************
  4 ��Ϣͷ����
*****************************************************************************/


/*****************************************************************************
  5 ��Ϣ����
*****************************************************************************/


/*****************************************************************************
  6 STRUCT����
*****************************************************************************/


/*****************************************************************************
  7 UNION����
*****************************************************************************/


/*****************************************************************************
  8 OTHERS����
*****************************************************************************/


/*****************************************************************************
  9 ȫ�ֱ�������
*****************************************************************************/


/*****************************************************************************
  10 ��������
*****************************************************************************/



extern int uart_core_send(UART_CONSUMER_ID uPortNo, unsigned char * pDataBuffer, unsigned int ulLength);

#define DRV_UART_SEND(uPortNo,pDataBuffer,ulLength) \
        uart_core_send(uPortNo,pDataBuffer,ulLength)

typedef int (*pUARTRecv)(UART_CONSUMER_ID uPortNo,unsigned char * pData, unsigned int ulLength);
extern int uart_core_recv_handler_register(UART_CONSUMER_ID uPortNo, pUARTRecv pCallback);

#define DRV_UART_RCV_CALLBACK_REGI(uPortNo,pCallback)\
        uart_core_recv_handler_register(uPortNo,pCallback)




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif
