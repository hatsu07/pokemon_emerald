	@ data/maps/LilycoveCity_DepartmentStore_2F/scripts.inc:71 LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems
	.globl gText_Rom_20A9EB
gText_Rom_20A9EB: @ 0x0820A9EB
	.string "これから とおい ところへ\nたびに いくからな\lここで どっさり どうぐを かっておくのさ$"
	.if (. - gText_Rom_20A9EB) > 0x2e
	.error "gText_Rom_20A9EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A9EB) < 0x2e
	.space 0x2e - (. - gText_Rom_20A9EB)
	.endif
	@ analyzed canonical ROM range 0x0820AA19-0x0820AA88
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820AA19: @ 0x0820AA19
	.byte 0x00
EventScript_JP_0820AA1A: @ 0x0820AA1A
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
	.4byte 0x0820AA34
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
	.byte 0x00, 0x00, 0x00, 0x40, 0x00, 0x43, 0x00, 0x41, 0x00, 0x46, 0x00, 0x42, 0x00, 0x3F, 0x00, 0x00
	.byte 0x00, 0x6C, 0x02
EventScript_JP_0820AA44: @ 0x0820AA44
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
	.4byte 0x0820AA5C
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
	.byte 0x00, 0x4D, 0x00, 0x4F, 0x00, 0x4B, 0x00, 0x4C, 0x00, 0x4A, 0x00, 0x49, 0x00, 0x4E, 0x00, 0x00
	.byte 0x00, 0x6C, 0x02
EventScript_JP_0820AA6E: @ 0x0820AA6E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820AA89 @ gText_Rom_20AA89
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820AA77: @ 0x0820AA77
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820AADA @ gText_Rom_20AADA
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820AA80: @ 0x0820AA80
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820AB2C @ gText_Rom_20AB2C
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
