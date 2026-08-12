	.globl gUnknown_82EC600
gUnknown_82EC600: @ 0x082EC600
sTurnActionsFuncsTable:
	.4byte HandleAction_UseMove @ [B_ACTION_USE_MOVE]
	.4byte HandleAction_UseItem @ [B_ACTION_USE_ITEM]
	.4byte HandleAction_Switch @ [B_ACTION_SWITCH]
	.4byte HandleAction_Run @ [B_ACTION_RUN]
	.4byte HandleAction_WatchesCarefully @ [B_ACTION_SAFARI_WATCH_CAREFULLY]
	.4byte HandleAction_SafariZoneBallThrow @ [B_ACTION_SAFARI_BALL]
	.4byte HandleAction_ThrowPokeblock @ [B_ACTION_SAFARI_POKEBLOCK]
	.4byte HandleAction_GoNear @ [B_ACTION_SAFARI_GO_NEAR]
	.4byte HandleAction_SafariZoneRun @ [B_ACTION_SAFARI_RUN]
	.4byte HandleAction_WallyBallThrow @ [B_ACTION_WALLY_THROW]
	.4byte sub_080454F4 @ [B_ACTION_EXEC_SCRIPT]
	.4byte sub_0803EEE4 @ [B_ACTION_TRY_FINISH]
	.4byte HandleAction_ActionFinished @ [B_ACTION_FINISHED]
	.4byte HandleAction_NothingIsFainted @ [B_ACTION_NOTHING_FAINTED]
	.globl gUnknown_82EC638
gUnknown_82EC638: @ 0x082EC638
sEndTurnFuncsTable:
	.4byte HandleEndTurn_ContinueBattle @ [0]
	.4byte HandleEndTurn_BattleWon @ [B_OUTCOME_WON]
	.4byte HandleEndTurn_BattleLost @ [B_OUTCOME_LOST]
	.4byte HandleEndTurn_BattleLost @ [B_OUTCOME_DREW]
	.4byte HandleEndTurn_RanFromBattle @ [B_OUTCOME_RAN]
	.4byte HandleEndTurn_FinishBattle @ [B_OUTCOME_PLAYER_TELEPORTED]
	.4byte HandleEndTurn_MonFled @ [B_OUTCOME_MON_FLED]
	.4byte HandleEndTurn_FinishBattle @ [B_OUTCOME_CAUGHT]
	.4byte HandleEndTurn_FinishBattle @ [B_OUTCOME_NO_SAFARI_BALLS]
	.4byte HandleEndTurn_FinishBattle @ [B_OUTCOME_FORFEITED]
	.4byte HandleEndTurn_FinishBattle @ [B_OUTCOME_MON_TELEPORTED]
	.globl gUnknown_82EC664
gUnknown_82EC664: @ 0x082EC664
sPkblToEscapeFactor:
	.byte 0, 0, 0 @ [0] curious, enthralled, ignored
	.byte 3, 5, 0 @ [1] curious, enthralled, ignored
	.byte 2, 3, 0 @ [2] curious, enthralled, ignored
	.byte 1, 2, 0 @ [3] curious, enthralled, ignored
	.byte 1, 1, 0 @ [4] curious, enthralled, ignored
	.globl gUnknown_82EC673
gUnknown_82EC673: @ 0x082EC673
sGoNearCounterToCatchFactor:
	.byte 4, 3, 2, 1
	.globl gUnknown_82EC677
gUnknown_82EC677: @ 0x082EC677
sGoNearCounterToEscapeFactor:
	.byte 4, 4, 4, 4
	.byte 0x00 @ alignment padding
	.globl gUnknown_82EC67C
gUnknown_82EC67C: @ 0x082EC67C
sSoundMovesTable:
	.2byte MOVE_GROWL @ raw=0x002D
	.2byte MOVE_ROAR @ raw=0x002E
	.2byte MOVE_SING @ raw=0x002F
	.2byte MOVE_SUPERSONIC @ raw=0x0030
	.2byte MOVE_SCREECH @ raw=0x0067
	.2byte MOVE_SNORE @ raw=0x00AD
	.2byte MOVE_UPROAR @ raw=0x00FD
	.2byte MOVE_METAL_SOUND @ raw=0x013F
	.2byte MOVE_GRASS_WHISTLE @ raw=0x0140
	.2byte MOVE_HYPER_VOICE @ raw=0x0130
	.2byte 0xFFFF @ terminator
	.2byte 0x0000 @ alignment padding
	.globl gUnknown_82EC694
