	@ data/text/battle_tent.inc:15 FallarborTown_BattleTentLobby_Text_ExplainFallarborTent
	.globl gText_Rom_274AA3
gText_Rom_274AA3: @ 0x08274AA3
	.string "バトルテント ハジツゲかいじょうでは\nかちぬきチームバトルを\lおこなって おりますぞ!\pさんかする かたには しゅつじょう させる\n3ひきの ポケモンと たたかいに だす\lじゅんばんを きめて いただきますぞ!\pたたかいの あいだは\nこの じゅんばん どおりに\lポケモンを だすことに なりますな!\pたたかいに いちど だした ポケモンは\nけっちゃくが つくまで\lこうたいさせる ことが できませぬ!\pさらに 3ターン いないに\nたたかいの けっちゃくが つかなければ\lはんていと なりますぞ!\pまた とちゅうで ちょうせんを\nちゅうだんしたい ばあいは\lレポートを かかないと\lつづけて ちょうせんが できないので\lおきをつけ くだされ!\pみごと 3にんぬきを なされた あかつきには\nすてきな しょうひんを\lおおくり いたしますぞ!$"
	.if (. - gText_Rom_274AA3) > 0x171
	.error "gText_Rom_274AA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274AA3) < 0x171
	.space 0x171 - (. - gText_Rom_274AA3)
	.endif
