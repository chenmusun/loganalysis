
#pragma once



namespace	AUTOTEST
{

#define WM_REDRAWEVENTWIND WM_USER+3001
// set font. March 04, 2009
#define WM_SETFONTEVENTWIND WM_USER+3003

// 自定义关键事件
// Modified by 都小国 2006-7-4

// 偏移
#define SELF_DEFINE_EVENT_OFFSET        1100  
//合并日志中的中断事件
#define SELF_SUB_END_EVENT					   SELF_DEFINE_EVENT_OFFSET + 33
// 日志暂停
#define SELF_PAUSE_RECORD_EVENT                SELF_DEFINE_EVENT_OFFSET + 31
// 日志恢复记录
#define SELF_RESUME_RECORD_EVENT               SELF_DEFINE_EVENT_OFFSET + 32
// ue连接
#define SELF_UE_CONNECT_EVENT                  SELF_DEFINE_EVENT_OFFSET + 1
// ue正常断连
#define SELF_UE_NORMAL_DISCONNECT_EVENT        SELF_DEFINE_EVENT_OFFSET + 2
// ue异常断连
#define SELF_UE_EXCEPTION_DISCONNECT_EVENT     SELF_DEFINE_EVENT_OFFSET + 3
// GPS连接
#define SELF_GPS_CONNECT_EVENT                 SELF_DEFINE_EVENT_OFFSET + 10
// GPS连接
#define SELF_GPS_DISCONNECT_EVENT              SELF_DEFINE_EVENT_OFFSET + 11
// 当GPS从有星到无星的时候上报此事件
#define SELF_GPS_UNLOCK_STAR_EVENT             SELF_DEFINE_EVENT_OFFSET + 12
// 当GPS从无星到有星的时候上报此事件
#define SELF_GPS_LOCK_STAR_EVENT               SELF_DEFINE_EVENT_OFFSET + 13
// 当Scanner连接时候上报此事件
#define SELF_SCANNER_CONNECT_EVENT             SELF_DEFINE_EVENT_OFFSET + 14
// 当Scanner断开连接时候上报此事件
#define SELF_SCANNER_DISCONNECT_EVENT          SELF_DEFINE_EVENT_OFFSET + 15
// Scanner配置修改
#define SELF_SCANNER_CONFIG_MODIFY             SELF_DEFINE_EVENT_OFFSET + 16

//自定义应用层事件
//FTP
#define FTP_CONNECT_UP_EVENT				   SELF_DEFINE_EVENT_OFFSET + 40
#define FTP_DISCONNECT_UP_EVENT				   SELF_DEFINE_EVENT_OFFSET + 41
#define FTP_SEND_RETR_STOR_EVENT			   SELF_DEFINE_EVENT_OFFSET + 42
#define FTP_START_UP_EVENT					   SELF_DEFINE_EVENT_OFFSET + 43
#define FTP_SUCCESS_UP_EVENT				   SELF_DEFINE_EVENT_OFFSET + 44
#define FTP_FAILURE_UP_EVENT				   SELF_DEFINE_EVENT_OFFSET + 45
#define FTP_START_DOWN_EVENT				   SELF_DEFINE_EVENT_OFFSET + 96
#define FTP_SUCCESS_DOWN_EVENT				   SELF_DEFINE_EVENT_OFFSET + 97
#define FTP_FAILURE_DOWN_EVENT				   SELF_DEFINE_EVENT_OFFSET + 98
#define FTP_CONNECT_DOWN_EVENT				   SELF_DEFINE_EVENT_OFFSET + 99
#define FTP_DISCONNECT_DOWN_EVENT			   SELF_DEFINE_EVENT_OFFSET + 100
#define FTP_DROP_DOWN_EVENT					   SELF_DEFINE_EVENT_OFFSET + 101
#define FTP_DROP_UP_EVENT					   SELF_DEFINE_EVENT_OFFSET + 102

#define FTP_REQUEST_DOWN_EVENT				   SELF_DEFINE_EVENT_OFFSET + 200
#define FTP_REQUEST_UP_EVENT				   SELF_DEFINE_EVENT_OFFSET + 201
#define FTP_RECONNECT_DOWN_EVENT			   SELF_DEFINE_EVENT_OFFSET + 202
#define FTP_RECONNECT_UP_EVENT				   SELF_DEFINE_EVENT_OFFSET + 203

//PING
#define PING_START_EVENT					   SELF_DEFINE_EVENT_OFFSET + 46
#define PING_RESPONSE_EVENT					   SELF_DEFINE_EVENT_OFFSET + 47
//20130515添加Ping事件
#define PING_FAILURE_EVENT					   SELF_DEFINE_EVENT_OFFSET + 115
#define PING_SUCCESS_EVENT					   SELF_DEFINE_EVENT_OFFSET + 116

//HTTP
#define HTTP_CONNECT_EVENT					   SELF_DEFINE_EVENT_OFFSET + 48
#define HTTP_DISCONNECT_EVENT				   SELF_DEFINE_EVENT_OFFSET + 49
#define HTTP_TIMEOUTS_EVENT					   SELF_DEFINE_EVENT_OFFSET + 50
#define HTTP_FIRST_DATA_EVENT				   SELF_DEFINE_EVENT_OFFSET + 51
#define HTTP_OK_EVENT						   SELF_DEFINE_EVENT_OFFSET + 52
#define HTTP_DROP_EVENT						   SELF_DEFINE_EVENT_OFFSET + 53
#define HTTP_DOWNLOAD_TEST_EVENT				SELF_DEFINE_EVENT_OFFSET + 113
#define HTTP_SENDGET_EVENT					   SELF_DEFINE_EVENT_OFFSET + 114

//E-mail
#define POP3_CONNECT_EVENT					   SELF_DEFINE_EVENT_OFFSET + 54
#define POP3_DISCONNECT_EVENT				   SELF_DEFINE_EVENT_OFFSET + 55
#define SMTP_CONNECT_EVENT					   SELF_DEFINE_EVENT_OFFSET + 56
#define SMTP_DISCONNECT_EVENT				   SELF_DEFINE_EVENT_OFFSET + 57
#define EMAIL_SEND_BEGIN_EVENT				   SELF_DEFINE_EVENT_OFFSET + 58
#define EMAIL_SEND_SUCCESS_EVENT			   SELF_DEFINE_EVENT_OFFSET + 59
#define EMAIL_SEND_FAILURE_EVENT			   SELF_DEFINE_EVENT_OFFSET + 60
#define EMAIL_DROP_EVENT					   SELF_DEFINE_EVENT_OFFSET + 61

//Message
// 增加短消息开始事件
#define SMS_SEND_START_EVENT                   SELF_DEFINE_EVENT_OFFSET + 109
#define SMS_SEND_SUCCESS_EVENT				   SELF_DEFINE_EVENT_OFFSET + 62
#define SMS_SEND_FAILURE_EVENT				   SELF_DEFINE_EVENT_OFFSET + 63
#define SMS_RECEIVE_START_EVENT                   SELF_DEFINE_EVENT_OFFSET + 329
#define SMS_RECEIVE_SUCCESS_EVENT			   SELF_DEFINE_EVENT_OFFSET + 64
#define SMS_RECEIVE_FAILURE_EVENT			   SELF_DEFINE_EVENT_OFFSET + 65
#define MMS_SEND_WSP_CONNECT_REQUEST_EVENT	   SELF_DEFINE_EVENT_OFFSET + 66
#define MMS_SEND_WSP_CONNECT_SUCCESS_EVENT	   SELF_DEFINE_EVENT_OFFSET + 67
#define MMS_SEND_WSP_CONNECT_FAILURE_EVENT	   SELF_DEFINE_EVENT_OFFSET + 68
#define MMS_SEND_SUCCESS_EVENT				   SELF_DEFINE_EVENT_OFFSET + 69
#define MMS_SEND_FAILURE_EVENT				   SELF_DEFINE_EVENT_OFFSET + 70
#define MMS_PUSH_RECEIVED_EVENT				   SELF_DEFINE_EVENT_OFFSET + 71
#define MMS_RECEIVE_WSP_CONNECT_REQUEST_EVENT  SELF_DEFINE_EVENT_OFFSET + 72
#define MMS_RECEIVE_WSP_CONNECT_SUCCESS_EVENT  SELF_DEFINE_EVENT_OFFSET + 73
#define MMS_RECEIVE_WSP_CONNECT_FAILURE_EVENT  SELF_DEFINE_EVENT_OFFSET + 74
#define MMS_RECEIVE_SUCCESS_EVENT			   SELF_DEFINE_EVENT_OFFSET + 75
#define MMS_RECEIVE_FAILURE_EVENT			   SELF_DEFINE_EVENT_OFFSET + 76
//WAP

#define WAP_PAGE_CONNECT_GATEWAY_REQUEST_EVENT		SELF_DEFINE_EVENT_OFFSET + 77
#define WAP_PAGE_CONNECT_GATEWAY_SUCCESS_EVENT		SELF_DEFINE_EVENT_OFFSET + 78
#define WAP_PAGE_CONNECT_GATEWAY_FAILURE_EVENT		SELF_DEFINE_EVENT_OFFSET + 79
#define WAP_PAGE_REPLY_EVENT						SELF_DEFINE_EVENT_OFFSET + 80
#define WAP_PAGE_TEXT_FINISH_EVENT					SELF_DEFINE_EVENT_OFFSET + 81
#define WAP_PAGE_DROP_EVENT							SELF_DEFINE_EVENT_OFFSET + 82
#define WAP_DOWNLOAD_CONNECT_GATEWAY_REQUEST_EVENT  SELF_DEFINE_EVENT_OFFSET + 83
#define WAP_DOWNLOAD_CONNECT_GATEWAY_SUCCESS_EVENT  SELF_DEFINE_EVENT_OFFSET + 84
#define WAP_DOWNLOAD_CONNECT_GATEWAY_FAILURE_EVENT  SELF_DEFINE_EVENT_OFFSET + 85
#define WAP_DOWNLOAD_FIRST_DATA_EVENT				SELF_DEFINE_EVENT_OFFSET + 86
#define WAP_DOWNLOAD_LAST_DATA_EVENT				SELF_DEFINE_EVENT_OFFSET + 87
#define WAP_DOWNLOAD_DROP							SELF_DEFINE_EVENT_OFFSET + 88
#define WAP_LOGON_REQUEST                           SELF_DEFINE_EVENT_OFFSET + 102
#define WAP_LOGON_SUCCESS							SELF_DEFINE_EVENT_OFFSET + 103
#define WAP_LOGON_FAILURE							SELF_DEFINE_EVENT_OFFSET + 104
#define WAP_HOMEPAGE_TEXT_SUCCESS					SELF_DEFINE_EVENT_OFFSET + 105
#define WAP_HOMEPAGE_TEXT_FAILURE					SELF_DEFINE_EVENT_OFFSET + 106
#define WAP_HOMEPAGE_PICTURE_SUCCESS				SELF_DEFINE_EVENT_OFFSET + 107
#define WAP_HOMEPAGE_PICTURE_FAILURE				SELF_DEFINE_EVENT_OFFSET + 108
#define WAP_HOMEPAGE_TEXT_REPLY						SELF_DEFINE_EVENT_OFFSET + 110

#define WAP_LOGON_CONNECT_GATEWAY_SUCCESS_EVENT		SELF_DEFINE_EVENT_OFFSET + 111
#define WAP_LOGON_CONNECT_GATEWAY_FAILURE_EVENT		SELF_DEFINE_EVENT_OFFSET + 112


//RAS(PPP)
#define RAS_START_EVENT								SELF_DEFINE_EVENT_OFFSET + 89
#define RAS_END_EVENT								SELF_DEFINE_EVENT_OFFSET + 90
#define RAS_FAILURE_EVENT							SELF_DEFINE_EVENT_OFFSET + 91
#define PPP_HANGUP_EVENT							SELF_DEFINE_EVENT_OFFSET + 92

#define EMAIL_RECEIVE_REQUEST_EVENT					SELF_DEFINE_EVENT_OFFSET + 93
#define EMAIL_RECEIVE_SUCCESS_EVENT					SELF_DEFINE_EVENT_OFFSET + 94
#define EMAIL_RECEIVE_FAILURE_EVENT					SELF_DEFINE_EVENT_OFFSET + 95
// wap page test
// 从300开始往后扩展
// Modified by 都小国 2008-5-13
#define WAP_PAGE_TEST                               SELF_DEFINE_EVENT_OFFSET + 300
#define WAP_DOWNLOAD_TEST_EVENT                     SELF_DEFINE_EVENT_OFFSET + 301 
#define MMS_SEND_REQUEST_EVENT                      SELF_DEFINE_EVENT_OFFSET + 302
#define MMS_RECEIVE_REQUEST_EVENT                   SELF_DEFINE_EVENT_OFFSET + 303
#define EMAIL_SEND_TEST_EVENT                       SELF_DEFINE_EVENT_OFFSET + 304
#define EMAIL_RECV_TEST_EVENT                       SELF_DEFINE_EVENT_OFFSET + 305
#define FTP_DOWNLOAD_TEST_EVENT                     SELF_DEFINE_EVENT_OFFSET + 306
#define FTP_DOWNLOAD_CONNECT_FAILURE                SELF_DEFINE_EVENT_OFFSET + 307
#define FTP_UPLOAD_TEST_EVENT                       SELF_DEFINE_EVENT_OFFSET + 308
#define FTP_UPLOAD_CONNECT_FAILURE                  SELF_DEFINE_EVENT_OFFSET + 309
#define WAP_PAGE_PIC_FINISH_EVENT					SELF_DEFINE_EVENT_OFFSET + 310

#define VIDEO_PHONE_TEST_EVENT                    SELF_DEFINE_EVENT_OFFSET + 311
#define VIDEO_PHONE_SESSION_START                 SELF_DEFINE_EVENT_OFFSET + 312
#define VIDEO_PHONE_CONTROL_CHANNEL_OPEN          SELF_DEFINE_EVENT_OFFSET + 313
#define VIDEO_PHONE_CONTROL_CHANNEL_CLOSE         SELF_DEFINE_EVENT_OFFSET + 314
#define VIDEO_PHONE_AUDIO_CHANNEL_OPEN            SELF_DEFINE_EVENT_OFFSET + 315
#define VIDEO_PHONE_AUDIO_CHANNEL_CLOSE           SELF_DEFINE_EVENT_OFFSET + 316
#define VIDEO_PHONE_VIDEO_CHANNEL_OPEN            SELF_DEFINE_EVENT_OFFSET + 317
#define VIDEO_PHONE_VIDEO_1st_FRAME_RECV          SELF_DEFINE_EVENT_OFFSET + 318
#define VIDEO_PHONE_AUDIO_1st_FRAME_RECV          SELF_DEFINE_EVENT_OFFSET + 330
#define VIDEO_PHONE_H245_INIT_OK                  SELF_DEFINE_EVENT_OFFSET + 331
#define VIDEO_PHONE_H245_DISCONNECTED             SELF_DEFINE_EVENT_OFFSET + 332
#define VIDEO_PHONE_VIDEO_CHANNEL_CLOSE           SELF_DEFINE_EVENT_OFFSET + 319
//VS事件
#define VIDEO_STREAM_PLAYING_START                    SELF_DEFINE_EVENT_OFFSET + 320
#define VIDEO_STREAM_SESSION_SUCCESS				  SELF_DEFINE_EVENT_OFFSET + 321
#define VIDEO_STREAM_SESSION_FAILURE                  SELF_DEFINE_EVENT_OFFSET + 322
#define VIDEO_STREAM_FIRST_BUFFERING_START			  SELF_DEFINE_EVENT_OFFSET + 323
#define VIDEO_STREAM_FIRST_BUFFERING_END			  SELF_DEFINE_EVENT_OFFSET + 324
#define VIDEO_STREAM_BUFFERING_START				  SELF_DEFINE_EVENT_OFFSET + 325
#define VIDEO_STREAM_BUFFERING_END					  SELF_DEFINE_EVENT_OFFSET + 326
#define VIDEO_STREAM_PLAYING_SUCCESS				  SELF_DEFINE_EVENT_OFFSET + 327
#define VIDEO_STREAM_PLAYING_FAILURE				  SELF_DEFINE_EVENT_OFFSET + 328

//MBMS 事件
#define MBMS_CONNECT_REQUEST						SELF_DEFINE_EVENT_OFFSET + 333
#define MBMS_CONNECT_SUCCESS						SELF_DEFINE_EVENT_OFFSET + 334
#define MBMS_CONNECT_FAILURE							SELF_DEFINE_EVENT_OFFSET + 335

//预定义事件
//by zhangweimin 切换自定义事件
#define PREDEFINE_EVENT_BASE                        SELF_DEFINE_EVENT_OFFSET+600
//td gsm 共有事件
#define PREDEFINE_OUTGOING_CALL_ATTEMPT             PREDEFINE_EVENT_BASE+1
#define PREDEFINE_OUTGOING_CALL_CONNECT             PREDEFINE_EVENT_BASE+2
#define PREDEFINE_OUTGOING_CALL_BLOCK               PREDEFINE_EVENT_BASE+3
#define PREDEFINE_INCOMING_CALL_ATTEMPT             PREDEFINE_EVENT_BASE+4
#define PREDEFINE_INCOMING_CALL_CONNECT             PREDEFINE_EVENT_BASE+5
#define PREDEFINE_INCOMING_CALL_BLOCK               PREDEFINE_EVENT_BASE+6
#define PREDEFINE_CALL_COMPLETE                     PREDEFINE_EVENT_BASE+7
#define PREDEFINE_CALL_DROP                         PREDEFINE_EVENT_BASE+8
#define PREDEFINE_ALERTING                          PREDEFINE_EVENT_BASE+9

#define PREDEFINE_PDP_CONTEXT_ACTIVATION_REQUEST    PREDEFINE_EVENT_BASE+21
#define PREDEFINE_PDP_CONTEXT_ACTIVATION_SUCCESS    PREDEFINE_EVENT_BASE+22
#define PREDEFINE_PDP_CONTEXT_ACTIVATION_FAILURE    PREDEFINE_EVENT_BASE+23
#define PREDEFINE_PDP_CONTEXT_DEACTIVATION_REQUEST  PREDEFINE_EVENT_BASE+24
#define PREDEFINE_PDP_CONTEXT_DEACTIVATION_SUCCESS  PREDEFINE_EVENT_BASE+25
#define PREDEFINE_PDP_SESSION_DROP                  PREDEFINE_EVENT_BASE+26
#define PREDEFINE_PS_SERVICE_REQUEST                PREDEFINE_EVENT_BASE+27
#define PREDEFINE_SESSION_OFFLINE                   PREDEFINE_EVENT_BASE+28


#define PREDEFINE_LOCATION_UPDATE_REQUEST           PREDEFINE_EVENT_BASE+41
#define PREDEFINE_LOCATION_AREA_UPDATE_SUCCESS      PREDEFINE_EVENT_BASE+42
#define PREDEFINE_LOCATION_AREA_UPDATE_FAILURE      PREDEFINE_EVENT_BASE+43

#define PREDEFINE_GPRS_ATTACH_REQUEST               PREDEFINE_EVENT_BASE+61
#define PREDEFINE_GPRS_ATTACH_SUCCESS               PREDEFINE_EVENT_BASE+62
#define PREDEFINE_GPRS_ATTACH_FAILURE               PREDEFINE_EVENT_BASE+63
#define PREDEFINE_GPRS_DETACH_REQUEST               PREDEFINE_EVENT_BASE+64
#define PREDEFINE_GPRS_DETACH_SUCCESS               PREDEFINE_EVENT_BASE+65

#define PREDEFINE_ROUTE_AREA_UPDATE_REQUEST         PREDEFINE_EVENT_BASE+81
#define PREDEFINE_ROUTE_AREA_UPDATE_SUCCEESS        PREDEFINE_EVENT_BASE+82
#define PREDEFINE_ROUTE_AREA_UPDATE_FAILURE         PREDEFINE_EVENT_BASE+83
//td特有事件
#define PREDEFINE_TD_RRC_CONNECT_REQUEST                 PREDEFINE_EVENT_BASE+100
#define PREDEFINE_TD_RRC_CONNREQ_ORICONVERCALL           PREDEFINE_EVENT_BASE+101
#define PREDEFINE_TD_RRC_CONNREQ_ORISTREAMCALL           PREDEFINE_EVENT_BASE+102
#define PREDEFINE_TD_RRC_CONNREQ_ORIINTERACTCALL         PREDEFINE_EVENT_BASE+103
#define PREDEFINE_TD_RRC_CONNREQ_ORIBGCALL               PREDEFINE_EVENT_BASE+104
#define PREDEFINE_TD_RRC_CONNREQ_ORISUBTRACALL           PREDEFINE_EVENT_BASE+105
#define PREDEFINE_TD_RRC_CONNREQ_TERMCONVERCALL          PREDEFINE_EVENT_BASE+106
#define PREDEFINE_TD_RRC_CONNREQ_TERMSTREAMCALL          PREDEFINE_EVENT_BASE+107
#define PREDEFINE_TD_RRC_CONNREQ_TERMINTERACTCALL        PREDEFINE_EVENT_BASE+108
#define PREDEFINE_TD_RRC_CONNREQ_TERMBGCALL              PREDEFINE_EVENT_BASE+109
#define PREDEFINE_TD_RRC_CONNREQ_EMERGCALL               PREDEFINE_EVENT_BASE+110
#define PREDEFINE_TD_RRC_CONNREQ_INTERRATCELLRESEL       PREDEFINE_EVENT_BASE+111
#define PREDEFINE_TD_RRC_CONNREQ_INTERRATCELLCHANGEORDER PREDEFINE_EVENT_BASE+112
#define PREDEFINE_TD_RRC_CONNREQ_REGISTRATION            PREDEFINE_EVENT_BASE+113
#define PREDEFINE_TD_RRC_CONNREQ_DETACH                  PREDEFINE_EVENT_BASE+114
#define PREDEFINE_TD_RRC_CONNREQ_ORIHIGHPRIOSIG          PREDEFINE_EVENT_BASE+115
#define PREDEFINE_TD_RRC_CONNREQ_ORILOWPRIOSIG           PREDEFINE_EVENT_BASE+116
#define PREDEFINE_TD_RRC_CONNREQ_CALLREESTAB             PREDEFINE_EVENT_BASE+117
#define PREDEFINE_TD_RRC_CONNREQ_TERMHIGHPRIOSIG         PREDEFINE_EVENT_BASE+118
#define PREDEFINE_TD_RRC_CONNREQ_TERMLOWPRIOSIG          PREDEFINE_EVENT_BASE+119
#define PREDEFINE_TD_RRC_CONNREQ_TERMUNKOWN              PREDEFINE_EVENT_BASE+120
#define PREDEFINE_TD_RRC_CONNECT_ATTEMPT_FAILURE       PREDEFINE_EVENT_BASE+121
#define PREDEFINE_TD_RRC_CONNECT_ATTEMPT_RETRY         PREDEFINE_EVENT_BASE+122
#define PREDEFINE_TD_RRC_CONNECT_FAILURE               PREDEFINE_EVENT_BASE+123
#define PREDEFINE_TD_RRC_CONNECTION_SETUP_RECEIVED     PREDEFINE_EVENT_BASE+124
#define PREDEFINE_TD_RRC_CONNECTION_RESPONSE_FAILURE   PREDEFINE_EVENT_BASE+125
#define PREDEFINE_TD_RRC_CONNECT_SUCCESS               PREDEFINE_EVENT_BASE+126
#define PREDEFINE_TD_RRC_CONNECT_NORMAL_RELEASE        PREDEFINE_EVENT_BASE+127
#define PREDEFINE_TD_RRC_CONNECT_ABNORMAL_RELEASE      PREDEFINE_EVENT_BASE+128
#define PREDEFINE_TD_RB_SETUP_REQUEST                  PREDEFINE_EVENT_BASE+129
#define PREDEFINE_TD_RB_SETUP_COMPLETE                 PREDEFINE_EVENT_BASE+130
#define PREDEFINE_TD_RB_SETUP_FAILURE                  PREDEFINE_EVENT_BASE+131
#define PREDEFINE_TD_UPPCHSHIFT_BROADCAST              PREDEFINE_EVENT_BASE+132

#define PREDEFINE_TD_RRC_CONNSEC_ORICONVERCALL           PREDEFINE_EVENT_BASE+160
#define PREDEFINE_TD_RRC_CONNSEC_ORISTREAMCALL           PREDEFINE_EVENT_BASE+161
#define PREDEFINE_TD_RRC_CONNSEC_ORIINTERACTCALL         PREDEFINE_EVENT_BASE+162
#define PREDEFINE_TD_RRC_CONNSEC_ORIBGCALL               PREDEFINE_EVENT_BASE+163
#define PREDEFINE_TD_RRC_CONNSEC_ORISUBTRACALL           PREDEFINE_EVENT_BASE+164
#define PREDEFINE_TD_RRC_CONNSEC_TERMCONVERCALL          PREDEFINE_EVENT_BASE+165
#define PREDEFINE_TD_RRC_CONNSEC_TERMSTREAMCALL          PREDEFINE_EVENT_BASE+166
#define PREDEFINE_TD_RRC_CONNSEC_TERMINTERACTCALL        PREDEFINE_EVENT_BASE+167
#define PREDEFINE_TD_RRC_CONNSEC_TERMBGCALL              PREDEFINE_EVENT_BASE+168
#define PREDEFINE_TD_RRC_CONNSEC_EMERGCALL               PREDEFINE_EVENT_BASE+169
#define PREDEFINE_TD_RRC_CONNSEC_INTERRATCELLRESEL       PREDEFINE_EVENT_BASE+170
#define PREDEFINE_TD_RRC_CONNSEC_INTERRATCELLCHANGEORDER PREDEFINE_EVENT_BASE+171
#define PREDEFINE_TD_RRC_CONNSEC_REGISTRATION            PREDEFINE_EVENT_BASE+172
#define PREDEFINE_TD_RRC_CONNSEC_DETACH                  PREDEFINE_EVENT_BASE+173
#define PREDEFINE_TD_RRC_CONNSEC_ORIHIGHPRIOSIG          PREDEFINE_EVENT_BASE+174
#define PREDEFINE_TD_RRC_CONNSEC_ORILOWPRIOSIG           PREDEFINE_EVENT_BASE+175
#define PREDEFINE_TD_RRC_CONNSEC_CALLREESTAB             PREDEFINE_EVENT_BASE+176
#define PREDEFINE_TD_RRC_CONNSEC_TERMHIGHPRIOSIG         PREDEFINE_EVENT_BASE+177
#define PREDEFINE_TD_RRC_CONNSEC_TERMLOWPRIOSIG          PREDEFINE_EVENT_BASE+178
#define PREDEFINE_TD_RRC_CONNSEC_TERMUNKOWN              PREDEFINE_EVENT_BASE+179
#define PREDEFINE_TD_RRC_CONNSEC_UNKOWN                  PREDEFINE_EVENT_BASE+180

#define PREDEFINE_TD_INTRAFREQ_HARD_HANDOVER_START     PREDEFINE_EVENT_BASE+141
#define PREDEFINE_TD_INTRAFREQ_HARD_HANDOVER_SUCCESS   PREDEFINE_EVENT_BASE+142
#define PREDEFINE_TD_INTRAFREQ_HARD_HANDOVER_FAILURE   PREDEFINE_EVENT_BASE+143
#define PREDEFINE_TD_INTERFREQ_HARD_HANDOVER_START     PREDEFINE_EVENT_BASE+144
#define PREDEFINE_TD_INTERFREQ_HARD_HANDOVER_SUCCESS   PREDEFINE_EVENT_BASE+145
#define PREDEFINE_TD_INTERFREQ_HARD_HANDOVER_FAILURE   PREDEFINE_EVENT_BASE+146
#define PREDEFINE_TD_INTRAFREQ_BATON_HANDOVER_START    PREDEFINE_EVENT_BASE+147
#define PREDEFINE_TD_INTRAFREQ_BATON_HANDOVER_SUCCESS  PREDEFINE_EVENT_BASE+148
#define PREDEFINE_TD_INTRAFREQ_BATON_HANDOVER_FAILURE  PREDEFINE_EVENT_BASE+149
#define PREDEFINE_TD_INTERFREQ_BATON_HANDOVER_START    PREDEFINE_EVENT_BASE+150
#define PREDEFINE_TD_INTERFREQ_BATON_HANDOVER_SUCCESS  PREDEFINE_EVENT_BASE+151
#define PREDEFINE_TD_INTERFREQ_BATON_HANDOVER_FAILURE  PREDEFINE_EVENT_BASE+152
#define PREDEFINE_TD_EVENT_MEAS_RPT_1G                 PREDEFINE_EVENT_BASE+153
#define PREDEFINE_TD_EVENT_MEAS_RPT_2A                 PREDEFINE_EVENT_BASE+154
#define PREDEFINE_TD_EVENT_MEAS_RPT_5A                 PREDEFINE_EVENT_BASE+155
#define PREDEFINE_TD_EVENT_MEAS_RPT_3A                 PREDEFINE_EVENT_BASE+156

#define PREDEFINE_TD_HANDOVER_FROM_GSM_SUCCESS         PREDEFINE_EVENT_BASE+181
#define PREDEFINE_TD_HANDVOER_TO_GSM_REQUEST           PREDEFINE_EVENT_BASE+182
#define PREDEFINE_TD_HANDOVER_TO_GSM_FAILURE           PREDEFINE_EVENT_BASE+183

#define PREDEFINE_TD_CELL_UPDATE_START                 PREDEFINE_EVENT_BASE+201
#define PREDEFINE_TD_CELL_UPDATE_SUCCESS               PREDEFINE_EVENT_BASE+202
#define PREDEFINE_TD_CELL_UPDATE_FAILURE               PREDEFINE_EVENT_BASE+203

#define PREDEFINE_TD_URA_UPDATE_START                  PREDEFINE_EVENT_BASE+221
#define PREDEFINE_TD_URA_UPDATE_SUCCESS                PREDEFINE_EVENT_BASE+222
#define PREDEFINE_TD_URA_UPDATE_FAILURE                PREDEFINE_EVENT_BASE+223

//GSM特有事件
#define PREDEFINE_GSM_RR_CONNECT_REQUEST               PREDEFINE_EVENT_BASE+241
#define PREDEFINE_GSM_RR_CONNECT_FAILURE               PREDEFINE_EVENT_BASE+242
#define PREDEFINE_GSM_RR_CONNECT_SUCCESS               PREDEFINE_EVENT_BASE+243
#define PREDEFINE_GSM_RR_CONNECT_NORMAL_RELEASE        PREDEFINE_EVENT_BASE+244
#define PREDEFINE_GSM_RR_CONNECT_ABNORMAL_RELEASE      PREDEFINE_EVENT_BASE+245

#define PREDEFINE_GSM_INTRAFREQ_HANDOVER_START         PREDEFINE_EVENT_BASE+281
#define PREDEFINE_GSM_INTRAFREQ_HANDOVER_SUCCESS       PREDEFINE_EVENT_BASE+282
#define PREDEFINE_GSM_INTRAFREQ_HANDOVER_FAILURE       PREDEFINE_EVENT_BASE+283
#define PREDEFINE_GSM_INTERFREQ_HANDOVER_START         PREDEFINE_EVENT_BASE+284
#define PREDEFINE_GSM_INTERFREQ_HANDOVER_SUCCESS       PREDEFINE_EVENT_BASE+285
#define PREDEFINE_GSM_INTERFREQ_HANDOVER_FAILURE       PREDEFINE_EVENT_BASE+286

#define PREDEFINE_GSM_HANDOVER_FROM_UTRAN_SUCCESS      PREDEFINE_EVENT_BASE+301
#define PREDEFINE_GSM_HANDVOER_TO_UTRAN_REQUEST        PREDEFINE_EVENT_BASE+302
#define PREDEFINE_GSM_HANDOVER_TO_UTRAN_FAILURE        PREDEFINE_EVENT_BASE+303

//四种重选成功事件
#define PREDEFINE_CELLRESEL_SUCCESS_T2T                0x67
#define PREDEFINE_CELLRESEL_SUCCESS_G2G                0x95 //PREDEFINE_EVENT_BASE+351  
#define PREDEFINE_CELLRESEL_SUCCESS_T2G                0x72
#define PREDEFINE_CELLRESEL_SUCCESS_G2T                0x9a
#define PREDEFINE_CELLSEL_SUCCESS_2TD                  PREDEFINE_EVENT_BASE+358
#define PREDEFINE_CELLSEL_SUCCESS_2GSM                 PREDEFINE_EVENT_BASE+359

#define PREDEFINE_CELLRESEL_START_T2T                  0x6B
#define PREDEFINE_CELLRESEL_START_G2G                  0x94
#define PREDEFINE_CELLRESEL_START_T2G                  0x6F
#define PREDEFINE_CELLRESEL_START_G2T                  0x99
#define PREDEFINE_CELLRESEL_FAILURE_T2G				   0x71
#define PREDEFINE_CELLRESEL_FAILURE_G2T				   0x9b
#define PREDEFINE_CELLRESEL_FAILURE					   0x73
#define PREDEFINE_CELLRESEL_FAILURE_G2G                0x96
#define PREDEFINE_CELLSEL_START_2TD                    PREDEFINE_EVENT_BASE+360
#define PREDEFINE_CELLSEL_START_2GSM                   PREDEFINE_EVENT_BASE+361

#define PREDEFINE_COMPON_TD                            PREDEFINE_EVENT_BASE+362
#define PREDEFINE_COMPON_GSM                           PREDEFINE_EVENT_BASE+363
#define PREDEFINE_NO_NETWORK                           PREDEFINE_EVENT_BASE+364
#define PREDEFINE_TD_PS_RESEL_TOGSM_REQUEST            PREDEFINE_EVENT_BASE+365
#define PREDEFINE_GSM_PS_RESEL_FROMUTRAN_SUCCESS	   PREDEFINE_EVENT_BASE+366
#define PREDEFINE_TD_PS_RESEL_TOGSM_FAILURE            PREDEFINE_EVENT_BASE+367

//////////////////////////////////////////////////////////////////////////
//定义脚本事件ID
#define SCRIPTEVENT_VOICECALL_START_NORMAL                      PREDEFINE_EVENT_BASE + 370
#define SCRIPTEVENT_VOICECALL_STOP_NORMAL                       PREDEFINE_EVENT_BASE + 371
#define SCRIPTEVENT_VOICECALL_START_CONNECTFAIL_REDIAL          PREDEFINE_EVENT_BASE + 372
#define SCRIPTEVENT_VOICECALL_STOP_CONNECTFAIL_REDIAL           PREDEFINE_EVENT_BASE + 373
#define SCRIPTEVENT_VOICECALL_START_CONNECTION_RESUME_REDIAL    PREDEFINE_EVENT_BASE + 374
#define SCRIPTEVENT_VOICECALL_STOP_CONNECTION_RESUME_REDIAL     PREDEFINE_EVENT_BASE + 375
#define SCRIPTEVENT_VOICECALL_START_DROP_REDIAL                 PREDEFINE_EVENT_BASE + 376
#define SCRIPTEVENT_VOICECALL_STOP_DROP_REDIAL                  PREDEFINE_EVENT_BASE + 377

#define SCRIPTEVENT_CS64CALL_START_NORMAL                       PREDEFINE_EVENT_BASE + 378
#define SCRIPTEVENT_CS64CALL_STOP_NORMAL                        PREDEFINE_EVENT_BASE + 379
#define SCRIPTEVENT_CS64CALL_START_CONNECTFAIL_REDIAL           PREDEFINE_EVENT_BASE + 380
#define SCRIPTEVENT_CS64CALL_STOP_CONNECTFAIL_REDIAL            PREDEFINE_EVENT_BASE + 381
#define SCRIPTEVENT_CS64ECALL_START_CONNECTION_RESUME_REDIAL    PREDEFINE_EVENT_BASE + 382
#define SCRIPTEVENT_CS64CALL_STOP_CONNECTION_RESUME_REDIAL      PREDEFINE_EVENT_BASE + 383
#define SCRIPTEVENT_CS64CALL_START_DROP_REDIAL                  PREDEFINE_EVENT_BASE + 384
#define SCRIPTEVENT_CS64CALL_STOP_DROP_REDIAL                   PREDEFINE_EVENT_BASE + 385

#define SCRIPTEVENT_SMS_START                                   PREDEFINE_EVENT_BASE + 386
#define SCRIPTEVENT_SMS_STOP                                    PREDEFINE_EVENT_BASE + 387

#define SCRIPTEVENT_GPRSATTACH_START                            PREDEFINE_EVENT_BASE + 388
#define SCRIPTEVENT_GPRSATTACH_STOP                             PREDEFINE_EVENT_BASE + 389

#define SCRIPTEVENT_PDPACTIVATE_START                           PREDEFINE_EVENT_BASE + 390
#define SCRIPTEVENT_PDPACTIVATE_STOP                            PREDEFINE_EVENT_BASE + 391

#define SCRIPTEVENT_FTPUPLOAD_START                             PREDEFINE_EVENT_BASE + 392
#define SCRIPTEVENT_FTPUPLOAD_STOP_NORMAL                       PREDEFINE_EVENT_BASE + 393
#define SCRIPTEVENT_FTPUPLOAD_STOP_TIMEDUE                      PREDEFINE_EVENT_BASE + 394

#define SCRIPTEVENT_FTPDOWNLOAD_START                           PREDEFINE_EVENT_BASE + 395
#define SCRIPTEVENT_FTPDOWNLOAD_STOP_NORMAL                     PREDEFINE_EVENT_BASE + 396
#define SCRIPTEVENT_FTPDOWNLOAD_STOP_TIMEDUE                    PREDEFINE_EVENT_BASE + 397

#define SCRIPTEVENT_HTTPDOWNLOAD_START                          PREDEFINE_EVENT_BASE + 398
#define SCRIPTEVENT_HTTPDOWNLOAD_STOP_NORMAL                    PREDEFINE_EVENT_BASE + 399
#define SCRIPTEVENT_HTTPDOWNLOAD_STOP_TIMEDUE                   PREDEFINE_EVENT_BASE + 400

#define SCRIPTEVENT_WAIT_START                                  PREDEFINE_EVENT_BASE + 401
#define SCRIPTEVENT_WAIT_STOP                                   PREDEFINE_EVENT_BASE + 402

#define SCRIPTEVENT_WAITFOREVENT_START                          PREDEFINE_EVENT_BASE + 403
#define SCRIPTEVENT_WAITFOREVENT_STOP                           PREDEFINE_EVENT_BASE + 404

#define SCRIPTEVENT_LOOP_BEGIN                                  PREDEFINE_EVENT_BASE + 405
#define SCRIPTEVENT_LOOP_END                                    PREDEFINE_EVENT_BASE + 406

#define SCRIPTEVENT_WAP_LOGON_START                             PREDEFINE_EVENT_BASE + 407
#define SCRIPTEVENT_WAP_LOGON_STOP_NORMAL                       PREDEFINE_EVENT_BASE + 408
#define SCRIPTEVENT_WAP_LOGON_STOP_TIMEDUE                      PREDEFINE_EVENT_BASE + 409

#define SCRIPTEVENT_WAP_REFRESH_START                           PREDEFINE_EVENT_BASE + 410
#define SCRIPTEVENT_WAP_REFRESH_STOP_NORMAL                     PREDEFINE_EVENT_BASE + 411
#define SCRIPTEVENT_WAP_REFRESH_STOP_TIMEDUE                    PREDEFINE_EVENT_BASE + 412

#define SCRIPTEVENT_WAP_DOWNLOAD_START                          PREDEFINE_EVENT_BASE + 413
#define SCRIPTEVENT_WAP_DOWNLOAD_STOP_NORMAL                    PREDEFINE_EVENT_BASE + 414
#define SCRIPTEVENT_WAP_DOWNLOAD_STOP_TIMEDUE                   PREDEFINE_EVENT_BASE + 415


//定义CQT测试的FPS事件
#define CQT_TEST_POINT_START                                    PREDEFINE_EVENT_BASE +500
#define CQT_TEST_PAUSE                                          PREDEFINE_EVENT_BASE +501
#define CQT_TEST_REPLAY                                         PREDEFINE_EVENT_BASE +502
#define CQT_ARRIVE_KEYPOINT                                     PREDEFINE_EVENT_BASE +503
#define CQT_FLOOR_CHANGE_START                                  PREDEFINE_EVENT_BASE +504
#define CQT_FLOOR_CHANGE_END                                    PREDEFINE_EVENT_BASE +505
#define CQT_KEY_POINT_TEST_BEGIN                                PREDEFINE_EVENT_BASE +506
#define CQT_KEY_POINT_TEST_END                                  PREDEFINE_EVENT_BASE +507
#define CQT_KEY_POINT_FORCE_TEST_BEGIN                          PREDEFINE_EVENT_BASE +508
#define CQT_KEY_POINT_FORCE_TEST_END                            PREDEFINE_EVENT_BASE +509

//定义WLAN测试的事件
#define WLAN_SCRIPTEVENT_WLAN_AUTHENTICATION_ATTEMPT            PREDEFINE_EVENT_BASE +600
#define WLAN_SCRIPTEVENT_WLAN_AUTHENTICATION_SUCCESS            PREDEFINE_EVENT_BASE +601
#define WLAN_SCRIPTEVENT_WLAN_AUTHENTICATION_FAIL               PREDEFINE_EVENT_BASE +602
#define WLAN_SCRIPTEVENT_WLAN_APCONNECT_ATTEMPT                 PREDEFINE_EVENT_BASE +603
#define WLAN_SCRIPTEVENT_WLAN_APCONNECT_SUCCESS                 PREDEFINE_EVENT_BASE +604
#define WLAN_SCRIPTEVENT_WLAN_APCONNECT_FAIL                    PREDEFINE_EVENT_BASE +605
#define WLAN_SCRIPTEVENT_FTPLOGON_SUCCESS                       PREDEFINE_EVENT_BASE +606
#define WLAN_SCRIPTEVENT_FTPLOGON_FAIL                          PREDEFINE_EVENT_BASE +607
#define WLAN_SCRIPTEVENT_WLAN_HTTP_ATTEMPT                      PREDEFINE_EVENT_BASE +608
#define WLAN_SCRIPTEVENT_WLAN_HTTP_BEGIN                        PREDEFINE_EVENT_BASE +609
#define WLAN_SCRIPTEVENT_WLAN_HTTP_SUCCESS                      PREDEFINE_EVENT_BASE +610
#define WLAN_SCRIPTEVENT_WLAN_HTTP_FAIL                         PREDEFINE_EVENT_BASE +611

//新增部分WAP下载事件
#define WAP_PIC_RING_DOWNLOAD_FAIL                              PREDEFINE_EVENT_BASE +700
#define WAP_KJAVA_DOWNLOAD_SUCCESS                              PREDEFINE_EVENT_BASE +701
#define WAP_KJAVA_DOWNLOAD_FAIL                                 PREDEFINE_EVENT_BASE +702
#define WAP_REDIRECTION                                         PREDEFINE_EVENT_BASE +703
//////////////////////////////////////////////////////////////////////////


typedef enum {
	GROUP_APP_Event,//脚本事件，算是通用事件
    GROUP_Common_Event,//预定义事件中的通用事件
	GROUP_TD_PreDef_Event,//与定义事件中的TD特有事件
	GROUP_GSM__PreDef_Event,//预定义事件中的GSM特有事件
    GROUP_TD_SelfDef_Event,
	GROUP_GSM_SelfDef_Event
}E_EVENT_GROUP;

//新增LTE事件
#define PREDEFINE_LTE_EVENT_BASE								PREDEFINE_EVENT_BASE + 800
#define PREDEFINE_LTE_HANDOVER_ATTEMP							PREDEFINE_LTE_EVENT_BASE + 1   //LTE内部切换尝试
#define PREDEFINE_LTE_HANDOVER_SUCCESS							PREDEFINE_LTE_EVENT_BASE + 2   //LTE内部切换成功
#define PREDEFINE_LTE_HANDOVER_FAIL								PREDEFINE_LTE_EVENT_BASE + 3   //LTE内部切换失败
#define PREDEFINE_LTE_HANDOVER_TO_TD_ATTEMP						PREDEFINE_LTE_EVENT_BASE + 4   //LTE -〉TD 切换尝试
#define PREDEFINE_LTE_HANDOVER_TO_TD_SUCCESS					PREDEFINE_LTE_EVENT_BASE + 5   //LTE -〉TD 切换成功
#define PREDEFINE_LTE_HANDOVER_TO_TD_FAIL						PREDEFINE_LTE_EVENT_BASE + 6   //LTE -〉TD 切换失败
#define PREDEFINE_LTE_HANDOVER_FROM_TD_ATTEMP					PREDEFINE_LTE_EVENT_BASE + 7   //TD -> LTE 切换尝试
#define PREDEFINE_LTE_HANDOVER_FROM_TD_SUCCESS					PREDEFINE_LTE_EVENT_BASE + 8   //TD -> LTE 切换成功
#define PREDEFINE_LTE_HANDOVER_FROM_TD_FAIL						PREDEFINE_LTE_EVENT_BASE + 9   //TD -> LTE 切换失败
#define PREDEFINE_CELLRESEL_ATTEMP_L2T							PREDEFINE_LTE_EVENT_BASE + 10   //LTE -〉 TD 重选尝试
#define PREDEFINE_CELLRESEL_SUCCESS_L2T							PREDEFINE_LTE_EVENT_BASE + 11   //LTE -〉 TD 重选成功
#define PREDEFINE_CELLRESEL_FAILURE_L2T							PREDEFINE_LTE_EVENT_BASE + 12   //LTE -〉 TD 重选失败
#define PREDEFINE_CELLRESEL_ATTEMP_T2L							PREDEFINE_LTE_EVENT_BASE + 13   //TD -〉 LTE 重选尝试
#define PREDEFINE_CELLRESEL_SUCCESS_T2L							PREDEFINE_LTE_EVENT_BASE + 14   //TD -〉 LTE 重选成功
#define PREDEFINE_CELLRESEL_FAILURE_T2L							PREDEFINE_LTE_EVENT_BASE + 15   //TD -〉 LTE 重选失败
#define PREDEFINE_LTE_ATTACH_ATTEMP								PREDEFINE_LTE_EVENT_BASE + 16   //LTE Attach尝试
#define PREDEFINE_LTE_ATTACH_SUCCESS							PREDEFINE_LTE_EVENT_BASE + 17   //LTE Attach成功
#define PREDEFINE_LTE_ATTACH_FAIL								PREDEFINE_LTE_EVENT_BASE + 18   //LTE Attach失败
#define PREDEFINE_LTE_TAU_ATTEMP								PREDEFINE_LTE_EVENT_BASE + 19   //LTE跟踪区更新尝试
#define PREDEFINE_LTE_TAU_SUCCESS								PREDEFINE_LTE_EVENT_BASE + 20   //LTE跟踪区更新成功
#define PREDEFINE_LTE_TAU_FAIL									PREDEFINE_LTE_EVENT_BASE + 21   //LTE跟踪区更新失败
#define PREDEFINE_LTE_SERVICE_ATTEMP							PREDEFINE_LTE_EVENT_BASE + 22   //LTE业务尝试
#define PREDEFINE_LTE_SERVICE_SUCCESS							PREDEFINE_LTE_EVENT_BASE + 23   //LTE业务成功
#define PREDEFINE_LTE_SERVICE_FAIL								PREDEFINE_LTE_EVENT_BASE + 24   //LTE业务失败
#define PREDEFINE_LTE_CSFB_START_MO								PREDEFINE_LTE_EVENT_BASE + 25	//CSFB Start MO
#define PREDEFINE_LTE_CSFB_SUCCESS_MO							PREDEFINE_LTE_EVENT_BASE + 26	//CSFB Success MO
#define PREDEFINE_LTE_CSFB_ALERTING_MO							PREDEFINE_LTE_EVENT_BASE + 27	//CSFB Alerting MO
#define PREDEFINE_LTE_CSFB_CONNECT_MO							PREDEFINE_LTE_EVENT_BASE + 28	//CSFB Connect MO
#define PREDEFINE_LTE_CSFB_RETURN_START_MO						PREDEFINE_LTE_EVENT_BASE + 29	//CSFB Return Start MO
#define PREDEFINE_LTE_CSFB_RETURN_END_MO						PREDEFINE_LTE_EVENT_BASE + 30	//CSFB Return End MO
#define PREDEFINE_LTE_CSFB_DROP_MO								PREDEFINE_LTE_EVENT_BASE + 31	//CSFB Drop MO
#define PREDEFINE_LTE_CSFB_START_MT								PREDEFINE_LTE_EVENT_BASE + 32	//CSFB Start MT
#define PREDEFINE_LTE_CSFB_SUCCESS_MT							PREDEFINE_LTE_EVENT_BASE + 33	//CSFB Success MT
#define PREDEFINE_LTE_CSFB_CONNECT_MT							PREDEFINE_LTE_EVENT_BASE + 34	//CSFB Connect MT
#define PREDEFINE_LTE_CSFB_RETURN_START_MT						PREDEFINE_LTE_EVENT_BASE + 35	//CSFB Return Start MT
#define PREDEFINE_LTE_CSFB_RETURN_END_MT						PREDEFINE_LTE_EVENT_BASE + 36	//CSFB Return End MT
#define PREDEFINE_LTE_CSFB_DROP_MT								PREDEFINE_LTE_EVENT_BASE + 37	//CSFB Drop MT
// 新增 [5/6/2015 liangdongxu]
#define PREDEFINE_LTE_INTERHO_ATTEMP							PREDEFINE_LTE_EVENT_BASE + 38	//LTE异频切换尝试总次数
#define PREDEFINE_LTE_INTERHO_SUCCESS							PREDEFINE_LTE_EVENT_BASE + 39	//LTE异频切换成功总次数
#define PREDEFINE_LTE_INTERHO_FAIL								PREDEFINE_LTE_EVENT_BASE + 40	//LTE异频切换失败总次数
#define PREDEFINE_LTE_INTRAHO_ATTEMP							PREDEFINE_LTE_EVENT_BASE + 41	//LTE同频切换尝试总次数
#define PREDEFINE_LTE_INTRAHO_SUCCESS							PREDEFINE_LTE_EVENT_BASE + 42	//LTE同频切换成功总次数
#define PREDEFINE_LTE_INTRAHO_FAIL								PREDEFINE_LTE_EVENT_BASE + 43	//LTE同频切换失败总次数

// //目前只映射状态机出来的事件 [5/7/2015 liangdongxu]
//#define PREDEFINE_CELLRESEL_ATTEMP_L2G							PREDEFINE_LTE_EVENT_BASE + 44   //LTE -〉 GSM 重选尝试
//#define PREDEFINE_CELLRESEL_SUCCESS_L2G							PREDEFINE_LTE_EVENT_BASE + 45   //LTE -〉 GSM 重选成功
//#define PREDEFINE_CELLRESEL_FAILURE_L2G							PREDEFINE_LTE_EVENT_BASE + 46   //LTE -〉 GSM 重选失败
//#define PREDEFINE_CELLRESEL_ATTEMP_G2L							PREDEFINE_LTE_EVENT_BASE + 47   //GSM -〉 LTE 重选尝试
//#define PREDEFINE_CELLRESEL_SUCCESS_G2L							PREDEFINE_LTE_EVENT_BASE + 48   //GSM -〉 LTE 重选成功
//#define PREDEFINE_CELLRESEL_FAILURE_G2L							PREDEFINE_LTE_EVENT_BASE + 49   //GSM -〉 LTE 重选失败

#define PREDEFINE_RD_ATTEMP_L2T									PREDEFINE_LTE_EVENT_BASE + 50	//重定向尝试LTE->TD
#define PREDEFINE_RD_SUCCESS_L2T								PREDEFINE_LTE_EVENT_BASE + 51	//重定向成功LTE->TD
#define PREDEFINE_RD_FAIL_L2T									PREDEFINE_LTE_EVENT_BASE + 52	//重定向失败LTE->TD
//#define PREDEFINE_RD_ATTEMP_L2G								PREDEFINE_LTE_EVENT_BASE + 53	//重定向尝试LTE->GSM
//#define PREDEFINE_RD_SUCCESS_L2G								PREDEFINE_LTE_EVENT_BASE + 54	//重定向成功LTE->GSM
//#define PREDEFINE_RD_FAIL_L2G									PREDEFINE_LTE_EVENT_BASE + 55	//重定向失败LTE->GSM
//#define PREDEFINE_RD_ATTEMP_T2L								PREDEFINE_LTE_EVENT_BASE + 56	//重定向尝试TD->LTE
//#define PREDEFINE_RD_SUCCESS_T2L								PREDEFINE_LTE_EVENT_BASE + 57	//重定向成功TD->LTE
//#define PREDEFINE_RD_FAIL_T2L									PREDEFINE_LTE_EVENT_BASE + 58	//重定向失败TD->LTE
#define PREDEFINE_TEST											PREDEFINE_LTE_EVENT_BASE + 5

// APPEVENT -19个事件定义 [5/25/2015 liangdongxu]
#define PREDEFINE_LTE_APPEVENT_BASE								PREDEFINE_EVENT_BASE + 900		//1100+600+900 = 2600
#define FTP_S_APPServiceRequest_Download						PREDEFINE_LTE_APPEVENT_BASE + 1			
#define FTP_S_APPServiceSuccess_Download						PREDEFINE_LTE_APPEVENT_BASE + 2
#define FTP_S_APPServiceDrop_Download							PREDEFINE_LTE_APPEVENT_BASE + 3
#define FTP_S_APPServiceFailure_Download						PREDEFINE_LTE_APPEVENT_BASE + 4
#define FTP_S_APPServiceRequest_Upload							PREDEFINE_LTE_APPEVENT_BASE + 5
#define FTP_S_APPServiceSuccess_Upload							PREDEFINE_LTE_APPEVENT_BASE + 6
#define FTP_S_APPServiceDrop_Upload								PREDEFINE_LTE_APPEVENT_BASE + 7
#define FTP_S_APPServiceFailure_Upload							PREDEFINE_LTE_APPEVENT_BASE + 8
#define HTTP_S_APPServiceRequest_Browse							PREDEFINE_LTE_APPEVENT_BASE + 9
#define HTTP_S_APPServiceConfirm_Browse							PREDEFINE_LTE_APPEVENT_BASE + 10
#define HTTP_S_APPServiceSuccess_Browse							PREDEFINE_LTE_APPEVENT_BASE + 11
#define HTTP_S_APPServiceRequest_Download						PREDEFINE_LTE_APPEVENT_BASE + 12
#define HTTP_S_APPServiceSuccess_Download						PREDEFINE_LTE_APPEVENT_BASE + 13
#define HTTP_S_APPServiceDrop_Download							PREDEFINE_LTE_APPEVENT_BASE + 14
#define STREAM_S_APPServiceRequest_Stream						PREDEFINE_LTE_APPEVENT_BASE + 15
#define STREAM_S_APPServiceSuccess_Stream						PREDEFINE_LTE_APPEVENT_BASE + 16
#define STREAM_S_APPServiceConnect_Stream						PREDEFINE_LTE_APPEVENT_BASE + 17
#define STREAM_C_StreamRealPlay_Stream							PREDEFINE_LTE_APPEVENT_BASE + 18
#define STREAM_C_StreamBufferBegin_Stream						PREDEFINE_LTE_APPEVENT_BASE + 19
#define STREAM_C_StreamBufferEnd_Stream							PREDEFINE_LTE_APPEVENT_BASE + 20
#define STREAM_C_StreamFileBegin_Stream							PREDEFINE_LTE_APPEVENT_BASE + 21
#define STREAM_C_StreamFileEnd_Stream							PREDEFINE_LTE_APPEVENT_BASE + 22
//  [6/18/2015 liangdongxu]
#define STREAM_S_APPServiceReject_Stream						PREDEFINE_LTE_APPEVENT_BASE + 23
#define STREAM_S_APPServiceTimeout_Stream						PREDEFINE_LTE_APPEVENT_BASE + 24
#define STREAM_S_APPServiceFailure_Stream						PREDEFINE_LTE_APPEVENT_BASE + 25

}