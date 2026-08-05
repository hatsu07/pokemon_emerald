	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:353 BattleFrontier_BattlePikeLobby_Text_PossessLuckInAbundance
	.globl gText_Rom_233903
gText_Rom_233903: @ 0x08233903
	.string "ゲーム クリア ですね……\pおきゃくさま…… なかなかの うんを\nおもちの ようですね……"
	.byte EOS
	.if (. - gText_Rom_233903) > 0x2e
	.error "gText_Rom_233903 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_233903) < 0x2e
	.space 0x2e - (. - gText_Rom_233903)
	.endif
