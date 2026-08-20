	@ data/maps/LilycoveCity_DepartmentStore_1F/scripts.inc:164 LilycoveCity_DepartmentStore_1F_Text_SpreadWordAboutWirelessComm
	.globl gText_Rom_20A8FE
gText_Rom_20A8FE: @ 0x0820A8FE
	.string "むせん つうしんの たのしさを\nたくさんの ひとに つたえたいなー{EOS}"
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
.globl EventScript_JP_0820A921
EventScript_JP_0820A921: @ 0x0820A921
	loadword 0x00, gText_Rom_20A9A0
	callstd 0x02
	end
.globl EventScript_JP_0820A92A
EventScript_JP_0820A92A: @ 0x0820A92A
	loadword 0x00, gText_Rom_20A9C7
	callstd 0x02
	end
.globl EventScript_JP_0820A933
EventScript_JP_0820A933: @ 0x0820A933
	loadword 0x00, gText_Rom_20A9EB
	callstd 0x02
	end
.globl EventScript_JP_0820A93C
EventScript_JP_0820A93C: @ 0x0820A93C
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemart 0x0820A954
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x04, 0x00, 0x03, 0x00, 0x02, 0x00, 0x55, 0x00, 0x17, 0x00, 0x0E, 0x00, 0x12, 0x00, 0x0F
	.byte 0x00, 0x10, 0x00, 0x11, 0x00, 0x51, 0x00, 0x00, 0x00, 0x6C, 0x02
.globl EventScript_JP_0820A96E
EventScript_JP_0820A96E: @ 0x0820A96E
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemart 0x0820A988
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x00, 0x00, 0x0D, 0x00, 0x16, 0x00, 0x15, 0x00, 0x14, 0x00, 0x18, 0x00, 0x56, 0x00, 0x53
	.byte 0x00, 0x54, 0x00, 0x7E, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x6C, 0x02
