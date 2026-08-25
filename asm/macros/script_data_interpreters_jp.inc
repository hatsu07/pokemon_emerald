@ JP script-data interpreter command macros.
@
@ These are namespaced copies of the repository's command encodings.
@ Operands are emitted exactly as supplied; semantic constant substitution is
@ intentionally left to later proven refactors.

@ ---- bs ----
	.macro bs_attackcanceler
	.byte 0x00
	.endm

	.macro bs_accuracycheck param0:req, param1:req
	.byte 0x01
	.4byte \param0
	.2byte \param1
	.endm

	.macro bs_attackstring
	.byte 0x02
	.endm

	.macro bs_ppreduce
	.byte 0x03
	.endm

	.macro bs_critcalc
	.byte 0x04
	.endm

	.macro bs_damagecalc
	.byte 0x05
	.endm

	.macro bs_typecalc
	.byte 0x06
	.endm

	.macro bs_adjustnormaldamage
	.byte 0x07
	.endm

	.macro bs_adjustnormaldamage2
	.byte 0x08
	.endm

	.macro bs_attackanimation
	.byte 0x09
	.endm

	.macro bs_waitanimation
	.byte 0x0A
	.endm

	.macro bs_healthbarupdate battler:req
	.byte 0x0B
	.byte \battler
	.endm

	.macro bs_datahpupdate battler:req
	.byte 0x0C
	.byte \battler
	.endm

	.macro bs_critmessage
	.byte 0x0D
	.endm

	.macro bs_effectivenesssound
	.byte 0x0E
	.endm

	.macro bs_resultmessage
	.byte 0x0F
	.endm

	.macro bs_printstring id:req
	.byte 0x10
	.2byte \id
	.endm

	.macro bs_printselectionstring id:req
	.byte 0x11
	.2byte \id
	.endm

	.macro bs_waitmessage param0:req
	.byte 0x12
	.2byte \param0
	.endm

	.macro bs_printfromtable ptr:req
	.byte 0x13
	.4byte \ptr
	.endm

	.macro bs_printselectionstringfromtable ptr:req
	.byte 0x14
	.4byte \ptr
	.endm

	.macro bs_seteffectwithchance
	.byte 0x15
	.endm

	.macro bs_seteffectprimary
	.byte 0x16
	.endm

	.macro bs_seteffectsecondary
	.byte 0x17
	.endm

	.macro bs_clearstatusfromeffect battler:req
	.byte 0x18
	.byte \battler
	.endm

	.macro bs_tryfaintmon battler:req, param1:req, ptr:req
	.byte 0x19
	.byte \battler
	.byte \param1
	.4byte \ptr
	.endm

	.macro bs_dofaintanimation battler:req
	.byte 0x1A
	.byte \battler
	.endm

	.macro bs_cleareffectsonfaint battler:req
	.byte 0x1B
	.byte \battler
	.endm

	.macro bs_jumpifstatus battler:req, status1:req, ptr:req
	.byte 0x1C
	.byte \battler
	.4byte \status1
	.4byte \ptr
	.endm

	.macro bs_jumpifstatus2 battler:req, status2:req, ptr:req
	.byte 0x1D
	.byte \battler
	.4byte \status2
	.4byte \ptr
	.endm

	.macro bs_jumpifability param0:req, ability:req, ptr:req
	.byte 0x1E
	.byte \param0
	.byte \ability
	.4byte \ptr
	.endm

	.macro bs_jumpifsideaffecting battler:req, sidestatus:req, ptr:req
	.byte 0x1F
	.byte \battler
	.2byte \sidestatus
	.4byte \ptr
	.endm

	.macro bs_jumpifstat battler:req, ifflag:req, stat:req, value:req, ptr:req
	.byte 0x20
	.byte \battler
	.byte \ifflag
	.byte \stat
	.byte \value
	.4byte \ptr
	.endm

	.macro bs_jumpifstatus3condition battler:req, status3:req, param2:req, ptr:req
	.byte 0x21
	.byte \battler
	.4byte \status3
	.byte \param2
	.4byte \ptr
	.endm

	.macro bs_jumpiftype battler:req, type:req, ptr:req
	.byte 0x22
	.byte \battler
	.byte \type
	.4byte \ptr
	.endm

	.macro bs_getexp battler:req
	.byte 0x23
	.byte \battler
	.endm

	.macro bs_atk24 ptr:req
	.byte 0x24
	.4byte \ptr
	.endm

	.macro bs_movevaluescleanup
	.byte 0x25
	.endm

	.macro bs_setmultihit value:req
	.byte 0x26
	.byte \value
	.endm

	.macro bs_decrementmultihit value:req
	.byte 0x27
	.4byte \value
	.endm

	.macro bs_goto ptr:req
	.byte 0x28
	.4byte \ptr
	.endm

	.macro bs_jumpifbyte ifflag:req, param1:req, param2:req, param3:req
	.byte 0x29
	.byte \ifflag
	.4byte \param1
	.byte \param2
	.4byte \param3
	.endm

	.macro bs_jumpifhalfword ifflag:req, param1:req, param2:req, param3:req
	.byte 0x2A
	.byte \ifflag
	.4byte \param1
	.2byte \param2
	.4byte \param3
	.endm

	.macro bs_jumpifword ifflag:req, param1:req, param2:req, param3:req
	.byte 0x2B
	.byte \ifflag
	.4byte \param1
	.4byte \param2
	.4byte \param3
	.endm

	.macro bs_jumpifarrayequal param0:req, param1:req, param2:req, param3:req
	.byte 0x2C
	.4byte \param0
	.4byte \param1
	.byte \param2
	.4byte \param3
	.endm

	.macro bs_jumpifarraynotequal param0:req, param1:req, param2:req, param3:req
	.byte 0x2D
	.4byte \param0
	.4byte \param1
	.byte \param2
	.4byte \param3
	.endm

	.macro bs_setbyte ptr:req, param1:req
	.byte 0x2E
	.4byte \ptr
	.byte \param1
	.endm

	.macro bs_addbyte ptr:req, param1:req
	.byte 0x2F
	.4byte \ptr
	.byte \param1
	.endm

	.macro bs_subbyte ptr:req, param1:req
	.byte 0x30
	.4byte \ptr
	.byte \param1
	.endm

	.macro bs_copyarray param0:req, param1:req, param2:req
	.byte 0x31
	.4byte \param0
	.4byte \param1
	.byte \param2
	.endm

	.macro bs_copyarraywithindex param0:req, param1:req, param2:req, param3:req
	.byte 0x32
	.4byte \param0
	.4byte \param1
	.4byte \param2
	.byte \param3
	.endm

	.macro bs_orbyte ptr:req, param1:req
	.byte 0x33
	.4byte \ptr
	.byte \param1
	.endm

	.macro bs_orhalfword ptr:req, param1:req
	.byte 0x34
	.4byte \ptr
	.2byte \param1
	.endm

	.macro bs_orword ptr:req, param1:req
	.byte 0x35
	.4byte \ptr
	.4byte \param1
	.endm

	.macro bs_bicbyte ptr:req, param1:req
	.byte 0x36
	.4byte \ptr
	.byte \param1
	.endm

	.macro bs_bichalfword ptr:req, param1:req
	.byte 0x37
	.4byte \ptr
	.2byte \param1
	.endm

	.macro bs_bicword ptr:req, param1:req
	.byte 0x38
	.4byte \ptr
	.4byte \param1
	.endm

	.macro bs_pause param0:req
	.byte 0x39
	.2byte \param0
	.endm

	.macro bs_waitstate
	.byte 0x3A
	.endm

	.macro bs_healthbar_update battler:req
	.byte 0x3B
	.byte \battler
	.endm

	.macro bs_return
	.byte 0x3C
	.endm

	.macro bs_end
	.byte 0x3D
	.endm

	.macro bs_end2
	.byte 0x3E
	.endm

	.macro bs_end3
	.byte 0x3F
	.endm

	.macro bs_jumpifaffectedbyprotect ptr:req
	.byte 0x40
	.4byte \ptr
	.endm

	.macro bs_call ptr:req
	.byte 0x41
	.4byte \ptr
	.endm

	.macro bs_jumpiftype2 battler:req, type:req, ptr:req
	.byte 0x42
	.byte \battler
	.byte \type
	.4byte \ptr
	.endm

	.macro bs_jumpifabilitypresent ability:req, ptr:req
	.byte 0x43
	.byte \ability
	.4byte \ptr
	.endm

	.macro bs_endselectionscript
	.byte 0x44
	.endm

	.macro bs_playanimation battler:req, param1:req, param2:req
	.byte 0x45
	.byte \battler
	.byte \param1
	.4byte \param2
	.endm

	.macro bs_playanimation2 battler:req, param1:req, param2:req
	.byte 0x46
	.byte \battler
	.4byte \param1
	.4byte \param2
	.endm

	.macro bs_setgraphicalstatchangevalues
	.byte 0x47
	.endm

	.macro bs_playstatchangeanimation battler:req, param1:req, param2:req
	.byte 0x48
	.byte \battler
	.byte \param1
	.byte \param2
	.endm

	.macro bs_moveend param0:req, param1:req
	.byte 0x49
	.byte \param0
	.byte \param1
	.endm

	.macro bs_typecalc2
	.byte 0x4A
	.endm

	.macro bs_returnatktoball
	.byte 0x4B
	.endm

	.macro bs_getswitchedmondata battler:req
	.byte 0x4C
	.byte \battler
	.endm

	.macro bs_switchindataupdate battler:req
	.byte 0x4D
	.byte \battler
	.endm

	.macro bs_switchinanim battler:req, dontclearsubstitutebit:req
	.byte 0x4E
	.byte \battler
	.byte \dontclearsubstitutebit
	.endm

	.macro bs_jumpifcantswitch battler:req, ptr:req
	.byte 0x4F
	.byte \battler
	.4byte \ptr
	.endm

	.macro bs_openpartyscreen param0:req, param1:req
	.byte 0x50
	.byte \param0
	.4byte \param1
	.endm

	.macro bs_switchhandleorder battler:req, param1:req
	.byte 0x51
	.byte \battler
	.byte \param1
	.endm

	.macro bs_switchineffects battler:req
	.byte 0x52
	.byte \battler
	.endm

	.macro bs_trainerslidein battler:req
	.byte 0x53
	.byte \battler
	.endm

	.macro bs_playse param0:req
	.byte 0x54
	.2byte \param0
	.endm

	.macro bs_fanfare param0:req
	.byte 0x55
	.2byte \param0
	.endm

	.macro bs_playfaintcry battler:req
	.byte 0x56
	.byte \battler
	.endm

	.macro bs_atk57
	.byte 0x57
	.endm

	.macro bs_returntoball battler:req
	.byte 0x58
	.byte \battler
	.endm

	.macro bs_handlelearnnewmove param0:req, param1:req, param2:req
	.byte 0x59
	.4byte \param0
	.4byte \param1
	.byte \param2
	.endm

	.macro bs_yesnoboxlearnmove param0:req
	.byte 0x5A
	.4byte \param0
	.endm

	.macro bs_yesnoboxstoplearningmove param0:req
	.byte 0x5B
	.4byte \param0
	.endm

	.macro bs_hitanimation battler:req
	.byte 0x5C
	.byte \battler
	.endm

	.macro bs_getmoneyreward
	.byte 0x5D
	.endm

	.macro bs_atk5E battler:req
	.byte 0x5E
	.byte \battler
	.endm

	.macro bs_swapattackerwithtarget
	.byte 0x5F
	.endm

	.macro bs_incrementgamestat param0:req
	.byte 0x60
	.byte \param0
	.endm

	.macro bs_drawpartystatussummary battler:req
	.byte 0x61
	.byte \battler
	.endm

	.macro bs_hidepartystatussummary battler:req
	.byte 0x62
	.byte \battler
	.endm

	.macro bs_jumptocalledmove param0:req
	.byte 0x63
	.byte \param0
	.endm

	.macro bs_statusanimation battler:req
	.byte 0x64
	.byte \battler
	.endm

	.macro bs_status2animation battler:req, status2:req
	.byte 0x65
	.byte \battler
	.4byte \status2
	.endm

	.macro bs_chosenstatusanimation battler:req, param1:req, param2:req
	.byte 0x66
	.byte \battler
	.byte \param1
	.4byte \param2
	.endm

	.macro bs_yesnobox
	.byte 0x67
	.endm

	.macro bs_cancelallactions
	.byte 0x68
	.endm

	.macro bs_adjustsetdamage
	.byte 0x69
	.endm

	.macro bs_removeitem battler:req
	.byte 0x6A
	.byte \battler
	.endm

	.macro bs_atknameinbuff1
	.byte 0x6B
	.endm

	.macro bs_drawlvlupbox
	.byte 0x6C
	.endm

	.macro bs_resetsentmonsvalue
	.byte 0x6D
	.endm

	.macro bs_setatktoplayer0
	.byte 0x6E
	.endm

	.macro bs_makevisible battler:req
	.byte 0x6F
	.byte \battler
	.endm

	.macro bs_recordlastability battler:req
	.byte 0x70
	.byte \battler
	.endm

	.macro bs_buffermovetolearn
	.byte 0x71
	.endm

	.macro bs_jumpifplayerran ptr:req
	.byte 0x72
	.4byte \ptr
	.endm

	.macro bs_hpthresholds battler:req
	.byte 0x73
	.byte \battler
	.endm

	.macro bs_hpthresholds2 battler:req
	.byte 0x74
	.byte \battler
	.endm

	.macro bs_useitemonopponent
	.byte 0x75
	.endm

	.macro bs_various battler:req, param1:req
	.byte 0x76
	.byte \battler
	.byte \param1
	.endm

	.macro bs_setprotectlike
	.byte 0x77
	.endm

	.macro bs_faintifabilitynotdamp
	.byte 0x78
	.endm

	.macro bs_setatkhptozero
	.byte 0x79
	.endm

	.macro bs_jumpifnexttargetvalid ptr:req
	.byte 0x7A
	.4byte \ptr
	.endm

	.macro bs_tryhealhalfhealth param0:req, battler:req
	.byte 0x7B
	.4byte \param0
	.byte \battler
	.endm

	.macro bs_trymirrormove
	.byte 0x7C
	.endm

	.macro bs_setrain
	.byte 0x7D
	.endm

	.macro bs_setreflect
	.byte 0x7E
	.endm

	.macro bs_setseeded
	.byte 0x7F
	.endm

	.macro bs_manipulatedamage param0:req
	.byte 0x80
	.byte \param0
	.endm

	.macro bs_trysetrest param0:req
	.byte 0x81
	.4byte \param0
	.endm

	.macro bs_jumpifnotfirstturn ptr:req
	.byte 0x82
	.4byte \ptr
	.endm

	.macro bs_nop
	.byte 0x83
	.endm

	.macro bs_jumpifcantmakeasleep param0:req
	.byte 0x84
	.4byte \param0
	.endm

	.macro bs_stockpile
	.byte 0x85
	.endm

	.macro bs_stockpiletobasedamage param0:req
	.byte 0x86
	.4byte \param0
	.endm

	.macro bs_stockpiletohpheal param0:req
	.byte 0x87
	.4byte \param0
	.endm

	.macro bs_negativedamage
	.byte 0x88
	.endm

	.macro bs_statbuffchange param0:req, param1:req
	.byte 0x89
	.byte \param0
	.4byte \param1
	.endm

	.macro bs_normalisebuffs
	.byte 0x8A
	.endm

	.macro bs_setbide
	.byte 0x8B
	.endm

	.macro bs_confuseifrepeatingattackends
	.byte 0x8C
	.endm

	.macro bs_setmultihitcounter param0:req
	.byte 0x8D
	.byte \param0
	.endm

	.macro bs_initmultihitstring
	.byte 0x8E
	.endm

	.macro bs_forcerandomswitch param0:req
	.byte 0x8F
	.4byte \param0
	.endm

	.macro bs_tryconversiontypechange param0:req
	.byte 0x90
	.4byte \param0
	.endm

	.macro bs_givepaydaymoney
	.byte 0x91
	.endm

	.macro bs_setlightscreen
	.byte 0x92
	.endm

	.macro bs_tryKO param0:req
	.byte 0x93
	.4byte \param0
	.endm

	.macro bs_damagetohalftargethp
	.byte 0x94
	.endm

	.macro bs_setsandstorm
	.byte 0x95
	.endm

	.macro bs_weatherdamage
	.byte 0x96
	.endm

	.macro bs_tryinfatuating param0:req
	.byte 0x97
	.4byte \param0
	.endm

	.macro bs_updatestatusicon battler:req
	.byte 0x98
	.byte \battler
	.endm

	.macro bs_setmist
	.byte 0x99
	.endm

	.macro bs_setfocusenergy
	.byte 0x9A
	.endm

	.macro bs_transformdataexecution
	.byte 0x9B
	.endm

	.macro bs_setsubstitute
	.byte 0x9C
	.endm

	.macro bs_mimicattackcopy param0:req
	.byte 0x9D
	.4byte \param0
	.endm

	.macro bs_metronome
	.byte 0x9E
	.endm

	.macro bs_dmgtolevel
	.byte 0x9F
	.endm

	.macro bs_psywavedamageeffect
	.byte 0xA0
	.endm

	.macro bs_counterdamagecalculator param0:req
	.byte 0xA1
	.4byte \param0
	.endm

	.macro bs_mirrorcoatdamagecalculator param0:req
	.byte 0xA2
	.4byte \param0
	.endm

	.macro bs_disablelastusedattack param0:req
	.byte 0xA3
	.4byte \param0
	.endm

	.macro bs_trysetencore param0:req
	.byte 0xA4
	.4byte \param0
	.endm

	.macro bs_painsplitdmgcalc param0:req
	.byte 0xA5
	.4byte \param0
	.endm

	.macro bs_settypetorandomresistance param0:req
	.byte 0xA6
	.4byte \param0
	.endm

	.macro bs_setalwayshitflag
	.byte 0xA7
	.endm

	.macro bs_copymovepermanently param0:req
	.byte 0xA8
	.4byte \param0
	.endm

	.macro bs_trychoosesleeptalkmove param0:req
	.byte 0xA9
	.4byte \param0
	.endm

	.macro bs_setdestinybond
	.byte 0xAA
	.endm

	.macro bs_trysetdestinybondtohappen
	.byte 0xAB
	.endm

	.macro bs_remaininghptopower
	.byte 0xAC
	.endm

	.macro bs_tryspiteppreduce param0:req
	.byte 0xAD
	.4byte \param0
	.endm

	.macro bs_healpartystatus
	.byte 0xAE
	.endm

	.macro bs_cursetarget param0:req
	.byte 0xAF
	.4byte \param0
	.endm

	.macro bs_trysetspikes param0:req
	.byte 0xB0
	.4byte \param0
	.endm

	.macro bs_setforesight
	.byte 0xB1
	.endm

	.macro bs_trysetperishsong param0:req
	.byte 0xB2
	.4byte \param0
	.endm

	.macro bs_rolloutdamagecalculation
	.byte 0xB3
	.endm

	.macro bs_jumpifconfusedandstatmaxed stat:req, ptr:req
	.byte 0xB4
	.byte \stat
	.4byte \ptr
	.endm

	.macro bs_furycuttercalc
	.byte 0xB5
	.endm

	.macro bs_happinesstodamagecalculation
	.byte 0xB6
	.endm

	.macro bs_presentdamagecalculation
	.byte 0xB7
	.endm

	.macro bs_setsafeguard
	.byte 0xB8
	.endm

	.macro bs_magnitudedamagecalculation
	.byte 0xB9
	.endm

	.macro bs_jumpifnopursuitswitchdmg param0:req
	.byte 0xBA
	.4byte \param0
	.endm

	.macro bs_setsunny
	.byte 0xBB
	.endm

	.macro bs_maxattackhalvehp param0:req
	.byte 0xBC
	.4byte \param0
	.endm

	.macro bs_copyfoestats param0:req
	.byte 0xBD
	.4byte \param0
	.endm

	.macro bs_rapidspinfree
	.byte 0xBE
	.endm

	.macro bs_setdefensecurlbit
	.byte 0xBF
	.endm

	.macro bs_recoverbasedonsunlight param0:req
	.byte 0xC0
	.4byte \param0
	.endm

	.macro bs_hiddenpowercalc
	.byte 0xC1
	.endm

	.macro bs_selectfirstvalidtarget
	.byte 0xC2
	.endm

	.macro bs_trysetfutureattack param0:req
	.byte 0xC3
	.4byte \param0
	.endm

	.macro bs_trydobeatup param0:req, param1:req
	.byte 0xC4
	.4byte \param0
	.4byte \param1
	.endm

	.macro bs_setsemiinvulnerablebit
	.byte 0xC5
	.endm

	.macro bs_clearsemiinvulnerablebit
	.byte 0xC6
	.endm

	.macro bs_setminimize
	.byte 0xC7
	.endm

	.macro bs_sethail
	.byte 0xC8
	.endm

	.macro bs_jumpifattackandspecialattackcannotfall ptr:req
	.byte 0xC9
	.4byte \ptr
	.endm

	.macro bs_setforcedtarget
	.byte 0xCA
	.endm

	.macro bs_setcharge
	.byte 0xCB
	.endm

	.macro bs_callterrainattack
	.byte 0xCC
	.endm

	.macro bs_cureifburnedparalysedorpoisoned param0:req
	.byte 0xCD
	.4byte \param0
	.endm

	.macro bs_settorment param0:req
	.byte 0xCE
	.4byte \param0
	.endm

	.macro bs_jumpifnodamage param0:req
	.byte 0xCF
	.4byte \param0
	.endm

	.macro bs_settaunt param0:req
	.byte 0xD0
	.4byte \param0
	.endm

	.macro bs_trysethelpinghand param0:req
	.byte 0xD1
	.4byte \param0
	.endm

	.macro bs_tryswapitems param0:req
	.byte 0xD2
	.4byte \param0
	.endm

	.macro bs_trycopyability param0:req
	.byte 0xD3
	.4byte \param0
	.endm

	.macro bs_trywish param0:req, param1:req
	.byte 0xD4
	.byte \param0
	.4byte \param1
	.endm

	.macro bs_trysetroots param0:req
	.byte 0xD5
	.4byte \param0
	.endm

	.macro bs_doubledamagedealtifdamaged
	.byte 0xD6
	.endm

	.macro bs_setyawn param0:req
	.byte 0xD7
	.4byte \param0
	.endm

	.macro bs_setdamagetohealthdifference param0:req
	.byte 0xD8
	.4byte \param0
	.endm

	.macro bs_scaledamagebyhealthratio
	.byte 0xD9
	.endm

	.macro bs_tryswapabilities param0:req
	.byte 0xDA
	.4byte \param0
	.endm

	.macro bs_tryimprison param0:req
	.byte 0xDB
	.4byte \param0
	.endm

	.macro bs_trysetgrudge param0:req
	.byte 0xDC
	.4byte \param0
	.endm

	.macro bs_weightdamagecalculation
	.byte 0xDD
	.endm

	.macro bs_assistattackselect param0:req
	.byte 0xDE
	.4byte \param0
	.endm

	.macro bs_trysetmagiccoat param0:req
	.byte 0xDF
	.4byte \param0
	.endm

	.macro bs_trysetsnatch param0:req
	.byte 0xE0
	.4byte \param0
	.endm

	.macro bs_trygetintimidatetarget param0:req
	.byte 0xE1
	.4byte \param0
	.endm

	.macro bs_switchoutabilities battler:req
	.byte 0xE2
	.byte \battler
	.endm

	.macro bs_jumpifhasnohp battler:req, param1:req
	.byte 0xE3
	.byte \battler
	.4byte \param1
	.endm

	.macro bs_getsecretpowereffect
	.byte 0xE4
	.endm

	.macro bs_pickup
	.byte 0xE5
	.endm

	.macro bs_docastformchangeanimation
	.byte 0xE6
	.endm

	.macro bs_trycastformdatachange
	.byte 0xE7
	.endm

	.macro bs_settypebasedhalvers param0:req
	.byte 0xE8
	.4byte \param0
	.endm

	.macro bs_setweatherballtype
	.byte 0xE9
	.endm

	.macro bs_tryrecycleitem param0:req
	.byte 0xEA
	.4byte \param0
	.endm

	.macro bs_settypetoterrain param0:req
	.byte 0xEB
	.4byte \param0
	.endm

	.macro bs_pursuitrelated param0:req
	.byte 0xEC
	.4byte \param0
	.endm

	.macro bs_snatchsetbattlers
	.byte 0xED
	.endm

	.macro bs_removelightscreenreflect
	.byte 0xEE
	.endm

	.macro bs_handleballthrow
	.byte 0xEF
	.endm

	.macro bs_givecaughtmon
	.byte 0xF0
	.endm

	.macro bs_trysetcaughtmondexflags param0:req
	.byte 0xF1
	.4byte \param0
	.endm

	.macro bs_displaydexinfo
	.byte 0xF2
	.endm

	.macro bs_trygivecaughtmonnick param0:req
	.byte 0xF3
	.4byte \param0
	.endm

	.macro bs_subattackerhpbydmg
	.byte 0xF4
	.endm

	.macro bs_removeattackerstatus1
	.byte 0xF5
	.endm

	.macro bs_finishaction
	.byte 0xF6
	.endm

	.macro bs_finishturn
	.byte 0xF7
	.endm

	.macro bs_trainerslideout param0:req
	.byte 0xF8
	.byte \param0
	.endm

