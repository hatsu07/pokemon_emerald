	@ data/text/trainers.inc:2027 Route119_Text_CatherineRematchDefeat (+1 aliases)
	.globl gText_Rom_25EA5C
gText_Rom_25EA5C: @ 0x0825EA5C
	.string "まだ なにかが\nたりなかったわね……{EOS}"
	.if (. - gText_Rom_25EA5C) > 0x13
	.error "gText_Rom_25EA5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EA5C) < 0x13
	.space 0x13 - (. - gText_Rom_25EA5C)
	.endif
