	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:375 BattleFrontier_BattlePikeLobby_Text_FailedToSaveBeforeQuitting
	.globl gText_Rom_2339B7
gText_Rom_2339B7: @ 0x082339B7
	.string "おきゃくさま……\pぜんかい きちんと レポートを かかずに\nしゅうりょう されましたね……\pもうしわけ ありませんが ちょうせんは\nむこうと させて いただきます……"
	.byte EOS
	.if (. - gText_Rom_2339B7) > 0x54
	.error "gText_Rom_2339B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2339B7) < 0x54
	.space 0x54 - (. - gText_Rom_2339B7)
	.endif
