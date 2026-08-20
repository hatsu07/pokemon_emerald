	@ data/text/trainers.inc:2789 Route125_Text_PresleyIntro (+1 aliases)
	.globl gText_Rom_260A93
gText_Rom_260A93: @ 0x08260A93
	.string "とりつかいの ボクが\nなぜ うみにまで きているかと いうと……{EOS}"
	.if (. - gText_Rom_260A93) > 0x21
	.error "gText_Rom_260A93 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260A93) < 0x21
	.space 0x21 - (. - gText_Rom_260A93)
	.endif
