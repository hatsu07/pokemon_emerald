	@ data/maps/LilycoveCity_DepartmentStore_1F/scripts.inc:164 LilycoveCity_DepartmentStore_1F_Text_SpreadWordAboutWirelessComm
	.globl gText_Rom_20A8FE
gText_Rom_20A8FE: @ 0x0820A8FE
	.string "むせん つうしんの たのしさを\nたくさんの ひとに つたえたいなー$"
	.if (. - gText_Rom_20A8FE) > 0x22
	.error "gText_Rom_20A8FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A8FE) < 0x22
	.space 0x22 - (. - gText_Rom_20A8FE)
	.endif
	@ analyzed canonical ROM range 0x0820A920-0x0820A99F
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820A920: @ 0x0820A920
	.byte 0x00
EventScript_JP_0820A921: @ 0x0820A921
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820A9A0 @ gText_Rom_20A9A0
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820A92A: @ 0x0820A92A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820A9C7 @ gText_Rom_20A9C7
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820A933: @ 0x0820A933
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820A9EB @ gText_Rom_20A9EB
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820A93C: @ 0x0820A93C
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
	.4byte 0x0820A954
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
	.byte 0x00, 0x04, 0x00, 0x03, 0x00, 0x02, 0x00, 0x55, 0x00, 0x17, 0x00, 0x0E, 0x00, 0x12, 0x00, 0x0F
	.byte 0x00, 0x10, 0x00, 0x11, 0x00, 0x51, 0x00, 0x00, 0x00, 0x6C, 0x02
EventScript_JP_0820A96E: @ 0x0820A96E
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
	.4byte 0x0820A988
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
	.byte 0x00, 0x00, 0x00, 0x0D, 0x00, 0x16, 0x00, 0x15, 0x00, 0x14, 0x00, 0x18, 0x00, 0x56, 0x00, 0x53
	.byte 0x00, 0x54, 0x00, 0x7E, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x6C, 0x02