gUnknown_82EC694: @ 0x082EC694
	.4byte atk00_attackcanceler
	.4byte atk01_accuracycheck
	.4byte atk02_attackstring
	.4byte atk03_ppreduce
	.4byte atk04_critcalc
	.4byte atk05_damagecalc
	.4byte atk06_typecalc
	.4byte atk07_adjustnormaldamage
	.4byte atk08_adjustnormaldamage2
	.4byte atk09_attackanimation
	.4byte atk3A_waitstate
	.4byte atk0B_healthbarupdate
	.4byte atk0C_datahpupdate
	.4byte atk0D_critmessage
	.4byte atk0E_effectivenesssound
	.4byte atk0F_resultmessage
	.4byte atk10_printstring
	.4byte atk11_printselectionstring
	.4byte atk12_waitmessage
	.4byte atk13_printfromtable
	.4byte atk14_printselectionstringfromtable
	.4byte atk15_seteffectwithchance
	.4byte atk16_seteffectprimary
	.4byte atk17_seteffectsecondary
	.4byte atk18_clearstatusfromeffect
	.4byte atk19_tryfaintmon
	.4byte atk1A_dofaintanimation
	.4byte atk1B_cleareffectsonfaint
	.4byte atk1C_jumpifstatus
	.4byte atk1D_jumpifstatus2
	.4byte atk1E_jumpifability
	.4byte atk1F_jumpifsideaffecting
	.4byte atk20_jumpifstat
	.4byte atk21_jumpifstatus3condition
	.4byte atk22_jumpiftype
	.4byte atk23_getexp
	.4byte atk24
	.4byte atk25_movevaluescleanup
	.4byte atk26_setmultihit
	.4byte atk27_decrementmultihit
	.4byte atk28_goto
	.4byte atk29_jumpifbyte
	.4byte atk2A_jumpifhalfword
	.4byte atk2B_jumpifword
	.4byte atk2C_jumpifarrayequal
	.4byte atk2D_jumpifarraynotequal
	.4byte atk2E_setbyte
	.4byte atk2F_addbyte
	.4byte atk30_subbyte
	.4byte atk31_copyarray
	.4byte atk32_copyarraywithindex
	.4byte atk33_orbyte
	.4byte atk34_orhalfword
	.4byte atk35_orword
	.4byte atk36_bicbyte
	.4byte atk37_bichalfword
	.4byte atk38_bicword
	.4byte atk39_pause
	.4byte atk0A_waitanimation
	.4byte atk3B_healthbar_update
	.4byte atk3C_return
	.4byte atk3D_end
	.4byte atk3E_end2
	.4byte atk3F_end3
	.4byte atk40_jumpifaffectedbyprotect
	.4byte atk41_call
	.4byte atk42_jumpiftype2
	.4byte atk43_jumpifabilitypresent
	.4byte atk44_endselectionscript
	.4byte atk45_playanimation
	.4byte atk46_playanimation2
	.4byte atk47_setgraphicalstatchangevalues
	.4byte atk48_playstatchangeanimation
	.4byte sub_0804B7FC
	.4byte atk4A_typecalc2
	.4byte atk4B_returnatktoball
	.4byte atk4C_getswitchedmondata
	.4byte atk4D_switchindataupdate
	.4byte atk4E_switchinanim
	.4byte atk4F_jumpifcantswitch
	.4byte atk50_openpartyscreen
	.4byte atk51_switchhandleorder
	.4byte atk52_switchineffects
	.4byte atk53_trainerslidein
	.4byte atk54_playse
	.4byte atk55_fanfare
	.4byte atk56_playfaintcry
	.4byte atk57
	.4byte atk58_returntoball
	.4byte atk59_handlelearnnewmove
	.4byte atk5A_yesnoboxlearnmove
	.4byte atk5B_yesnoboxstoplearningmove
	.4byte atk5C_hitanimation
	.4byte atk5D_getmoneyreward
	.4byte atk5E
	.4byte atk5F_swapattackerwithtarget
	.4byte atk60_incrementgamestat
	.4byte atk61_drawpartystatussummary
	.4byte atk62_hidepartystatussummary
	.4byte atk63_jumptocalledmove
	.4byte atk64_statusanimation
	.4byte atk65_status2animation
	.4byte atk66_chosenstatusanimation
	.4byte atk67_yesnobox
	.4byte atk68_cancelallactions
	.4byte atk69_adjustsetdamage
	.4byte atk6A_removeitem
	.4byte atk6B_atknameinbuff1
	.4byte atk6C_drawlvlupbox
	.4byte atk6D_resetsentmonsvalue
	.4byte atk6E_setatktoplayer0
	.4byte atk6F_makevisible
	.4byte atk70_recordlastability
	.4byte atk71_buffermovetolearn
	.4byte atk72_jumpifplayerran
	.4byte atk73_hpthresholds
	.4byte atk74_hpthresholds2
	.4byte atk75_useitemonopponent
	.4byte atk76_various
	.4byte atk77_setprotectlike
	.4byte atk78_faintifabilitynotdamp
	.4byte atk79_setatkhptozero
	.4byte atk7A_jumpifnexttargetvalid
	.4byte atk7B_tryhealhalfhealth
	.4byte atk7C_trymirrormove
	.4byte atk7D_setrain
	.4byte atk7E_setreflect
	.4byte atk7F_setseeded
	.4byte atk80_manipulatedamage
	.4byte atk81_trysetrest
	.4byte atk82_jumpifnotfirstturn
	.4byte atk83_nop
	.4byte atk84_jumpifcantmakeasleep
	.4byte atk85_stockpile
	.4byte atk86_stockpiletobasedamage
	.4byte atk87_stockpiletohpheal
	.4byte atk88_negativedamage
	.4byte atk89_statbuffchange
	.4byte atk8A_normalisebuffs
	.4byte atk8B_setbide
	.4byte atk8C_confuseifrepeatingattackends
	.4byte atk8D_setmultihitcounter
	.4byte atk8E_initmultihitstring
	.4byte atk8F_forcerandomswitch
	.4byte atk90_tryconversiontypechange
	.4byte atk91_givepaydaymoney
	.4byte atk92_setlightscreen
	.4byte atk93_tryKO
	.4byte atk94_damagetohalftargethp
	.4byte atk95_setsandstorm
	.4byte atk96_weatherdamage
	.4byte atk97_tryinfatuating
	.4byte atk98_updatestatusicon
	.4byte atk99_setmist
	.4byte atk9A_setfocusenergy
	.4byte atk9B_transformdataexecution
	.4byte atk9C_setsubstitute
	.4byte atk9D_mimicattackcopy
	.4byte atk9E_metronome
	.4byte atk9F_dmgtolevel
	.4byte atkA0_psywavedamageeffect
	.4byte atkA1_counterdamagecalculator
	.4byte atkA2_mirrorcoatdamagecalculator
	.4byte atkA3_disablelastusedattack
	.4byte atkA4_trysetencore
	.4byte atkA5_painsplitdmgcalc
	.4byte atkA6_settypetorandomresistance
	.4byte atkA7_setalwayshitflag
	.4byte atkA8_copymovepermanently
	.4byte atkA9_trychoosesleeptalkmove
	.4byte atkAA_setdestinybond
	.4byte atkAB_trysetdestinybondtohappen
	.4byte atkAC_remaininghptopower
	.4byte atkAD_tryspiteppreduce
	.4byte atkAE_healpartystatus
	.4byte atkAF_cursetarget
	.4byte atkB0_trysetspikes
	.4byte atkB1_setforesight
	.4byte atkB2_trysetperishsong
	.4byte atkB3_rolloutdamagecalculation
	.4byte atkB4_jumpifconfusedandstatmaxed
	.4byte atkB5_furycuttercalc
	.4byte atkB6_happinesstodamagecalculation
	.4byte atkB7_presentdamagecalculation
	.4byte atkB8_setsafeguard
	.4byte atkB9_magnitudedamagecalculation
	.4byte atkBA_jumpifnopursuitswitchdmg
	.4byte atkBB_setsunny
	.4byte atkBC_maxattackhalvehp
	.4byte atkBD_copyfoestats
	.4byte atkBE_rapidspinfree
	.4byte atkBF_setdefensecurlbit
	.4byte atkC0_recoverbasedonsunlight
	.4byte atkC1_hiddenpowercalc
	.4byte atkC2_selectfirstvalidtarget
	.4byte atkC3_trysetfutureattack
	.4byte atkC4_trydobeatup
	.4byte atkC5_setsemiinvulnerablebit
	.4byte sub_08054588
	.4byte atkC7_setminimize
	.4byte atkC8_sethail
	.4byte atkC9_jumpifattackandspecialattackcannotfall
	.4byte atkCA_setforcedtarget
	.4byte atkCB_setcharge
	.4byte atkCC_callterrainattack
	.4byte atkCD_cureifburnedparalysedorpoisoned
	.4byte atkCE_settorment
	.4byte atkCF_jumpifnodamage
	.4byte atkD0_settaunt
	.4byte atkD1_trysethelpinghand
	.4byte atkD2_tryswapitems
	.4byte atkD3_trycopyability
	.4byte atkD4_trywish
	.4byte atkD5_trysetroots
	.4byte atkD6_doubledamagedealtifdamaged
	.4byte atkD7_setyawn
	.4byte atkD8_setdamagetohealthdifference
	.4byte atkD9_scaledamagebyhealthratio
	.4byte atkDA_tryswapabilities
	.4byte atkDB_tryimprison
	.4byte atkDC_trysetgrudge
	.4byte atkDD_weightdamagecalculation
	.4byte atkDE_assistattackselect
	.4byte atkDF_trysetmagiccoat
	.4byte atkE0_trysetsnatch
	.4byte atkE1_trygetintimidatetarget
	.4byte atkE2_switchoutabilities
	.4byte atkE3_jumpifhasnohp
	.4byte atkE4_getsecretpowereffect
	.4byte atkE5_pickup
	.4byte atkE6_docastformchangeanimation
	.4byte atkE7_trycastformdatachange
	.4byte atkE8_settypebasedhalvers
	.4byte atkE9_setweatherballtype
	.4byte atkEA_tryrecycleitem
	.4byte atkEB_settypetoterrain
	.4byte atkEC_pursuitrelated
	.4byte atkEF_snatchsetbattlers
	.4byte atkEE_removelightscreenreflect
	.4byte atkEF_handleballthrow
	.4byte atkF0_givecaughtmon
	.4byte atkF1_trysetcaughtmondexflags
	.4byte atkF2_displaydexinfo
	.4byte atkF3_trygivecaughtmonnick
	.4byte atkF4_subattackerhpbydmg
	.4byte atkF5_removeattackerstatus1
	.4byte atkF6_finishaction
	.4byte atkF7_finishturn
	.4byte atkF8_trainerslideout
	.globl gUnknown_82ECA78
