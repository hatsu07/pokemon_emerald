	@ data/maps/MtChimney/scripts.inc:803 MtChimney_Text_SheilaDefeat (+1 aliases)
	.globl gText_Rom_215952
gText_Rom_215952: @ 0x08215952
	.string "その たたかいかた\nまさに えんとつやま だいふんか!$"
	.if (. - gText_Rom_215952) > 0x1c
	.error "gText_Rom_215952 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215952) < 0x1c
	.space 0x1c - (. - gText_Rom_215952)
	.endif
