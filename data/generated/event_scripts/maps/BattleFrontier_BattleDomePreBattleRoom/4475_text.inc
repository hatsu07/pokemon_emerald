	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:288 BattleFrontier_BattleDomePreBattleRoom_Text_ChooseTwoMons
	.globl gText_Rom_2284C0
gText_Rom_2284C0: @ 0x082284C0
	.string "それでは しあいに だす\nポケモンを 2ひき えらんでください$"
	.if (. - gText_Rom_2284C0) > 0x20
	.error "gText_Rom_2284C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2284C0) < 0x20
	.space 0x20 - (. - gText_Rom_2284C0)
	.endif