gUnknown_82ECA78: @ 0x082ECA78
	@ analyzed canonical ROM range 0x082ECA78-0x082ECAAB
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x34
	.byte 0x21, 0x64, 0x00, 0x00, 0x24, 0x64, 0x00, 0x00, 0x2B, 0x64, 0x00, 0x00, 0x32, 0x64, 0x00, 0x00
	.byte 0x3C, 0x64, 0x00, 0x00, 0x4B, 0x64, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x85, 0x64, 0x00, 0x00
	.byte 0xA6, 0x64, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0xE9, 0x64, 0x00, 0x00, 0x85, 0x32, 0x00, 0x00
	.byte 0x03, 0x01, 0x00, 0x00
	.globl gUnknown_82ECAAC
gUnknown_82ECAAC: @ 0x082ECAAC
	@ analyzed canonical ROM range 0x082ECAAC-0x082ECAB7
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0xC
	.2byte 0x0010, 0x0008, 0x0004, 0x0003, 0x0002, 0x0000
	.globl gUnknown_82ECAB8
gUnknown_82ECAB8: @ 0x082ECAB8
	@ analyzed canonical ROM range 0x082ECAB8-0x082ECBA7
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0xF0
	.2byte 0x0000, 0x0000, 0x0007, 0x0000, 0x0008, 0x0000, 0x0010, 0x0000
	.2byte 0x0020, 0x0000, 0x0040, 0x0000, 0x0080, 0x0000, 0x0007, 0x0000
	.2byte 0x0008, 0x0000, 0x0000, 0x0000, 0x0070, 0x0000, 0x0000, 0x0000
	.2byte 0x1000, 0x0000, 0xE000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0040, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0400, 0x0000, 0x0800, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0C00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.globl gUnknown_82ECBA8
