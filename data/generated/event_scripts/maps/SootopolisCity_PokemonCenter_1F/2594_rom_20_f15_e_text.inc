	@ data/maps/SootopolisCity_PokemonCenter_1F/scripts.inc:55 SootopolisCity_PokemonCenter_1F_Text_ArentPokemonOurFriends
	.globl gText_Rom_20F15E
gText_Rom_20F15E: @ 0x0820F15E
	.string "ポケモンって\nあたしたちの ともだちじゃ…… ないの?\pどうして\nあんなふうに あばれて いるの?$"
	.if (. - gText_Rom_20F15E) > 0x32
	.error "gText_Rom_20F15E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F15E) < 0x32
	.space 0x32 - (. - gText_Rom_20F15E)
	.endif
	@ analyzed canonical ROM range 0x0820F190-0x0820F239
	@ semantic recovery: script_data; byte-verified against linked ROM
	.byte 0x02, 0x39, 0x69, 0x24, 0x08, 0x04, 0x6A, 0x68, 0x24, 0x08, 0x01, 0xBC, 0x68, 0x24, 0x08, 0x03
	.byte 0xCD, 0x67, 0x24, 0x08, 0x00, 0x04, 0xB2, 0x6B, 0x24, 0x08, 0x02, 0x04, 0xAD, 0x6D, 0x24, 0x08
	.byte 0x02, 0x04, 0xD6, 0x6E, 0x24, 0x08, 0x02, 0x00
EventScript_JP_0820F1B8: @ 0x0820F1B8
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: message
	.byte 0x67
	.4byte 0x0824390F @ gText_Rom_24390F
	@ event command: waitmessage
	.byte 0x66
	@ event command: pokemart
	.byte 0x86
	.4byte 0x0820F1D0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08243920 @ gText_Rom_243920
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
	.byte 0x00, 0x02, 0x00, 0x15, 0x00, 0x14, 0x00, 0x17, 0x00, 0x18, 0x00, 0x54, 0x00, 0x4B, 0x00, 0x4C
	.byte 0x00, 0x80, 0x00, 0x00, 0x00, 0x6C, 0x02
EventScript_JP_0820F1E6: @ 0x0820F1E6
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CA
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x0820F206 @ EventScript_JP_0820F206
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0081
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x0820F206 @ EventScript_JP_0820F206
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820F267 @ gText_Rom_20F267
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820F206: @ 0x0820F206
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820F23A @ gText_Rom_20F23A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820F210: @ 0x0820F210
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CA
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x0820F230 @ EventScript_JP_0820F230
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0081
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x0820F230 @ EventScript_JP_0820F230
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820F2E8 @ gText_Rom_20F2E8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820F230: @ 0x0820F230
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820F299 @ gText_Rom_20F299
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
