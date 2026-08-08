	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:471 BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves
	.globl gText_Rom_2318BC
gText_Rom_2318BC: @ 0x082318BC
	.string "ちょっと! キミ!\pポケモンを そだてなくても\nちょうせん できる から らくしょうー!\pとか おもってない?\pここは ポケモンと そのわざに\nかんする ちしきが ないと\lかちぬけない ひじょうに きびしー\lところ なのよ!!"
	.byte EOS
	.if (. - gText_Rom_2318BC) > 0x72
	.error "gText_Rom_2318BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2318BC) < 0x72
	.space 0x72 - (. - gText_Rom_2318BC)
	.endif
