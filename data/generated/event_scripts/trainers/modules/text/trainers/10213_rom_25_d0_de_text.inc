	@ data/text/trainers.inc:1433 Route115_Text_TimothyIntro (+1 aliases)
	.globl gText_Rom_25D0DE
gText_Rom_25D0DE: @ 0x0825D0DE
	.string "ふむ……\nなかなか できそうだな……\lわたしが あいてを してあげよう!{EOS}"
	.if (. - gText_Rom_25D0DE) > 0x25
	.error "gText_Rom_25D0DE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D0DE) < 0x25
	.space 0x25 - (. - gText_Rom_25D0DE)
	.endif
