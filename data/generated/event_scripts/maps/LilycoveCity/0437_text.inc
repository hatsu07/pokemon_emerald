	@ data/maps/LilycoveCity/scripts.inc:705 LilycoveCity_Text_DepartmentStoreSign
	.globl gText_Rom_1E1350
gText_Rom_1E1350: @ 0x081E1350
	.string "「ミナモ デパート」\pグッズ いっぱい! ドキドキ いっぱい!\nなにかが みつかる すてきな ところ{EOS}"
	.if (. - gText_Rom_1E1350) > 0x33
	.error "gText_Rom_1E1350 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1350) < 0x33
	.space 0x33 - (. - gText_Rom_1E1350)
	.endif
