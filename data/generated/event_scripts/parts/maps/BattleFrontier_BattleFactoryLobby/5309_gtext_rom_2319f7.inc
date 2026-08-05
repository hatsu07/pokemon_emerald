	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:502 BattleFrontier_BattleFactoryLobby_Text_RentalMonsAreVaried
	.globl gText_Rom_2319F7
gText_Rom_2319F7: @ 0x082319F7
	.string "ぼくってー バッチリー つよいけどー\nすっごくー あきっぽい からさー\lとりあえずー\lばんばん トレード しながらー\lたたかってたのさー\lそしたらさー\lつづけてー バトルトレードにー\lちょうせん したときー\lレンタル してくれるー\lポケモンのー\lしゅるいがさー\lなんかさー\lちょっとさー\lちがったんだよねー"
	.byte EOS
	.if (. - gText_Rom_2319F7) > 0x9a
	.error "gText_Rom_2319F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2319F7) < 0x9a
	.space 0x9a - (. - gText_Rom_2319F7)
	.endif
