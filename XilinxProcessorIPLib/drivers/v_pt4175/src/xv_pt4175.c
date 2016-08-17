// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.1
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
//
// ==============================================================

/***************************** Include Files *********************************/
#include "xv_pt4175.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XV_pt4175_CfgInitialize(XV_pt4175 *InstancePtr, XV_pt4175_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    /* Setup the instance */
    (void)memset((void *)InstancePtr, 0, sizeof(XV_pt4175));
    (void)memcpy((void *)&(InstancePtr->Config), (const void *)ConfigPtr,
            sizeof(XV_pt4175_Config));

    InstancePtr->Config.Ctrl_BaseAddress = ConfigPtr->Ctrl_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XV_pt4175_Start(XV_pt4175 *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_pt4175_ReadReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_AP_CTRL) & 0x80;
    XV_pt4175_WriteReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_AP_CTRL, Data | 0x01);
}

u32 XV_pt4175_IsDone(XV_pt4175 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_pt4175_ReadReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XV_pt4175_IsIdle(XV_pt4175 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_pt4175_ReadReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XV_pt4175_IsReady(XV_pt4175 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_pt4175_ReadReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XV_pt4175_EnableAutoRestart(XV_pt4175 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_pt4175_WriteReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_AP_CTRL, 0x80);
}

void XV_pt4175_DisableAutoRestart(XV_pt4175 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_pt4175_WriteReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_AP_CTRL, 0);
}

void XV_pt4175_Set_HwReg_width_V(XV_pt4175 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_pt4175_WriteReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_HWREG_WIDTH_V_DATA, Data);
}

u32 XV_pt4175_Get_HwReg_width_V(XV_pt4175 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_pt4175_ReadReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_HWREG_WIDTH_V_DATA);
    return Data;
}

void XV_pt4175_Set_HwReg_height_V(XV_pt4175 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_pt4175_WriteReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_HWREG_HEIGHT_V_DATA, Data);
}

u32 XV_pt4175_Get_HwReg_height_V(XV_pt4175 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_pt4175_ReadReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_HWREG_HEIGHT_V_DATA);
    return Data;
}

void XV_pt4175_Set_HwReg_video_format_V(XV_pt4175 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_pt4175_WriteReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_HWREG_VIDEO_FORMAT_V_DATA, Data);
}

u32 XV_pt4175_Get_HwReg_video_format_V(XV_pt4175 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_pt4175_ReadReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_HWREG_VIDEO_FORMAT_V_DATA);
    return Data;
}

void XV_pt4175_Set_HwReg_PktsPerLine_V(XV_pt4175 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_pt4175_WriteReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_HWREG_PKTSPERLINE_V_DATA, Data);
}

u32 XV_pt4175_Get_HwReg_PktsPerLine_V(XV_pt4175 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_pt4175_ReadReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_HWREG_PKTSPERLINE_V_DATA);
    return Data;
}

void XV_pt4175_Set_HwReg_PyldLen_V(XV_pt4175 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_pt4175_WriteReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_HWREG_PYLDLEN_V_DATA, Data);
}

u32 XV_pt4175_Get_HwReg_PyldLen_V(XV_pt4175 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_pt4175_ReadReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_HWREG_PYLDLEN_V_DATA);
    return Data;
}

void XV_pt4175_Set_HwReg_PyldLen_last_V(XV_pt4175 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_pt4175_WriteReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_HWREG_PYLDLEN_LAST_V_DATA, Data);
}

u32 XV_pt4175_Get_HwReg_PyldLen_last_V(XV_pt4175 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_pt4175_ReadReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_HWREG_PYLDLEN_LAST_V_DATA);
    return Data;
}

void XV_pt4175_Set_HwReg_ssrc_V(XV_pt4175 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_pt4175_WriteReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_HWREG_SSRC_V_DATA, Data);
}

u32 XV_pt4175_Get_HwReg_ssrc_V(XV_pt4175 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_pt4175_ReadReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_HWREG_SSRC_V_DATA);
    return Data;
}

void XV_pt4175_Set_HwReg_payloadtype_V(XV_pt4175 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_pt4175_WriteReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_HWREG_PAYLOADTYPE_V_DATA, Data);
}

u32 XV_pt4175_Get_HwReg_payloadtype_V(XV_pt4175 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_pt4175_ReadReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_HWREG_PAYLOADTYPE_V_DATA);
    return Data;
}

