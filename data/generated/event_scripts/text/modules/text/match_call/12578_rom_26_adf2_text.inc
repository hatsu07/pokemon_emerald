	@ data/text/match_call.inc:742 MatchCall_Text_May5
	.globl gText_Rom_26ADF2
gText_Rom_26ADF2: @ 0x0826ADF2
	.string "ハルカ『{PLAYER}{KUN} げんきー?\pあたしは いま\n111ばんどうろに きているの!\pさばくの うえのほうに すんでる\nおばあさんの ところで\lひとやすみ していく つもりよ!"
	.byte EOS
	.if (. - gText_Rom_26ADF2) > 0x56
	.error "gText_Rom_26ADF2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26ADF2) < 0x56
	.space 0x56 - (. - gText_Rom_26ADF2)
	.endif
