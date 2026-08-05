	@ data/text/apprentice.inc:70 gText_ApprenticeLevelModeThanks1
	.globl gText_Rom_26D232
gText_Rom_26D232: @ 0x0826D232
	.string "{STR_VAR_1}か! そーだよね!\nじゃあ ボク がんばるね!\pまた こんど ここで あったら\nなにか おしえてね せんせい!"
	.byte EOS
	.if (. - gText_Rom_26D232) > 0x3a
	.error "gText_Rom_26D232 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D232) < 0x3a
	.space 0x3a - (. - gText_Rom_26D232)
	.endif
