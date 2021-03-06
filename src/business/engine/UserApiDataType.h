/////////////////////////////////////////////////////////////////////////
///@system QuantDo Platform
///@company QuantDo
///@file UserApiDataType.h
///@brief 定义了客户端接口使用的业务数据类型
///@history 
///
/////////////////////////////////////////////////////////////////////////

#ifndef FTDCDATATYPE_H
#define FTDCDATATYPE_H

enum TE_RESUME_TYPE
{
	TERT_RESTART = 0,
	TERT_RESUME,
	TERT_QUICK
};

const int TSS_DIALOG = 1;		//对话流
const int TSS_PRIVATE = 2;		//客户私有流
const int TSS_PUBLIC = 3;		//公共流
const int TSS_QUERY = 4;		//查询
const int TSS_USER = 5;		//用户私有流

/////////////////////////////////////////////////////////////////////////
///TFtdcPriceTickType是一个最小变动价位类型
/////////////////////////////////////////////////////////////////////////
typedef double TPriceTickType;

/////////////////////////////////////////////////////////////////////////
///TFtdcPriceType是一个价格类型
/////////////////////////////////////////////////////////////////////////
typedef double TPriceType;

/////////////////////////////////////////////////////////////////////////
///TFtdcRatioType是一个比率类型
/////////////////////////////////////////////////////////////////////////
typedef double TRatioType;

/////////////////////////////////////////////////////////////////////////
///TFtdcMoneyType是一个资金类型
/////////////////////////////////////////////////////////////////////////
typedef double TMoneyType;

/////////////////////////////////////////////////////////////////////////
///TFtdcLargeVolumeType是一个大额数量类型
/////////////////////////////////////////////////////////////////////////
typedef double TLargeVolumeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcSequenceNoType是一个序列号类型
/////////////////////////////////////////////////////////////////////////
typedef int TSequenceNoType;

/////////////////////////////////////////////////////////////////////////
///TFtdcMillisecType是一个最后修改毫秒类型
/////////////////////////////////////////////////////////////////////////
typedef int TMillisecType;

/////////////////////////////////////////////////////////////////////////
///TFtdcVolumeType是一个数量类型
/////////////////////////////////////////////////////////////////////////
typedef int TVolumeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcUnderlyingMultipleType是一个合约乘数类型
/////////////////////////////////////////////////////////////////////////
typedef int TUnderlyingMultipleType;

/////////////////////////////////////////////////////////////////////////
///TFtdcVolumeMultipleType是一个数量乘数类型
/////////////////////////////////////////////////////////////////////////
typedef int TVolumeMultipleType;

/////////////////////////////////////////////////////////////////////////
///TFtdcSequenceSeriesType是一个序列系列号类型
/////////////////////////////////////////////////////////////////////////
typedef int TSequenceSeriesType;

/////////////////////////////////////////////////////////////////////////
///TFtdcSessionIDType是一个会话编号类型
/////////////////////////////////////////////////////////////////////////
typedef int TSessionIDType;

/////////////////////////////////////////////////////////////////////////
///TFtdcErrorIDType是一个错误代码类型
/////////////////////////////////////////////////////////////////////////
typedef int TErrorIDType;

/////////////////////////////////////////////////////////////////////////
///TFtdcDataCenterIDType是一个数据中心代码类型
/////////////////////////////////////////////////////////////////////////
typedef int TDataCenterIDType;

/////////////////////////////////////////////////////////////////////////
///TFtdcFrontIDType是一个前置编号类型
/////////////////////////////////////////////////////////////////////////
typedef int TFrontIDType;

/////////////////////////////////////////////////////////////////////////
///TFtdcTopicIDType是一个主题代码类型
/////////////////////////////////////////////////////////////////////////
typedef int TTopicIDType;

/////////////////////////////////////////////////////////////////////////
///TFtdcSettlementIDType是一个结算编号类型
/////////////////////////////////////////////////////////////////////////
typedef int TSettlementIDType;

