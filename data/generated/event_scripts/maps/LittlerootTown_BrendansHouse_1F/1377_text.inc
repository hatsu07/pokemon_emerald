	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:397 PlayersHouse_1F_Text_PortsInSlateportLilycove
	.globl gText_Rom_1EFE2F
gText_Rom_1EFE2F: @ 0x081EFE2F
	.string "パパ『ふねのチケットか……\pふねに のるなら カイナか ミナモに\nふねのりばが あったよな{EOS}"
	.if (. - gText_Rom_1EFE2F) > 0x2e
	.error "gText_Rom_1EFE2F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFE2F) < 0x2e
	.space 0x2e - (. - gText_Rom_1EFE2F)
	.endif
