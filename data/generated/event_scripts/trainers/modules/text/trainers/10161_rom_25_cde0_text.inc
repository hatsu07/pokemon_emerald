	@ data/text/trainers.inc:1358 Route114_Text_BernieRematchDefeat (+1 aliases)
	.globl gText_Rom_25CDE0
gText_Rom_25CDE0: @ 0x0825CDE0
	.string "もえあがる まえに\nけされた! ってか{EOS}"
	.if (. - gText_Rom_25CDE0) > 0x14
	.error "gText_Rom_25CDE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CDE0) < 0x14
	.space 0x14 - (. - gText_Rom_25CDE0)
	.endif
