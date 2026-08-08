	@ data/maps/EverGrandeCity_GlaciasRoom/scripts.inc:64 EverGrandeCity_GlaciasRoom_Text_Defeat (+1 aliases)
	.globl gText_Rom_21064B
gText_Rom_21064B: @ 0x0821064B
	.string "あなたと ポケモンの\nたましいの あつさ!\pそれは なによりも あつく\nわたくしの こおりの わざが\lつうじる ものでは なかったのですね$"
	.if (. - gText_Rom_21064B) > 0x46
	.error "gText_Rom_21064B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21064B) < 0x46
	.space 0x46 - (. - gText_Rom_21064B)
	.endif
