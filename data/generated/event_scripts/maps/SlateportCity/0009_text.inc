	@ data/maps/SlateportCity/scripts.inc:933 SlateportCity_Text_ReceivedEffortRibbon
	.globl gText_Rom_1DCA12
gText_Rom_1DCA12: @ 0x081DCA12
	.string "{PLAYER}は がんばリボンを もらった!$"
	.if (. - gText_Rom_1DCA12) > 0x12
	.error "gText_Rom_1DCA12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCA12) < 0x12
	.space 0x12 - (. - gText_Rom_1DCA12)
	.endif
