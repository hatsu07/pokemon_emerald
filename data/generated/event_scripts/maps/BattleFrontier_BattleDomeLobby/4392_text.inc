	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:483 BattleFrontier_BattleDomeLobby_Text_SelectThreeMons
	.globl gText_Rom_22767D
gText_Rom_22767D: @ 0x0822767D
	.string "それでは さんかする ポケモンを\n3ひき おえらび ください$"
	.if (. - gText_Rom_22767D) > 0x1f
	.error "gText_Rom_22767D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22767D) < 0x1f
	.space 0x1f - (. - gText_Rom_22767D)
	.endif
