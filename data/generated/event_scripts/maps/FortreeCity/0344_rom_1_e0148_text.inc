	@ data/maps/FortreeCity/scripts.inc:151 FortreeCity_Text_GymSign
	.globl gText_Rom_1E0148
gText_Rom_1E0148: @ 0x081E0148
	.string "ヒワマキ シティ ポケモンジム\nリーダー ナギ\lせかいに はばたく とりつかい!$"
	.if (. - gText_Rom_1E0148) > 0x29
	.error "gText_Rom_1E0148 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0148) < 0x29
	.space 0x29 - (. - gText_Rom_1E0148)
	.endif
	@ analyzed canonical ROM range 0x081E0171-0x081E0695
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_081E0171: @ 0x081E0171
MapScripts_JP_081E0171: @ 0x081E0171
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081E017C
	.byte 0x01
	.4byte EventScript_JP_081E0196
	.byte 0
EventScript_JP_081E017C: @ 0x081E017C
	@ event command: setflag
	.byte 0x29
	.2byte 0x087B
	@ event command: setvar
	.byte 0x16
	.2byte 0x4086
	.2byte 0x0000
	@ event command: setflag
	.byte 0x29
	.2byte 0x0322
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x088A
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08243106
	@ event command: call
	.byte 0x04
	.4byte 0x08242F63
	@ event command: end
	.byte 0x02
EventScript_JP_081E0196: @ 0x081E0196
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0070
	@ event command: call_if
	.byte 0x07
	.byte 0x00
	.4byte 0x081E01A0 @ EventScript_JP_081E01A0
	@ event command: end
	.byte 0x02
EventScript_JP_081E01A0: @ 0x081E01A0
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x004C
	.2byte 0x000C
	.2byte 0x0290
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x004D
	.2byte 0x000C
	.2byte 0x0291
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x004C
	.2byte 0x000D
	.2byte 0x02A0
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x004D
	.2byte 0x000D
	.2byte 0x02A1
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x004C
	.2byte 0x000E
	.2byte 0x0298
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x004D
	.2byte 0x000E
	.2byte 0x0299
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x004C
	.2byte 0x000F
	.2byte 0x02A0
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x004D
	.2byte 0x000F
	.2byte 0x02A1
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x004D
	.2byte 0x0010
	.2byte 0x0298
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x004E
	.2byte 0x0010
	.2byte 0x0299
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x004D
	.2byte 0x0011
	.2byte 0x02A0
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x004E
	.2byte 0x0011
	.2byte 0x02A1
	.2byte 0x0001
	@ event command: return
	.byte 0x03
EventScript_JP_081E020D: @ 0x081E020D
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: dotimebasedevents
	.byte 0x2D
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x092F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E024D @ EventScript_JP_081E024D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08263A58 @ gText_Rom_263A58
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: random
	.byte 0x8F
	.2byte 0x000A
	@ event command: addvar
	.byte 0x17
	.2byte 0x800D
	.2byte 0x0085
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x800D
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
	@ event command: setflag
	.byte 0x29
	.2byte 0x092F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08263A9E @ gText_Rom_263A9E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E024D: @ 0x081E024D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08263ABA @ gText_Rom_263ABA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E0257: @ 0x081E0257
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E0DD4 @ gText_Rom_1E0DD4
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081E0260: @ 0x081E0260
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x086D
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E0275 @ EventScript_JP_081E0275
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E0E2F @ gText_Rom_1E0E2F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E0275: @ 0x081E0275
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E0E50 @ gText_Rom_1E0E50
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E027F: @ 0x081E027F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E0EA8 @ gText_Rom_1E0EA8
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081E0288: @ 0x081E0288
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0070
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E029D @ EventScript_JP_081E029D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E0F11 @ gText_Rom_1E0F11
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E029D: @ 0x081E029D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E0F57 @ gText_Rom_1E0F57
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E02A7: @ 0x081E02A7
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0070
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E02BC @ EventScript_JP_081E02BC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E0FA2 @ gText_Rom_1E0FA2
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E02BC: @ 0x081E02BC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E0FFF @ gText_Rom_1E0FFF
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E02C6: @ 0x081E02C6
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E1021 @ gText_Rom_1E1021
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081E02CF: @ 0x081E02CF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E1092 @ gText_Rom_1E1092
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081E02D8: @ 0x081E02D8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E10D3 @ gText_Rom_1E10D3
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081E02E1: @ 0x081E02E1
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x086D
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E02F6 @ EventScript_JP_081E02F6
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E111B @ gText_Rom_1E111B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E02F6: @ 0x081E02F6
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E11AF @ gText_Rom_1E11AF
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E0300: @ 0x081E0300
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E1431 @ gText_Rom_1E1431
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081E0309: @ 0x081E0309
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E145A @ gText_Rom_1E145A
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081E0312: @ 0x081E0312
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E148D @ gText_Rom_1E148D
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0014
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: end
	.byte 0x02