/////////////////////////////////////////////////////////////////////////
///TFtdcLinkTypeType是一个连接管理类型类型
/////////////////////////////////////////////////////////////////////////
typedef int TLinkTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcMonthType是一个月份类型
/////////////////////////////////////////////////////////////////////////
typedef int TMonthType;

/////////////////////////////////////////////////////////////////////////
///TFtdcBoolType是一个布尔型类型
/////////////////////////////////////////////////////////////////////////
typedef int TBoolType;

/////////////////////////////////////////////////////////////////////////
///TFtdcYearType是一个年类型
/////////////////////////////////////////////////////////////////////////
typedef int TYearType;

/////////////////////////////////////////////////////////////////////////
///TFtdcTradeTypeType是一个成交类型类型
/////////////////////////////////////////////////////////////////////////
typedef char TTradeTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcMemTableNameType是一个内存表名类型
/////////////////////////////////////////////////////////////////////////
typedef char TMemTableNameType[61];

/////////////////////////////////////////////////////////////////////////
///TFtdcOrderSysIDType是一个报单编号类型
/////////////////////////////////////////////////////////////////////////
typedef char TOrderSysIDType[33];

/////////////////////////////////////////////////////////////////////////
///TFtdcTradeIDType是一个成交编号类型
/////////////////////////////////////////////////////////////////////////
typedef char TTradeIDType[33];

/////////////////////////////////////////////////////////////////////////
///TFtdcUserIDType是一个用户代码类型
/////////////////////////////////////////////////////////////////////////
typedef char TUserIDType[19];

/////////////////////////////////////////////////////////////////////////
///TFtdcParticipantIDType是一个会员编号类型
/////////////////////////////////////////////////////////////////////////
typedef char TParticipantIDType[11];

/////////////////////////////////////////////////////////////////////////
///TFtdcIPAddressType是一个IP地址类型
/////////////////////////////////////////////////////////////////////////
typedef char TIPAddressType[21];

/////////////////////////////////////////////////////////////////////////
///TFtdcMacAddressType是一个Mac地址类型
/////////////////////////////////////////////////////////////////////////
typedef char TMacAddressType[21];

/////////////////////////////////////////////////////////////////////////
///TFtdcInstrumentNameType是一个合约名称类型
/////////////////////////////////////////////////////////////////////////
typedef char TInstrumentNameType[21];

/////////////////////////////////////////////////////////////////////////
///TFtdcInstrumentIDType是一个合约编号类型
/////////////////////////////////////////////////////////////////////////
typedef char TInstrumentIDType[31];

/////////////////////////////////////////////////////////////////////////
///TFtdcExchangeNameType是一个交易所名称类型
/////////////////////////////////////////////////////////////////////////
typedef char TExchangeNameType[31];

/////////////////////////////////////////////////////////////////////////
///TFtdcExchangeIDType是一个交易所代码类型
/////////////////////////////////////////////////////////////////////////
typedef char TExchangeIDType[11];

/////////////////////////////////////////////////////////////////////////
///TFtdcDateType是一个日期类型
/////////////////////////////////////////////////////////////////////////
typedef char TDateType[9];

/////////////////////////////////////////////////////////////////////////
///TFtdcTimeType是一个时间类型
/////////////////////////////////////////////////////////////////////////
typedef char TTimeType[9];

/////////////////////////////////////////////////////////////////////////
///TFtdcClientTypeType是一个客户类型类型
/////////////////////////////////////////////////////////////////////////
typedef char TClientTypeType[2];

/////////////////////////////////////////////////////////////////////////
///TFtdcClientIDType是一个客户编码类型
/////////////////////////////////////////////////////////////////////////
typedef char TClientIDType[19];

/////////////////////////////////////////////////////////////////////////
///TFtdcAccountIDType是一个资金帐号类型
/////////////////////////////////////////////////////////////////////////
typedef char TAccountIDType[19];

