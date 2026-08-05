	@ data/text/match_call.inc:718 MatchCall_Text_Drake
	.globl gText_Rom_26A9D4
gText_Rom_26A9D4: @ 0x0826A9D4
	.string "ゲンジ『そのこえは {PLAYER}か\nげんきそう だな……\pさいきん ポケモン リーグとは べつに\nトレーナーの うでを きそわせる\lバトル フロンティア とかいう しせつが\lあるらしいが……\pほんとうの しょうぶを したいのなら\nやはり ポケモン リーグだ!\pなあ {PLAYER}も そうおもう だろう?"
	.byte EOS
	.if (. - gText_Rom_26A9D4) > 0x90
	.error "gText_Rom_26A9D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A9D4) < 0x90
	.space 0x90 - (. - gText_Rom_26A9D4)
	.endif
