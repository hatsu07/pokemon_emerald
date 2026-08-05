	@ data/text/apprentice.inc:238 gText_ApprenticeLevelModeThanks15
	.globl gText_Rom_26EA29
gText_Rom_26EA29: @ 0x0826EA29
	.string "{STR_VAR_1}…… ほんとうかね?\pいや ほんとう なら いいんだ\nどうも ありがとう\pこんな わたし だが\nでし として みとめて くれて うれしい\lいずれまた あおう!"
	.byte EOS
	.if (. - gText_Rom_26EA29) > 0x52
	.error "gText_Rom_26EA29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EA29) < 0x52
	.space 0x52 - (. - gText_Rom_26EA29)
	.endif
