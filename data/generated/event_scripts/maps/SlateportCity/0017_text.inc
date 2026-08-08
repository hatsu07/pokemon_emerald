	@ data/maps/SlateportCity/scripts.inc:949 SlateportCity_Text_WonderIfLighthouseStartlesPokemon
	.globl gText_Rom_1DCA81
gText_Rom_1DCA81: @ 0x081DCA81
	.string "とうだいの あかりは\nすう10キロさき にも とどくんだ\pうみの なかの ポケモン\nまぶしくて おどろいて いないかな?$"
	.if (. - gText_Rom_1DCA81) > 0x3d
	.error "gText_Rom_1DCA81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCA81) < 0x3d
	.space 0x3d - (. - gText_Rom_1DCA81)
	.endif
