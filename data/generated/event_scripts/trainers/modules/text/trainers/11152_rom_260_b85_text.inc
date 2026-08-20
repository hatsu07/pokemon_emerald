	@ data/text/trainers.inc:2810 Route126_Text_BarryDefeat (+1 aliases)
	.globl gText_Rom_260B85
gText_Rom_260B85: @ 0x08260B85
	.string "まけましたーっ!{EOS}"
	.if (. - gText_Rom_260B85) > 0x9
	.error "gText_Rom_260B85 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260B85) < 0x9
	.space 0x9 - (. - gText_Rom_260B85)
	.endif
