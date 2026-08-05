	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:336 BattleFrontier_BattlePikeLobby_Text_PleaseChooseThreeMons
	.globl gText_Rom_23386E
gText_Rom_23386E: @ 0x0823386E
	.string "それでは ゲームに ちょうせんする\nポケモンを 3ひき おえらび ください……"
	.byte EOS
	.if (. - gText_Rom_23386E) > 0x28
	.error "gText_Rom_23386E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23386E) < 0x28
	.space 0x28 - (. - gText_Rom_23386E)
	.endif
