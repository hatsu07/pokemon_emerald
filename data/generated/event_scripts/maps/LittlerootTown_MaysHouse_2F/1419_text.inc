	@ data/maps/LittlerootTown_MaysHouse_2F/scripts.inc:340 RivalsHouse_2F_Text_MayGettingReady
	.globl gText_Rom_1F0F40
gText_Rom_1F0F40: @ 0x081F0F40
	.string "ポケモンは たいりょく まんたん!\nどうぐも これで よし……と!$"
	.if (. - gText_Rom_1F0F40) > 0x22
	.error "gText_Rom_1F0F40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F0F40) < 0x22
	.space 0x22 - (. - gText_Rom_1F0F40)
	.endif