/////////////////////////////////////////////////////////////////////////
///TFtdcSeatIDType是一个席位号类型
/////////////////////////////////////////////////////////////////////////
typedef char TSeatIDType[13];

/////////////////////////////////////////////////////////////////////////
///TFtdcProductNameType是一个品种名称类型
/////////////////////////////////////////////////////////////////////////
typedef char TProductNameType[41];

/////////////////////////////////////////////////////////////////////////
///TFtdcUserOrderLocalIDType是一个用户本地报单号类型
/////////////////////////////////////////////////////////////////////////
typedef char TUserOrderLocalIDType[23];

/////////////////////////////////////////////////////////////////////////
///TFtdcOrderLocalIDType是一个本地报单编号类型
/////////////////////////////////////////////////////////////////////////
typedef char TOrderLocalIDType[33];

/////////////////////////////////////////////////////////////////////////
///TFtdcInvestorIDType是一个投资者编号类型
/////////////////////////////////////////////////////////////////////////
typedef char TInvestorIDType[19];

/////////////////////////////////////////////////////////////////////////
///TFtdcUserNameType是一个用户编码类型
/////////////////////////////////////////////////////////////////////////
typedef char TUserNameType[31];

/////////////////////////////////////////////////////////////////////////
///TFtdcPasswordType是一个密码类型
/////////////////////////////////////////////////////////////////////////
typedef char TPasswordType[41];

/////////////////////////////////////////////////////////////////////////
///TFtdcAbstractType是一个消息摘要类型
/////////////////////////////////////////////////////////////////////////
typedef char TAbstractType[81];

/////////////////////////////////////////////////////////////////////////
///TFtdcProductInfoType是一个产品信息类型
/////////////////////////////////////////////////////////////////////////
typedef char TProductInfoType[51];

/////////////////////////////////////////////////////////////////////////
///TFtdcProtocolInfoType是一个协议信息类型
/////////////////////////////////////////////////////////////////////////
typedef char TProtocolInfoType[41];

/////////////////////////////////////////////////////////////////////////
///TFtdcBusinessUnitType是一个业务单元类型
/////////////////////////////////////////////////////////////////////////
typedef char TBusinessUnitType[21];

/////////////////////////////////////////////////////////////////////////
///TFtdcTradingSystemNameType是一个交易系统名称类型
/////////////////////////////////////////////////////////////////////////
typedef char TTradingSystemNameType[61];

/////////////////////////////////////////////////////////////////////////
///TFtdcBrokerIDType是一个经纪公司代码类型
/////////////////////////////////////////////////////////////////////////
typedef char TBrokerIDType[11];

/////////////////////////////////////////////////////////////////////////
///TFtdcCustomType是一个用户自定义域类型类型
/////////////////////////////////////////////////////////////////////////
typedef char TCustomType[65];

/////////////////////////////////////////////////////////////////////////
///TFtdcTradingDayType是一个交易日类型
/////////////////////////////////////////////////////////////////////////
typedef char TTradingDayType[9];

/////////////////////////////////////////////////////////////////////////
///TFtdcDepartmentType是一个营业部类型
/////////////////////////////////////////////////////////////////////////
typedef char TDepartmentType[41];

/////////////////////////////////////////////////////////////////////////
///TFtdcGrantFuncSetType是一个授权功能号类型
/////////////////////////////////////////////////////////////////////////
typedef char TGrantFuncSetType[5];

/////////////////////////////////////////////////////////////////////////
///TFtdcProductIDType是一个品种编号类型
/////////////////////////////////////////////////////////////////////////
typedef char TProductIDType[13];

/////////////////////////////////////////////////////////////////////////
///TFtdcAccountSeqNoType是一个资金流水号类型
/////////////////////////////////////////////////////////////////////////
typedef char TAccountSeqNoType[21];

