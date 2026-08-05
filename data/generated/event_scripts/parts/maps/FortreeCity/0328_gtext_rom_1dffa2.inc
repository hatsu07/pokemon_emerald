	@ data/maps/FortreeCity/scripts.inc:109 FortreeCity_Text_TreesGrowByDrinkingRainwater
	.globl gText_Rom_1DFFA2
gText_Rom_1DFFA2: @ 0x081DFFA2
	.string "あめが じめんに すいこまれて\nその みずを すって きがそだつ……\pみずと つちが りょうほう あるから\nこの ヒワマキシティも あるのよね$"
	.if (. - gText_Rom_1DFFA2) > 0x48
	.error "gText_Rom_1DFFA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFFA2) < 0x48
	.space 0x48 - (. - gText_Rom_1DFFA2)
	.endif
