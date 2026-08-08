	@ data/text/trainers.inc:1208 Route113_Text_LaoRematchIntro (+1 aliases)
	.globl gText_Rom_25C7A8
gText_Rom_25C7A8: @ 0x0825C7A8
	.string "はいの なかから ドロロロンッ!!\nしょうぶで ござる!$"
	.if (. - gText_Rom_25C7A8) > 0x1d
	.error "gText_Rom_25C7A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C7A8) < 0x1d
	.space 0x1d - (. - gText_Rom_25C7A8)
	.endif