/////////////////////////////////////////////////////////////////////////
///TFtdcSettlementGroupIDType是一个结算组代码类型
/////////////////////////////////////////////////////////////////////////
typedef char TSettlementGroupIDType[9];

/////////////////////////////////////////////////////////////////////////
///TFtdcTCPAddressType是一个TCP连接地址类型
/////////////////////////////////////////////////////////////////////////
typedef char TTCPAddressType[41];

/////////////////////////////////////////////////////////////////////////
///TFtdcEnvNoType是一个环境号类型
/////////////////////////////////////////////////////////////////////////
typedef char TEnvNoType[5];

/////////////////////////////////////////////////////////////////////////
///TFtdcShortNameType是一个简称类型
/////////////////////////////////////////////////////////////////////////
typedef char TShortNameType[13];

/////////////////////////////////////////////////////////////////////////
///TFtdcLongNameType是一个名称类型
/////////////////////////////////////////////////////////////////////////
typedef char TLongNameType[61];

/////////////////////////////////////////////////////////////////////////
///TFtdcErrorMsgType是一个错误信息类型
/////////////////////////////////////////////////////////////////////////
typedef char TErrorMsgType[129];

/////////////////////////////////////////////////////////////////////////
///TFtdcformulaType是一个公式类型
/////////////////////////////////////////////////////////////////////////
typedef char TformulaType[201];

/////////////////////////////////////////////////////////////////////////
///TFtdcVolumeConditionType是一个成交量类型类型
/////////////////////////////////////////////////////////////////////////
///任何数量
#define VC_AV '1'
///最小数量
#define VC_MV '2'
///全部数量
#define VC_CV '3'

typedef char TVolumeConditionType;

/////////////////////////////////////////////////////////////////////////
///TFtdcForceCloseReasonType是一个强平原因类型
/////////////////////////////////////////////////////////////////////////
///非强平
#define FCR_NotForceClose '0'
///资金不足
#define FCR_LackDeposit '1'
///客户超仓
#define FCR_ClientOverPositionLimit '2'
///会员超仓
#define FCR_MemberOverPositionLimit '3'
///持仓非整数倍
#define FCR_NotMultiple '4'

typedef char TForceCloseReasonType;

/////////////////////////////////////////////////////////////////////////
///TFtdcInstrumentStatusType是一个合约交易状态类型
/////////////////////////////////////////////////////////////////////////
///开盘前
#define IS_BeforeTrading '0'
///非交易
#define IS_NoTrading '1'
///连续交易
#define IS_Continous '2'
///集合竞价报单
#define IS_AuctionOrdering '3'
///集合竞价价格平衡
#define IS_AuctionBalance '4'
///集合竞价撮合
#define IS_AuctionMatch '5'
///收盘
#define IS_Closed '6'

typedef char TInstrumentStatusType;

/////////////////////////////////////////////////////////////////////////
///TFtdcOffsetFlagType是一个开平标志类型
/////////////////////////////////////////////////////////////////////////
///开仓
#define OF_Open '0'
///平仓
#define OF_Close '1'
///强平
#define OF_ForceClose '2'
///平今
#define OF_CloseToday '3'
///平昨
#define OF_CloseYesterday '4'
///自动开平
#define OF_AutoOffset '5'

typedef char TOffsetFlagType;

/////////////////////////////////////////////////////////////////////////
///TFtdcOrderPriceTypeType是一个报单价格条件类型
/////////////////////////////////////////////////////////////////////////
///任意价
#define OPT_AnyPrice '1'
///限价
#define OPT_LimitPrice '2'
///最优价
#define OPT_BestPrice '3'
///五档价
#define OPT_FiveLevelPrice '4'
///条件价
#define OPT_ConditonPrice '5'

