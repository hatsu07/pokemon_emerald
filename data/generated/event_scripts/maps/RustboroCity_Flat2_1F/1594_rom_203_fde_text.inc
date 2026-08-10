	@ data/maps/RustboroCity_Flat2_1F/scripts.inc:21 RustboroCity_Flat2_1F_Text_Skitty
	.globl gText_Rom_203FDE
gText_Rom_203FDE: @ 0x08203FDE
	.string "エネコ『ぎゃー!!$"
	.if (. - gText_Rom_203FDE) > 0xa
	.error "gText_Rom_203FDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203FDE) < 0xa
	.space 0xa - (. - gText_Rom_203FDE)
	.endif
	@ analyzed canonical ROM range 0x08203FE8-0x0820402A
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08203FE8: @ 0x08203FE8
	.byte 0x00
EventScript_JP_08203FE9: @ 0x08203FE9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820402B @ gText_Rom_20402B
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08203FF2: @ 0x08203FF2
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00D5
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08204021 @ EventScript_JP_08204021
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820404B @ gText_Rom_20404B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x000C
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
	.2byte 0x00D5
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08204021: @ 0x08204021
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08204087 @ gText_Rom_204087
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
