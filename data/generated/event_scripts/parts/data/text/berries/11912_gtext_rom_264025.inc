	@ data/text/berries.inc:219 SootopolisCity_Text_ThenILoveAutumn
	.globl gText_Rom_264025
gText_Rom_264025: @ 0x08264025
	.string "じゃあ キリは あきに うまれたから\nあきが だいすき!\p{STR_VAR_1}は いつが すき?$"
	.if (. - gText_Rom_264025) > 0x29
	.error "gText_Rom_264025 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264025) < 0x29
	.space 0x29 - (. - gText_Rom_264025)
	.endif
