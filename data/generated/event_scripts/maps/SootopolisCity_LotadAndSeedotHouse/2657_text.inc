	@ data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc:119 SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerSeedot
	.globl gText_Rom_20FAC8
gText_Rom_20FAC8: @ 0x0820FAC8
	.string "{STR_VAR_2}cmか……\pううむ わしは これより おおきい\nタネボーを みたこと あるな……$"
	.if (. - gText_Rom_20FAC8) > 0x2b
	.error "gText_Rom_20FAC8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FAC8) < 0x2b
	.space 0x2b - (. - gText_Rom_20FAC8)
	.endif
