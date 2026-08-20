	@ data/text/trainers.inc:446 Route107_Text_TonyRematchIntro (+1 aliases)
	.globl gText_Rom_25A8BB
gText_Rom_25A8BB: @ 0x0825A8BB
	.string "でっかい うみを およいでいたら\nポケモンが すっごく つよくなったぞー!{EOS}"
	.if (. - gText_Rom_25A8BB) > 0x26
	.error "gText_Rom_25A8BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A8BB) < 0x26
	.space 0x26 - (. - gText_Rom_25A8BB)
	.endif
