	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:517 BattleFrontier_BattleTowerBattleRoom_Text_AnabelTalentShallBeRecognized
	.globl gText_Rom_2225B4
gText_Rom_2225B4: @ 0x082225B4
	.string "リラ『ふふふ いいね……\pでは フロンティアパスを……\nあなたの さいのうの あかしを きざもう{EOS}"
	.if (. - gText_Rom_2225B4) > 0x31
	.error "gText_Rom_2225B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2225B4) < 0x31
	.space 0x31 - (. - gText_Rom_2225B4)
	.endif