gUnknown_82ECBA8: @ 0x082ECBA8
	@ confirmed contiguous ROM pointer table: 39 entries from this address
sPointerTable_082ECBA8:
	@ analyzed canonical ROM range 0x082ECBA8-0x082ECC4B
	@ pointer/nullable table
	.4byte 0x082898F2 @ +0x0
	.4byte 0x082898F2 @ +0x4
	.4byte 0x0828990E @ +0x8
	.4byte 0x0828991D @ +0xC
	.4byte 0x0828992C @ +0x10
	.4byte 0x0828993B @ +0x14
	.4byte 0x08289951 @ +0x18
	.4byte 0x0828996E @ +0x1C
	.4byte 0x082898F2 @ +0x20
	.4byte 0x082898F2 @ +0x24
	.4byte 0x0828994A @ +0x28
	.4byte 0x0828995E @ +0x2C
	.4byte 0x082898F2 @ +0x30
	.4byte 0x08289965 @ +0x34
	.4byte 0x0828997C @ +0x38
	.4byte 0x082898F2 @ +0x3C
	.4byte 0x082898F2 @ +0x40
	.4byte 0x082898F2 @ +0x44
	.4byte 0x082898F2 @ +0x48
	.4byte 0x082898F2 @ +0x4C
	.4byte 0x082898F2 @ +0x50
	.4byte 0x082898F2 @ +0x54
	.4byte 0x082898F2 @ +0x58
	.4byte 0x082898F2 @ +0x5C
	.4byte 0x082898F2 @ +0x60
	.4byte 0x082898F2 @ +0x64
	.4byte 0x082898F2 @ +0x68
	.4byte 0x082898F2 @ +0x6C
	.4byte 0x082898F2 @ +0x70
	.4byte 0x082898F2 @ +0x74
	.4byte 0x082898F2 @ +0x78
	.4byte 0x082898F2 @ +0x7C
	.4byte 0x082898F2 @ +0x80
	.4byte 0x082898F2 @ +0x84
	.4byte 0x082898F2 @ +0x88
	.4byte 0x082898F2 @ +0x8C
	.4byte 0x082898F2 @ +0x90
	.4byte 0x082898F2 @ +0x94
	.4byte 0x0828997C @ +0x98
	.4byte 0x07030100 @ +0x9C
	.4byte 0x003F1F0F @ +0xA0
	.globl gUnknown_82ECC4C
gUnknown_82ECC4C: @ 0x082ECC4C
	@ analyzed canonical ROM range 0x082ECC4C-0x082ECC6B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x20
	.byte 0xFF, 0x7F, 0xFF, 0x7F, 0x6D, 0x39, 0x00, 0x00, 0x9A, 0x7F, 0x37, 0x77, 0xBD, 0x7F, 0xAD, 0x62
	.byte 0x2B, 0x5A, 0x0F, 0x67, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x7F, 0x00, 0x44, 0x1F, 0x42, 0x14, 0x00
	.globl gUnknown_82ECC6C
gUnknown_82ECC6C: @ 0x082ECC6C
	@ confirmed GBA LZ77 stream: compressed=0xC7, decompressed=0x480
