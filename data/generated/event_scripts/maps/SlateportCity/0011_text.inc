	@ data/maps/SlateportCity/scripts.inc:936 SlateportCity_Text_PutEffortRibbonOnMon
	.globl gText_Rom_1DCA24
gText_Rom_1DCA24: @ 0x081DCA24
	.string "{PLAYER}は がんばリボンを\n{STR_VAR_1}に つけて あげた!$"
	.if (. - gText_Rom_1DCA24) > 0x19
	.error "gText_Rom_1DCA24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCA24) < 0x19
	.space 0x19 - (. - gText_Rom_1DCA24)
	.endif
