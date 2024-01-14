// compareOrionPublic.h was generated by ProtoGen version 2.12.c

#ifndef _COMPAREORIONPUBLIC_H
#define _COMPAREORIONPUBLIC_H

#include "OrionPublicPacket.h"
#include <QString>

//! Compare two Date_t structures and generate a report
QString compareDate_t(QString prename, const Date_t* user1, const Date_t* user2);

//! Compare two OrionCmd_t structures and generate a report
QString compareOrionCmd_t(QString prename, const OrionCmd_t* user1, const OrionCmd_t* user2);

//! Compare two OrionStartupCmd_t structures and generate a report
QString compareOrionStartupCmd_t(QString prename, const OrionStartupCmd_t* user1, const OrionStartupCmd_t* user2);

//! Compare two OrionStartupCmd packets and generate a report
QString compareOrionStartupCmdPacket(const void* pkt1, const void* pkt2);

//! Compare two OrionPositions_t structures and generate a report
QString compareOrionPositions_t(QString prename, const OrionPositions_t* user1, const OrionPositions_t* user2);

//! Compare two OrionPositions packets and generate a report
QString compareOrionPositionsPacket(const void* pkt1, const void* pkt2);

//! Compare two OrionFlirSettings_t structures and generate a report
QString compareOrionFlirSettings_t(QString prename, const OrionFlirSettings_t* user1, const OrionFlirSettings_t* user2);

//! Compare two OrionFlirSettings packets and generate a report
QString compareOrionFlirSettingsPacket(const void* pkt1, const void* pkt2);

//! Compare two OrionAptinaSettings_t structures and generate a report
QString compareOrionAptinaSettings_t(QString prename, const OrionAptinaSettings_t* user1, const OrionAptinaSettings_t* user2);

//! Compare two OrionAptinaSettings packets and generate a report
QString compareOrionAptinaSettingsPacket(const void* pkt1, const void* pkt2);

//! Compare two OrionZafiroSettings_t structures and generate a report
QString compareOrionZafiroSettings_t(QString prename, const OrionZafiroSettings_t* user1, const OrionZafiroSettings_t* user2);

//! Compare two OrionZafiroSettings packets and generate a report
QString compareOrionZafiroSettingsPacket(const void* pkt1, const void* pkt2);

//! Compare two OrionHitachiSettings_t structures and generate a report
QString compareOrionHitachiSettings_t(QString prename, const OrionHitachiSettings_t* user1, const OrionHitachiSettings_t* user2);

//! Compare two OrionHitachiSettings packets and generate a report
QString compareOrionHitachiSettingsPacket(const void* pkt1, const void* pkt2);

//! Compare two OrionSonySettings_t structures and generate a report
QString compareOrionSonySettings_t(QString prename, const OrionSonySettings_t* user1, const OrionSonySettings_t* user2);

//! Compare two OrionSonySettings packets and generate a report
QString compareOrionSonySettingsPacket(const void* pkt1, const void* pkt2);

//! Compare two OrionKtncSettings_t structures and generate a report
QString compareOrionKtncSettings_t(QString prename, const OrionKtncSettings_t* user1, const OrionKtncSettings_t* user2);

//! Compare two OrionKtncSettings packets and generate a report
QString compareOrionKtncSettingsPacket(const void* pkt1, const void* pkt2);

//! Compare two OrionAttolloSettings_t structures and generate a report
QString compareOrionAttolloSettings_t(QString prename, const OrionAttolloSettings_t* user1, const OrionAttolloSettings_t* user2);

//! Compare two OrionAttolloSettings packets and generate a report
QString compareOrionAttolloSettingsPacket(const void* pkt1, const void* pkt2);

//! Compare two VideoOptions_t structures and generate a report
QString compareVideoOptions_t(QString prename, const VideoOptions_t* user1, const VideoOptions_t* user2);

//! Compare two VideoOptions packets and generate a report
QString compareVideoOptionsPacket(const void* pkt1, const void* pkt2);

//! Compare two OrionUartConfig_t structures and generate a report
QString compareOrionUartConfig_t(QString prename, const OrionUartConfig_t* user1, const OrionUartConfig_t* user2);

