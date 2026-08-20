	@ data/maps/LittlerootTown_BrendansHouse_2F/scripts.inc:272 PlayersHouse_2F_Text_ClockIsStopped
	.globl gText_Rom_1F0217
gText_Rom_1F0217: @ 0x081F0217
	.string "かべの とけいが とまっている……\pじかんを あわせて おかなくちゃ!{EOS}"
	.if (. - gText_Rom_1F0217) > 0x24
	.error "gText_Rom_1F0217 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F0217) < 0x24
	.space 0x24 - (. - gText_Rom_1F0217)
	.endif
