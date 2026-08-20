	@ data/maps/SlateportCity/scripts.inc:1038 SlateportCity_Text_DontButtIn
	.globl gText_Rom_1DCE19
gText_Rom_1DCE19: @ 0x081DCE19
	.string "おい こら!\nじゅんばん ぬかすなよ!{EOS}"
	.if (. - gText_Rom_1DCE19) > 0x14
	.error "gText_Rom_1DCE19 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCE19) < 0x14
	.space 0x14 - (. - gText_Rom_1DCE19)
	.endif
