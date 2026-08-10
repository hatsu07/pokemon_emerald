	@ data/maps/RustboroCity_House3/scripts.inc:29 RustboroCity_House3_Text_Pekachu
	.globl gText_Rom_2041BF
gText_Rom_2041BF: @ 0x082041BF
	.string "ペカチュウ『ぺかー!$"
	.if (. - gText_Rom_2041BF) > 0xb
	.error "gText_Rom_2041BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2041BF) < 0xb
	.space 0xb - (. - gText_Rom_2041BF)
	.endif
	@ analyzed canonical ROM range 0x082041CA-0x0820428A
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_082041CA: @ 0x082041CA
	.byte 0x00
EventScript_JP_082041CB: @ 0x082041CB
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x009B
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08204265 @ EventScript_JP_08204265
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0001
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
	.4byte 0x0820428B @ gText_Rom_20428B
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
	.4byte 0x0820424D @ EventScript_JP_0820424D
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
	.4byte 0x0820424D @ EventScript_JP_0820424D
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
	.4byte 0x08204257 @ EventScript_JP_08204257
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
	@ event command: bufferspeciesname
	.byte 0x7D
	.byte 0x00
	.2byte 0x8009
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082042E3 @ gText_Rom_2042E3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x009B
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820424D: @ 0x0820424D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08204314 @ gText_Rom_204314
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08204257: @ 0x08204257
	@ event command: bufferspeciesname
	.byte 0x7D
	.byte 0x00
	.2byte 0x8009
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08204305 @ gText_Rom_204305
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08204265: @ 0x08204265
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08204334 @ gText_Rom_204334
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820426F: @ 0x0820426F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820435F @ gText_Rom_20435F
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08204278: @ 0x08204278
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x0120
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08204392 @ gText_Rom_204392
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmoncry
	.byte 0xC5
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
