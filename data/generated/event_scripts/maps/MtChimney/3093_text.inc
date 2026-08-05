	@ data/maps/MtChimney/scripts.inc:722 MtChimney_Text_YouveNotGotTheMoney
	.globl gText_Rom_215728
gText_Rom_215728: @ 0x08215728
	.string "おやまあ おかねが なくちゃ\nものは かえないよ$"
	.if (. - gText_Rom_215728) > 0x19
	.error "gText_Rom_215728 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215728) < 0x19
	.space 0x19 - (. - gText_Rom_215728)
	.endif
