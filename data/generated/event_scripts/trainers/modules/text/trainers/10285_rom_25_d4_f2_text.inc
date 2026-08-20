	@ data/text/trainers.inc:1532 Route115_Text_HeleneIntro (+1 aliases)
	.globl gText_Rom_25D4F2
gText_Rom_25D4F2: @ 0x0825D4F2
	.string "ふふっ あたしの ポケモンたちは\nくろおび クラスの つよさよ!{EOS}"
	.if (. - gText_Rom_25D4F2) > 0x21
	.error "gText_Rom_25D4F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D4F2) < 0x21
	.space 0x21 - (. - gText_Rom_25D4F2)
	.endif