sLz77Block_082ECC6C:
	@ analyzed canonical ROM range 0x082ECC6C-0x082ECD43
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0xD8
	.byte 0x10, 0x80, 0x04, 0x00, 0x00, 0x30, 0x33, 0x33, 0x33, 0x33, 0x99, 0x99, 0x99, 0x03, 0x93, 0x79
	.byte 0x77, 0x77, 0x93, 0x77, 0xF0, 0x03, 0x40, 0x1E, 0x7F, 0x99, 0x00, 0x0A, 0xF0, 0x01, 0xF0, 0x1F
	.byte 0xF0, 0x1F, 0xF0, 0x1F, 0xF0, 0x1F, 0xF0, 0x1F, 0xFF, 0xF0, 0x1F, 0xF0, 0x1A, 0xF0, 0x1F, 0xF0
	.byte 0x01, 0xF0, 0x1F, 0xF0, 0x1F, 0xF0, 0x1F, 0xF0, 0x1F, 0xF5, 0xF0, 0x1F, 0xF0, 0x1F, 0xF0, 0x01
	.byte 0x30, 0x1F, 0x03, 0x00, 0x1E, 0x33, 0x00, 0x0A, 0x48, 0x38, 0xF0, 0x03, 0x77, 0x38, 0xD1, 0x6F
	.byte 0x63, 0x44, 0x44, 0x7F, 0x44, 0x90, 0x03, 0xD0, 0x4F, 0x00, 0x12, 0xA0, 0x01, 0xF0, 0x1F, 0xF0
	.byte 0x1F, 0xF0, 0x1F, 0xFF, 0xF0, 0x1F, 0xF0, 0x1F, 0xF0, 0x1F, 0xF0, 0x1F, 0xF0, 0x1F, 0xF0, 0x1F
	.byte 0xF0, 0x1F, 0xF0, 0x1F, 0xFE, 0xF0, 0x1F, 0xF0, 0x1F, 0xF0, 0x1F, 0xF0, 0x1F, 0xF0, 0x1F, 0xD1
	.byte 0x6F, 0x00, 0x12, 0x35, 0xE1, 0x90, 0x03, 0xD1, 0x6F, 0x50, 0x03, 0x33, 0x55, 0x55, 0x55, 0x13
	.byte 0x1B, 0xEF, 0xD0, 0x4F, 0x50, 0x01, 0x00, 0x1E, 0x55, 0x11, 0xFB, 0xF0, 0x19, 0xF0, 0x1F, 0xF0
	.byte 0x01, 0xFF, 0xF0, 0x1F, 0xF0, 0x1F, 0xF0, 0x1F, 0xF0, 0x1F, 0xF0, 0x1F, 0xF0, 0x1F, 0xF0, 0x01
	.byte 0xF0, 0x1F, 0xFE, 0xF0, 0x01, 0xF0, 0x1F, 0xF0, 0x1F, 0xF0, 0x1F, 0xF0, 0x1F, 0xD1, 0x6F, 0x30
	.byte 0x03, 0x54, 0x40, 0x35, 0x40, 0x1E, 0x03, 0x00, 0x3A, 0x3E, 0x3B, 0x3F, 0x3C, 0x3D, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00
	.globl gUnknown_82ECD44
gUnknown_82ECD44: @ 0x082ECD44
	@ analyzed canonical ROM range 0x082ECD44-0x082ECD5B
sSpriteTemplate_082ECD44: @ 0x082ECD44
	rodata_sprite_template 0xD75A, 0xD75A, sOamData_MonIconOnLvlUpBanner, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, SpriteCB_MonIconOnLvlUpBox
	.globl gUnknown_82ECD5C
gUnknown_82ECD5C: @ 0x082ECD5C
	@ analyzed canonical ROM range 0x082ECD5C-0x082ECD63
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x8
	.2byte 0xFFFF, 0x7FFF, 0x3FFF, 0x1FFF
	.globl gUnknown_82ECD64
gUnknown_82ECD64: @ 0x082ECD64
	@ analyzed canonical ROM range 0x082ECD64-0x082ECD8B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x28
	.2byte 0x0076, 0x00A5, 0x00A6, 0x0066, 0xFFFE, 0x0044, 0x00F3, 0x00B6
	.2byte 0x00C5, 0x00CB, 0x00C2, 0x00D6, 0x00A8, 0x010A, 0x0121, 0x010E
	.2byte 0x0157, 0x010F, 0x0108, 0xFFFF
	.globl gUnknown_82ECD8C
gUnknown_82ECD8C: @ 0x082ECD8C
	@ analyzed canonical ROM range 0x082ECD8C-0x082ECD97
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0xC
	.byte 0x01, 0xC8, 0x04, 0x96, 0x09, 0x64, 0x10, 0x50, 0x20, 0x28, 0x30, 0x14
	.globl gUnknown_82ECD98
gUnknown_82ECD98: @ 0x082ECD98
	@ analyzed canonical ROM range 0x082ECD98-0x082ECDAB
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x14
	.2byte 0x004E, 0x004B, 0x0059, 0x0038, 0x0039, 0x003D, 0x009D, 0x00F7
	.2byte 0x0081, 0x0081
	.globl gUnknown_82ECDAC
gUnknown_82ECDAC: @ 0x082ECDAC
	@ analyzed canonical ROM range 0x082ECDAC-0x082ECDC3
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x18
	.2byte 0x0064, 0x0014, 0x00FA, 0x0028, 0x01F4, 0x003C, 0x03E8, 0x0050
	.2byte 0x07D0, 0x0064, 0xFFFF, 0xFFFF
	.globl gUnknown_82ECDC4
gUnknown_82ECDC4: @ 0x082ECDC4
	@ analyzed canonical ROM range 0x082ECDC4-0x082ECDE7
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x24
	.2byte 0x000D, 0x000E, 0x0016, 0x0003, 0x0056, 0x0055, 0x004B, 0x0017
	.2byte 0x0002, 0x0015, 0x0044, 0x0040, 0x0018, 0x003F, 0x0013, 0x0019
	.2byte 0x0045, 0x0025
	.globl gUnknown_82ECDE8
gUnknown_82ECDE8: @ 0x082ECDE8
	@ analyzed canonical ROM range 0x082ECDE8-0x082ECDFD
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x16
	.2byte 0x0015, 0x006E, 0x00BB, 0x0013, 0x0022, 0x00B4, 0x014C, 0x0024
	.2byte 0x0121, 0x00C8, 0x013A
	.globl gUnknown_82ECDFE
gUnknown_82ECDFE: @ 0x082ECDFE
	@ analyzed canonical ROM range 0x082ECDFE-0x082ECE06
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x9
	.byte 0x1E, 0x28, 0x32, 0x3C, 0x46, 0x50, 0x5A, 0x5E, 0x62
	.globl gUnknown_82ECE07
