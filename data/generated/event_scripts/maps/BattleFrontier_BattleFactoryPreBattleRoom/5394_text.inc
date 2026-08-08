	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:597 BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleWeakenFoe
	.globl gText_Rom_2327B2
gText_Rom_2327B2: @ 0x082327B2
	.string "『まずは よわらせて…』という バトルを\nこころがけている ようですよ!"
	.byte EOS
	.if (. - gText_Rom_2327B2) > 0x25
	.error "gText_Rom_2327B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2327B2) < 0x25
	.space 0x25 - (. - gText_Rom_2327B2)
	.endif
