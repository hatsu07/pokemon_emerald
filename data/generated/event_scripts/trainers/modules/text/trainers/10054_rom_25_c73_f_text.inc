	@ data/text/trainers.inc:1196 Route113_Text_LaoIntro (+1 aliases)
	.globl gText_Rom_25C73F
gText_Rom_25C73F: @ 0x0825C73F
	.string "はいの なかから ドロロンッ!!\nしょうぶで ござる!$"
	.if (. - gText_Rom_25C73F) > 0x1c
	.error "gText_Rom_25C73F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C73F) < 0x1c
	.space 0x1c - (. - gText_Rom_25C73F)
	.endif
