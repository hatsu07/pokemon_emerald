	@ data/maps/LittlerootTown/scripts.inc:935 LittlerootTown_Text_SwitchShoesWithRunningShoes
	.globl gText_Rom_1E4432
gText_Rom_1E4432: @ 0x081E4432
	.string "{PLAYER}は ランニングシューズに\nはきかえた!{EOS}"
	.if (. - gText_Rom_1E4432) > 0x16
	.error "gText_Rom_1E4432 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E4432) < 0x16
	.space 0x16 - (. - gText_Rom_1E4432)
	.endif
