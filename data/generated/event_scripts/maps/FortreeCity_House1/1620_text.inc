	@ data/maps/FortreeCity_House1/scripts.inc:55 FortreeCity_House1_Text_GoingToMakeVolbeatStrong
	.globl gText_Rom_204334
gText_Rom_204334: @ 0x08204334
	.string "よし いまから\nバルビートを つよく するぞー!\lプラスルも つよく してやってよ!$"
	.if (. - gText_Rom_204334) > 0x2b
	.error "gText_Rom_204334 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204334) < 0x2b
	.space 0x2b - (. - gText_Rom_204334)
	.endif
