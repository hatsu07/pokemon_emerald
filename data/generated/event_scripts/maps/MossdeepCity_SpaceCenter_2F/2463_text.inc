	@ data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc:408 MossdeepCity_SpaceCenter_2F_Text_StevenHurryGetReadyQuickly
	.globl gText_Rom_20DE73
gText_Rom_20DE73: @ 0x0820DE73
	.string "ダイゴ『じゃあ いそいで\nじゅんびを ととのえて くるんだ！$"
	.if (. - gText_Rom_20DE73) > 0x1f
	.error "gText_Rom_20DE73 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20DE73) < 0x1f
	.space 0x1f - (. - gText_Rom_20DE73)
	.endif
