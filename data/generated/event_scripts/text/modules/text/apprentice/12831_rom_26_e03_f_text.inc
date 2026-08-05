	@ data/text/apprentice.inc:166 gText_ApprenticeLevelModeThanks9
	.globl gText_Rom_26E03F
gText_Rom_26E03F: @ 0x0826E03F
	.string "あはぁ {STR_VAR_1}ね\nオーケイ オーケイ!\lおじさん バーっと がんばって くるよ!\pそれじゃあ これからも よろしくね\nアディオース!"
	.byte EOS
	.if (. - gText_Rom_26E03F) > 0x42
	.error "gText_Rom_26E03F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E03F) < 0x42
	.space 0x42 - (. - gText_Rom_26E03F)
	.endif
