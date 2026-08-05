	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:748 Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward
	.globl gText_Rom_23D5AA
gText_Rom_23D5AA: @ 0x0823D5AA
	.string "あれ? とりに きたんじゃ ないのか?"
	.byte EOS
	.if (. - gText_Rom_23D5AA) > 0x14
	.error "gText_Rom_23D5AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D5AA) < 0x14
	.space 0x14 - (. - gText_Rom_23D5AA)
	.endif
