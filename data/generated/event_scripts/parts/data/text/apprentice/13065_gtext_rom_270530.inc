	@ data/text/apprentice.inc:514 gText_ApprenticeMonFirstThanks5
	.globl gText_Rom_270530
gText_Rom_270530: @ 0x08270530
	.string "オーケー わかった!\n{STR_VAR_1}を せんとうに する\nじかん くらいは あるぜ!\p……と いけね かのじょが まってる!\nサンキュー! じゃ またな!"
	.byte EOS
	.if (. - gText_Rom_270530) > 0x49
	.error "gText_Rom_270530 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270530) < 0x49
	.space 0x49 - (. - gText_Rom_270530)
	.endif
