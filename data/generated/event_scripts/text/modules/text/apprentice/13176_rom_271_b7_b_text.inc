	@ data/text/apprentice.inc:682 gText_ApprenticeMoveThanks1
	.globl gText_Rom_271B7B
gText_Rom_271B7B: @ 0x08271B7B
	.string "{STR_VAR_1}か! そーだよね!\nじゃあ ボク それで いくね!\pまた こんど ここで あったら\nなにか おしえてね せんせい!$"
	.if (. - gText_Rom_271B7B) > 0x3c
	.error "gText_Rom_271B7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271B7B) < 0x3c
	.space 0x3c - (. - gText_Rom_271B7B)
	.endif
