	@ data/maps/RusturfTunnel/scripts.inc:445 RusturfTunnel_Text_ToGetToVerdanturf
	.globl gText_Rom_213C05
gText_Rom_213C05: @ 0x08213C05
	.string "カナズミから シダケに いこうと すると\nムロから カイナと キンセツを とおって\lいかなきゃ ならないんだ……{EOS}"
	.if (. - gText_Rom_213C05) > 0x39
	.error "gText_Rom_213C05 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_213C05) < 0x39
	.space 0x39 - (. - gText_Rom_213C05)
	.endif
