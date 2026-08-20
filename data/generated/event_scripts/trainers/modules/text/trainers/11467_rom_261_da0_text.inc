	@ data/text/trainers.inc:3275 Route132_Text_DarcyIntro (+1 aliases)
	.globl gText_Rom_261DA0
gText_Rom_261DA0: @ 0x08261DA0
	.string "ひとりで この ばしょで\nしゅぎょう するのが すきだったのに!\lおおぜい やって くるんだもの ひどい!{EOS}"
	.if (. - gText_Rom_261DA0) > 0x36
	.error "gText_Rom_261DA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261DA0) < 0x36
	.space 0x36 - (. - gText_Rom_261DA0)
	.endif
