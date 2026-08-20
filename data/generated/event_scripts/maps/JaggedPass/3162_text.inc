	@ data/maps/JaggedPass/scripts.inc:165 JaggedPass_Text_DianaIntro (+1 aliases)
	.globl gText_Rom_215DA0
gText_Rom_215DA0: @ 0x08215DA0
	.string "ここは きがるに のぼって いけないもの\nちょっと ピクニックむき じゃないわ{EOS}"
	.if (. - gText_Rom_215DA0) > 0x28
	.error "gText_Rom_215DA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215DA0) < 0x28
	.space 0x28 - (. - gText_Rom_215DA0)
	.endif
