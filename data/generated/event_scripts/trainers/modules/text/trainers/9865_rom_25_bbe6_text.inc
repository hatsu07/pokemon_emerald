	@ data/text/trainers.inc:929 Route111_Text_BeckyIntro (+1 aliases)
	.globl gText_Rom_25BBE6
gText_Rom_25BBE6: @ 0x0825BBE6
	.string "さばくで カセキが みつかるって きいたけど\nどこに あるのかなあ?{EOS}"
	.if (. - gText_Rom_25BBE6) > 0x23
	.error "gText_Rom_25BBE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BBE6) < 0x23
	.space 0x23 - (. - gText_Rom_25BBE6)
	.endif
