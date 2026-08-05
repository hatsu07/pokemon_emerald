	@ data/text/match_call.inc:910 MatchCall_Text_BirchRegisterCall
	.globl gText_Rom_26C1AF
gText_Rom_26C1AF: @ 0x0826C1AF
	.string "オダマキ『おお {PLAYER}{KUN}!\nはなしは すでに きいて いるよ!\pきみの ポケナビに エントリーコールが\nセットされた らしいな!\pならば わたしも とうろく しておこう!\pこれで きみと はなれていても\nすぐに ポケモンずかんの ひょうかを\lしてあげられる からね!\p…… …… ……"
	.byte EOS
	.if (. - gText_Rom_26C1AF) > 0x8f
	.error "gText_Rom_26C1AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C1AF) < 0x8f
	.space 0x8f - (. - gText_Rom_26C1AF)
	.endif
