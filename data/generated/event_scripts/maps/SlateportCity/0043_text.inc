	@ data/maps/SlateportCity/scripts.inc:1029 SlateportCity_Text_WhatsNewSchemeIWonder
	.globl gText_Rom_1DCDBF
gText_Rom_1DCDBF: @ 0x081DCDBF
	.string "こんどの さくせんは なんだろう?\pリーダーを おこらせると こわいから\nしっぱい したくないぜ……{EOS}"
	.if (. - gText_Rom_1DCDBF) > 0x33
	.error "gText_Rom_1DCDBF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCDBF) < 0x33
	.space 0x33 - (. - gText_Rom_1DCDBF)
	.endif
