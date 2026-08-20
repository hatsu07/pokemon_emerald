	@ data/maps/LilycoveCity/scripts.inc:437 LilycoveCity_Text_MayDefeat (+1 aliases)
	.globl gText_Rom_1E07B9
gText_Rom_1E07B9: @ 0x081E07B9
	.string "…… …… ……\p103ばん どうろで\n{PLAYER}{KUN}と しょうぶ したこと\lおもいだしちゃった!\pあの しょうぶが あったから\n{PLAYER}{KUN} ここまで\lつよく なったんだね!{EOS}"
	.if (. - gText_Rom_1E07B9) > 0x54
	.error "gText_Rom_1E07B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E07B9) < 0x54
	.space 0x54 - (. - gText_Rom_1E07B9)
	.endif
