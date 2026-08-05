	@ data/maps/BattleFrontier_BattlePyramidTop/scripts.inc:255 BattleFrontier_BattlePyramidTop_Text_BraveSymbolTookGoldenShine
	.globl gText_Rom_22F14D
gText_Rom_22F14D: @ 0x0822F14D
	.string "ブレイブシンボルが\nきんいろに かがやいた!"
	.byte EOS
	.if (. - gText_Rom_22F14D) > 0x17
	.error "gText_Rom_22F14D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22F14D) < 0x17
	.space 0x17 - (. - gText_Rom_22F14D)
	.endif
