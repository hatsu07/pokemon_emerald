	@ data/maps/JaggedPass/scripts.inc:182 JaggedPass_Text_DianaRematchIntro (+1 aliases)
	.globl gText_Rom_215E31
gText_Rom_215E31: @ 0x08215E31
	.string "どんな みちも ピクニックは たのしい!\nポケモンも いっしょ だしね!{EOS}"
	.if (. - gText_Rom_215E31) > 0x25
	.error "gText_Rom_215E31 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215E31) < 0x25
	.space 0x25 - (. - gText_Rom_215E31)
	.endif
