	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:278 MossdeepCity_SpaceCenter_1F_Text_RocketLaunchImminent
	.globl gText_Rom_20D0C3
gText_Rom_20D0C3: @ 0x0820D0C3
	.string "もうすぐ ロケットが はっしゃ するぞ!$"
	.if (. - gText_Rom_20D0C3) > 0x15
	.error "gText_Rom_20D0C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20D0C3) < 0x15
	.space 0x15 - (. - gText_Rom_20D0C3)
	.endif
