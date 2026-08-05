	@ data/text/apprentice.inc:289 gText_ApprenticeHoldNothing3
	.globl gText_Rom_26EE56
gText_Rom_26EE56: @ 0x0826EE56
	.string "あの あたしなんかの ポケモンには\nなにも もたせないほうが いいんですか?"
	.byte EOS
	.if (. - gText_Rom_26EE56) > 0x27
	.error "gText_Rom_26EE56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EE56) < 0x27
	.space 0x27 - (. - gText_Rom_26EE56)
	.endif
