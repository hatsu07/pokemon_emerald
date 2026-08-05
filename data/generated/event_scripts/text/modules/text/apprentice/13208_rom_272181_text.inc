	@ data/text/apprentice.inc:730 gText_ApprenticeMoveThanks9
	.globl gText_Rom_272181
gText_Rom_272181: @ 0x08272181
	.string "あはぁ {STR_VAR_1}ねー\nオーケイ オーケイ!\lおじさん ザザーっと おぼえさせるよ!\pそれじゃあ これからも よろしくね\nアディオース!$"
	.if (. - gText_Rom_272181) > 0x42
	.error "gText_Rom_272181 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272181) < 0x42
	.space 0x42 - (. - gText_Rom_272181)
	.endif
