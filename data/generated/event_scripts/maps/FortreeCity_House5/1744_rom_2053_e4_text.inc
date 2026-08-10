	@ data/maps/FortreeCity_House5/scripts.inc:28 FortreeCity_House5_Text_Zigzagoon
	.globl gText_Rom_2053E4
gText_Rom_2053E4: @ 0x082053E4
	.string "ジグザグマ『ぶふう!!$"
	.if (. - gText_Rom_2053E4) > 0xc
	.error "gText_Rom_2053E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2053E4) < 0xc
	.space 0xc - (. - gText_Rom_2053E4)
	.endif
	@ analyzed canonical ROM range 0x082053F0-0x0820545B
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082053F0: @ 0x082053F0
	.byte 0x00
EventScript_JP_082053F1: @ 0x082053F1
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820545C @ gText_Rom_20545C
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_082053FA: @ 0x082053FA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820549C @ gText_Rom_20549C
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08205403: @ 0x08205403
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: message
	.byte 0x67
	.4byte 0x0824390F @ gText_Rom_24390F
	@ event command: waitmessage
	.byte 0x66
	@ event command: pokemartdecoration
	.byte 0x87
	.4byte 0x0820541C
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
	.byte 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x03, 0x00, 0x04, 0x00, 0x05, 0x00, 0x07, 0x00, 0x08, 0x00
	.byte 0x09, 0x00, 0x00, 0x00, 0x6C, 0x02
EventScript_JP_08205430: @ 0x08205430
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: message
	.byte 0x67
	.4byte 0x0824390F @ gText_Rom_24390F
	@ event command: waitmessage
	.byte 0x66
	@ event command: pokemartdecoration
	.byte 0x87
	.4byte 0x08205448
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
	.byte 0x00, 0x0A, 0x00, 0x0B, 0x00, 0x0C, 0x00, 0x0F, 0x00, 0x0E, 0x00, 0x10, 0x00, 0x11, 0x00, 0x12
	.byte 0x00, 0x00, 0x00, 0x6C, 0x02
