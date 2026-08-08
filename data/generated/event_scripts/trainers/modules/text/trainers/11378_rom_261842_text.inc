	@ data/text/trainers.inc:3146 Route131_Text_HermanDefeat (+1 aliases)
	.globl gText_Rom_261842
gText_Rom_261842: @ 0x08261842
	.string "ひょえええええっ!$"
	.if (. - gText_Rom_261842) > 0xa
	.error "gText_Rom_261842 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261842) < 0xa
	.space 0xa - (. - gText_Rom_261842)
	.endif
