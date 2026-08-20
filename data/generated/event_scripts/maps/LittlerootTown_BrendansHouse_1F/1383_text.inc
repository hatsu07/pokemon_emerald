	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:414 PlayersHouse_1F_Text_IsThatABreakingStory
	.globl gText_Rom_1EFEC0
gText_Rom_1EFEC0: @ 0x081EFEC0
	.string "ママ『なにかの ニュース かしら?{EOS}"
	.if (. - gText_Rom_1EFEC0) > 0x12
	.error "gText_Rom_1EFEC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFEC0) < 0x12
	.space 0x12 - (. - gText_Rom_1EFEC0)
	.endif
