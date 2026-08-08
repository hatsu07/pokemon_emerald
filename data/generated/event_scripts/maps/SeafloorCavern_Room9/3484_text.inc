	@ data/maps/SeafloorCavern_Room9/scripts.inc:227 SeafloorCavern_Room9_Text_ArchieYouMustDisappear
	.globl gText_Rom_218D0F
gText_Rom_218D0F: @ 0x08218D0F
	.string "アオギリ『それにしても まさか\nここまで くいついて くるとはな!\pだが それも もう おわり\nおれの もくてき たっせいの ため\lおまえには ここで きえてもらう!$"
	.if (. - gText_Rom_218D0F) > 0x54
	.error "gText_Rom_218D0F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_218D0F) < 0x54
	.space 0x54 - (. - gText_Rom_218D0F)
	.endif
