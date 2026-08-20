@ Battle script command/static tables decoded from 0475_battle_table.inc.
@ ROM range: 0x082EC694-0x082ECE9B.

	.globl gBattleScriptingCommandsTable
gBattleScriptingCommandsTable: @ 0x082EC694
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

	@ pret/pokeemerald-jp direct xref for 0x082ECA78: battle_script_commands.s: atk01_accuracycheck
	.globl gBattleScriptCommandsData_082ECA78
gBattleScriptCommandsData_082ECA78: @ 0x082ECA78
sAccuracyStageRatios:
	.byte 33, 100, 0, 0 @ stage -6
	.byte 36, 100, 0, 0 @ stage -5
	.byte 43, 100, 0, 0 @ stage -4
	.byte 50, 100, 0, 0 @ stage -3
	.byte 60, 100, 0, 0 @ stage -2
	.byte 75, 100, 0, 0 @ stage -1
	.byte 1, 1, 0, 0 @ stage +0
	.byte 133, 100, 0, 0 @ stage +1
	.byte 166, 100, 0, 0 @ stage +2
	.byte 2, 1, 0, 0 @ stage +3
	.byte 233, 100, 0, 0 @ stage +4
	.byte 133, 50, 0, 0 @ stage +5
	.byte 3, 1, 0, 0 @ stage +6

	@ pret/pokeemerald-jp direct xref for 0x082ECAAC: battle_script_commands.s: atk04_critcalc
	.globl gBattleScriptCommandsData_082ECAAC
gBattleScriptCommandsData_082ECAAC: @ 0x082ECAAC
sCriticalHitChance:
	.2byte 16, 8, 4, 3, 2
	.2byte 0 @ alignment

	@ pret/pokeemerald-jp direct xref for 0x082ECAB8: battle_script_commands.s: SetMoveEffect, atk18_clearstatusfromeffect
	.globl gBattleScriptCommandsData_082ECAB8
gBattleScriptCommandsData_082ECAB8: @ 0x082ECAB8
sStatusFlagsForMoveEffects:
	.4byte MOVE_POINTS_COMBO @ move effect 0
	.4byte MOVE_POINTS_DMG @ move effect 1
	.4byte MOVE_ICE_PUNCH @ move effect 2
	.4byte MOVE_GUST @ move effect 3
	.4byte MOVE_HORN_DRILL @ move effect 4
	.4byte MOVE_PECK @ move effect 5
	.4byte MOVE_CLAMP @ move effect 6
	.4byte MOVE_POINTS_DMG @ move effect 7
	.4byte MOVE_ICE_PUNCH @ move effect 8
	.4byte MOVE_POINTS_COMBO @ move effect 9
	.4byte MOVE_BARRIER @ move effect 10
	.4byte MOVE_POINTS_COMBO @ move effect 11
	.4byte 0x00001000 @ move effect 12
	.4byte 0x0000E000 @ move effect 13
	.4byte MOVE_POINTS_COMBO @ move effect 14
	.4byte MOVE_POINTS_COMBO @ move effect 15
	.4byte MOVE_POINTS_COMBO @ move effect 16
	.4byte MOVE_POINTS_COMBO @ move effect 17
	.4byte MOVE_POINTS_COMBO @ move effect 18
	.4byte MOVE_POINTS_COMBO @ move effect 19
	.4byte MOVE_POINTS_COMBO @ move effect 20
	.4byte MOVE_POINTS_COMBO @ move effect 21
	.4byte MOVE_POINTS_COMBO @ move effect 22
	.4byte MOVE_POINTS_COMBO @ move effect 23
	.4byte MOVE_POINTS_COMBO @ move effect 24
	.4byte MOVE_POINTS_COMBO @ move effect 25
	.4byte MOVE_POINTS_COMBO @ move effect 26
	.4byte MOVE_POINTS_COMBO @ move effect 27
	.4byte MOVE_POINTS_COMBO @ move effect 28
	.4byte 0x00400000 @ move effect 29
	.4byte MOVE_POINTS_COMBO @ move effect 30
	.4byte MOVE_POINTS_COMBO @ move effect 31
	.4byte 0x04000000 @ move effect 32
	.4byte _start @ move effect 33
	.4byte MOVE_POINTS_COMBO @ move effect 34
	.4byte MOVE_POINTS_COMBO @ move effect 35
	.4byte MOVE_POINTS_COMBO @ move effect 36
	.4byte MOVE_POINTS_COMBO @ move effect 37
	.4byte MOVE_POINTS_COMBO @ move effect 38
	.4byte MOVE_POINTS_COMBO @ move effect 39
	.4byte MOVE_POINTS_COMBO @ move effect 40
	.4byte MOVE_POINTS_COMBO @ move effect 41
	.4byte MOVE_POINTS_COMBO @ move effect 42
	.4byte MOVE_POINTS_COMBO @ move effect 43
	.4byte MOVE_POINTS_COMBO @ move effect 44
	.4byte MOVE_POINTS_COMBO @ move effect 45
	.4byte MOVE_POINTS_COMBO @ move effect 46
	.4byte MOVE_POINTS_COMBO @ move effect 47
	.4byte MOVE_POINTS_COMBO @ move effect 48
	.4byte MOVE_POINTS_COMBO @ move effect 49
	.4byte MOVE_POINTS_COMBO @ move effect 50
	.4byte MOVE_POINTS_COMBO @ move effect 51
	.4byte MOVE_POINTS_COMBO @ move effect 52
	.4byte 0x00000C00 @ move effect 53
	.4byte MOVE_POINTS_COMBO @ move effect 54
	.4byte MOVE_POINTS_COMBO @ move effect 55
	.4byte MOVE_POINTS_COMBO @ move effect 56
	.4byte MOVE_POINTS_COMBO @ move effect 57
	.4byte MOVE_POINTS_COMBO @ move effect 58
	.4byte MOVE_POINTS_COMBO @ move effect 59

	@ pret/pokeemerald-jp direct xref for 0x082ECBA8: battle_script_commands.s: SetMoveEffect
	.globl gBattleScriptCommandsData_082ECBA8
