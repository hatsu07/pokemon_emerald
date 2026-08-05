	@ data/maps/MossdeepCity/scripts.inc:351 MossdeepCity_Text_CitySign
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E1BB2
gText_Rom_1E1BB2: @ 0x081E1BB2
	.string "ここは トクサネ シティ\n「ポケモンを たいせつに!」が あいことば$"
	.if (. - gText_Rom_1E1BB2) != 0x23
	.error "gText_Rom_1E1BB2 must retain its original byte length"
	.endif
