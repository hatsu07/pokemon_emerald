	@ data/text/trainers.inc:3362 Route134_Text_LaurelPostBattle
	.globl gText_Rom_2620D7
gText_Rom_2620D7: @ 0x082620D7
	.string "どこかの マニアが\nラブカスの ウロコを あつめてるのよねー{EOS}"
	.if (. - gText_Rom_2620D7) > 0x1f
	.error "gText_Rom_2620D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2620D7) < 0x1f
	.space 0x1f - (. - gText_Rom_2620D7)
	.endif
