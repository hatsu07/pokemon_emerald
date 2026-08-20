	@ data/text/trainers.inc:935 Route111_Text_BeckyPostBattle
	.globl gText_Rom_25BC13
gText_Rom_25BC13: @ 0x0825BC13
	.string "さばくで カセキが みつかると いうことは\nむかし ここは うみ だったのね!{EOS}"
	.if (. - gText_Rom_25BC13) > 0x28
	.error "gText_Rom_25BC13 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BC13) < 0x28
	.space 0x28 - (. - gText_Rom_25BC13)
	.endif
