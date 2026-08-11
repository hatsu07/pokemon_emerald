	@ data/maps/FortreeCity_House1/scripts.inc:61 FortreeCity_House1_Text_Zigzagoon
	.globl gText_Rom_204392
gText_Rom_204392: @ 0x08204392
	.string "ジグザグマ『グモモォ?$"
	.if (. - gText_Rom_204392) > 0xc
	.error "gText_Rom_204392 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204392) < 0xc
	.space 0xc - (. - gText_Rom_204392)
	.endif
	@ analyzed canonical ROM range 0x0820439E-0x08204577
	@ semantic recovery: script_data; byte-verified against linked ROM
MapScripts_JP_0820439E: @ 0x0820439E
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_082043A9
	.byte 0x04
	.4byte MapScriptTable_JP_082043AD
	.byte 0
EventScript_JP_082043A9: @ 0x082043A9
	@ event command: special
	.byte 0x25
	.2byte 0x00C9
	end
MapScriptTable_JP_082043AD: @ 0x082043AD
	@ conditional map script table
	.2byte 0x4000, 0x4000
	.4byte EventScript_JP_082043B7
	.2byte 0
EventScript_JP_082043B7: @ 0x082043B7
	@ event command: special
	.byte 0x25
	.2byte 0x00CA
	end
EventScript_JP_082043BB: @ 0x082043BB
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x01
	.2byte 0x010E
	.2byte 0x0000
	.4byte 0x082048B1 @ gText_Rom_2048B1
	.4byte 0x08204936 @ gText_Rom_204936
	.4byte 0x082043F0 @ EventScript_JP_082043F0
	specialvar_ 0x800D, 0x0039
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08204480
	checkflag 0x00AA
	goto_if 0x00, EventScript_JP_08204439
	loadword 0x00, gText_Rom_204A73
	callstd 0x04
	release
	end
EventScript_JP_082043F0: @ 0x082043F0
	message gText_Rom_204982
	waitmessage
	call 0x0824310A
	loadword 0x00, gText_Rom_20499A
	callstd 0x04
	setflag 0x04F5
	setflag 0x086C
	setvar 0x8008, 0x0006
	call 0x08242FCF
	call EventScript_JP_0820445D
	closemessage
	delay 0x001E
	playfanfare 0x01CC
	loadword 0x00, gText_Rom_204A59
	callstd 0x04
	waitfanfare
	closemessage
	delay 0x001E
	setflag 0x01D7
	setvar 0x40F3, 0x0000
	setflag 0x008A
	release
	end
EventScript_JP_08204439: @ 0x08204439
	setorcopyvar 0x8000, 0x0148
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	loadword 0x00, gText_Rom_204A14
	callstd 0x04
	setflag 0x00AA
	release
	end
EventScript_JP_0820445D: @ 0x0820445D
	setorcopyvar 0x8000, 0x0148
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430EA
	loadword 0x00, gText_Rom_204A14
	callstd 0x04
	setflag 0x00AA
	return
EventScript_JP_08204480: @ 0x08204480
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x07
	.2byte 0x010E
	.2byte 0x0000
	.4byte 0x08204AD0 @ gText_Rom_204AD0
	.4byte 0x08204B49 @ gText_Rom_204B49
	.4byte 0x08204BA1 @ gText_Rom_204BA1
	loadword 0x00, gText_Rom_204B57
	callstd 0x06
	end
EventScript_JP_0820449B: @ 0x0820449B
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x0191
	.2byte 0x0000
	.4byte 0x0820461B @ gText_Rom_20461B
	.4byte 0x08204638 @ gText_Rom_204638
	loadword 0x00, gText_Rom_204646
	callstd 0x06
	end
EventScript_JP_082044B2: @ 0x082044B2
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x0194
	.2byte 0x0000
	.4byte 0x08204690 @ gText_Rom_204690
	.4byte 0x082046D8 @ gText_Rom_2046D8
	loadword 0x00, gText_Rom_2046EA
	callstd 0x06
	end
EventScript_JP_082044C9: @ 0x082044C9
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x028E
	.2byte 0x0000
	.4byte 0x08204727 @ gText_Rom_204727
	.4byte 0x0820475A @ gText_Rom_20475A
	loadword 0x00, gText_Rom_20476A
	callstd 0x06
	end
EventScript_JP_082044E0: @ 0x082044E0
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x028F
	.2byte 0x0000
	.4byte 0x08204793 @ gText_Rom_204793
	.4byte 0x082047B9 @ gText_Rom_2047B9
	loadword 0x00, gText_Rom_2047C5
	callstd 0x06
	end
EventScript_JP_082044F7: @ 0x082044F7
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x0192
	.2byte 0x0000
	.4byte 0x082047EA @ gText_Rom_2047EA
	.4byte 0x0820481C @ gText_Rom_20481C
	loadword 0x00, gText_Rom_20482F
	callstd 0x06
	end
EventScript_JP_0820450E: @ 0x0820450E
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x0323
	.2byte 0x0000
	.4byte 0x08204851 @ gText_Rom_204851
	.4byte 0x08204880 @ gText_Rom_204880
	loadword 0x00, gText_Rom_20488D
	callstd 0x06
	end
EventScript_JP_08204525: @ 0x08204525
	lock
	faceplayer
	checkflag 0x04F5
	goto_if 0x01, EventScript_JP_0820453A
	loadword 0x00, gText_Rom_204578
	callstd 0x04
	release
	end
EventScript_JP_0820453A: @ 0x0820453A
	loadword 0x00, gText_Rom_204609
	callstd 0x04
	release
	end
EventScript_JP_08204544: @ 0x08204544
	lockall
	checkflag 0x086C
	goto_if 0x01, EventScript_JP_08204564
	goto EventScript_JP_0820456E
	.byte 0x02
EventScript_JP_08204554: @ 0x08204554
	lockall
	checkflag 0x086C
	goto_if 0x01, EventScript_JP_08204564
	goto EventScript_JP_0820456E
	.byte 0x02
EventScript_JP_08204564: @ 0x08204564
	loadword 0x00, gText_Rom_204AAF
	callstd 0x04
	releaseall
	end
EventScript_JP_0820456E: @ 0x0820456E
	loadword 0x00, gText_Rom_204AA0
	callstd 0x04
	releaseall
	end
