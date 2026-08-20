	@ data/text/trainers.inc:407 Route106_Text_DouglasIntro (+1 aliases)
	.globl gText_Rom_25A72C
gText_Rom_25A72C: @ 0x0825A72C
	.string "はっはっはっ!\nりくでは はやく はしれないが\lみずの なかなら まけないぞ!{EOS}"
	.if (. - gText_Rom_25A72C) > 0x28
	.error "gText_Rom_25A72C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A72C) < 0x28
	.space 0x28 - (. - gText_Rom_25A72C)
	.endif