typedef char TOrderPriceTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcOrderStatusType是一个报单状态类型
/////////////////////////////////////////////////////////////////////////
///全部成交
#define OS_AllTraded '0'
///部分成交还在队列中
#define OS_PartTradedQueueing '1'
///部分成交不在队列中
#define OS_PartTradedNotQueueing '2'
///未成交还在队列中
#define OS_NoTradeQueueing '3'
///未成交不在队列中
#define OS_NoTradeNotQueueing '4'
///撤单
#define OS_Canceled '5'
///订单已报入交易所未应答
#define OS_AcceptedNoReply '6'
///部分撤单还在队列中
#define OS_PartCanceledQueueing '7'
///部分成交部分撤单还在队列中
#define OS_PTPCQueueing '8'
///未知
#define OS_Unknown 'a'
///尚未触发
#define OS_NotTouched 'b'
///已触发
#define OS_Touched 'c'

typedef char TOrderStatusType;

/////////////////////////////////////////////////////////////////////////
///TFtdcMemtableChangeTypeType是一个内存表变化类型类型
/////////////////////////////////////////////////////////////////////////
///插入
#define MTC_INSERT '0'
///修改
#define MTC_UPDATE '1'
///删除
#define MTC_DELETE '2'
///提交
#define MTC_COMMIT '3'

typedef char TMemtableChangeTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcUserTypeType是一个用户类型类型
/////////////////////////////////////////////////////////////////////////
///自然人
#define UT_Person '1'
///理财产品
#define UT_Product '2'
///期货公司管理员
#define UT_Manager '3'
///席位
#define UT_Seat '4'

typedef char TUserTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcTradingRightType是一个交易权限类型
/////////////////////////////////////////////////////////////////////////
///可以交易
#define TR_Allow '0'
///只能平仓
#define TR_CloseOnly '1'
///不能交易
#define TR_Forbidden '2'

typedef char TTradingRightType;

/////////////////////////////////////////////////////////////////////////
///TFtdcTimeConditionType是一个有效期类型类型
/////////////////////////////////////////////////////////////////////////
///立即完成，否则撤销
#define TC_IOC '1'
///本节有效
#define TC_GFS '2'
///当日有效
#define TC_GFD '3'
///指定日期前有效
#define TC_GTD '4'
///撤销前有效
#define TC_GTC '5'
///集合竞价有效
#define TC_GFA '6'

typedef char TTimeConditionType;

/////////////////////////////////////////////////////////////////////////
///TFtdcOrderSourceType是一个报单来源类型
/////////////////////////////////////////////////////////////////////////
///来自参与者
#define OS_Participant '0'
///来自管理员
#define OS_Administrator '1'

typedef char TOrderSourceType;

/////////////////////////////////////////////////////////////////////////
///TFtdcDirectionType是一个买卖方向类型
/////////////////////////////////////////////////////////////////////////
///买
#define D_Buy '0'
///卖
#define D_Sell '1'

typedef char TDirectionType;

/////////////////////////////////////////////////////////////////////////
///TFtdcCurrencyType是一个币种类型
/////////////////////////////////////////////////////////////////////////
///人民币
#define C_RMB '1'
///美元
#define C_UDOLLAR '2'

typedef char TCurrencyType;

/////////////////////////////////////////////////////////////////////////
///TFtdcDealFlagType是一个处理标志类型
/////////////////////////////////////////////////////////////////////////
///已处理
#define DF_Done '1'
///等待处理
#define DF_Wait '2'

typedef char TDealFlagType;

/////////////////////////////////////////////////////////////////////////
///TFtdcAccountDirectionType是一个出入金方向类型
/////////////////////////////////////////////////////////////////////////
///入金
#define AD_In '1'
///出金
#define AD_Out '2'

typedef char TAccountDirectionType;

/////////////////////////////////////////////////////////////////////////
///TFtdcClientHedgeFlagType是一个客户投机套保标志类型
/////////////////////////////////////////////////////////////////////////
///投机
#define CHF_Speculation '1'
///套利
#define CHF_Arbitrage '2'
///套保
#define CHF_Hedge '3'
///做市商
#define CHF_MarketMaker '4'

