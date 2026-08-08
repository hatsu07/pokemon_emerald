	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:373 BattleFrontier_BattleArenaLobby_Text_ExplainChallenge
	.globl gText_Rom_22F776
gText_Rom_22F776: @ 0x0822F776
	.string "バトルアリーナは かちぬきチームバトルを\nおこなう しせつですぞ!\pさんかする かたには しゅつじょう させる\n3ひきの ポケモンと たたかいに だす\lじゅんばんを きめて いただきますぞ!\pたたかいの あいだは\nこの じゅんばん どおりに\lポケモンを だすことに なりますな!\pたたかいに いちど だした ポケモンは\nけっちゃくが つくまで\lこうたい させる ことが できませぬ!\pさらに 3ターン いないに\nたたかいの けっちゃくが つかなければ\lはんていと なりますぞ!\pまた とちゅうで ちょうせんを\nちゅうだんしたい ばあいは\lレポートを かかないと\lつづけて ちょうせんが できないので\lおきをつけ くだされ!\pみごと 7にんぬきを なされた あかつきには\nバトルポイントを おおくり いたしますぞ!"
	.byte EOS
	.if (. - gText_Rom_22F776) > 0x165
	.error "gText_Rom_22F776 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22F776) < 0x165
	.space 0x165 - (. - gText_Rom_22F776)
	.endif
