	@ data/text/match_call.inc:697 MatchCall_Text_Juan_Preparing
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26A75D
gText_Rom_26A75D: @ 0x0826A75D
	.string "アダン『ほ……\n{PLAYER}{KUN}…… でしたね\pユーとの たたかいは\nはじめて ミクリと であったときを\lおもいださせて くれましたよ\pもしかすると ユーは\nミクリを こえるほどの ジーニアス!\lすなわち てんさい かもしれません"
	.byte EOS
	.if (. - gText_Rom_26A75D) != 0x70
	.error "gText_Rom_26A75D must retain its original byte length"
	.endif
