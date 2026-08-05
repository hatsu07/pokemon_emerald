	@ data/text/apprentice.inc:385 gText_ApprenticeThanksHeldItem9
	.globl gText_Rom_26F756
gText_Rom_26F756: @ 0x0826F756
	.string "あはぁ {STR_VAR_1}ね\nオーケイ オーケイ!\lおじさん ゴーっと さがして くるよ!\pそれじゃあ これからも よろしくね\nアディオース!"
	.byte EOS
	.if (. - gText_Rom_26F756) > 0x41
	.error "gText_Rom_26F756 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F756) < 0x41
	.space 0x41 - (. - gText_Rom_26F756)
	.endif
