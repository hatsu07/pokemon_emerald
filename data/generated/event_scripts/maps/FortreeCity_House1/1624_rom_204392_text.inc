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
sAnalyzedEventData_0820439E: @ 0x0820439E
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
	@ event command: end
	.byte 0x02
MapScriptTable_JP_082043AD: @ 0x082043AD
	@ conditional map script table
	.2byte 0x4000, 0x4000
	.4byte EventScript_JP_082043B7
	.2byte 0
EventScript_JP_082043B7: @ 0x082043B7
	@ event command: special
	.byte 0x25
	.2byte 0x00CA
	@ event command: end
	.byte 0x02
EventScript_JP_082043BB: @ 0x082043BB
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x01
	.2byte 0x010E
	.2byte 0x0000
	.4byte 0x082048B1 @ gText_Rom_2048B1
	.4byte 0x08204936 @ gText_Rom_204936
	.4byte 0x082043F0 @ EventScript_JP_082043F0
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x0039
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08204480 @ EventScript_JP_08204480
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00AA
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x08204439 @ EventScript_JP_08204439
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08204A73 @ gText_Rom_204A73
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082043F0: @ 0x082043F0
	@ event command: message
	.byte 0x67
	.4byte 0x08204982 @ gText_Rom_204982
	@ event command: waitmessage
	.byte 0x66
	@ event command: call
	.byte 0x04
	.4byte 0x0824310A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820499A @ gText_Rom_20499A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x04F5
	@ event command: setflag
	.byte 0x29
	.2byte 0x086C
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0006
	@ event command: call
	.byte 0x04
	.4byte 0x08242FCF
	@ event command: call
	.byte 0x04
	.4byte 0x0820445D @ EventScript_JP_0820445D
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x01CC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08204A59 @ gText_Rom_204A59
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitfanfare
	.byte 0x32
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: setflag
	.byte 0x29
	.2byte 0x01D7
	@ event command: setvar
	.byte 0x16
	.2byte 0x40F3
	.2byte 0x0000
	@ event command: setflag
	.byte 0x29
	.2byte 0x008A
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08204439: @ 0x08204439
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0148
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x00
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082430E0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08204A14 @ gText_Rom_204A14
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x00AA
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820445D: @ 0x0820445D
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0148
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x00
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082430EA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08204A14 @ gText_Rom_204A14
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x00AA
	@ event command: return
	.byte 0x03
EventScript_JP_08204480: @ 0x08204480
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x07
	.2byte 0x010E
	.2byte 0x0000
	.4byte 0x08204AD0 @ gText_Rom_204AD0
	.4byte 0x08204B49 @ gText_Rom_204B49
	.4byte 0x08204BA1 @ gText_Rom_204BA1
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08204B57 @ gText_Rom_204B57
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_0820449B: @ 0x0820449B
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x0191
	.2byte 0x0000
	.4byte 0x0820461B @ gText_Rom_20461B
	.4byte 0x08204638 @ gText_Rom_204638
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08204646 @ gText_Rom_204646
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_082044B2: @ 0x082044B2
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x0194
	.2byte 0x0000
	.4byte 0x08204690 @ gText_Rom_204690
	.4byte 0x082046D8 @ gText_Rom_2046D8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082046EA @ gText_Rom_2046EA
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_082044C9: @ 0x082044C9
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x028E
	.2byte 0x0000
	.4byte 0x08204727 @ gText_Rom_204727
	.4byte 0x0820475A @ gText_Rom_20475A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820476A @ gText_Rom_20476A
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_082044E0: @ 0x082044E0
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x028F
	.2byte 0x0000
	.4byte 0x08204793 @ gText_Rom_204793
	.4byte 0x082047B9 @ gText_Rom_2047B9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082047C5 @ gText_Rom_2047C5
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_082044F7: @ 0x082044F7
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x0192
	.2byte 0x0000
	.4byte 0x082047EA @ gText_Rom_2047EA
	.4byte 0x0820481C @ gText_Rom_20481C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820482F @ gText_Rom_20482F
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_0820450E: @ 0x0820450E
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x0323
	.2byte 0x0000
	.4byte 0x08204851 @ gText_Rom_204851
	.4byte 0x08204880 @ gText_Rom_204880
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820488D @ gText_Rom_20488D
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_08204525: @ 0x08204525
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x04F5
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820453A @ EventScript_JP_0820453A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08204578 @ gText_Rom_204578
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820453A: @ 0x0820453A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08204609 @ gText_Rom_204609
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08204544: @ 0x08204544
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x086C
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08204564 @ EventScript_JP_08204564
	@ event command: goto
	.byte 0x05
	.4byte 0x0820456E @ EventScript_JP_0820456E
	.byte 0x02
EventScript_JP_08204554: @ 0x08204554
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x086C
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08204564 @ EventScript_JP_08204564
	@ event command: goto
	.byte 0x05
	.4byte 0x0820456E @ EventScript_JP_0820456E
	.byte 0x02
EventScript_JP_08204564: @ 0x08204564
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08204AAF @ gText_Rom_204AAF
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0820456E: @ 0x0820456E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08204AA0 @ gText_Rom_204AA0
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
