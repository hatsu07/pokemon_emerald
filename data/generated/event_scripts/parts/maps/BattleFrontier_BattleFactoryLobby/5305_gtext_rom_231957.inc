	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:488 BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons
	.globl gText_Rom_231957
gText_Rom_231957: @ 0x08231957
	.string "ダメダメねー!\pトレーナーが いいポケモン もってたら\nたたかいの あいだに\lチェック しとかなきゃ!"
	.byte EOS
	.if (. - gText_Rom_231957) > 0x34
	.error "gText_Rom_231957 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_231957) < 0x34
	.space 0x34 - (. - gText_Rom_231957)
	.endif