@ ---- fe ----
	.macro fe_field_eff_loadtiles address:req
	.byte 0x00
	.4byte \address
	.endm

	.macro fe_field_eff_loadfadedpal address:req
	.byte 0x01
	.4byte \address
	.endm

	.macro fe_field_eff_loadpal address:req
	.byte 0x02
	.4byte \address
	.endm

	.macro fe_field_eff_callnative address:req
	.byte 0x03
	.4byte \address
	.endm

	.macro fe_field_eff_end
	.byte 0x04
	.endm

	.macro fe_field_eff_loadgfx_callnative tiles_address:req, palette_address:req, function_address:req
	.byte 0x05
	.4byte \tiles_address
	.4byte \palette_address
	.4byte \function_address
	.endm

	.macro fe_field_eff_loadtiles_callnative tiles_address:req, function_address:req
	.byte 0x06
	.4byte \tiles_address
	.4byte \function_address
	.endm

	.macro fe_field_eff_loadfadedpal_callnative palette_address:req, function_address:req
	.byte 0x07
	.4byte \palette_address
	.4byte \function_address
	.endm

@ ---- bai ----
	.macro bai_if_random_less_than param0:req, param1:req
	.byte 0x00
	.byte \param0
	.4byte \param1
	.endm

	.macro bai_if_random_greater_than param0:req, param1:req
	.byte 0x01
	.byte \param0
	.4byte \param1
	.endm

	.macro bai_if_random_equal param0:req, param1:req
	.byte 0x02
	.byte \param0
	.4byte \param1
	.endm

	.macro bai_if_random_not_equal param0:req, param1:req
	.byte 0x03
	.byte \param0
	.4byte \param1
	.endm

	.macro bai_score param0:req
	.byte 0x04
	.byte \param0
	.endm

	.macro bai_if_hp_less_than battler:req, param1:req, param2:req
	.byte 0x05
	.byte \battler
	.byte \param1
	.4byte \param2
	.endm

	.macro bai_if_hp_more_than battler:req, param1:req, param2:req
	.byte 0x06
	.byte \battler
	.byte \param1
	.4byte \param2
	.endm

	.macro bai_if_hp_equal battler:req, param1:req, param2:req
	.byte 0x07
	.byte \battler
	.byte \param1
	.4byte \param2
	.endm

	.macro bai_if_hp_not_equal battler:req, param1:req, param2:req
	.byte 0x08
	.byte \battler
	.byte \param1
	.4byte \param2
	.endm

	.macro bai_if_status battler:req, status1:req, param2:req
	.byte 0x09
	.byte \battler
	.4byte \status1
	.4byte \param2
	.endm

	.macro bai_if_not_status battler:req, status1:req, param2:req
	.byte 0x0A
	.byte \battler
	.4byte \status1
	.4byte \param2
	.endm

	.macro bai_if_status2 battler:req, status2:req, param2:req
	.byte 0x0B
	.byte \battler
	.4byte \status2
	.4byte \param2
	.endm

	.macro bai_if_not_status2 battler:req, status2:req, param2:req
	.byte 0x0C
	.byte \battler
	.4byte \status2
	.4byte \param2
	.endm

	.macro bai_if_status3 battler:req, status3:req, param2:req
	.byte 0x0D
	.byte \battler
	.4byte \status3
	.4byte \param2
	.endm

	.macro bai_if_not_status3 battler:req, status3:req, param2:req
	.byte 0x0E
	.byte \battler
	.4byte \status3
	.4byte \param2
	.endm

	.macro bai_if_side_affecting battler:req, sidestatus:req, param2:req
	.byte 0x0F
	.byte \battler
	.4byte \sidestatus
	.4byte \param2
	.endm

	.macro bai_if_not_side_affecting battler:req, sidestatus:req, param2:req
	.byte 0x10
	.byte \battler
	.4byte \sidestatus
	.4byte \param2
	.endm

	.macro bai_if_less_than param0:req, param1:req
	.byte 0x11
	.byte \param0
	.4byte \param1
	.endm

	.macro bai_if_more_than param0:req, param1:req
	.byte 0x12
	.byte \param0
	.4byte \param1
	.endm

	.macro bai_if_equal param0:req, param1:req
	.byte 0x13
	.byte \param0
	.4byte \param1
	.endm

	.macro bai_if_not_equal param0:req, param1:req
	.byte 0x14
	.byte \param0
	.4byte \param1
	.endm

	.macro bai_if_less_than_ptr param0:req, param1:req
	.byte 0x15
	.4byte \param0
	.4byte \param1
	.endm

	.macro bai_if_more_than_ptr param0:req, param1:req
	.byte 0x16
	.4byte \param0
	.4byte \param1
	.endm

	.macro bai_if_equal_ptr param0:req, param1:req
	.byte 0x17
	.4byte \param0
	.4byte \param1
	.endm

	.macro bai_if_not_equal_ptr param0:req, param1:req
	.byte 0x18
	.4byte \param0
	.4byte \param1
	.endm

	.macro bai_if_move param0:req, param1:req
	.byte 0x19
	.2byte \param0
	.4byte \param1
	.endm

	.macro bai_if_not_move param0:req, param1:req
	.byte 0x1A
	.2byte \param0
	.4byte \param1
	.endm

	.macro bai_if_in_bytes param0:req, param1:req
	.byte 0x1B
	.4byte \param0
	.4byte \param1
	.endm

	.macro bai_if_not_in_bytes param0:req, param1:req
	.byte 0x1C
	.4byte \param0
	.4byte \param1
	.endm

	.macro bai_if_in_hwords param0:req, param1:req
	.byte 0x1D
	.4byte \param0
	.4byte \param1
	.endm

	.macro bai_if_not_in_hwords param0:req, param1:req
	.byte 0x1E
	.4byte \param0
	.4byte \param1
	.endm

	.macro bai_if_user_has_attacking_move param0:req
	.byte 0x1F
	.4byte \param0
	.endm

	.macro bai_if_user_has_no_attacking_moves param0:req
	.byte 0x20
	.4byte \param0
	.endm

	.macro bai_get_turn_count
	.byte 0x21
	.endm

	.macro bai_get_type param0:req
	.byte 0x22
	.byte \param0
	.endm

	.macro bai_get_considered_move_power
	.byte 0x23
	.endm

	.macro bai_get_how_powerful_move_is
	.byte 0x24
	.endm

	.macro bai_get_last_used_bank_move battler:req
	.byte 0x25
	.byte \battler
	.endm

	.macro bai_if_equal_ param0:req, param1:req
	.byte 0x26
	.byte \param0
	.4byte \param1
	.endm

	.macro bai_if_not_equal_ param0:req, param1:req
	.byte 0x27
	.byte \param0
	.4byte \param1
	.endm

	.macro bai_if_user_goes param0:req, param1:req
	.byte 0x28
	.byte \param0
	.4byte \param1
	.endm

	.macro bai_if_user_doesnt_go param0:req, param1:req
	.byte 0x29
	.byte \param0
	.4byte \param1
	.endm

	.macro bai_nullsub_2A
	.byte 0x2A
	.endm

	.macro bai_nullsub_2B
	.byte 0x2B
	.endm

	.macro bai_count_usable_party_mons battler:req
	.byte 0x2C
	.byte \battler
	.endm

	.macro bai_get_considered_move
	.byte 0x2D
	.endm

	.macro bai_get_considered_move_effect
	.byte 0x2E
	.endm

	.macro bai_get_ability battler:req
	.byte 0x2F
	.byte \battler
	.endm

	.macro bai_get_highest_type_effectiveness
	.byte 0x30
	.endm

	.macro bai_if_type_effectiveness param0:req, param1:req
	.byte 0x31
	.byte \param0
	.4byte \param1
	.endm

	.macro bai_nullsub_32
	.byte 0x32
	.endm

	.macro bai_nullsub_33
	.byte 0x33
	.endm

	.macro bai_if_status_in_party battler:req, status1:req, param2:req
	.byte 0x34
	.byte \battler
	.4byte \status1
	.4byte \param2
	.endm

	.macro bai_if_status_not_in_party battler:req, status1:req, param2:req
	.byte 0x35
	.byte \battler
	.4byte \status1
	.4byte \param2
	.endm

	.macro bai_get_weather
	.byte 0x36
	.endm

	.macro bai_if_effect param0:req, param1:req
	.byte 0x37
	.byte \param0
	.4byte \param1
	.endm

	.macro bai_if_not_effect param0:req, param1:req
	.byte 0x38
	.byte \param0
	.4byte \param1
	.endm

	.macro bai_if_stat_level_less_than battler:req, stat:req, param2:req, param3:req
	.byte 0x39
	.byte \battler
	.byte \stat
	.byte \param2
	.4byte \param3
	.endm

	.macro bai_if_stat_level_more_than battler:req, stat:req, param2:req, param3:req
	.byte 0x3A
	.byte \battler
	.byte \stat
	.byte \param2
	.4byte \param3
	.endm

	.macro bai_if_stat_level_equal battler:req, stat:req, param2:req, param3:req
	.byte 0x3B
	.byte \battler
	.byte \stat
	.byte \param2
	.4byte \param3
	.endm

	.macro bai_if_stat_level_not_equal battler:req, stat:req, param2:req, param3:req
	.byte 0x3C
	.byte \battler
	.byte \stat
	.byte \param2
	.4byte \param3
	.endm

	.macro bai_if_can_faint param0:req
	.byte 0x3D
	.4byte \param0
	.endm

	.macro bai_if_cant_faint param0:req
	.byte 0x3E
	.4byte \param0
	.endm

	.macro bai_if_has_move battler:req, param1:req, param2:req
	.byte 0x3F
	.byte \battler
	.2byte \param1
	.4byte \param2
	.endm

	.macro bai_if_doesnt_have_move battler:req, param1:req, param2:req
	.byte 0x40
	.byte \battler
	.2byte \param1
	.4byte \param2
	.endm

	.macro bai_if_has_move_with_effect battler:req, param1:req, param2:req
	.byte 0x41
	.byte \battler
	.byte \param1
	.4byte \param2
	.endm

	.macro bai_if_doesnt_have_move_with_effect battler:req, param1:req, param2:req
	.byte 0x42
	.byte \battler
	.byte \param1
	.4byte \param2
	.endm

	.macro bai_if_any_move_disabled_or_encored battler:req, param1:req, param2:req
	.byte 0x43
	.byte \battler
	.byte \param1
	.4byte \param2
	.endm

	.macro bai_if_curr_move_disabled_or_encored param0:req, param1:req
	.byte 0x44
	.byte \param0
	.4byte \param1
	.endm

	.macro bai_flee
	.byte 0x45
	.endm

	.macro bai_if_random_safari_flee param0:req
	.byte 0x46
	.4byte \param0
	.endm

	.macro bai_watch
	.byte 0x47
	.endm

	.macro bai_get_hold_effect battler:req
	.byte 0x48
	.byte \battler
	.endm

	.macro bai_get_gender battler:req
	.byte 0x49
	.byte \battler
	.endm

	.macro bai_is_first_turn_for battler:req
	.byte 0x4A
	.byte \battler
	.endm

	.macro bai_get_stockpile_count battler:req
	.byte 0x4B
	.byte \battler
	.endm

	.macro bai_is_double_battle
	.byte 0x4C
	.endm

	.macro bai_get_used_held_item battler:req
	.byte 0x4D
	.byte \battler
	.endm

	.macro bai_get_move_type_from_result
	.byte 0x4E
	.endm

	.macro bai_get_move_power_from_result
	.byte 0x4F
	.endm

	.macro bai_get_move_effect_from_result
	.byte 0x50
	.endm

	.macro bai_get_protect_count battler:req
	.byte 0x51
	.byte \battler
	.endm

	.macro bai_nullsub_52
	.byte 0x52
	.endm

	.macro bai_nullsub_53
	.byte 0x53
	.endm

	.macro bai_nullsub_54
	.byte 0x54
	.endm

	.macro bai_nullsub_55
	.byte 0x55
	.endm

	.macro bai_nullsub_56
	.byte 0x56
	.endm

	.macro bai_nullsub_57
	.byte 0x57
	.endm

	.macro bai_call param0:req
	.byte 0x58
	.4byte \param0
	.endm

	.macro bai_goto param0:req
	.byte 0x59
	.4byte \param0
	.endm

	.macro bai_end
	.byte 0x5A
	.endm

	.macro bai_if_level_cond param0:req, param1:req
	.byte 0x5B
	.byte \param0
	.4byte \param1
	.endm

	.macro bai_if_target_taunted param0:req
	.byte 0x5C
	.4byte \param0
	.endm

	.macro bai_if_target_not_taunted param0:req
	.byte 0x5D
	.4byte \param0
	.endm

	.macro bai_if_target_is_ally param0:req
	.byte 0x5E
	.4byte \param0
	.endm

	.macro bai_is_of_type battler:req, type:req
	.byte 0x5F
	.byte \battler
	.byte \type
	.endm

	.macro bai_check_ability battler:req, ability:req
	.byte 0x60
	.byte \battler
	.byte \ability
	.endm

	.macro bai_if_flash_fired battler:req, param1:req
	.byte 0x61
	.byte \battler
	.4byte \param1
	.endm

	.macro bai_if_holds_item battler:req, param1:req, param2:req
	.byte 0x62
	.byte \battler
	.2byte \param1
	.4byte \param2
	.endm

