	@ data/text/apprentice.inc:538 gText_ApprenticeMonFirstThanks9
	.globl gText_Rom_27087B
gText_Rom_27087B: @ 0x0827087B
	.string "あはぁ {STR_VAR_1}ね\nオーケイ オーケイ!\lおじさん ガガーっと いれかえるよ!\pそれじゃあ これからも よろしくね\nアディオース!"
	.byte EOS
	.if (. - gText_Rom_27087B) > 0x40
	.error "gText_Rom_27087B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27087B) < 0x40
	.space 0x40 - (. - gText_Rom_27087B)
	.endif