typedef char TClientHedgeFlagType;

/////////////////////////////////////////////////////////////////////////
///TFtdcHedgeFlagType是一个投机套保标志类型
/////////////////////////////////////////////////////////////////////////
///投机
#define CHF_Speculation '1'
///套利
#define CHF_Arbitrage '2'
///套保
#define CHF_Hedge '3'
///做市商
#define CHF_MarketMaker '4'

typedef char THedgeFlagType;

/////////////////////////////////////////////////////////////////////////
///TFtdcActionFlagType是一个操作标志类型
/////////////////////////////////////////////////////////////////////////
///删除
#define AF_Delete '0'
///挂起
#define AF_Suspend '1'
///激活
#define AF_Active '2'
///修改
#define AF_Modify '3'
///增加
#define AF_Add '4'

typedef char TActionFlagType;

/////////////////////////////////////////////////////////////////////////
///TFtdcPositionTypeType是一个持仓类型类型
/////////////////////////////////////////////////////////////////////////
///净持仓
#define PT_Net '1'
///综合持仓
#define PT_Gross '2'

typedef char TPositionTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcOptionsTypeType是一个期权类型类型
/////////////////////////////////////////////////////////////////////////
///非期权
#define OT_NotOptions '0'
///看涨
#define OT_CallOptions '1'
///看跌
#define OT_PutOptions '2'

typedef char TOptionsTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcIsActiveType是一个是否活跃类型
/////////////////////////////////////////////////////////////////////////
///不活跃
#define UIA_NoActive '0'
///活跃
#define UIA_Active '1'

typedef char TIsActiveType;

/////////////////////////////////////////////////////////////////////////
///TFtdcProductClassType是一个产品类型类型
/////////////////////////////////////////////////////////////////////////
///期货
#define PC_Futures '1'
///期权
#define PC_Options '2'
///组合
#define PC_Combination '3'
///即期
#define PC_Spot '4'
///期转现
#define PC_EFP '5'
///未知类型
#define PC_Unknown '6'
///证券
#define PC_Stocks '7'
///股票期权
#define PC_StockOptions '8'
///金交所现货
#define PC_SGE_SPOT '9'
///金交所递延
#define PC_SGE_DEFER 'a'
///金交所远期
#define PC_SGE_FOWARD 'b'

typedef char TProductClassType;

/////////////////////////////////////////////////////////////////////////
///TFtdcCurrencyIDType是一个币种代码类型
/////////////////////////////////////////////////////////////////////////
typedef char TCurrencyIDType[4];

/////////////////////////////////////////////////////////////////////////
///TFtdcOrderEnterTypeType是一个报单触发类型类型
/////////////////////////////////////////////////////////////////////////
///手动
#define CMB_Manual '1'
///自动
#define CMB_Automatic '2'
///自动指定
#define CMB_AutomaticAssign '3'

typedef char TOrderEnterTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcCombPriceTypeType是一个套利价格类别类型
/////////////////////////////////////////////////////////////////////////
///比价
#define CMB_Ratio '1'
///价差
#define CMB_Spread '2'

typedef char TCombPriceTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcCombCycleTypeType是一个套利报单类型类型
/////////////////////////////////////////////////////////////////////////
///开仓
#define CMB_OnlyOpen '1'
///平仓
#define CMB_OnlyOffSet '2'
///开平
#define CMB_OpenAndOffset '3'

