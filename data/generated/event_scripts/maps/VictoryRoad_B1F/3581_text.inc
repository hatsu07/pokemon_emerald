	@ data/maps/VictoryRoad_B1F/scripts.inc:59 VictoryRoad_B1F_Text_MitchellDefeat (+1 aliases)
	.globl gText_Rom_219B09
gText_Rom_219B09: @ 0x08219B09
	.string "あなた みたいな かた\nはじめて です"
	.byte EOS
	.if (. - gText_Rom_219B09) > 0x14
	.error "gText_Rom_219B09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219B09) < 0x14
	.space 0x14 - (. - gText_Rom_219B09)
	.endif