gUnknown_82ECE07: @ 0x082ECE07
	@ analyzed canonical ROM range 0x082ECE07-0x082ECE10
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0xA
	.2byte 0x0C0C, 0x0B04, 0x0B0B, 0x0505, 0x0000
	.globl gUnknown_82ECE11
gUnknown_82ECE11: @ 0x082ECE11
	@ analyzed canonical ROM range 0x082ECE11-0x082ECE17
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x7
	.byte 0x14, 0x0F, 0x0A, 0x0F, 0x00, 0x00, 0x00
	.globl gUnknown_82ECE18
gUnknown_82ECE18: @ 0x082ECE18
	@ analyzed canonical ROM range 0x082ECE18-0x082ECE7B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x64
	.byte 0x3D, 0x44, 0x3D, 0x44, 0x14, 0x2D, 0x54, 0x5C, 0x46, 0x55, 0x20, 0x5C, 0x26, 0x45, 0x46, 0x55
	.byte 0x14, 0x5A, 0x46, 0x5C, 0x1E, 0x32, 0x20, 0x5A, 0x38, 0x4E, 0x38, 0x4E, 0x19, 0x28, 0x4B, 0x5A
	.byte 0x45, 0x4B, 0x1C, 0x53, 0x23, 0x2D, 0x1D, 0x23, 0x3E, 0x48, 0x1E, 0x32, 0x3A, 0x5F, 0x58, 0x5E
	.byte 0x22, 0x2D, 0x1D, 0x28, 0x23, 0x28, 0x23, 0x5F, 0x38, 0x4E, 0x38, 0x4E, 0x23, 0x50, 0x22, 0x5E
	.byte 0x2C, 0x5E, 0x22, 0x28, 0x38, 0x4E, 0x38, 0x4E, 0x1E, 0x58, 0x1E, 0x58, 0x1E, 0x2B, 0x1B, 0x21
	.byte 0x28, 0x5A, 0x19, 0x57, 0x12, 0x58, 0x5A, 0x5F, 0x58, 0x5E, 0x16, 0x2A, 0x2A, 0x5C, 0x2A, 0x2F
	.byte 0x38, 0x4E, 0x38, 0x4E
	.globl gUnknown_82ECE7C
gUnknown_82ECE7C: @ 0x082ECE7C
	@ analyzed canonical ROM range 0x082ECE7C-0x082ECE9B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x20
	.2byte 0x0003, 0x0001, 0x0100, 0x0003, 0x0201, 0x0002, 0x0103, 0x0103
	.2byte 0x0302, 0x0203, 0x0001, 0x0202, 0x6003, 0x7EAE, 0x00FF, 0x0000
	.globl gUnknown_82ECE9C
gUnknown_82ECE9C: @ 0x082ECE9C
	.4byte PlayerHandleGetMonData
	.4byte PlayerHandleGetRawMonData
	.4byte PlayerHandleSetMonData
	.4byte PlayerHandleSetRawMonData
	.4byte PlayerHandleLoadMonSprite
	.4byte PlayerHandleSwitchInAnim
	.4byte PlayerHandleReturnMonToBall
	.4byte PlayerHandleDrawTrainerPic
	.4byte PlayerHandleTrainerSlide
	.4byte PlayerHandleTrainerSlideBack
	.4byte PlayerHandleFaintAnimation
	.4byte PlayerHandlePaletteFade
	.4byte PlayerHandleSuccessBallThrowAnim
	.4byte PlayerHandleBallThrowAnim
	.4byte PlayerHandlePause
	.4byte PlayerHandleMoveAnimation
	.4byte PlayerHandlePrintString
	.4byte PlayerHandlePrintSelectionString
	.4byte PlayerHandleChooseAction
	.4byte PlayerHandleUnknownYesNoBox
	.4byte PlayerHandleChooseMove
	.4byte PlayerHandleChooseItem
	.4byte PlayerHandleChoosePokemon
	.4byte PlayerHandleCmd23
	.4byte PlayerHandleHealthBarUpdate
	.4byte PlayerHandleExpUpdate
	.4byte PlayerHandleStatusIconUpdate
	.4byte PlayerHandleStatusAnimation
	.4byte PlayerHandleStatusXor
	.4byte sub_0805C32C
	.4byte PlayerHandleDMA3Transfer
	.4byte PlayerHandlePlayBGM
	.4byte PlayerHandleCmd32
	.4byte sub_0805C428
	.4byte sub_0805C43C
	.4byte sub_0805C450
	.4byte PlayerHandleOneReturnValue
	.4byte PlayerHandleCmd37
	.4byte PlayerHandleCmd38
	.4byte PlayerHandleCmd39
	.4byte PlayerHandleCmd40
	.4byte sub_0805C50C
	.4byte sub_0805C57C
	.4byte PlayerHandlePlaySE
	.4byte PlayerHandlePlayFanfareOrBGM
	.4byte PlayerHandleFaintingCry
	.4byte sub_0805C668
	.4byte PlayerHandleIntroTrainerBallThrow
	.4byte PlayerHandleDrawPartyStatusSummary
	.4byte PlayerHandleHidePartyStatusSummary
	.4byte PlayerHandleEndBounceEffect
	.4byte PlayerHandleSpriteInvisibility
	.4byte PlayerHandleBattleAnimation
	.4byte PlayerHandleLinkStandbyMsg
	.4byte PlayerHandleResetActionMoveSelection
	.4byte PlayerHandleCmd55
	.4byte PlayerCmdEnd
	.globl gUnknown_82ECF80
