	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:633 BattleFrontier_BattlePyramidLobby_Text_Aah
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22CC6D
gText_Rom_22CC6D: @ 0x0822CC6D
	.string "………………………………………………………\n………………………………………………………\p……っああっ!{EOS}"
	.if (. - gText_Rom_22CC6D) != 0x34
	.error "gText_Rom_22CC6D must retain its original byte length"
	.endif