@ ---- cai ----
	.macro cai_score score:req
	.byte 0x00
	.byte \score
	.endm

	.macro cai_get_turn
	.byte 0x01
	.endm

	.macro cai_if_turn_less_than param:req, addr:req
	.byte 0x02
	.byte \param
	.4byte \addr
	.endm

	.macro cai_if_turn_more_than param:req, addr:req
	.byte 0x03
	.byte \param
	.4byte \addr
	.endm

	.macro cai_if_turn_eq param:req, addr:req
	.byte 0x04
	.byte \param
	.4byte \addr
	.endm

	.macro cai_if_turn_not_eq param:req, addr:req
	.byte 0x05
	.byte \param
	.4byte \addr
	.endm

	.macro cai_get_excitement
	.byte 0x06
	.endm

	.macro cai_if_excitement_less_than param:req, addr:req
	.byte 0x07
	.byte \param
	.4byte \addr
	.endm

	.macro cai_if_excitement_more_than param:req, addr:req
	.byte 0x08
	.byte \param
	.4byte \addr
	.endm

	.macro cai_if_excitement_eq param:req, addr:req
	.byte 0x09
	.byte \param
	.4byte \addr
	.endm

	.macro cai_if_excitement_not_eq param:req, addr:req
	.byte 0x0A
	.byte \param
	.4byte \addr
	.endm

	.macro cai_get_user_order
	.byte 0x0B
	.endm

	.macro cai_if_user_order_less_than param:req, addr:req
	.byte 0x0C
	.byte \param
	.4byte \addr
	.endm

	.macro cai_if_user_order_more_than param:req, addr:req
	.byte 0x0D
	.byte \param
	.4byte \addr
	.endm

	.macro cai_if_user_order_eq param:req, addr:req
	.byte 0x0E
	.byte \param
	.4byte \addr
	.endm

	.macro cai_if_user_order_not_eq param:req, addr:req
	.byte 0x0F
	.byte \param
	.4byte \addr
	.endm

	.macro cai_get_user_condition
	.byte 0x10
	.endm

	.macro cai_if_user_condition_less_than param:req, addr:req
	.byte 0x11
	.byte \param
	.4byte \addr
	.endm

	.macro cai_if_user_condition_more_than param:req, addr:req
	.byte 0x12
	.byte \param
	.4byte \addr
	.endm

	.macro cai_if_user_condition_eq param:req, addr:req
	.byte 0x13
	.byte \param
	.4byte \addr
	.endm

	.macro cai_if_user_condition_not_eq param:req, addr:req
	.byte 0x14
	.byte \param
	.4byte \addr
	.endm

	.macro cai_get_contest_type
	.byte 0x1F
	.endm

	.macro cai_if_contest_type_eq param:req, addr:req
	.byte 0x20
	.byte \param
	.4byte \addr
	.endm

	.macro cai_if_contest_type_not_eq param:req, addr:req
	.byte 0x21
	.byte \param
	.4byte \addr
	.endm

	.macro cai_get_move_excitement
	.byte 0x22
	.endm

	.macro cai_if_move_excitement_less_than param:req, addr:req
	.byte 0x23
	.byte \param
	.4byte \addr
	.endm

	.macro cai_if_move_excitement_more_than param:req, addr:req
	.byte 0x24
	.byte \param
	.4byte \addr
	.endm

	.macro cai_if_move_excitement_eq param:req, addr:req
	.byte 0x25
	.byte \param
	.4byte \addr
	.endm

	.macro cai_if_move_excitement_not_eq param:req, addr:req
	.byte 0x26
	.byte \param
	.4byte \addr
	.endm

	.macro cai_get_effect
	.byte 0x27
	.endm

	.macro cai_if_effect_eq param:req, addr:req
	.byte 0x28
	.byte \param
	.4byte \addr
	.endm

	.macro cai_if_effect_not_eq param:req, addr:req
	.byte 0x29
	.byte \param
	.4byte \addr
	.endm

	.macro cai_get_effect_type
	.byte 0x2A
	.endm

	.macro cai_if_effect_type_eq param:req, addr:req
	.byte 0x2B
	.byte \param
	.4byte \addr
	.endm

	.macro cai_if_effect_type_not_eq param:req, addr:req
	.byte 0x2C
	.byte \param
	.4byte \addr
	.endm

	.macro cai_check_most_appealing_move
	.byte 0x2D
	.endm

	.macro cai_if_most_appealing_move addr:req
	.byte 0x2E
	.4byte \addr
	.endm

	.macro cai_get_move_used_count
	.byte 0x3B
	.endm

	.macro cai_if_move_used_count_less_than param:req, addr:req
	.byte 0x3C
	.byte \param
	.4byte \addr
	.endm

	.macro cai_if_move_used_count_more_than param:req, addr:req
	.byte 0x3D
	.byte \param
	.4byte \addr
	.endm

	.macro cai_if_move_used_count_eq param:req, addr:req
	.byte 0x3E
	.byte \param
	.4byte \addr
	.endm

	.macro cai_if_move_used_count_not_eq param:req, addr:req
	.byte 0x3F
	.byte \param
	.4byte \addr
	.endm

	.macro cai_check_combo_starter
	.byte 0x40
	.endm

	.macro cai_if_combo_starter addr:req
	.byte 0x41
	.4byte \addr
	.endm

	.macro cai_if_not_combo_starter addr:req
	.byte 0x42
	.4byte \addr
	.endm

	.macro cai_check_combo_finisher
	.byte 0x43
	.endm

	.macro cai_if_combo_finisher addr:req
	.byte 0x44
	.4byte \addr
	.endm

	.macro cai_if_not_combo_finisher addr:req
	.byte 0x45
	.4byte \addr
	.endm

	.macro cai_check_would_finish_combo
	.byte 0x46
	.endm

	.macro cai_if_would_finish_combo addr:req
	.byte 0x47
	.4byte \addr
	.endm

	.macro cai_if_would_not_finish_combo addr:req
	.byte 0x48
	.4byte \addr
	.endm

	.macro cai_get_condition mon:req
	.byte 0x49
	.byte \mon
	.endm

	.macro cai_if_condition_less_than mon:req, value:req, addr:req
	.byte 0x4A
	.byte \mon
	.byte \value
	.4byte \addr
	.endm

	.macro cai_if_condition_more_than mon:req, value:req, addr:req
	.byte 0x4B
	.byte \mon
	.byte \value
	.4byte \addr
	.endm

	.macro cai_if_condition_eq mon:req, value:req, addr:req
	.byte 0x4C
	.byte \mon
	.byte \value
	.4byte \addr
	.endm

	.macro cai_if_condition_not_eq mon:req, value:req, addr:req
	.byte 0x4D
	.byte \mon
	.byte \value
	.4byte \addr
	.endm

	.macro cai_get_used_combo_starter mon:req
	.byte 0x4E
	.byte \mon
	.endm

	.macro cai_if_used_combo_starter_less_than mon:req, value:req, addr:req
	.byte 0x4F
	.byte \mon
	.byte \value
	.4byte \addr
	.endm

	.macro cai_if_used_combo_starter_more_than mon:req, value:req, addr:req
	.byte 0x50
	.byte \mon
	.byte \value
	.4byte \addr
	.endm

	.macro cai_if_used_combo_starter_eq mon:req, value:req, addr:req
	.byte 0x51
	.byte \mon
	.byte \value
	.4byte \addr
	.endm

	.macro cai_if_used_combo_starter_not_eq mon:req, value:req, addr:req
	.byte 0x52
	.byte \mon
	.byte \value
	.4byte \addr
	.endm

	.macro cai_check_can_participate mon:req
	.byte 0x53
	.byte \mon
	.endm

	.macro cai_if_can_participate mon:req, addr:req
	.byte 0x54
	.byte \mon
	.4byte \addr
	.endm

	.macro cai_if_cannot_participate mon:req, addr:req
	.byte 0x55
	.byte \mon
	.4byte \addr
	.endm

	.macro cai_contest_58 param:req, addr:req
	.byte 0x58
	.byte \param
	.4byte \addr
	.endm

	.macro cai_if_random param:req, addr:req
	.byte 0x7D
	.byte \param
	.4byte \addr
	.endm

	.macro cai_jump addr:req
	.byte 0x7F
	.4byte \addr
	.endm

	.macro cai_call addr:req
	.byte 0x80
	.4byte \addr
	.endm

	.macro cai_end
	.byte 0x81
	.endm

	.macro cai_check_user_has_exciting_move
	.byte 0x82
	.endm

	.macro cai_if_user_has_exciting_move addr:req
	.byte 0x83
	.4byte \addr
	.endm

	.macro cai_if_user_doesnt_have_exciting_move addr:req
	.byte 0x84
	.4byte \addr
	.endm

	.macro cai_if_effect_in_user_moveset param:req, addr:req
	.byte 0x87
	.2byte \param
	.4byte \addr
	.endm
