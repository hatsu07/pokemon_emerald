	@ data/maps/LittlerootTown_MaysHouse_2F/scripts.inc:369 RivalsHouse_2F_Text_BrendanGettingReady
	.globl gText_Rom_1F108B
gText_Rom_1F108B: @ 0x081F108B
	.string "ポケモンは たいりょく まんたん\nどうぐも これで だいじょうぶ ……か{EOS}"
	.if (. - gText_Rom_1F108B) > 0x25
	.error "gText_Rom_1F108B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F108B) < 0x25
	.space 0x25 - (. - gText_Rom_1F108B)
	.endif
