	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:330 PlayersHouse_1F_Text_DidYouMeetProfBirch
	.globl gText_Rom_1EFBDC
gText_Rom_1EFBDC: @ 0x081EFBDC
	.string "ママ『オダマキはかせ には あえたの?{EOS}"
	.if (. - gText_Rom_1EFBDC) > 0x14
	.error "gText_Rom_1EFBDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFBDC) < 0x14
	.space 0x14 - (. - gText_Rom_1EFBDC)
	.endif
