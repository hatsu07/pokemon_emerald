	@ data/maps/LilycoveCity/scripts.inc:589 LilycoveCity_Text_GoingToMoveDeleterForHMs
	.globl gText_Rom_1E0E50
gText_Rom_1E0E50: @ 0x081E0E50
	.string "あたしの ポケモン\nコンテストの ために あたらしい わざを\lおぼえさせる つもりなの!\pだからね わざわすれ じいさんに たのんで\nひでんわざを わすれさせて もらうのよ!$"
	.if (. - gText_Rom_1E0E50) > 0x58
	.error "gText_Rom_1E0E50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0E50) < 0x58
	.space 0x58 - (. - gText_Rom_1E0E50)
	.endif
