	@ data/text/apprentice.inc:328 gText_ApprenticeItemAlreadyRecommended5
	.globl gText_Rom_26F200
gText_Rom_26F200: @ 0x0826F200
	.string "あれっ {STR_VAR_1}は\nもう しってるよ!\pん? それとも\nいそがしい オレの {STR_VAR_2}は\lなにも もたなくて イイ ってこと?"
	.byte EOS
	.if (. - gText_Rom_26F200) > 0x3b
	.error "gText_Rom_26F200 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F200) < 0x3b
	.space 0x3b - (. - gText_Rom_26F200)
	.endif
