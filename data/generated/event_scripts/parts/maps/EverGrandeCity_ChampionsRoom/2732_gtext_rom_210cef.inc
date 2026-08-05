	@ data/maps/EverGrandeCity_ChampionsRoom/scripts.inc:228 EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech
	.globl gText_Rom_210CEF
gText_Rom_210CEF: @ 0x08210CEF
	.string "ミクリ『きみが くりだしてきた\nポケモンの かずかず……\pときに はるかぜの ように まい\nあるいは いなづまの ように さす\pそんな ポケモンたちを\nかろやかに あやつる きみの すがた\pこの わたしで さえも\nほれぼれ するほど だったよ!\pこの ポケモンリーグで\nみごと ちょうてんに たった きみこそ\lホウエンちほうの あたらしい……$"
	.if (. - gText_Rom_210CEF) > 0xac
	.error "gText_Rom_210CEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_210CEF) < 0xac
	.space 0xac - (. - gText_Rom_210CEF)
	.endif