void XV_pt4175_Set_HwReg_bpc_reg_V(XV_pt4175 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_pt4175_WriteReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_HWREG_BPC_REG_V_DATA, Data);
}

u32 XV_pt4175_Get_HwReg_bpc_reg_V(XV_pt4175 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_pt4175_ReadReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_HWREG_BPC_REG_V_DATA);
    return Data;
}

void XV_pt4175_Set_HwReg_channel_number_V(XV_pt4175 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_pt4175_WriteReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_HWREG_CHANNEL_NUMBER_V_DATA, Data);
}

u32 XV_pt4175_Get_HwReg_channel_number_V(XV_pt4175 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_pt4175_ReadReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_HWREG_CHANNEL_NUMBER_V_DATA);
    return Data;
}

u32 XV_pt4175_Get_HwReg_tx_pkt_cnt_V(XV_pt4175 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_pt4175_ReadReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_HWREG_TX_PKT_CNT_V_DATA);
    return Data;
}

u32 XV_pt4175_Get_HwReg_tx_pkt_cnt_V_vld(XV_pt4175 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_pt4175_ReadReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_HWREG_TX_PKT_CNT_V_CTRL);
    return Data & 0x1;
}

void XV_pt4175_Set_HwReg_PixPerPkt_V(XV_pt4175 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_pt4175_WriteReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_HWREG_PIXPERPKT_V_DATA, Data);
}

u32 XV_pt4175_Get_HwReg_PixPerPkt_V(XV_pt4175 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_pt4175_ReadReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_HWREG_PIXPERPKT_V_DATA);
    return Data;
}

void XV_pt4175_Set_HwReg_stat_reset_V(XV_pt4175 *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_pt4175_WriteReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_HWREG_STAT_RESET_V_DATA, Data);
}

u32 XV_pt4175_Get_HwReg_stat_reset_V(XV_pt4175 *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XV_pt4175_ReadReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_HWREG_STAT_RESET_V_DATA);
    return Data;
}

void XV_pt4175_InterruptGlobalEnable(XV_pt4175 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_pt4175_WriteReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_GIE, 1);
}

void XV_pt4175_InterruptGlobalDisable(XV_pt4175 *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_pt4175_WriteReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_GIE, 0);
}

void XV_pt4175_InterruptEnable(XV_pt4175 *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XV_pt4175_ReadReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_IER);
    XV_pt4175_WriteReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_IER, Register | Mask);
}

void XV_pt4175_InterruptDisable(XV_pt4175 *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XV_pt4175_ReadReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_IER);
    XV_pt4175_WriteReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_IER, Register & (~Mask));
}

void XV_pt4175_InterruptClear(XV_pt4175 *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XV_pt4175_WriteReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_ISR, Mask);
}

u32 XV_pt4175_InterruptGetEnabled(XV_pt4175 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XV_pt4175_ReadReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_IER);
}

u32 XV_pt4175_InterruptGetStatus(XV_pt4175 *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XV_pt4175_ReadReg(InstancePtr->Config.Ctrl_BaseAddress, XV_PT4175_CTRL_ADDR_ISR);
}

void XV_pt4175_SetVideoStream(XV_pt4175 *InstancePtr,
                                                  XVidC_VideoStream VidStream) {
    InstancePtr->VideoStream = VidStream;

    XV_pt4175_Set_HwReg_width_V(InstancePtr,VidStream.Timing.HActive);
    XV_pt4175_Set_HwReg_height_V(InstancePtr,VidStream.Timing.VActive);

    XV_pt4175_Set_HwReg_video_format_V(InstancePtr,VidStream.ColorFormatId);
}

void XV_pt4175_SetPcktInfo (XV_pt4175 *InstancePtr) {
    XV_pt4175_PcktInfo XV_pt4175_PcktInfoVal;

    XV_pt4175_PcktInfoVal = XV_pt4175_ComputePckt (InstancePtr);

    XV_pt4175_Set_HwReg_PyldLen_V(InstancePtr,
                                       XV_pt4175_PcktInfoVal.Packet_Length);

    XV_pt4175_Set_HwReg_PyldLen_last_V(InstancePtr,
                                       XV_pt4175_PcktInfoVal.Re_Packet_Length);

    XV_pt4175_Set_HwReg_PktsPerLine_V(InstancePtr,
                                       XV_pt4175_PcktInfoVal.Packet_Per_Line);

    XV_pt4175_Set_HwReg_PixPerPkt_V(InstancePtr,
                                XV_pt4175_PcktInfoVal.PixPerPkt);

    XV_pt4175_Set_HwReg_ssrc_V(InstancePtr,InstancePtr->PcktInfo.SSRC);

    XV_pt4175_Set_HwReg_payloadtype_V(InstancePtr,
                                      InstancePtr->PcktInfo.DynamicPayloadType);
}

