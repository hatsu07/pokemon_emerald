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
.globl EventScript_JP_0820AB4F
EventScript_JP_0820AB4F: @ 0x0820AB4F
	loadword 0x00, gText_Rom_20ABB4
	callstd 0x02
	end
.globl EventScript_JP_0820AB58
EventScript_JP_0820AB58: @ 0x0820AB58
	loadword 0x00, gText_Rom_20ABF1
	callstd 0x02
	end
.globl EventScript_JP_0820AB61
EventScript_JP_0820AB61: @ 0x0820AB61
	loadword 0x00, gText_Rom_20AC28
	callstd 0x02
	end
.globl EventScript_JP_0820AB6A
EventScript_JP_0820AB6A: @ 0x0820AB6A
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemart 0x0820AB84
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x00, 0x00, 0x46, 0x01, 0x39, 0x01, 0x2E, 0x01, 0x2F, 0x01, 0x00, 0x00, 0x6C, 0x02
.globl EventScript_JP_0820AB90
EventScript_JP_0820AB90: @ 0x0820AB90
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemart 0x0820ABA8
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x31, 0x01, 0x34, 0x01, 0x41, 0x01, 0x30, 0x01, 0x00, 0x00, 0x6C, 0x02
