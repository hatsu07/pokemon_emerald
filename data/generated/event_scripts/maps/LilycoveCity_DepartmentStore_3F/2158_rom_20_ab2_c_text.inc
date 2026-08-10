	@ data/maps/LilycoveCity_DepartmentStore_3F/scripts.inc:63 LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon
	.globl gText_Rom_20AB2C
gText_Rom_20AB2C: @ 0x0820AB2C
	.string "ポケモンにね\nインドメタシンを あげたら\lすばやさが あがったの!$"
	.if (. - gText_Rom_20AB2C) > 0x22
	.error "gText_Rom_20AB2C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20AB2C) < 0x22
	.space 0x22 - (. - gText_Rom_20AB2C)
	.endif
	@ analyzed canonical ROM range 0x0820AB4E-0x0820ABB3
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820AB4E: @ 0x0820AB4E
	.byte 0x00
EventScript_JP_0820AB4F: @ 0x0820AB4F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820ABB4 @ gText_Rom_20ABB4
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820AB58: @ 0x0820AB58
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820ABF1 @ gText_Rom_20ABF1
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820AB61: @ 0x0820AB61
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820AC28 @ gText_Rom_20AC28
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820AB6A: @ 0x0820AB6A
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
	.4byte 0x0820AB84
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
	.byte 0x00, 0x00, 0x00, 0x46, 0x01, 0x39, 0x01, 0x2E, 0x01, 0x2F, 0x01, 0x00, 0x00, 0x6C, 0x02
EventScript_JP_0820AB90: @ 0x0820AB90
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
	.4byte 0x0820ABA8
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
	.byte 0x00, 0x31, 0x01, 0x34, 0x01, 0x41, 0x01, 0x30, 0x01, 0x00, 0x00, 0x6C, 0x02