gUnknown_82ECF80: @ 0x082ECF80
	@ analyzed canonical ROM range 0x082ECF80-0x082ECF8B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0xC
	.byte 0x00, 0x02, 0x03, 0x01, 0x48, 0x48, 0x20, 0x5A, 0x50, 0x50, 0x50, 0x58
	.globl gUnknown_82ECF8C
gUnknown_82ECF8C: @ 0x082ECF8C
	@ analyzed canonical ROM range 0x082ECF8C-0x082ECFA7
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x1C
	.2byte 0x0000, 0x0001, 0x0101, 0x0002, 0x0000, 0x0101, 0x0001, 0x0102
	.2byte 0x0100, 0x0001, 0x0000, 0x0101, 0x0000, 0x0000
	.globl gUnknown_82ECFA8
gUnknown_82ECFA8: @ 0x082ECFA8
	@ analyzed canonical ROM range 0x082ECFA8-0x082ECFAF
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x8
	.byte 0x4C, 0x16, 0xC0, 0x08, 0x80, 0x01, 0xEB, 0xD6
	.globl gUnknown_82ECFB0
gUnknown_82ECFB0: @ 0x082ECFB0
	@ analyzed canonical ROM range 0x082ECFB0-0x082ED00F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x60
	.2byte 0x172C, 0x08C0, 0xD6EB, 0x0000, 0x0000, 0x4000, 0x0400, 0x0000
	.2byte 0x0000, 0x0004, 0x0004, 0x0004, 0x0008, 0x0004, 0xFFFF, 0x0000
	.2byte 0x0000, 0x0044, 0x0004, 0x0044, 0x0008, 0x0044, 0xFFFF, 0x0000
	.2byte 0x0000, 0x0084, 0x0004, 0x0084, 0x0008, 0x0084, 0xFFFF, 0x0000
	.2byte 0x0000, 0x00C4, 0x0004, 0x00C4, 0x0008, 0x00C4, 0xFFFF, 0x0000
	.2byte 0xCFC0, 0x082E, 0xCFD0, 0x082E, 0xCFE0, 0x082E, 0xCFF0, 0x082E
	.globl gUnknown_82ED010
gUnknown_82ED010: @ 0x082ED010
	@ analyzed canonical ROM range 0x082ED010-0x082ED027
sSpriteTemplate_082ED010: @ 0x082ED010
	rodata_sprite_template 0xD6EB, 0xD6EB, sOamData_SmokescreenImpact, sAnims_SmokescreenImpact, 0, gDummySpriteAffineAnimTable, sub_08074DBC
	.globl gUnknown_82ED028
gUnknown_82ED028: @ 0x082ED028
	@ analyzed canonical ROM range 0x082ED028-0x082ED037
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x10
	.byte 0x74, 0xFB, 0xD8, 0x08, 0x80, 0x00, 0x59, 0xD7, 0x00, 0x40, 0x00, 0x40, 0x00, 0x0C, 0x00, 0x00
	.globl gUnknown_82ED038
gUnknown_82ED038: @ 0x082ED038
	@ analyzed canonical ROM range 0x082ED038-0x082ED04F
sSpriteTemplate_082ED038: @ 0x082ED038
	rodata_sprite_template 0xD759, 0xD6FF, sOamData_EnemyShadow, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, SpriteCB_SetInvisible
	.globl gUnknown_82ED050