EventScript_JP_081E0323: @ 0x081E0323
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E14F9 @ gText_Rom_1E14F9
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0013
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: end
	.byte 0x02
EventScript_JP_081E0334: @ 0x081E0334
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E11F4 @ gText_Rom_1E11F4
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081E033D: @ 0x081E033D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E1213 @ gText_Rom_1E1213
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081E0346: @ 0x081E0346
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E1234 @ gText_Rom_1E1234
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081E034F: @ 0x081E034F
	@ event command: lockall
	.byte 0x69
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x8004
	.2byte 0x0089
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x8004
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E036F @ EventScript_JP_081E036F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E1276 @ gText_Rom_1E1276
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081E036F: @ 0x081E036F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E1254 @ gText_Rom_1E1254
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081E0379: @ 0x081E0379
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0864
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E038D @ EventScript_JP_081E038D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E129D @ gText_Rom_1E129D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081E038D: @ 0x081E038D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E12E3 @ gText_Rom_1E12E3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081E0397: @ 0x081E0397
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E1318 @ gText_Rom_1E1318
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081E03A0: @ 0x081E03A0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E1350 @ gText_Rom_1E1350
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081E03A9: @ 0x081E03A9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E1383 @ gText_Rom_1E1383
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081E03B2: @ 0x081E03B2
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00DA
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E03E5 @ EventScript_JP_081E03E5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E0D86 @ gText_Rom_1E0D86
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E0DA6 @ gText_Rom_1E0DA6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: setflag
	.byte 0x29
	.2byte 0x00DA
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081E03E5: @ 0x081E03E5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E0D86 @ gText_Rom_1E0D86
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081E03EF: @ 0x081E03EF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E0C6D @ gText_Rom_1E0C6D
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081E03F8: @ 0x081E03F8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E0CAE @ gText_Rom_1E0CAE
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081E0401: @ 0x081E0401
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E0D08 @ gText_Rom_1E0D08
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081E040A: @ 0x081E040A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E0D4E @ gText_Rom_1E0D4E
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081E0413: @ 0x081E0413
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E042D @ EventScript_JP_081E042D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E04A0 @ EventScript_JP_081E04A0
	@ event command: end
	.byte 0x02
EventScript_JP_081E042D: @ 0x081E042D
	@ event command: playbgm
	.byte 0x33
	.2byte 0x019F
	.byte 0x01
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x011E
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081E047D @ EventScript_JP_081E047D
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x011E
	@ event command: call_if
	.byte 0x07
	.byte 0x00
	.4byte 0x081E0486 @ EventScript_JP_081E0486
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E048F @ EventScript_JP_081E048F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E078B @ gText_Rom_1E078B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x4023
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E0513 @ EventScript_JP_081E0513
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E0523 @ EventScript_JP_081E0523
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E0533 @ EventScript_JP_081E0533
	@ event command: end
	.byte 0x02
EventScript_JP_081E047D: @ 0x081E047D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E0769 @ gText_Rom_1E0769
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: return
	.byte 0x03
EventScript_JP_081E0486: @ 0x081E0486
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E0696 @ gText_Rom_1E0696
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: return
	.byte 0x03
EventScript_JP_081E048F: @ 0x081E048F
	@ event command: setflag
	.byte 0x29
	.2byte 0x011E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E0733 @ gText_Rom_1E0733
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: savebgm
	.byte 0x34
	.2byte 0x0000
	@ event command: fadedefaultbgm
	.byte 0x35
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E04A0: @ 0x081E04A0
	@ event command: playbgm
	.byte 0x33
	.2byte 0x01A5
	.byte 0x01
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x011E
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081E04F0 @ EventScript_JP_081E04F0
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x011E
	@ event command: call_if
	.byte 0x07
	.byte 0x00
	.4byte 0x081E04F9 @ EventScript_JP_081E04F9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E0502 @ EventScript_JP_081E0502
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E0A56 @ gText_Rom_1E0A56
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x4023
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E0543 @ EventScript_JP_081E0543
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E0553 @ EventScript_JP_081E0553
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E0563 @ EventScript_JP_081E0563
	@ event command: end
	.byte 0x02
EventScript_JP_081E04F0: @ 0x081E04F0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E0A2F @ gText_Rom_1E0A2F
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: return
	.byte 0x03
EventScript_JP_081E04F9: @ 0x081E04F9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E09A9 @ gText_Rom_1E09A9
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: return
	.byte 0x03
EventScript_JP_081E0502: @ 0x081E0502
	@ event command: setflag
	.byte 0x29
	.2byte 0x011E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E0A1B @ gText_Rom_1E0A1B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: savebgm
	.byte 0x34
	.2byte 0x0000
	@ event command: fadedefaultbgm
	.byte 0x35
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E0513: @ 0x081E0513
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x03
	.2byte 0x0299
	.2byte 0x0000
	.4byte 0x081E07B9 @ gText_Rom_1E07B9
	@ event command: goto
	.byte 0x05
	.4byte 0x081E0573 @ EventScript_JP_081E0573
	.byte 0x02