typedef char TCombCycleTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcTradeStatusType是一个套利成交状态类型
/////////////////////////////////////////////////////////////////////////
///未报入
#define CMB_NoSendIn '1'
///开仓已报入
#define CMB_OpenSendIn '2'
///开仓撤单已报入
#define CMB_OpenCancleSendIn '3'
///开仓部分成交
#define CMB_OpenPartTrade '4'
///开仓部分成交已撤
#define CMB_OpenPartTradeCancle '5'
///开仓部分为整成交已撤
#define CMB_OpenPartWholeTradeCancle '6'
///开仓成交
#define CMB_OpenTrade '7'
///平仓已报入
#define CMB_OffSetSendIn '8'
///平仓撤单已报入
#define CMB_OffsetCancleSendIn '9'
///平仓部分成交
#define CMB_OffsetPartTrade 'A'
///平仓部分成交已撤
#define CMB_OffsetPartTradeCancel 'B'
///平仓成交
#define CMB_OffsetTrade 'C'
///开仓已撤
#define CMB_OpenCancel 'D'
///平仓已撤
#define CMB_OffsetCancel 'E'

typedef char TTradeStatusType;

/////////////////////////////////////////////////////////////////////////
///TFtdcCombLeg1ActionFlagType是一个腿一不成交处理类型类型
/////////////////////////////////////////////////////////////////////////
///触发挂单套利行情不存在自动撤单
#define CMB_Queueing '1'
///直接撤单
#define CMB_Cancle '2'
///追单
#define CMB_CancleAndReOrder '3'

typedef char TCombLeg1ActionFlagType;

/////////////////////////////////////////////////////////////////////////
///TFtdcOffsetTypeType是一个开平循环组合平仓类型类型
/////////////////////////////////////////////////////////////////////////
///部成平仓
#define CMB_PartOffset '1'
///全成平仓
#define CMB_AllOffset '2'

typedef char TOffsetTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcPlotTypeType是一个策略类型类型
/////////////////////////////////////////////////////////////////////////
///普通报单
#define PLT_Normal '0'
///组合策略下单
#define PLT_Comb '1'
///网格策略下单
#define PLT_Grid '2'
///多空下单
#define PLT_LongShort '3'
///冰山订单
#define PLT_Iceberg '4'
///幽灵订单
#define PLT_Ghost '5'
///盯盘策略
#define PLT_Peg '6'
///时间加权平均策略
#define PLT_TWap '7'
///数量加权平均策略
#define PLT_VWap '8'
///止损和市场触及策略
#define PLT_MITStop '9'

typedef char TPlotTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcLongShortPlotTypeType是一个多空策略类型类型
/////////////////////////////////////////////////////////////////////////
///做多
#define LSPT_Long '1'
///做空
#define LSPT_Short '2'

typedef char TLongShortPlotTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcPlotStatusTypeType是一个策略执行状态类型
/////////////////////////////////////////////////////////////////////////
///初始状态
#define PST_Init '0'
///执行状态
#define PST_Excuting '1'
///暂停状态
#define PST_Pause '2'
///停止状态
#define PST_Stop '3'
///止损状态
#define PST_StopLoss '4'
///删除
#define PST_Delete '5'
///收盘处理状态
#define PST_CloseMrk '6'

typedef char TPlotStatusTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcAPITypeType是一个连接管理类型类型
/////////////////////////////////////////////////////////////////////////
///QDP
#define AT_QDP '1'
///CTP
#define AT_CTP '2'
///资管平台
#define AT_QDAM '3'

typedef char TAPITypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcOpenDealTypeType是一个开仓时是否优先平仓类型
/////////////////////////////////////////////////////////////////////////
///优先平仓,再开仓
#define ODT_Optimize '1'
///只开仓
#define ODT_Open '2'

typedef char TOpenDealTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcReffPriceTypeType是一个参考价格类型类型
/////////////////////////////////////////////////////////////////////////
///最新价
#define RPT_Last '1'
///卖1价
#define RPT_Ask '2'
///买1价
#define RPT_Bid '3'

typedef char TReffPriceTypeType;

/////////////////////////////////////////////////////////////////////////
///TFtdcMITStopTypeType是一个MIT和STOP类型类型
/////////////////////////////////////////////////////////////////////////
///MIT
#define MST_MIT '1'
///Stop
#define MST_Stop '2'

typedef char TMITStopTypeType;

#endif
