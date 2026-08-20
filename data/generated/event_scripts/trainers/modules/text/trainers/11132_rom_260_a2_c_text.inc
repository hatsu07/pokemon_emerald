	@ data/text/trainers.inc:2780 Route125_Text_IrisDefeat (+1 aliases)
	.globl gText_Rom_260A2C
gText_Rom_260A2C: @ 0x08260A2C
	.string "ナホ『とちゅう おしいところ あったのに{EOS}"
	.if (. - gText_Rom_260A2C) > 0x15
	.error "gText_Rom_260A2C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260A2C) < 0x15
	.space 0x15 - (. - gText_Rom_260A2C)
	.endif
