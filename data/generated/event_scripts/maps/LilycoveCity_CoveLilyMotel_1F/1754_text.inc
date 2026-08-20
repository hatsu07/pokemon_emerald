	@ data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.inc:82 LilycoveCity_CoveLilyMotel_1F_Text_CantSeeTheTV
	.globl gText_Rom_205699
gText_Rom_205699: @ 0x08205699
	.string "あー ちょっと じゃま しないで!\nテレビが みえない じゃないか!{EOS}"
	.if (. - gText_Rom_205699) > 0x23
	.error "gText_Rom_205699 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205699) < 0x23
	.space 0x23 - (. - gText_Rom_205699)
	.endif
