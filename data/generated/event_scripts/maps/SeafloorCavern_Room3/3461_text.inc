	@ data/maps/SeafloorCavern_Room3/scripts.inc:26 SeafloorCavern_Room3_Text_Grunt5Defeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2188D1
gText_Rom_2188D1: @ 0x082188D1
	.string "ぐはっ!$"
	.if (. - gText_Rom_2188D1) != 0x5
	.error "gText_Rom_2188D1 must retain its original byte length"
	.endif