//! Compare two OrionUartConfig packets and generate a report
QString compareOrionUartConfigPacket(const void* pkt1, const void* pkt2);

//! Compare two OrionLimitsData_t structures and generate a report
QString compareOrionLimitsData_t(QString prename, const OrionLimitsData_t* user1, const OrionLimitsData_t* user2);

//! Compare two OrionLimitsData packets and generate a report
QString compareOrionLimitsDataPacket(const void* pkt1, const void* pkt2);

//! Compare two InsOptions_t structures and generate a report
QString compareInsOptions_t(QString prename, const InsOptions_t* user1, const InsOptions_t* user2);

//! Compare two InsOptions packets and generate a report
QString compareInsOptionsPacket(const void* pkt1, const void* pkt2);

//! Compare two OrionNetworkByteSettings_t structures and generate a report
QString compareOrionNetworkByteSettings_t(QString prename, const OrionNetworkByteSettings_t* user1, const OrionNetworkByteSettings_t* user2);

//! Compare two OrionNetworkByteSettings packets and generate a report
QString compareOrionNetworkByteSettingsPacket(const void* pkt1, const void* pkt2);

//! Compare two OrionNetworkByteVideo_t structures and generate a report
QString compareOrionNetworkByteVideo_t(QString prename, const OrionNetworkByteVideo_t* user1, const OrionNetworkByteVideo_t* user2);

//! Compare two OrionNetworkByteVideo packets and generate a report
QString compareOrionNetworkByteVideoPacket(const void* pkt1, const void* pkt2);

//! Compare two OrionCameras_t structures and generate a report
QString compareOrionCameras_t(QString prename, const OrionCameras_t* user1, const OrionCameras_t* user2);

//! Compare two OrionCameras packets and generate a report
QString compareOrionCamerasPacket(const void* pkt1, const void* pkt2);

//! Compare two OrionClevisVersion_t structures and generate a report
QString compareOrionClevisVersion_t(QString prename, const OrionClevisVersion_t* user1, const OrionClevisVersion_t* user2);

//! Compare two OrionClevisVersion packets and generate a report
QString compareOrionClevisVersionPacket(const void* pkt1, const void* pkt2);

//! Compare two OrionCrownVersion_t structures and generate a report
QString compareOrionCrownVersion_t(QString prename, const OrionCrownVersion_t* user1, const OrionCrownVersion_t* user2);

//! Compare two OrionCrownVersion packets and generate a report
QString compareOrionCrownVersionPacket(const void* pkt1, const void* pkt2);

//! Compare two OrionPayloadVersion_t structures and generate a report
QString compareOrionPayloadVersion_t(QString prename, const OrionPayloadVersion_t* user1, const OrionPayloadVersion_t* user2);

//! Compare two OrionPayloadVersion packets and generate a report
QString compareOrionPayloadVersionPacket(const void* pkt1, const void* pkt2);

//! Compare two OrionTrackerVersion_t structures and generate a report
QString compareOrionTrackerVersion_t(QString prename, const OrionTrackerVersion_t* user1, const OrionTrackerVersion_t* user2);

//! Compare two OrionTrackerVersion packets and generate a report
QString compareOrionTrackerVersionPacket(const void* pkt1, const void* pkt2);

//! Compare two OrionRetractVersion_t structures and generate a report
QString compareOrionRetractVersion_t(QString prename, const OrionRetractVersion_t* user1, const OrionRetractVersion_t* user2);

//! Compare two OrionRetractVersion packets and generate a report
QString compareOrionRetractVersionPacket(const void* pkt1, const void* pkt2);

//! Compare two OrionLensCtlVersion_t structures and generate a report
QString compareOrionLensCtlVersion_t(QString prename, const OrionLensCtlVersion_t* user1, const OrionLensCtlVersion_t* user2);

//! Compare two OrionLensCtlVersion packets and generate a report
QString compareOrionLensCtlVersionPacket(const void* pkt1, const void* pkt2);

//! Compare two OrionBoard_t structures and generate a report
QString compareOrionBoard_t(QString prename, const OrionBoard_t* user1, const OrionBoard_t* user2);

//! Compare two OrionBoard packets and generate a report
QString compareOrionBoardPacket(const void* pkt1, const void* pkt2);

#endif