gBattleScriptCommandsData_082ECBA8: @ 0x082ECBA8
sMoveEffectBS_Ptrs:
	.4byte 0x082898F2 @ BattleScript_MoveEffectSleep
	.4byte 0x082898F2 @ BattleScript_MoveEffectSleep
	.4byte 0x0828990E @ BattleScript_MoveEffectPoison
	.4byte 0x0828991D @ BattleScript_MoveEffectBurn
	.4byte 0x0828992C @ BattleScript_MoveEffectFreeze
	.4byte 0x0828993B @ BattleScript_MoveEffectParalysis
	.4byte 0x08289951 @ BattleScript_MoveEffectToxic
	.4byte 0x0828996E @ BattleScript_MoveEffectConfusion
	.4byte 0x082898F2 @ BattleScript_MoveEffectSleep
	.4byte 0x082898F2 @ BattleScript_MoveEffectSleep
	.4byte 0x0828994A @ BattleScript_MoveEffectUproar
	.4byte 0x0828995E @ BattleScript_MoveEffectPayDay
	.4byte 0x082898F2 @ BattleScript_MoveEffectSleep
	.4byte 0x08289965 @ BattleScript_MoveEffectWrap
	.4byte 0x0828997C @ BattleScript_MoveEffectRecoil
	.4byte 0x082898F2 @ BattleScript_MoveEffectSleep
	.4byte 0x082898F2 @ BattleScript_MoveEffectSleep
	.4byte 0x082898F2 @ BattleScript_MoveEffectSleep
	.4byte 0x082898F2 @ BattleScript_MoveEffectSleep
	.4byte 0x082898F2 @ BattleScript_MoveEffectSleep
	.4byte 0x082898F2 @ BattleScript_MoveEffectSleep
	.4byte 0x082898F2 @ BattleScript_MoveEffectSleep
	.4byte 0x082898F2 @ BattleScript_MoveEffectSleep
	.4byte 0x082898F2 @ BattleScript_MoveEffectSleep
	.4byte 0x082898F2 @ BattleScript_MoveEffectSleep
	.4byte 0x082898F2 @ BattleScript_MoveEffectSleep
	.4byte 0x082898F2 @ BattleScript_MoveEffectSleep
	.4byte 0x082898F2 @ BattleScript_MoveEffectSleep
	.4byte 0x082898F2 @ BattleScript_MoveEffectSleep
	.4byte 0x082898F2 @ BattleScript_MoveEffectSleep
	.4byte 0x082898F2 @ BattleScript_MoveEffectSleep
	.4byte 0x082898F2 @ BattleScript_MoveEffectSleep
	.4byte 0x082898F2 @ BattleScript_MoveEffectSleep
	.4byte 0x082898F2 @ BattleScript_MoveEffectSleep
	.4byte 0x082898F2 @ BattleScript_MoveEffectSleep
	.4byte 0x082898F2 @ BattleScript_MoveEffectSleep
	.4byte 0x082898F2 @ BattleScript_MoveEffectSleep
	.4byte 0x082898F2 @ BattleScript_MoveEffectSleep
	.4byte 0x0828997C @ BattleScript_MoveEffectRecoil

