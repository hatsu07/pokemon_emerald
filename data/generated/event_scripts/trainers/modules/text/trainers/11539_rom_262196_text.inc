	@ data/text/trainers.inc:3383 Route134_Text_AaronIntro (+1 aliases)
	.globl gText_Rom_262196
gText_Rom_262196: @ 0x08262196
	.string "このあたりの はげしい しおの ながれ!\nそれもまた おれたちを きたえてくれる!{EOS}"
	.if (. - gText_Rom_262196) > 0x2a
	.error "gText_Rom_262196 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262196) < 0x2a
	.space 0x2a - (. - gText_Rom_262196)
	.endif
