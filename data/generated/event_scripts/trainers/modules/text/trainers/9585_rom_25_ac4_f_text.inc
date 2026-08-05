	@ data/text/trainers.inc:530 Route108_Text_TaraPostBattle
	.globl gText_Rom_25AC4F
gText_Rom_25AC4F: @ 0x0825AC4F
	.string "ウソでも いいから カワイイって いわれたい\nふくざつな おんなごころ……$"
	.if (. - gText_Rom_25AC4F) > 0x26
	.error "gText_Rom_25AC4F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AC4F) < 0x26
	.space 0x26 - (. - gText_Rom_25AC4F)
	.endif