sUnusedWinTemplate: @ 0x082ECC44
	.byte 0, 1, 3, 7, 15, 31; .2byte 0x003F

	@ pret/pokeemerald-jp direct xref for 0x082ECC4C: battle_script_commands.s: sub_0804ED94
	.globl gBattleScriptCommandsData_082ECC4C
gBattleScriptCommandsData_082ECC4C: @ 0x082ECC4C
sLevelUpBanner_Pal:
	.incbin "build/graphics/battle_interface/level_up_banner.gbapal"

	@ pret/pokeemerald-jp direct xref for 0x082ECC6C: battle_script_commands.s: sub_0804ED94
	.globl gBattleScriptCommandsData_082ECC6C
gBattleScriptCommandsData_082ECC6C: @ 0x082ECC6C
sLevelUpBanner_Gfx:
	.incbin "build/graphics/battle_interface/level_up_banner.4bpp.lz"

sRubyLevelUpStatBoxStats: @ 0x082ECD34
	.byte 0x3A @ MON_DATA_MAX_HP
	.byte 0x3E @ MON_DATA_SPATK
	.byte 0x3B @ MON_DATA_ATK
	.byte 0x3F @ MON_DATA_SPDEF
	.byte 0x3C @ MON_DATA_DEF
	.byte 0x3D @ MON_DATA_SPEED
	.2byte 0 @ alignment

sOamData_MonIconOnLvlUpBanner: @ 0x082ECD3C
	.2byte 0x0000
	.2byte 0x8000
	.2byte 0x0000
	.2byte 0x0000

	@ pret/pokeemerald-jp direct xref for 0x082ECD44: battle_script_commands.s: PutMonIconOnLvlUpBox
	.globl gBattleScriptCommandsData_082ECD44
gBattleScriptCommandsData_082ECD44: @ 0x082ECD44
sSpriteTemplate_MonIconOnLvlUpBanner:
	.2byte 0xD75A, 0xD75A @ TAG_LVLUP_BANNER_MON_ICON
	.4byte sOamData_MonIconOnLvlUpBanner @ sOamData_MonIconOnLvlUpBanner
	.4byte gDummySpriteAnimTable @ gDummySpriteAnimTable
	.4byte 0x00000000 @ NULL
	.4byte gDummySpriteAffineAnimTable @ gDummySpriteAffineAnimTable
	.4byte SpriteCB_MonIconOnLvlUpBox @ SpriteCB_MonIconOnLvlUpBanner

	@ pret/pokeemerald-jp direct xref for 0x082ECD5C: battle_script_commands.s: atk77_setprotectlike
	.globl gBattleScriptCommandsData_082ECD5C
gBattleScriptCommandsData_082ECD5C: @ 0x082ECD5C
sProtectSuccessRates:
	.2byte 0xFFFF, 0x7FFF, 0x3FFF, 0x1FFF @ USHRT_MAX, /2, /4, /8

	@ pret/pokeemerald-jp direct xref for 0x082ECD64: battle_script_commands.s: IsMoveUncopyableByMimic, atk9E_metronome, atkDE_assistattackselect
	.globl gBattleScriptCommandsData_082ECD64
