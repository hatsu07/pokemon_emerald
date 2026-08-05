	@ data/maps/MtChimney/scripts.inc:765 MtChimney_Text_ShelbyPostBattle
	.globl gText_Rom_215845
gText_Rom_215845: @ 0x08215845
	.string "まけて しもうたら\nたつじん とは いえないねえ$"
	.if (. - gText_Rom_215845) > 0x19
	.error "gText_Rom_215845 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215845) < 0x19
	.space 0x19 - (. - gText_Rom_215845)
	.endif