EventScript_JP_081E0523: @ 0x081E0523
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x03
	.2byte 0x029A
	.2byte 0x0000
	.4byte 0x081E07B9 @ gText_Rom_1E07B9
	@ event command: goto
	.byte 0x05
	.4byte 0x081E0573 @ EventScript_JP_081E0573
	.byte 0x02
EventScript_JP_081E0533: @ 0x081E0533
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x03
	.2byte 0x0298
	.2byte 0x0000
	.4byte 0x081E07B9 @ gText_Rom_1E07B9
	@ event command: goto
	.byte 0x05
	.4byte 0x081E0573 @ EventScript_JP_081E0573
	.byte 0x02
EventScript_JP_081E0543: @ 0x081E0543
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x03
	.2byte 0x0296
	.2byte 0x0000
	.4byte 0x081E0A72 @ gText_Rom_1E0A72
	@ event command: goto
	.byte 0x05
	.4byte 0x081E05DF @ EventScript_JP_081E05DF
	.byte 0x02
EventScript_JP_081E0553: @ 0x081E0553
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x03
	.2byte 0x0297
	.2byte 0x0000
	.4byte 0x081E0A72 @ gText_Rom_1E0A72
	@ event command: goto
	.byte 0x05
	.4byte 0x081E05DF @ EventScript_JP_081E05DF
	.byte 0x02
EventScript_JP_081E0563: @ 0x081E0563
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x03
	.2byte 0x0295
	.2byte 0x0000
	.4byte 0x081E0A72 @ gText_Rom_1E0A72
	@ event command: goto
	.byte 0x05
	.4byte 0x081E05DF @ EventScript_JP_081E05DF
	.byte 0x02
EventScript_JP_081E0573: @ 0x081E0573
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E080D @ gText_Rom_1E080D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x800D
	.2byte 0x0000
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x086C
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081E05AB @ EventScript_JP_081E05AB
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081E05BB @ EventScript_JP_081E05BB
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081E05C4 @ EventScript_JP_081E05C4
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x02D2
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0351
	@ event command: goto
	.byte 0x05
	.4byte 0x081E063B @ EventScript_JP_081E063B
	.byte 0x02
EventScript_JP_081E05AB: @ 0x081E05AB
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x086E
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E05B5 @ EventScript_JP_081E05B5
	@ event command: return
	.byte 0x03
EventScript_JP_081E05B5: @ 0x081E05B5
	@ event command: setvar
	.byte 0x16
	.2byte 0x800D
	.2byte 0x0001
	@ event command: return
	.byte 0x03
EventScript_JP_081E05BB: @ 0x081E05BB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E085C @ gText_Rom_1E085C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_081E05C4: @ 0x081E05C4
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0864
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E05D6 @ EventScript_JP_081E05D6
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E08C7 @ gText_Rom_1E08C7
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_081E05D6: @ 0x081E05D6
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E0939 @ gText_Rom_1E0939
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_081E05DF: @ 0x081E05DF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E0AAF @ gText_Rom_1E0AAF
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x800D
	.2byte 0x0000
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x086C
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081E05AB @ EventScript_JP_081E05AB
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081E0617 @ EventScript_JP_081E0617
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081E0620 @ EventScript_JP_081E0620
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x02F8
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x032F
	@ event command: goto
	.byte 0x05
	.4byte 0x081E063B @ EventScript_JP_081E063B
	.byte 0x02
EventScript_JP_081E0617: @ 0x081E0617
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E0B06 @ gText_Rom_1E0B06
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_081E0620: @ 0x081E0620
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0864
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E0632 @ EventScript_JP_081E0632
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E0B58 @ gText_Rom_1E0B58
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_081E0632: @ 0x081E0632
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E0BC3 @ gText_Rom_1E0BC3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_081E063B: @ 0x081E063B
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: delay
	.byte 0x28
	.2byte 0x0032
	@ event command: setfieldeffectargument
	.byte 0x9D
	.byte 0x00
	.2byte 0x0001
	@ event command: dofieldeffect
	.byte 0x9C
	.2byte 0x001E
	@ event command: delay
	.byte 0x28
	.2byte 0x000F
	@ event command: removeobject
	.byte 0x53
	.2byte 0x800F
	@ event command: waitfieldeffect
	.byte 0x9E
	.2byte 0x001E
	@ event command: savebgm
	.byte 0x34
	.2byte 0x0000
	@ event command: fadedefaultbgm
	.byte 0x35
	@ event command: setflag
	.byte 0x29
	.2byte 0x0124
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E0662: @ 0x081E0662
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E13A5 @ gText_Rom_1E13A5
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081E0684 @ EventScript_JP_081E0684
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081E068D @ EventScript_JP_081E068D
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E0684: @ 0x081E0684
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E13C0 @ gText_Rom_1E13C0
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_081E068D: @ 0x081E068D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E13F5 @ gText_Rom_1E13F5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