gBattleScriptCommandsData_082ECD64: @ 0x082ECD64
sMovesForbiddenToCopy:
	.2byte MOVE_METRONOME @ 0x0076
	.2byte MOVE_STRUGGLE @ 0x00A5
	.2byte MOVE_SKETCH @ 0x00A6
	.2byte MOVE_MIMIC @ 0x0066
	.2byte 0xFFFE @ 0xFFFE
	.2byte MOVE_COUNTER @ 0x0044
	.2byte MOVE_MIRROR_COAT @ 0x00F3
	.2byte MOVE_PROTECT @ 0x00B6
	.2byte MOVE_DETECT @ 0x00C5
	.2byte MOVE_ENDURE @ 0x00CB
	.2byte MOVE_DESTINY_BOND @ 0x00C2
	.2byte MOVE_SLEEP_TALK @ 0x00D6
	.2byte MOVE_THIEF @ 0x00A8
	.2byte MOVE_FOLLOW_ME @ 0x010A
	.2byte MOVE_SNATCH @ 0x0121
	.2byte MOVE_HELPING_HAND @ 0x010E
	.2byte MOVE_COVET @ 0x0157
	.2byte MOVE_TRICK @ 0x010F
	.2byte MOVE_FOCUS_PUNCH @ 0x0108
	.2byte 0xFFFF @ 0xFFFF

	@ pret/pokeemerald-jp direct xref for 0x082ECD8C: battle_script_commands.s: atkAC_remaininghptopower
	.globl gBattleScriptCommandsData_082ECD8C
gBattleScriptCommandsData_082ECD8C: @ 0x082ECD8C
sFlailHpScaleToPowerTable:
	.byte 1, 200
	.byte 4, 150
	.byte 9, 100
	.byte 16, 80
	.byte 32, 40
	.byte 48, 20

	@ pret/pokeemerald-jp direct xref for 0x082ECD98: battle_script_commands.s: atkCC_callterrainattack
	.globl gBattleScriptCommandsData_082ECD98
gBattleScriptCommandsData_082ECD98: @ 0x082ECD98
sNaturePowerMoves:
	.2byte MOVE_STUN_SPORE @ BATTLE_ENVIRONMENT_GRASS
	.2byte MOVE_RAZOR_LEAF @ BATTLE_ENVIRONMENT_LONG_GRASS
	.2byte MOVE_EARTHQUAKE @ BATTLE_ENVIRONMENT_SAND
	.2byte MOVE_HYDRO_PUMP @ BATTLE_ENVIRONMENT_UNDERWATER
	.2byte MOVE_SURF @ BATTLE_ENVIRONMENT_WATER
	.2byte MOVE_BUBBLE_BEAM @ BATTLE_ENVIRONMENT_POND
	.2byte MOVE_ROCK_SLIDE @ BATTLE_ENVIRONMENT_MOUNTAIN
	.2byte MOVE_SHADOW_BALL @ BATTLE_ENVIRONMENT_CAVE
	.2byte MOVE_SWIFT @ BATTLE_ENVIRONMENT_BUILDING
	.2byte MOVE_SWIFT @ BATTLE_ENVIRONMENT_PLAIN

	@ pret/pokeemerald-jp direct xref for 0x082ECDAC: battle_script_commands.s: atkDD_weightdamagecalculation
	.globl gBattleScriptCommandsData_082ECDAC
gBattleScriptCommandsData_082ECDAC: @ 0x082ECDAC
sWeightToDamageTable:
	.2byte 100, 20
	.2byte 250, 40
	.2byte 500, 60
	.2byte 1000, 80
	.2byte 2000, 100
	.2byte 65535, 65535

	@ pret/pokeemerald-jp direct xref for 0x082ECDC4: battle_script_commands.s: atkE5_pickup
	.globl gBattleScriptCommandsData_082ECDC4
