	@ data/text/trainers.inc:2630 Route124_Text_ChadIntro (+1 aliases)
	.globl gText_Rom_260306
gText_Rom_260306: @ 0x08260306
	.string "うふふふふ\nオレは モグリの スイマー\lもぐりは とくいちゅうの とくいだぜ!{EOS}"
	.if (. - gText_Rom_260306) > 0x28
	.error "gText_Rom_260306 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260306) < 0x28
	.space 0x28 - (. - gText_Rom_260306)
	.endif