gUnknown_82ED050: @ 0x082ED050
	@ analyzed canonical ROM range 0x082ED050-0x082ED13B
	@ pointer/nullable table
	.4byte OpponentHandleGetMonData @ +0x0
	.4byte OpponentHandleGetRawMonData @ +0x4
	.4byte OpponentHandleSetMonData @ +0x8
	.4byte OpponentHandleSetRawMonData @ +0xC
	.4byte OpponentHandleLoadMonSprite @ +0x10
	.4byte OpponentHandleSwitchInAnim @ +0x14
	.4byte OpponentHandleReturnMonToBall @ +0x18
	.4byte OpponentHandleDrawTrainerPic @ +0x1C
	.4byte OpponentHandleTrainerSlide @ +0x20
	.4byte OpponentHandleTrainerSlideBack @ +0x24
	.4byte OpponentHandleFaintAnimation @ +0x28
	.4byte OpponentHandlePaletteFade @ +0x2C
	.4byte OpponentHandlePause @ +0x30
	.4byte OpponentHandleSuccessBallThrowAnim @ +0x34
	.4byte OpponentHandleChosenMonReturnValue @ +0x38
	.4byte OpponentHandleMoveAnimation @ +0x3C
	.4byte OpponentHandlePrintString @ +0x40
	.4byte OpponentHandleCmd23 @ +0x44
	.4byte OpponentHandleChooseAction @ +0x48
	.4byte OpponentHandleCmd32 @ +0x4C
	.4byte OpponentHandleChooseMove @ +0x50
	.4byte OpponentHandleCmd40 @ +0x54
	.4byte OpponentHandleChoosePokemon @ +0x58
	.4byte OpponentHandleCmd42 @ +0x5C
	.4byte OpponentHandleHealthBarUpdate @ +0x60
	.4byte OpponentHandleDMA3Transfer @ +0x64
	.4byte OpponentHandleStatusIconUpdate @ +0x68
	.4byte OpponentHandleStatusAnimation @ +0x6C
	.4byte OpponentHandleDataTransfer @ +0x70
	.4byte OpponentHandleEndBounceEffect @ +0x74
	.4byte OpponentHandleExpUpdate @ +0x78
	.4byte OpponentHandleLinkStandbyMsg @ +0x7C
	.4byte OpponentHandleOneReturnValue @ +0x80
	.4byte OpponentHandleOneReturnValue_Duplicate @ +0x84
	.4byte OpponentHandlePlayBGM @ +0x88
	.4byte OpponentHandlePrintSelectionString @ +0x8C
	.4byte OpponentHandleResetActionMoveSelection @ +0x90
	.4byte OpponentHandleStatusXor @ +0x94
	.4byte OpponentHandleTwoReturnValues @ +0x98
	.4byte OpponentHandleUnknownYesNoBox @ +0x9C
	.4byte sub_0806212C @ +0xA0
	.4byte sub_08062154 @ +0xA4
	.4byte OpponentCmdEnd @ +0xA8
	.4byte OpponentHandlePlaySE @ +0xAC
	.4byte OpponentHandlePlayFanfareOrBGM @ +0xB0
	.4byte OpponentHandleFaintingCry @ +0xB4
	.4byte nullsub_26 @ +0xB8
	.4byte OpponentHandleIntroTrainerBallThrow @ +0xBC
	.4byte sub_080624FC @ +0xC0
	.4byte sub_08062658 @ +0xC4
	.4byte sub_080626A8 @ +0xC8
	.4byte OpponentHandleSpriteInvisibility @ +0xCC
	.4byte OpponentHandleBattleAnimation @ +0xD0
	.4byte sub_0806277C @ +0xD4
	.4byte sub_08062788 @ +0xD8
	.4byte OpponentHandleCmd55 @ +0xDC
	.4byte sub_080627D8 @ +0xE0
	@ ANALYSIS: RAW_BLOCK size=0x8
	.4byte 0x98C8B0B0 @ +0xE4
	.4byte 0x20282828 @ +0xE8
	.globl gUnknown_82ED13C
gUnknown_82ED13C: @ 0x082ED13C
	.4byte sub_08064CC4
	.4byte LinkOpponentHandleGetRawMonData
	.4byte LinkOpponentHandleSetMonData
	.4byte LinkOpponentHandleSetRawMonData
	.4byte LinkOpponentHandleLoadMonSprite
	.4byte LinkOpponentHandleSwitchInAnim
	.4byte LinkOpponentHandleReturnMonToBall
	.4byte LinkOpponentHandleDrawTrainerPic
	.4byte LinkOpponentHandleTrainerSlide
	.4byte LinkOpponentHandleTrainerSlideBack
	.4byte LinkOpponentHandleFaintAnimation
	.4byte LinkOpponentHandlePaletteFade
	.4byte LinkOpponentHandleSuccessBallThrowAnim
	.4byte LinkOpponentHandleBallThrowAnim
	.4byte LinkOpponentHandlePause
	.4byte LinkOpponentHandleMoveAnimation
	.4byte LinkOpponentHandlePrintString
	.4byte LinkOpponentHandlePrintSelectionString
	.4byte LinkOpponentHandleChooseAction
	.4byte LinkOpponentHandleUnknownYesNoBox
	.4byte LinkOpponentHandleChooseMove
	.4byte LinkOpponentHandleChooseItem
	.4byte LinkOpponentHandleChoosePokemon
	.4byte LinkOpponentHandleCmd23
	.4byte LinkOpponentHandleHealthBarUpdate
	.4byte LinkOpponentHandleExpUpdate
	.4byte LinkOpponentHandleStatusIconUpdate
	.4byte LinkOpponentHandleStatusAnimation
	.4byte LinkOpponentHandleStatusXor
	.4byte LinkOpponentHandleDataTransfer
	.4byte LinkOpponentHandleDMA3Transfer
	.4byte LinkOpponentHandlePlayBGM
	.4byte LinkOpponentHandleCmd32
	.4byte LinkOpponentHandleTwoReturnValues
	.4byte LinkOpponentHandleChosenMonReturnValue
	.4byte LinkOpponentHandleOneReturnValue
	.4byte LinkOpponentHandleOneReturnValue_Duplicate
	.4byte sub_08066ECC
	.4byte LinkOpponentHandleCmd38
	.4byte LinkOpponentHandleCmd39
	.4byte LinkOpponentHandleCmd40
	.4byte LinkOpponentHandleHitAnimation
	.4byte LinkOpponentHandleCmd42
	.4byte LinkOpponentHandlePlaySE
	.4byte LinkOpponentHandlePlayFanfareOrBGM
	.4byte sub_0806707C
	.4byte LinkOpponentHandleIntroSlide
	.4byte LinkOpponentHandleIntroTrainerBallThrow
	.4byte sub_080672FC
	.4byte LinkOpponentHandleHidePartyStatusSummary
	.4byte LinkOpponentHandleEndBounceEffect
	.4byte LinkOpponentHandleSpriteInvisibility
	.4byte LinkOpponentHandleBattleAnimation
	.4byte LinkOpponentHandleLinkStandbyMsg
	.4byte LinkOpponentHandleResetActionMoveSelection
	.4byte LinkOpponentHandleCmd55
	.4byte LinkOpponentCmdEnd
