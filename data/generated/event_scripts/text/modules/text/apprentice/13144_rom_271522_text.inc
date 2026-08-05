	@ data/text/apprentice.inc:634 gText_ApprenticeMonThanks9
	.globl gText_Rom_271522
gText_Rom_271522: @ 0x08271522
	.string "あはぁ {STR_VAR_1}ね\nオーケイ オーケイ!\lおじさん ガーっと つかまえて くるよ!\pそれじゃあ これからも よろしくね\nアディオース!$"
	.if (. - gText_Rom_271522) > 0x42
	.error "gText_Rom_271522 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271522) < 0x42
	.space 0x42 - (. - gText_Rom_271522)
	.endif