gBattleScriptCommandsData_082ECDC4: @ 0x082ECDC4
sPickupItems:
	.2byte ITEM_POTION @ 0x000D
	.2byte ITEM_ANTIDOTE @ 0x000E
	.2byte ITEM_SUPER_POTION @ 0x0016
	.2byte ITEM_GREAT_BALL @ 0x0003
	.2byte ITEM_REPEL @ 0x0056
	.2byte ITEM_ESCAPE_ROPE @ 0x0055
	.2byte ITEM_X_ATTACK @ 0x004B
	.2byte ITEM_FULL_HEAL @ 0x0017
	.2byte ITEM_ULTRA_BALL @ 0x0002
	.2byte ITEM_HYPER_POTION @ 0x0015
	.2byte ITEM_RARE_CANDY @ 0x0044
	.2byte ITEM_PROTEIN @ 0x0040
	.2byte ITEM_REVIVE @ 0x0018
	.2byte ITEM_HP_UP @ 0x003F
	.2byte ITEM_FULL_RESTORE @ 0x0013
	.2byte ITEM_MAX_REVIVE @ 0x0019
	.2byte ITEM_PP_UP @ 0x0045
	.2byte ITEM_MAX_ELIXIR @ 0x0025

	@ pret/pokeemerald-jp direct xref for 0x082ECDE8: battle_script_commands.s: atkE5_pickup
	.globl gBattleScriptCommandsData_082ECDE8
gBattleScriptCommandsData_082ECDE8: @ 0x082ECDE8
sRarePickupItems:
	.2byte ITEM_HYPER_POTION @ 0x0015
	.2byte ITEM_NUGGET @ 0x006E
	.2byte ITEM_KINGS_ROCK @ 0x00BB
	.2byte ITEM_FULL_RESTORE @ 0x0013
	.2byte ITEM_ETHER @ 0x0022
	.2byte ITEM_WHITE_HERB @ 0x00B4
	.2byte ITEM_TM_REST @ 0x014C
	.2byte ITEM_ELIXIR @ 0x0024
	.2byte ITEM_TM_FOCUS_PUNCH @ 0x0121
	.2byte ITEM_LEFTOVERS @ 0x00C8
	.2byte ITEM_TM_EARTHQUAKE @ 0x013A

	@ pret/pokeemerald-jp direct xref for 0x082ECDFE: battle_script_commands.s: atkE5_pickup
	.globl gBattleScriptCommandsData_082ECDFE
gBattleScriptCommandsData_082ECDFE: @ 0x082ECDFE
sPickupProbabilities:
	.byte 30, 40, 50, 60, 70, 80, 90, 94, 98

	@ pret/pokeemerald-jp direct xref for 0x082ECE07: battle_script_commands.s: atkEB_settypetoterrain
	.globl gBattleScriptCommandsData_082ECE07
gBattleScriptCommandsData_082ECE07: @ 0x082ECE07
sEnvironmentToType:
	.byte TYPE_GRASS, TYPE_GRASS, TYPE_GROUND, TYPE_WATER, TYPE_WATER
	.byte TYPE_WATER, TYPE_ROCK, TYPE_ROCK, TYPE_NORMAL, TYPE_NORMAL

	@ pret/pokeemerald-jp direct xref for 0x082ECE11: battle_script_commands.s: atkEF_handleballthrow
	.globl gBattleScriptCommandsData_082ECE11
gBattleScriptCommandsData_082ECE11: @ 0x082ECE11
sBallCatchBonuses:
	.byte 20, 15, 10, 15
	.byte 0, 0, 0 @ alignment

	@ pret/pokeemerald-jp direct xref for 0x082ECE18: battle_gfx_sfx_util.s: ChooseMoveAndTargetInBattlePalace
	.globl gBattleGfxSfxUtilData_082ECE18
gBattleGfxSfxUtilData_082ECE18:
	.globl gBattlePalaceNatureToMoveGroupLikelihood