XV_pt4175_PcktInfo XV_pt4175_ComputePckt (XV_pt4175 *InstancePtr) {
    XV_pt4175_PcktInfo XV_pt4175_PcktInfoVal;

    volatile u16 Active_Width;
    volatile u16 Active_Heigth;
    volatile u16 BPC;
    volatile u16 PPC;
    volatile double Comp_Per_Pixel;
    volatile u16 Active_Line_Length;
    volatile u8 Comp_Per_Unit;
    volatile u8 PGroup_Bytes;
    volatile u16 Bytes_per_Cycle;
    volatile u16 Packet_Len;
    volatile u16 Last_Packet_Len;
    volatile u8 Packet_Per_Line;
    volatile u16 PixPerPkt;

    Active_Width = InstancePtr->VideoStream.Timing.HActive;
    Active_Heigth = InstancePtr->VideoStream.Timing.VActive;

    //Check if the core has Dynamic BPC enabled
    if (InstancePtr->Config.DynamicBPCEn) {
        /*If Supported used BPC information obtained
         *from source
         */
        BPC = InstancePtr->VideoStream.ColorDepth;
    } else {
        BPC = InstancePtr->Config.MaxBPC;
    }
    XV_pt4175_Set_HwReg_bpc_reg_V(InstancePtr, BPC);

    PPC = InstancePtr->VideoStream.PixPerClk;

    switch (InstancePtr->VideoStream.ColorFormatId){

        case  XVIDC_CSF_RGB:
            Comp_Per_Pixel=3;
            Comp_Per_Unit=3;
            break;

        case  XVIDC_CSF_YCRCB_444:
            Comp_Per_Pixel=3;
            Comp_Per_Unit=3;
            break;

        case  XVIDC_CSF_YCRCB_422:
            Comp_Per_Pixel=2;
            Comp_Per_Unit=4;
            break;

        case  XVIDC_CSF_YCRCB_420:
            Comp_Per_Pixel=1.5;
            Comp_Per_Unit=6;
            break;

        default:
            Comp_Per_Pixel=0;
            Comp_Per_Unit=0;
            break;
    }

    Active_Line_Length = (Active_Width*Comp_Per_Pixel*BPC)/8;

    PGroup_Bytes = (XV_pt4175_LCM ((BPC*Comp_Per_Unit),8))/8;

    Bytes_per_Cycle = (BPC*PPC*Comp_Per_Pixel)/8;

    XV_pt4175_PcktInfoVal.Packet_Length =
            (((Active_Line_Length > 1376) ? 1376 : Active_Line_Length)/
                        XV_pt4175_LCM (PGroup_Bytes,Bytes_per_Cycle))*
                                XV_pt4175_LCM (PGroup_Bytes,Bytes_per_Cycle);

    XV_pt4175_PcktInfoVal.PixPerPkt = (XV_pt4175_PcktInfoVal.Packet_Length * 8)/
                              (Comp_Per_Pixel*BPC);

    XV_pt4175_PcktInfoVal.Re_Packet_Length = Active_Line_Length %
                                           XV_pt4175_PcktInfoVal.Packet_Length;

    XV_pt4175_PcktInfoVal.Packet_Per_Line =
           (XV_pt4175_PcktInfoVal.Re_Packet_Length > 0) ?
               ((Active_Line_Length/XV_pt4175_PcktInfoVal.Packet_Length)+1) :
                      (Active_Line_Length/XV_pt4175_PcktInfoVal.Packet_Length);

    return (XV_pt4175_PcktInfoVal);
}


u16 XV_pt4175_LCM (int FirstVal, int SecondVal) {
    u16 Index;
    u16 LCMval;

    Index = (FirstVal > SecondVal) ? FirstVal:SecondVal;

    while (1) {
        if (((Index % FirstVal) == 0) &&
                   ((Index % SecondVal) == 0)){
            LCMval = Index;
            break;
        }
        Index ++;
    }
    return (LCMval);
}
