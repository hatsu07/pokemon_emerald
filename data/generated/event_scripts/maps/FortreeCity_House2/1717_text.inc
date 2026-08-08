	@ data/maps/FortreeCity_House2/scripts.inc:56 FortreeCity_House2_Text_YourHiddenPowerHasAwoken
	.globl gText_Rom_205051
gText_Rom_205051: @ 0x08205051
	.string "おお! みごと じゃ!\nおぬしの パワーは めざめているの!\pこれを あげるから\nおぬしの ポケモンも パワーを\lめざめさせて やると ええぞ!$"
	.if (. - gText_Rom_205051) > 0x49
	.error "gText_Rom_205051 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205051) < 0x49
	.space 0x49 - (. - gText_Rom_205051)
	.endif
