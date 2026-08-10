	@ data/maps/LilycoveCity_House2/scripts.inc:24 LilycoveCity_House2_Text_SleepIsEssential
	.globl gText_Rom_20A03E
gText_Rom_20A03E: @ 0x0820A03E
	.string "むにゃむにゃ……\pねる こは そだつ……\nねむって たいりょく かいふく……$"
	.if (. - gText_Rom_20A03E) > 0x27
	.error "gText_Rom_20A03E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A03E) < 0x27
	.space 0x27 - (. - gText_Rom_20A03E)
	.endif
	@ analyzed canonical ROM range 0x0820A065-0x0820A1C1
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_0820A065: @ 0x0820A065
MapScripts_JP_0820A065: @ 0x0820A065
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_0820A06B
	.byte 0
EventScript_JP_0820A06B: @ 0x0820A06B
	@ event command: random
	.byte 0x8F
	.2byte 0x0004
	@ event command: copyvar
	.byte 0x19
	.2byte 0x4001
	.2byte 0x800D
	@ event command: end
	.byte 0x02
EventScript_JP_0820A074: @ 0x0820A074
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820A1C2 @ gText_Rom_20A1C2
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820A09E @ EventScript_JP_0820A09E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820A278 @ gText_Rom_20A278
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820A09E: @ 0x0820A09E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820A24F @ gText_Rom_20A24F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820A0B3: @ 0x0820A0B3
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820A44F @ gText_Rom_20A44F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820A0CA: @ 0x0820A0CA
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x4001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820A19A @ EventScript_JP_0820A19A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820A1A4 @ EventScript_JP_0820A1A4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820A1AE @ EventScript_JP_0820A1AE
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820A1B8 @ EventScript_JP_0820A1B8
	@ event command: end
	.byte 0x02
EventScript_JP_0820A0FE: @ 0x0820A0FE
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x4001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820A19A @ EventScript_JP_0820A19A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820A1A4 @ EventScript_JP_0820A1A4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820A1AE @ EventScript_JP_0820A1AE
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820A1B8 @ EventScript_JP_0820A1B8
	@ event command: end
	.byte 0x02
EventScript_JP_0820A132: @ 0x0820A132
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x4001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820A19A @ EventScript_JP_0820A19A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820A1A4 @ EventScript_JP_0820A1A4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820A1AE @ EventScript_JP_0820A1AE
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820A1B8 @ EventScript_JP_0820A1B8
	@ event command: end
	.byte 0x02
EventScript_JP_0820A166: @ 0x0820A166
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x4001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820A19A @ EventScript_JP_0820A19A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820A1A4 @ EventScript_JP_0820A1A4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820A1AE @ EventScript_JP_0820A1AE
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820A1B8 @ EventScript_JP_0820A1B8
	@ event command: end
	.byte 0x02
EventScript_JP_0820A19A: @ 0x0820A19A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820A495 @ gText_Rom_20A495
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820A1A4: @ 0x0820A1A4
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820A4B2 @ gText_Rom_20A4B2
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820A1AE: @ 0x0820A1AE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820A4D3 @ gText_Rom_20A4D3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820A1B8: @ 0x0820A1B8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820A4F2 @ gText_Rom_20A4F2
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