gBattlePalaceNatureToMoveGroupLikelihood: @ 0x082ECE18
	.byte 61, 68, 61, 68 @ NATURE_HARDY
	.byte 20, 45, 84, 92 @ NATURE_LONELY
	.byte 70, 85, 32, 92 @ NATURE_BRAVE
	.byte 38, 69, 70, 85 @ NATURE_ADAMANT
	.byte 20, 90, 70, 92 @ NATURE_NAUGHTY
	.byte 30, 50, 32, 90 @ NATURE_BOLD
	.byte 56, 78, 56, 78 @ NATURE_DOCILE
	.byte 25, 40, 75, 90 @ NATURE_RELAXED
	.byte 69, 75, 28, 83 @ NATURE_IMPISH
	.byte 35, 45, 29, 35 @ NATURE_LAX
	.byte 62, 72, 30, 50 @ NATURE_TIMID
	.byte 58, 95, 88, 94 @ NATURE_HASTY
	.byte 34, 45, 29, 40 @ NATURE_SERIOUS
	.byte 35, 40, 35, 95 @ NATURE_JOLLY
	.byte 56, 78, 56, 78 @ NATURE_NAIVE
	.byte 35, 80, 34, 94 @ NATURE_MODEST
	.byte 44, 94, 34, 40 @ NATURE_MILD
	.byte 56, 78, 56, 78 @ NATURE_QUIET
	.byte 30, 88, 30, 88 @ NATURE_BASHFUL
	.byte 30, 43, 27, 33 @ NATURE_RASH
	.byte 40, 90, 25, 87 @ NATURE_CALM
	.byte 18, 88, 90, 95 @ NATURE_GENTLE
	.byte 88, 94, 22, 42 @ NATURE_SASSY
	.byte 42, 92, 42, 47 @ NATURE_CAREFUL
	.byte 56, 78, 56, 78 @ NATURE_QUIRKY

	@ pret/pokeemerald-jp direct xref for 0x082ECE7C: battle_script_commands.s: atk76_various
	.globl gBattleScriptCommandsData_082ECE7C
gBattleScriptCommandsData_082ECE7C: @ 0x082ECE7C
sBattlePalaceNatureToFlavorTextId:
	.byte 3 @ NATURE_HARDY: B_MSG_EAGER_FOR_MORE
	.byte 0 @ NATURE_LONELY: B_MSG_GLINT_IN_EYE
	.byte 1 @ NATURE_BRAVE: B_MSG_GETTING_IN_POS
	.byte 0 @ NATURE_ADAMANT: B_MSG_GLINT_IN_EYE
	.byte 0 @ NATURE_NAUGHTY: B_MSG_GLINT_IN_EYE
	.byte 1 @ NATURE_BOLD: B_MSG_GETTING_IN_POS
	.byte 3 @ NATURE_DOCILE: B_MSG_EAGER_FOR_MORE
	.byte 0 @ NATURE_RELAXED: B_MSG_GLINT_IN_EYE
	.byte 1 @ NATURE_IMPISH: B_MSG_GETTING_IN_POS
	.byte 2 @ NATURE_LAX: B_MSG_GROWL_DEEPLY
	.byte 2 @ NATURE_TIMID: B_MSG_GROWL_DEEPLY
	.byte 0 @ NATURE_HASTY: B_MSG_GLINT_IN_EYE
	.byte 3 @ NATURE_SERIOUS: B_MSG_EAGER_FOR_MORE
	.byte 1 @ NATURE_JOLLY: B_MSG_GETTING_IN_POS
	.byte 3 @ NATURE_NAIVE: B_MSG_EAGER_FOR_MORE
	.byte 1 @ NATURE_MODEST: B_MSG_GETTING_IN_POS
	.byte 2 @ NATURE_MILD: B_MSG_GROWL_DEEPLY
	.byte 3 @ NATURE_QUIET: B_MSG_EAGER_FOR_MORE
	.byte 3 @ NATURE_BASHFUL: B_MSG_EAGER_FOR_MORE
	.byte 2 @ NATURE_RASH: B_MSG_GROWL_DEEPLY
	.byte 1 @ NATURE_CALM: B_MSG_GETTING_IN_POS
	.byte 0 @ NATURE_GENTLE: B_MSG_GLINT_IN_EYE
	.byte 2 @ NATURE_SASSY: B_MSG_GROWL_DEEPLY
	.byte 2 @ NATURE_CAREFUL: B_MSG_GROWL_DEEPLY
	.byte 3 @ NATURE_QUIRKY: B_MSG_EAGER_FOR_MORE

sText_TurnJpn: @ 0x082ECE95
	.string "ターン{EOS}"
	.byte 0, 0, 0 @ alignment
