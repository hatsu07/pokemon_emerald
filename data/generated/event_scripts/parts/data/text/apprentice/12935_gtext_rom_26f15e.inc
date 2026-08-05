	@ data/text/apprentice.inc:319 gText_ApprenticeHoldNothing5
	.globl gText_Rom_26F15E
gText_Rom_26F15E: @ 0x0826F15E
	.string "おっ それじゃ\nいそがしい オレの {STR_VAR_1}は\lなにも もたなくて イイ ってこと?"
	.byte EOS
	.if (. - gText_Rom_26F15E) > 0x29
	.error "gText_Rom_26F15E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F15E) < 0x29
	.space 0x29 - (. - gText_Rom_26F15E)
	.endif
