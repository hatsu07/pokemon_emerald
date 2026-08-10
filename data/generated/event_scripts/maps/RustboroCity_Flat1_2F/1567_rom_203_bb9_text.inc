	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:117 RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll
	.globl gText_Rom_203BB9
gText_Rom_203BB9: @ 0x08203BB9
	.string "ポケモンの ぬいぐるみ だ!$"
	.if (. - gText_Rom_203BB9) > 0xf
	.error "gText_Rom_203BB9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203BB9) < 0xf
	.space 0xf - (. - gText_Rom_203BB9)
	.endif
	@ analyzed canonical ROM range 0x08203BC8-0x08203C71
	@ semantic recovery: script_data; byte-verified against linked ROM
	.byte 0x00
EventScript_JP_08203BC9: @ 0x08203BC9
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0099
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08203C5F @ EventScript_JP_08203C5F
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0000
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8004
	.2byte 0x8008
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00FC
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8009
	.2byte 0x800D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08203C72 @ gText_Rom_203C72
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
	.4byte 0x08203C47 @ EventScript_JP_08203C47
	@ event command: special
	.byte 0x25
	.2byte 0x009F
	@ event command: waitstate
	.byte 0x27
	@ event command: copyvar
	.byte 0x19
	.2byte 0x800A
	.2byte 0x8004
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8004
	.2byte 0x00FF
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08203C47 @ EventScript_JP_08203C47
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8005
	.2byte 0x800A
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00FF
	@ event command: copyvar
	.byte 0x19
	.2byte 0x800B
	.2byte 0x800D
	@ event command: compare_var_to_var
	.byte 0x22
	.2byte 0x800D
	.2byte 0x8009
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x08203C51 @ EventScript_JP_08203C51
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8004
	.2byte 0x8008
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8005
	.2byte 0x800A
	@ event command: special
	.byte 0x25
	.2byte 0x00FD
	@ event command: special
	.byte 0x25
	.2byte 0x00FE
	@ event command: waitstate
	.byte 0x27
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08203CCC @ gText_Rom_203CCC
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x0099
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08203C47: @ 0x08203C47
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08203CF7 @ gText_Rom_203CF7
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08203C51: @ 0x08203C51
	@ event command: bufferspeciesname
	.byte 0x7D
	.byte 0x00
	.2byte 0x8009
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08203CDF @ gText_Rom_203CDF
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08203C5F: @ 0x08203C5F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08203D17 @ gText_Rom_203D17
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08203C69: @ 0x08203C69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08203D38 @ gText_Rom_203D38
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
